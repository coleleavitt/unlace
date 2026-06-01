__int64 __fastcall sub_6B4290(__int64 a1, __int64 a2, __int64 *a3, int a4)
{
  __int64 v4; // r9
  __int64 v7; // r15
  char v8; // di
  char **v9; // rax
  __int64 v10; // rcx
  __m128i v11; // xmm0
  _QWORD *v12; // rax
  char *v13; // rdi
  __int64 v14; // rbp
  char *v15; // rax
  void *v16; // rdi
  unsigned __int64 v18; // rbp
  int v19; // [rsp+1Ch] [rbp-3Ch]

  v4 = a2;
  v7 = *(_QWORD *)(a1 + 16);
  v8 = *(_BYTE *)(a1 + 41);
  if ( v8 == 1 && !a3 )
    goto LABEL_10;
  v9 = &off_2B37C20;
  while ( a4 != *((_DWORD *)v9 + 2) )
  {
    v9 += 2;
    if ( v9 == (char **)&off_2B37C70 )
    {
      if ( !under_debugger )
        interr(2833);
      BUG();
    }
  }
  if ( !v8 && !*(_DWORD *)(a2 + 144) )
    sub_368890();
  if ( !v7 )
    goto LABEL_10;
  v18 = 0;
  v19 = a4;
  while ( !a3 )
  {
    if ( !*(_BYTE *)(a1 + 41) )
      goto LABEL_31;
    if ( v18 == 8 )
      goto LABEL_9;
LABEL_25:
    if ( v7 == ++v18 )
      goto LABEL_9;
  }
  if ( v18 <= 7 )
  {
    sub_35A910(a3);
    if ( !*(_BYTE *)(a1 + 41) )
      goto LABEL_31;
    goto LABEL_25;
  }
  if ( v18 != 8 )
  {
    if ( !*(_BYTE *)(a1 + 41) )
      goto LABEL_31;
    goto LABEL_25;
  }
  sub_35A910(a3);
  if ( !*(_BYTE *)(a1 + 41) )
LABEL_31:
    sub_368890();
LABEL_9:
  v4 = a2;
  a4 = v19;
LABEL_10:
  *(_DWORD *)(v4 + 144) |= 1 << a4;
  v10 = 24LL * a4;
  v11 = _mm_loadu_si128((const __m128i *)(v4 + v10 + 8));
  v12 = (_QWORD *)(v4 + v10);
  v13 = *(char **)(v4 + v10);
  *v12 = *(_QWORD *)(a1 + 8);
  v12[1] = *(_QWORD *)(a1 + 16);
  v12[2] = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 8) = v13;
  *(__m128i *)(a1 + 16) = v11;
  if ( v13 )
  {
    if ( v11.m128i_i64[0] )
    {
      v14 = 0;
      do
      {
        v15 = &v13[24 * v14];
        v16 = *(void **)v15;
        if ( *(_QWORD *)v15 )
        {
          *((_QWORD *)v15 + 1) = 0;
          qfree(v16);
        }
        ++v14;
        v13 = *(char **)(a1 + 8);
      }
      while ( v11.m128i_i64[0] != v14 );
    }
    *(_QWORD *)(a1 + 16) = 0;
    qfree(v13);
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 24) = 0;
  }
  return v7;
}
