void __fastcall sub_17301D0(
        __m128i *a1,
        __m128i *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int64 a8)
{
  __int64 v8; // r15
  __int64 v9; // r13
  __m128i *v10; // r14
  __int64 v11; // r10
  __m128i *v12; // r12
  signed __int64 v13; // rbp
  __m128i *v14; // r13
  __int64 v15; // rbx
  __int64 v16; // r13
  __m128i *v17; // rbx
  int v18; // r9d
  __m128i *v19; // r13
  __int64 v20; // r10
  signed __int64 v21; // rbp
  __int64 v22; // rbx
  __int64 v23; // rdx
  __m128i v24; // xmm2
  __m128i v25; // xmm3
  __int64 v26; // rax
  __m128i v27; // xmm4
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  __m128i v30; // xmm5
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __m128i *v37; // [rsp+8h] [rbp-140h]
  __m128i *v38; // [rsp+10h] [rbp-138h]
  unsigned int *v39; // [rsp+18h] [rbp-130h] BYREF
  __int64 v40; // [rsp+20h] [rbp-128h]
  __int64 v41; // [rsp+28h] [rbp-120h]
  __m128 v42; // [rsp+30h] [rbp-118h] BYREF
  __int64 v43; // [rsp+40h] [rbp-108h]
  __int64 v44; // [rsp+48h] [rbp-100h]
  __int64 v45; // [rsp+50h] [rbp-F8h]
  __int64 v46; // [rsp+58h] [rbp-F0h]
  __m128i v47[2]; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v48; // [rsp+80h] [rbp-C8h]
  __int64 v49; // [rsp+88h] [rbp-C0h]
  __m128i v50; // [rsp+90h] [rbp-B8h]
  _QWORD v51[5]; // [rsp+A0h] [rbp-A8h] BYREF
  unsigned __int64 v52; // [rsp+C8h] [rbp-80h]
  __m128i v53; // [rsp+D0h] [rbp-78h]
  __m128i v54; // [rsp+E0h] [rbp-68h]
  __m128i v55; // [rsp+F0h] [rbp-58h]
  __int64 v56; // [rsp+100h] [rbp-48h]

  v38 = a2;
  v37 = a1;
  v39 = *((unsigned int **)&a7 + 1);
  v46 = a3;
  v40 = a7;
  if ( a5 && a4 )
  {
    v8 = a4;
    if ( a4 + a5 == 2 )
    {
      v19 = a1;
      v10 = a2;
LABEL_18:
      if ( (unsigned __int8)sub_1BD5DB0(v40, v10, v19, *v39, *(unsigned int *)(a8 + 2972), 1) )
      {
        v23 = v19[5].m128i_i64[1];
        v24 = _mm_loadu_si128(v19 + 1);
        v25 = _mm_loadu_si128(v19 + 3);
        v47[0].m128i_i64[0] = v19->m128i_i64[0];
        v26 = v19->m128i_i64[1];
        v27 = _mm_loadu_si128(v19 + 7);
        v51[3] = v23;
        v47[0].m128i_i64[1] = v26;
        v28 = v19[2].m128i_i64[0];
        v29 = v19[6].m128i_i64[1] & 0xFFFFFFFF0003FFFFLL;
        v47[1] = v24;
        v30 = _mm_loadu_si128(v19 + 8);
        v48 = v28;
        v31 = v19[2].m128i_i64[1];
        v50 = v25;
        v49 = v31;
        v32 = v19[4].m128i_i64[0];
        v53 = v27;
        v51[0] = v32;
        v33 = v19[4].m128i_i64[1];
        v54 = v30;
        v51[1] = v33;
        v34 = v19[5].m128i_i64[0];
        v19[4].m128i_i64[0] = 0;
        v51[2] = v34;
        v35 = v19[6].m128i_i64[0];
        v19[4].m128i_i64[1] = 0;
        v51[4] = v35;
        LODWORD(v35) = v52;
        v19[5].m128i_i64[0] = 0;
        v52 = v29 | (unsigned int)v35 & 0xFFFC0000;
        v36 = v19[10].m128i_i64[0];
        v55 = _mm_loadu_si128(v19 + 9);
        v56 = v36;
        sub_172F0A0(v19, v10);
        sub_172F0A0(v10, v47);
        sub_1705410((__int64)v51);
      }
    }
    else
    {
      v41 = a7;
      v9 = a5;
      v42 = _mm_loadh_ps((const double *)&v39);
      while ( 1 )
      {
        if ( v8 <= v9 )
        {
          v12 = v37;
          v20 = v9 / 2;
          v43 = v9 / 2;
          v44 = 168 * (v9 / 2);
          v10 = (__m128i *)((char *)v38 + v44);
          v21 = 0xCF3CF3CF3CF3CF3DLL * (((char *)v38 - (char *)v37) >> 3);
          if ( (char *)v38 - (char *)v37 > 0 )
          {
            v41 = v9;
            v45 = v9 / 2;
            while ( 1 )
            {
              v22 = v21 >> 1;
              if ( (unsigned __int8)sub_1BD5DB0(
                                      v40,
                                      v10,
                                      (char *)v12 + 168 * (v21 >> 1),
                                      *v39,
                                      *(unsigned int *)(a8 + 2972),
                                      1) )
              {
                if ( !v22 )
                {
LABEL_26:
                  v9 = v41;
                  v20 = v45;
                  v41 = 0xCF3CF3CF3CF3CF3DLL * (((char *)v12 - (char *)v37) >> 3);
                  v8 -= v41;
                  goto LABEL_27;
                }
              }
              else
              {
                v12 = (__m128i *)((char *)v12 + 168 * (v21 >> 1) + 168);
                v22 = v21 - v22 - 1;
                if ( v22 <= 0 )
                  goto LABEL_26;
              }
              v21 = v22;
            }
          }
          v41 = 0;
LABEL_27:
          v9 -= v20;
          v17 = (__m128i *)((char *)v12 + v44);
        }
        else
        {
          v10 = v38;
          v11 = v8 / 2;
          v41 = v8 / 2;
          v12 = (__m128i *)((char *)v37 + 168 * (v8 / 2));
          v13 = 0xCF3CF3CF3CF3CF3DLL * ((v46 - (__int64)v38) >> 3);
          if ( v46 - (__int64)v38 > 0 )
          {
            v43 = v9;
            v14 = v38;
            v44 = v8 / 2;
            while ( 1 )
            {
              v15 = v13 >> 1;
              if ( (unsigned __int8)sub_1BD5DB0(
                                      v40,
                                      (char *)v14 + 168 * (v13 >> 1),
                                      v12,
                                      *v39,
                                      *(unsigned int *)(a8 + 2972),
                                      1) )
              {
                v14 = (__m128i *)((char *)v14 + 168 * (v13 >> 1) + 168);
                v15 = v13 - v15 - 1;
                if ( v15 <= 0 )
                  goto LABEL_12;
              }
              else if ( !v15 )
              {
LABEL_12:
                v10 = v14;
                v16 = v43;
                v11 = v44;
                v17 = (__m128i *)((char *)v12 + (char *)v10 - (char *)v38);
                v43 = 0xCF3CF3CF3CF3CF3DLL * (((char *)v10 - (char *)v38) >> 3);
                v9 = v16 - v43;
                goto LABEL_13;
              }
              v13 = v15;
            }
          }
          v43 = 0;
          v17 = (__m128i *)((char *)v37 + 168 * (v8 / 2));
LABEL_13:
          v8 -= v11;
        }
        sub_172F6D0(v12, v38, v10);
        sub_17301D0(
          (_DWORD)v37,
          (_DWORD)v12,
          (_DWORD)v17,
          v41,
          v43,
          v18,
          (__int128)_mm_load_si128((const __m128i *)&v42),
          a8);
        if ( !v8 || !v9 )
          break;
        v38 = v10;
        v37 = v17;
        if ( v9 + v8 == 2 )
        {
          v19 = v17;
          goto LABEL_18;
        }
      }
    }
  }
}
