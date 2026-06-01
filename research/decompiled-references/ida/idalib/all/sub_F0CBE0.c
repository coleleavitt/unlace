__int16 __fastcall sub_F0CBE0(_QWORD *a1, __int64 a2, double a3)
{
  int v4; // ebp
  int i; // ebx
  _WORD *v6; // rsi
  __int64 *v7; // rbx
  __int64 v8; // rax
  int v9; // r13d
  __int64 v10; // rbp
  int j; // r15d
  __int64 v12; // rdi
  _WORD *v13; // rdx
  __int64 v14; // rdi
  _WORD *v15; // rsi
  __int64 v16; // r13
  int v17; // ebp
  int k; // ebx
  _WORD *v19; // rsi
  __int64 *v21; // [rsp+0h] [rbp-48h]

  v4 = *((_DWORD *)a1 + 2);
  if ( v4 > 0 )
  {
    for ( i = 0; i != v4; ++i )
      sub_995540(*a1, "  ");
  }
  sub_995540(*a1, "@try");
  v6 = *(_WORD **)(a2 + 16);
  if ( (*v6 & 0x1FF) == 0xF9 )
  {
    sub_F0C550(a1, (__int64)v6, a3);
    sub_227BF10(*a1, a1[5], a1[6]);
  }
  v7 = (__int64 *)(a2 + 24);
  v8 = a2 + 24 + 8LL * *(unsigned __int16 *)(a2 + 12);
  v21 = (__int64 *)v8;
  if ( a2 + 24 != v8 )
  {
    do
    {
      v9 = *((_DWORD *)a1 + 2);
      v10 = *v7;
      if ( v9 > 0 )
      {
        for ( j = 0; j != v9; ++j )
        {
          while ( 1 )
          {
            v12 = *a1;
            v13 = *(_WORD **)(*a1 + 32LL);
            if ( *(_QWORD *)(*a1 + 24LL) - (_QWORD)v13 > 1u )
              break;
            ++j;
            sub_227BF10(v12, "  ", 2);
            if ( v9 == j )
              goto LABEL_11;
          }
          *v13 = 8224;
          *(_QWORD *)(v12 + 32) += 2LL;
        }
      }
LABEL_11:
      sub_995540(*a1, "@catch(");
      v14 = *(_QWORD *)(v10 + 8);
      if ( v14 )
        sub_BB7900(v14, *a1, (const __m128i *)(a1 + 3), *((_DWORD *)a1 + 2), 0);
      sub_995540(*a1, ")");
      v15 = *(_WORD **)(v10 + 16);
      LOWORD(v8) = *v15 & 0x1FF;
      if ( (_WORD)v8 == 249 )
      {
        sub_F0C550(a1, (__int64)v15, a3);
        LOWORD(v8) = sub_227BF10(*a1, a1[5], a1[6]);
      }
      ++v7;
    }
    while ( v21 != v7 );
  }
  if ( (*(_BYTE *)(a2 + 14) & 1) != 0 )
  {
    v8 = *(unsigned __int16 *)(a2 + 12);
    v16 = *(_QWORD *)(a2 + 8 * v8 + 24);
    if ( v16 )
    {
      v17 = *((_DWORD *)a1 + 2);
      if ( v17 > 0 )
      {
        for ( k = 0; k != v17; ++k )
          sub_995540(*a1, "  ");
      }
      sub_995540(*a1, "@finally");
      v19 = *(_WORD **)(v16 + 16);
      LOWORD(v8) = *v19 & 0x1FF;
      if ( (_WORD)v8 == 249 )
      {
        sub_F0C550(a1, (__int64)v19, a3);
        LOWORD(v8) = sub_227BF10(*a1, a1[5], a1[6]);
      }
    }
  }
  return v8;
}
