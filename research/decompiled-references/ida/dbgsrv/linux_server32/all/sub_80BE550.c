/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BE550
// Address: 0x080BE550

//----- (080BE550) --------------------------------------------------------
int __cdecl sub_80BE550(int *a1, int a2)
{
  bool v2; // zf
  unsigned __int16 v3; // ax
  __int16 v4; // dx
  bool v5; // cc
  socklen_t v6; // ebp
  unsigned __int16 v7; // dx
  int v8; // edx
  int result; // eax
  int (__cdecl *v10)(int, int); // eax
  char *v11; // [esp+0h] [ebp-50h]
  int optval; // [esp+10h] [ebp-40h] BYREF
  _BYTE addr[28]; // [esp+14h] [ebp-3Ch] BYREF
  unsigned int v14; // [esp+30h] [ebp-20h]

  v14 = __readgsdword(0x14u);
  signal(13, (__sighandler_t)1);
  if ( !(unsigned __int8)sub_80BE3B0((int)a1, 10, 1, 0) && !(unsigned __int8)sub_80BE3B0((int)a1, 2, 1, 0) )
    goto LABEL_14;
  v2 = *((_BYTE *)a1 + 52) == 0;
  optval = 0;
  if ( !v2 )
  {
    if ( setsockopt(a1[7], 41, 26, &optval, 4u) )
    {
      a1[11] = (int)"setsockopt(IPV6_V6ONLY)";
      if ( (dword_811F8A4 & 0x100000) != 0 )
      {
        (*(void (__cdecl **)(int *))(*a1 + 44))(a1);
        sub_80BE360();
      }
    }
  }
  v3 = *(_WORD *)(a2 + 16);
  memset(addr, 0, sizeof(addr));
  v4 = __ROL2__(v3, 8);
  if ( *((_BYTE *)a1 + 52) )
  {
    v5 = *(_DWORD *)(a2 + 8) <= 1u;
    *(_WORD *)&addr[2] = v4;
    v7 = 10;
    strcpy(addr, "\n");
    v6 = 28;
    if ( v5 )
      goto LABEL_5;
  }
  else
  {
    v5 = *(_DWORD *)(a2 + 8) <= 1u;
    *(_WORD *)&addr[2] = v4;
    v6 = 16;
    *(_WORD *)addr = 2;
    v7 = 2;
    if ( v5 )
      goto LABEL_5;
  }
  v11 = *(char **)(a2 + 4);
  if ( !(unsigned __int8)sub_80CF9C0((int)addr, v11, v7, v3) )
  {
    sub_80BF890("Cannot parse IP address \"%s\", falling back to %s\n", (int)v11);
    if ( *((_BYTE *)a1 + 52) )
      *(__m128i *)&addr[8] = _mm_loadu_si128((const __m128i *)&in6addr_any);
    else
      *(_DWORD *)&addr[4] = 0;
  }
LABEL_5:
  if ( bind(a1[7], (const struct sockaddr *)addr, v6) == -1 )
  {
    a1[11] = (int)"bind";
    a1[12] = *__errno_location();
  }
  else
  {
    v8 = listen(a1[7], 128);
    result = 1;
    if ( v8 != -1 )
      goto LABEL_7;
    a1[11] = (int)"listen";
    a1[12] = *__errno_location();
  }
LABEL_14:
  v10 = *(int (__cdecl **)(int, int))(*a1 + 36);
  if ( v10 == sub_80BD6E0 )
  {
    if ( a1[7] != -1 )
    {
      close(a1[7]);
      a1[7] = -1;
    }
    result = 0;
  }
  else
  {
    v10((int)a1, -1);
    result = 0;
  }
LABEL_7:
  if ( v14 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 811F8A4: using guessed type int dword_811F8A4;
