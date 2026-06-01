void __fastcall sub_C13430(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        __int64 a3,
        double a4,
        __int64 a5,
        __int64 a6,
        int a7)
{
  unsigned __int64 v7; // r12
  bool v9; // zf
  __int64 v10; // r13
  __m128i v11; // xmm2
  __m128i v12; // xmm0
  int v13; // eax
  char v14; // dl
  int v15; // eax
  __int64 v16; // r14
  __int16 v17; // ax
  bool v18; // dl
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rdi
  unsigned __int128 v23; // kr00_16
  __int64 v24; // rax
  __m128i v25; // [rsp+0h] [rbp-48h] BYREF
  __m128i v26; // [rsp+10h] [rbp-38h] BYREF

  v7 = a2;
  if ( *((_DWORD *)a1 + 1808) )
  {
    do
    {
      sub_C11150((__int64)a1, a4);
      v9 = (*((_DWORD *)a1 + 1808))-- == 1;
    }
    while ( !v9 );
  }
  v10 = *a1;
  v11 = (__m128i)*a1;
  v12 = _mm_unpacklo_epi64((__m128i)a2, v11);
  if ( !a3 )
  {
    v25.m128i_i64[0] = 0;
    v14 = *((_BYTE *)a1 + 2200);
    v25.m128i_i64[1] = v10;
    v26 = v12;
    if ( !a2 )
    {
      if ( v14 || !*(_QWORD *)(v10 + 856) )
        return;
LABEL_7:
      if ( !*(_BYTE *)(a1[1] + 725) )
      {
LABEL_8:
        v16 = a3;
LABEL_9:
        v17 = *(_WORD *)(v7 + 4);
        if ( v17 )
          v18 = v17 == 2;
        else
          v18 = (*(_BYTE *)(v7 + 30) & 2) != 0;
        *((_BYTE *)a1 + 2201) |= v18;
        sub_C130D0(a1, a2, v16, (__int64 *)a1 + 117, a6, a7);
        v19 = v26.m128i_i64[0];
        if ( v26.m128i_i64[0] )
        {
          v20 = v26.m128i_i64[1];
          v9 = (*(_DWORD *)(v26.m128i_i64[0] + 8))-- == 1;
          if ( v9 )
            sub_15D7BC0(v20, v19);
        }
        v21 = v25.m128i_i64[0];
        if ( v25.m128i_i64[0] )
        {
          v22 = v25.m128i_i64[1];
          v9 = (*(_DWORD *)(v25.m128i_i64[0] + 8))-- == 1;
          if ( v9 )
            sub_15D7BC0(v22, v21);
        }
        if ( a3 )
        {
          v9 = (*(_DWORD *)(a3 + 8))-- == 1;
          if ( v9 )
            sub_15D7BC0(v10, a3);
        }
        return;
      }
LABEL_30:
      sub_C0EEE0((__int64)a1, 0);
      sub_14BB8A0(a1 + 3, a2, &v26, &v25);
      a2 = v26.m128i_i64[0];
      v16 = v25.m128i_i64[0];
      if ( *(_DWORD *)(*a1 + 712) )
      {
        if ( v7 == v26.m128i_i64[0] )
        {
          if ( a3 != v25.m128i_i64[0] )
          {
            sub_C0E540(v25.m128i_i64[0], v25.m128i_i64[1]);
            v25.m128i_i64[0] = a3;
            a2 = v26.m128i_i64[0];
            if ( a3 )
              ++*(_DWORD *)(a3 + 8);
            v16 = a3;
          }
        }
        else
        {
          v24 = sub_15DE0E0(*a1, a3, v25.m128i_i64[0]);
          v16 = v24;
          if ( v24 )
            ++*(_DWORD *)(v24 + 8);
          sub_C0E540(v25.m128i_i64[0], v25.m128i_i64[1]);
          v25.m128i_i64[0] = v16;
          a2 = v26.m128i_i64[0];
        }
      }
      goto LABEL_9;
    }
LABEL_5:
    v15 = *(_DWORD *)(a2 + 8);
    *(_DWORD *)(a2 + 8) = v15 + 1;
    if ( !v14 && a2 != *(_QWORD *)(v10 + 856) )
      goto LABEL_7;
    *(_DWORD *)(a2 + 8) = v15;
    v23 = __PAIR128__(v10, a3);
    if ( !v15 )
    {
      sub_15D7BC0(v10, a2);
      v23 = (unsigned __int128)v25;
    }
    if ( !(_QWORD)v23 )
      goto LABEL_24;
LABEL_23:
    v9 = (*(_DWORD *)(v23 + 8))-- == 1;
    if ( !v9 )
      goto LABEL_24;
    goto LABEL_42;
  }
  v13 = *(_DWORD *)(a3 + 8);
  v26 = v12;
  v25 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a3, v11);
  *(_DWORD *)(a3 + 8) = v13 + 2;
  v14 = *((_BYTE *)a1 + 2200);
  if ( a2 )
    goto LABEL_5;
  if ( !v14 )
  {
    v23 = __PAIR128__(v10, a3);
    if ( *(_QWORD *)(v10 + 856) )
    {
      if ( !*(_BYTE *)(a1[1] + 725) )
        goto LABEL_8;
      goto LABEL_30;
    }
    goto LABEL_23;
  }
  *(_DWORD *)(a3 + 8) = v13 + 1;
  if ( v13 == -1 )
  {
    v23 = __PAIR128__(v10, a3);
LABEL_42:
    sub_15D7BC0(*((_QWORD *)&v23 + 1), v23);
LABEL_24:
    if ( !a3 )
      return;
  }
  v9 = (*(_DWORD *)(a3 + 8))-- == 1;
  if ( v9 )
    sub_15D7BC0(v10, a3);
}

