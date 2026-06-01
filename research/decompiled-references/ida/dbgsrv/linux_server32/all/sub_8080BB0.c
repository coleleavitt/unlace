/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8080BB0
// Address: 0x08080BB0

//----- (08080BB0) --------------------------------------------------------
int __cdecl sub_8080BB0(__m128i *a1, int a2, char *a3)
{
  _BYTE *v3; // eax
  int result; // eax
  char *v5; // edx
  int v6; // edx
  size_t v7; // edi
  void *v8; // eax
  unsigned __int8 v9; // [esp+0h] [ebp-2Ch]
  void *src; // [esp+4h] [ebp-28h] BYREF
  size_t n; // [esp+8h] [ebp-24h]
  int v12; // [esp+Ch] [ebp-20h]
  unsigned int v13; // [esp+10h] [ebp-1Ch]

  v3 = (_BYTE *)a2;
  v13 = __readgsdword(0x14u);
  if ( !a2 )
    goto LABEL_4;
  if ( *(_BYTE *)a2 == 7 )
  {
    v5 = (char *)&dword_80DDFD8;
    if ( *(_DWORD *)(a2 + 8) )
      v5 = *(char **)(a2 + 4);
    v3 = (_BYTE *)sub_8080B10(v5);
    if ( !v3 )
    {
      sub_80C7880(1532);
      result = 0;
      goto LABEL_5;
    }
    if ( *v3 != 5 )
      goto LABEL_4;
  }
  else if ( *(_BYTE *)a2 != 5 )
  {
LABEL_4:
    result = sub_808CD90(a1, (int)v3, a3, 0);
    LOBYTE(result) = result == 0;
    goto LABEL_5;
  }
  if ( a3 && *a3 )
    goto LABEL_4;
  src = nullptr;
  n = 0;
  v12 = 0;
  v6 = sub_8084840(&src, (int)v3);
  result = 0;
  if ( !v6 )
  {
    sub_8089430((int)a1);
    a1->m128i_i8[0] = 7;
    a1->m128i_i32[1] = 0;
    a1->m128i_i32[2] = 0;
    a1->m128i_i32[3] = 0;
    v7 = n;
    if ( n )
    {
      v8 = sub_80CF8B0(n);
      a1->m128i_i32[1] = (__int32)v8;
      a1->m128i_i32[3] = v7;
      memcpy(v8, src, v7);
      a1->m128i_i32[2] = v7;
    }
    result = 1;
  }
  if ( src )
  {
    v9 = result;
    n = 0;
    sub_80CF780(src);
    result = v9;
  }
LABEL_5:
  if ( v13 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
