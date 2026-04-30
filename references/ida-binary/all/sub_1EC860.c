__int64 __fastcall sub_1EC860(_BYTE *a1, __int64 *a2, __int64 a3, __int64 a4, __int64 **a5)
{
  char v7; // r12
  int v9; // r12d
  __int64 v10; // r15
  __int64 v11; // r13
  __int64 **v12; // r15
  __int64 *v13; // rbp
  __int64 v14; // rax
  const __m128i *v15; // rax
  const __m128i *v16; // r13
  __m128i *v17; // rsi
  __m128i *v18; // rcx
  __int64 v19; // rdi
  __m128i *v20; // rax
  __m128i v21; // xmm0
  __int64 v22; // r10
  unsigned __int64 v23; // rdx
  __int32 v24; // r8d
  bool v25; // r13
  __int64 **v26; // rax
  __int64 v27; // rsi
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 **v31; // rax
  unsigned __int64 v32; // rdx
  __int64 v33; // rsi
  __int64 v34; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // [rsp+8h] [rbp-A0h]
  __int64 v41; // [rsp+10h] [rbp-98h]
  int v42; // [rsp+18h] [rbp-90h]
  __int64 **v43; // [rsp+18h] [rbp-90h]
  __int64 **v44; // [rsp+18h] [rbp-90h]
  __int64 v45; // [rsp+18h] [rbp-90h]
  __int64 v46; // [rsp+20h] [rbp-88h]
  __int64 v47; // [rsp+28h] [rbp-80h]
  __m128i v48; // [rsp+30h] [rbp-78h] BYREF
  __int32 v49; // [rsp+44h] [rbp-64h]
  __int64 v50; // [rsp+48h] [rbp-60h]
  __int64 v51; // [rsp+58h] [rbp-50h] BYREF
  _QWORD v52[9]; // [rsp+60h] [rbp-48h] BYREF

  v7 = a1[120];
  v52[1] = __readfsqword(0x28u);
  v41 = 0;
  v9 = v7 & 1;
  if ( v9 )
  {
    nullsub_66(a1 + 104);
    v41 = sub_277DF0();
    LOBYTE(v9) = sub_278450(v41);
  }
  v10 = *(_QWORD *)(a3 + 8);
  if ( v10 != v10 + 24LL * *(_QWORD *)(a3 + 16) )
  {
    v47 = v10 + 24LL * *(_QWORD *)(a3 + 16);
    v50 = a3;
    v11 = v10;
    do
    {
      v12 = *(__int64 ***)v11;
      v40 = *(_QWORD *)v11 + 8LL * *(_QWORD *)(v11 + 8);
      if ( v40 != *(_QWORD *)v11 )
      {
        v46 = v11;
        do
        {
          v13 = *v12;
          if ( (_BYTE)v9 )
          {
            v14 = (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 816LL))(a1, *v13);
            v15 = (const __m128i *)sub_2781D0(v41, v14, &v51);
            v16 = v15;
            if ( v15 )
            {
              v17 = (__m128i *)a2[4];
              v18 = &v17[2 * a2[5]];
              if ( v17 == v18 )
                goto LABEL_13;
              v19 = v15->m128i_i64[0];
              v20 = (__m128i *)a2[4];
              while ( v19 != v20->m128i_i64[0] )
              {
                v20 += 2;
                if ( v18 == v20 )
                  goto LABEL_13;
              }
              if ( v18 == v20 )
              {
LABEL_13:
                v21 = _mm_loadu_si128(v16);
                v22 = v16[1].m128i_i64[0];
                v23 = a2[5] + 1;
                v24 = v16[1].m128i_i32[2];
                if ( a2[6] < v23 )
                {
                  v49 = v16[1].m128i_i32[2];
                  v45 = v22;
                  v48 = v21;
                  v38 = qvector_reserve(a2 + 4, v17, v23, 32);
                  v39 = a2[5];
                  v21 = _mm_load_si128(&v48);
                  v24 = v49;
                  v22 = v45;
                  a2[4] = v38;
                  v18 = (__m128i *)(v38 + 32 * v39);
                }
                v18[1].m128i_i64[0] = v22;
                v18[1].m128i_i32[2] = v24;
                *v18 = v21;
                ++a2[5];
              }
              v42 = sub_277C90(a1 + 104, v16[1].m128i_u32[2]);
              if ( v42 != -1 )
              {
                v25 = v51 == *(_QWORD *)(v41 + 120);
                v26 = (__int64 **)operator new(0x18u);
                v27 = *a2;
                a5 = v26;
                v28 = a2[2];
                *v26 = v13;
                LODWORD(v26) = dword_5E07F0[3 * v25 + v42];
                *((_DWORD *)a5 + 2) = 0;
                v52[0] = a5;
                *((_DWORD *)a5 + 3) = (_DWORD)v26 + 2129403392;
                a5[2] = (__int64 *)-1LL;
                v29 = a2[1];
                if ( v28 < v29 + 1 )
                {
                  v44 = a5;
                  v37 = qvector_reserve(a2, v27, v29 + 1, 8);
                  a5 = v44;
                  *a2 = v37;
                  v27 = v37;
                  v29 = a2[1];
                }
                *(_QWORD *)(v27 + 8 * v29) = a5;
                ++a2[1];
              }
            }
          }
          v30 = *v13;
          LODWORD(v52[0]) = -1;
          if ( v30 )
          {
            sub_1E86E0((__int64)(a1 + 624), 1, v30, (__int64)a1, v52);
            if ( LODWORD(v52[0]) != -1 )
            {
              v31 = (__int64 **)operator new(0x18u);
              v32 = a2[2];
              v33 = *a2;
              a5 = v31;
              *v31 = v13;
              v52[0] = v31;
              v31[1] = (__int64 *)0x6800000000LL;
              v31[2] = (__int64 *)-1LL;
              v34 = a2[1];
              if ( v32 < v34 + 1 )
              {
                v43 = a5;
                v36 = qvector_reserve(a2, v33, v34 + 1, 8);
                a5 = v43;
                *a2 = v36;
                v33 = v36;
                v34 = a2[1];
              }
              *(_QWORD *)(v33 + 8 * v34) = a5;
              ++a2[1];
            }
          }
          ++v12;
        }
        while ( (__int64 **)v40 != v12 );
        v11 = v46;
      }
      v11 += 24;
    }
    while ( v47 != v11 );
    LODWORD(a3) = v50;
  }
  return callui(175, (_DWORD)a2, (_DWORD)a1, a3, (_DWORD)a5, (_DWORD)callui);
}
