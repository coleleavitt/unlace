/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41F8E0
// Address: 0x0041F8E0

//----- (0041F8E0) --------------------------------------------------------
char __userpurge sub_41F8E0@<al>(int a1@<ebx>, __m128i a2@<xmm0>, char *a3, const char *a4, char *a5, int a6, int a7)
{
  int v7; // esi
  const char *v8; // eax
  unsigned int v9; // esi
  unsigned int v10; // eax
  _DWORD *v12; // eax
  _DWORD *v13; // eax
  int v14; // eax
  bool v15; // cf
  SIZE_T v16; // eax
  _DWORD *v17; // eax
  char *v18; // edi
  char *v20; // edi
  int v21; // [esp-Ch] [ebp-A8h]
  int v22; // [esp-8h] [ebp-A4h]
  _DWORD v23[21]; // [esp+Ch] [ebp-90h] BYREF
  const char *v24[3]; // [esp+60h] [ebp-3Ch] BYREF
  char v25[8]; // [esp+6Ch] [ebp-30h] BYREF
  __int128 v26; // [esp+74h] [ebp-28h]
  int v27; // [esp+84h] [ebp-18h]
  int v28; // [esp+88h] [ebp-14h]
  char v29; // [esp+8Fh] [ebp-Dh]
  int v30; // [esp+98h] [ebp-4h]
  char *v31; // [esp+A8h] [ebp+Ch]
  char v32; // [esp+ABh] [ebp+Fh]
  unsigned int v33; // [esp+B0h] [ebp+14h]

  v28 = 0;
  v7 = 0;
  if ( a4 )
  {
    v7 = sub_428D10(a4);
    if ( !v7 )
    {
      sub_45CB10(0, a4);
      sub_45CC20(1536);
      sub_41D420(a1, (int)a3);
      if ( a7 )
      {
        v8 = sub_45D760(a1, a2, -1);
        v33 = (unsigned int)v8;
        if ( v8 )
        {
          v9 = strlen(v8);
          if ( v9 )
          {
            v10 = v9 + 1;
            if ( v9 + 1 > *(_DWORD *)(a7 + 8) )
            {
              *(_DWORD *)a7 = sub_453B00(a7, *(void **)a7, v9 + 1, 1u);
              v10 = v9 + 1;
            }
            *(_DWORD *)(a7 + 4) = v10;
            sub_464310(*(_DWORD *)a7, v33, v9);
            *(_BYTE *)(v9 + *(_DWORD *)a7) = 0;
            return 0;
          }
        }
        *(_DWORD *)(a7 + 4) = 0;
      }
      return 0;
    }
  }
  v25[0] = 2;
  v26 = 0;
  LODWORD(v26) = 0;
  v30 = 0;
  sub_423B70((int)v25);
  v25[0] = 5;
  v12 = sub_4627C2(0x10u);
  LOBYTE(v30) = 1;
  if ( v12 )
  {
    if ( v7 )
      v13 = sub_426170(v12, *(_DWORD *)(v7 + 12));
    else
      v13 = sub_426170(v12, 0);
  }
  else
  {
    v13 = nullptr;
  }
  LOBYTE(v30) = 0;
  LODWORD(v26) = v13;
  v29 = 1;
  v27 = -1;
  if ( !v7
    || (sub_401340(v24, a4), LOBYTE(v30) = 3, v28 = 1, v27 = sub_420020((unsigned int *)v7, v24), v32 = 1, v27 == -1) )
  {
    v32 = 0;
  }
  v30 = 0;
  if ( (v28 & 1) != 0 )
  {
    LOBYTE(v30) = 4;
    if ( v24[0] )
    {
      v24[1] = nullptr;
      sub_453A20((void *)v24[0]);
    }
    LOBYTE(v30) = 0;
  }
  if ( v32 )
  {
    v28 = a6 + 1;
    v14 = 24 * (a6 + 1);
    if ( !is_mul_ok(0x18u, a6 + 1) )
      v14 = -1;
    v15 = __CFADD__(v14, 4);
    v16 = v14 + 4;
    if ( v15 )
      v16 = -1;
    v17 = sub_4631A3(v16);
    v23[20] = v17;
    LOBYTE(v30) = 5;
    if ( v17 )
    {
      v21 = v28;
      *v17 = a6 + 1;
      v18 = (char *)(v17 + 1);
      v31 = (char *)(v17 + 1);
      sub_46312F((int)(v17 + 1), 24, v21, (void (__thiscall *)(int))sub_41D100, (int)sub_41BC20);
    }
    else
    {
      v18 = nullptr;
      v31 = nullptr;
    }
    LOBYTE(v30) = 0;
    sub_423670(v18, v25);
    if ( a6 )
    {
      v20 = v18 + 24;
      do
      {
        sub_423670(v20, a5);
        v20 += 24;
        a5 += 24;
        --a6;
      }
      while ( a6 );
      v18 = v31;
    }
    sub_41C8A0((char *)v23, 0, 0);
    LOBYTE(v30) = 6;
    v29 = sub_4230A0(v23, a1, nullptr, v27, v28, v18, a3, a7);
    if ( v18 )
    {
      v22 = *((_DWORD *)v18 - 1);
      LOBYTE(v30) = 7;
      sub_462D89((int)v18, 24, v22, (void (__thiscall *)(int))sub_41BC20);
      sub_4631AC(v18 - 4);
    }
    sub_41CD20(v23);
  }
  else
  {
    sub_424B40(a3, (int)v25);
  }
  v30 = 9;
  sub_423B70((int)v25);
  return v29;
}
