void __fastcall sub_1BF0DE0(
        __int64 *a1,
        int a2,
        unsigned int a3,
        const __m128i *a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8,
        unsigned __int8 a9)
{
  __int64 v9; // rbp
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rsi
  __m128 v24; // xmm0
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  _QWORD *v29; // rax
  char *v30; // rbx
  char *v31; // rbp
  unsigned int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // r8
  char v35; // al
  __int64 v36; // rax
  __m128d v37; // xmm0
  __int64 v38; // [rsp+8h] [rbp-140h]
  __int64 v41; // [rsp+44h] [rbp-104h] BYREF
  char v42; // [rsp+4Ch] [rbp-FCh]
  __m128 v43; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v44; // [rsp+60h] [rbp-E8h] BYREF
  char *v45; // [rsp+68h] [rbp-E0h]
  __int64 v46; // [rsp+70h] [rbp-D8h]
  char v47; // [rsp+78h] [rbp-D0h] BYREF
  __int128 v48; // [rsp+B8h] [rbp-90h]
  __int64 v49; // [rsp+C8h] [rbp-80h]
  __int64 *v50; // [rsp+D0h] [rbp-78h]
  __int64 v51; // [rsp+D8h] [rbp-70h]
  unsigned int v52; // [rsp+E0h] [rbp-68h]
  __int64 v53; // [rsp+E8h] [rbp-60h] BYREF
  __int128 v54; // [rsp+F0h] [rbp-58h]
  __int64 v55; // [rsp+100h] [rbp-48h]

  v38 = a1[31];
  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a4->m128i_i64[0] + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v9 + 16) == 48 )
  {
    v11 = a2;
    v12 = a3;
    if ( !(unsigned __int8)sub_1E63330(a1, a3, *(_QWORD *)(a4->m128i_i64[0] + 8), 1, 0)
      || (unsigned __int8)sub_F60F20(v9, v12, v14, v15, v16, v17) )
    {
      v18 = sub_F60F10(v9, v12, v14, v15, v16, v17);
      if ( sub_B7E870((__int64)v18, v12, v19, v20, v21, v22) )
      {
        v48 = 0;
        v45 = &v47;
        v23 = (v38 + 16 * v11 + 17592) | 6;
        v46 = 0x800000000LL;
        v51 = v23;
        v52 = a3;
        v44 = 0;
        v49 = 0;
        v50 = a1;
        sub_B85890(&v53, v23);
        v24 = 0;
        v54 = 0;
        v55 = 0x101010000LL;
        sub_1A395A0((__int64)&v44);
        v29 = sub_F60F10(v9, v23, v25, v26, v27, v28);
        if ( v29 )
          v29 += 8;
        sub_1A48440((__int64)a1, (__int64)&v44, (__int64)v29, 0);
        v30 = v45;
        BYTE3(v55) = 0;
        v31 = &v45[8 * (unsigned int)v46];
        if ( v31 != v45 )
        {
          do
          {
            while ( 1 )
            {
              if ( sub_B8BF30(*(_QWORD *)v30 & 0xFFFFFFFFFFFFFFF8LL) )
              {
                if ( a9 == 1 )
                {
                  v35 = *(_BYTE *)(a6 + 2984);
                  v41 = *(_QWORD *)(a6 + 2976);
                  v42 = v35;
                  v36 = sub_B8BF30(*(_QWORD *)v30 & 0xFFFFFFFFFFFFFFF8LL);
                  v37 = (__m128d)_mm_loadu_si128(a4);
                  v24 = (__m128)_mm_shuffle_pd(v37, v37, 1);
                  v43 = v24;
                  if ( !(unsigned __int8)sub_1BD2370((__int64)&v41, a1, (__int64)&v43, 2, v36) )
                    break;
                }
              }
              v30 += 8;
              v32 = sub_C0EB40(a4->m128i_i64[0], a1[31], nullptr, v33, v34);
              sub_1BF0CF0(
                (__int64)a1,
                *((_QWORD *)v30 - 1),
                *(_QWORD *)(a4->m128i_i64[0] + 8),
                v32,
                (__int64)&a4->m128i_i64[1],
                a5 - 1,
                v24,
                a8,
                (unsigned int *)a6,
                0,
                a9);
              if ( v31 == v30 )
                goto LABEL_13;
            }
            v30 += 8;
          }
          while ( v31 != v30 );
        }
LABEL_13:
        sub_169D230((__int64)&v44);
      }
    }
  }
}
