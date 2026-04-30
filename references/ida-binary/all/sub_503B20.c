void __fastcall sub_503B20(
        __m128i *a1,
        double a2,
        double a3,
        __m128 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v9; // rbx
  __int64 v10; // rdx
  int v11; // ebx
  __m128i *v12; // r13
  __int64 v13; // rax
  int v14; // r12d
  __int64 v15; // rax
  __int64 v16; // r14
  char v17; // bp
  __int64 v18; // rax
  int v19; // r14d
  int v20; // ecx
  __int64 v21; // r15
  char v22; // al
  char v23; // al
  __int64 v24; // rax
  int v25; // edx
  char v26; // al
  __int64 v27; // rax
  int v28; // [rsp+10h] [rbp-48h]
  int v29; // [rsp+14h] [rbp-44h]
  int v30; // [rsp+18h] [rbp-40h]
  int v31; // [rsp+18h] [rbp-40h]
  int v32; // [rsp+1Ch] [rbp-3Ch]

  v29 = 0;
  if ( a1[1].m128i_i64[0] > 0 )
  {
    v9 = 0;
    do
    {
      if ( !a1->m128i_i64[0] || *(int *)a1->m128i_i64[0] > 1 )
        sub_503800(a1, 0, 0, 0, a8, a9, a2, a3, a4);
      v10 = 3 * v9;
      v11 = 0;
      v12 = (__m128i *)(a1->m128i_i64[1] + 8 * v10);
      v13 = v12[1].m128i_i64[0];
      v28 = v13;
      v32 = v13 - 1;
      if ( (int)v13 > 0 )
      {
        do
        {
          if ( !v12->m128i_i64[0] || *(int *)v12->m128i_i64[0] > 1 )
            sub_503260(v12, 0, 0, 0, a8, a9, a2, a3, a4);
          v14 = v11 + 1;
          v15 = v12->m128i_i64[1];
          v16 = 96LL * v11;
          v17 = *(_BYTE *)(v15 + v16 + 16);
          if ( v17 != 66 && (v17 & 0xDF) != 0 )
          {
            if ( v17 == 124 )
            {
              if ( v11 > 0 )
              {
                if ( !v12->m128i_i64[0] || *(int *)v12->m128i_i64[0] > 1 )
                {
                  sub_503260(v12, 0, 0, 0, a8, a9, a2, a3, a4);
                  v15 = v12->m128i_i64[1];
                }
                *(_DWORD *)(v15 + 96LL * (v11 - 1) + 88) = 3;
              }
              if ( v32 > v11 )
              {
                if ( !v12->m128i_i64[0] || *(int *)v12->m128i_i64[0] > 1 )
                  sub_503260(v12, 0, 0, 0, a8, a9, a2, a3, a4);
                *(_DWORD *)(v12->m128i_i64[1] + 96LL * v14 + 88) = 3;
              }
            }
          }
          else if ( (unsigned __int8)sub_4FA7F0((__int64)a1, v29, v11) )
          {
            v18 = v12->m128i_i64[1];
            v19 = *(_DWORD *)(v18 + v16 + 8);
            if ( v28 <= v14 )
              break;
            v20 = 1;
            v21 = 96LL * v14;
            v22 = *(_BYTE *)(v18 + v21 + 16);
            if ( v22 == v17 )
              goto LABEL_27;
            if ( (v22 & 0xDF) == 0 )
            {
LABEL_26:
              if ( (v17 & 0xDF) == 0 )
              {
LABEL_27:
                while ( 1 )
                {
                  v30 = v20;
                  v23 = sub_4FA7F0((__int64)a1, v29, v14);
                  v20 = v30;
                  if ( !v23 )
                    break;
                  v24 = v12->m128i_i64[1];
                  if ( v19 < *(_DWORD *)(v24 + v21 + 8) )
                    v19 = *(_DWORD *)(v24 + v21 + 8);
                  v20 = v30 + 1;
                  v25 = v14 + 1;
                  v21 += 96;
                  if ( v28 == v14 + 1 )
                  {
                    v11 = v14;
                    v14 = v28;
                    if ( v20 <= 1 )
                      goto LABEL_13;
                    goto LABEL_34;
                  }
                  v26 = *(_BYTE *)(v24 + v21 + 16);
                  ++v14;
                  v11 = v25 - 1;
                  if ( v26 != v17 )
                  {
                    if ( (v26 & 0xDF) == 0 )
                      goto LABEL_26;
                    break;
                  }
                }
              }
            }
            if ( v20 > 1 )
            {
LABEL_34:
              v31 = v11 - v20;
              do
              {
                if ( !v12->m128i_i64[0] || *(int *)v12->m128i_i64[0] > 1 )
                  sub_503260(v12, 0, 0, 0, a8, a9, a2, a3, a4);
                v27 = v12->m128i_i64[1] + 96LL * v11;
                if ( v17 == 66 )
                  *(_DWORD *)(v27 + 8) = v19;
                *(_DWORD *)(v27 + 88) = (v17 != 66) + 1;
                --v11;
              }
              while ( v31 != v11 );
            }
          }
LABEL_13:
          v11 = v14;
        }
        while ( v28 > v14 );
      }
      v9 = ++v29;
    }
    while ( v29 < a1[1].m128i_i64[0] );
  }
}
