unsigned __int64 __fastcall sub_1EF470(__int64 *a1, __int64 *a2)
{
  __int64 *v2; // r13
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // rax
  bool v7; // al
  __int64 *v8; // rbp
  __int64 v9; // rax
  __m128i v10; // xmm0
  __int64 v11; // rax
  __m128i v12; // xmm0
  __int64 v13; // rax
  __m128i v14; // xmm0
  __int64 *v15; // rax
  __int64 v16; // rbx
  __int64 *v17; // r12
  __int64 v18; // rdi
  __int64 v19; // rbx
  __m128i v20; // xmm0
  __int64 v21; // rax
  __m128i v22; // xmm2
  bool v23; // zf
  __int64 v24; // rbx
  __int64 v25; // r15
  _QWORD *v26; // r14
  __int64 v27; // rdi
  __m128i v28; // xmm0
  __m128i v29; // xmm4
  __int64 v30; // rax
  __int64 v31; // rbx
  __m128i v32; // xmm0
  __int64 v33; // rdi
  __int64 *v34; // rax
  __int64 v35; // rbp
  __m128i v36; // xmm7
  __int64 v37; // rdi
  __int64 v38; // rbx
  __int64 i; // r12
  _QWORD *v40; // r15
  __int64 v41; // rdi
  __int64 *v42; // rbx
  __m128i v43; // xmm7
  __int64 v44; // rdi
  __int64 v45; // rax
  __m128i si128; // xmm0
  __int64 v47; // rbx
  __int64 v48; // rbp
  _QWORD *v49; // r12
  __int64 v50; // rdi
  char v52; // al
  __int64 *v53; // rdx
  __int64 v54; // rax
  __m128i v55; // xmm0
  __m128i v56; // xmm7
  __m128i v57; // [rsp+0h] [rbp-F8h] BYREF
  __m128i v58; // [rsp+10h] [rbp-E8h] BYREF
  __int64 *v59; // [rsp+28h] [rbp-D0h]
  unsigned __int64 v60; // [rsp+30h] [rbp-C8h]
  __int64 *v61; // [rsp+38h] [rbp-C0h]
  __int64 *v62; // [rsp+40h] [rbp-B8h]
  __int64 *v63; // [rsp+48h] [rbp-B0h]
  __int64 v64; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v65; // [rsp+60h] [rbp-98h]
  __m128i v66; // [rsp+68h] [rbp-90h] BYREF
  __int64 v67; // [rsp+78h] [rbp-80h]
  __m128i v68; // [rsp+80h] [rbp-78h] BYREF
  _BYTE v69[24]; // [rsp+90h] [rbp-68h] BYREF
  char v70; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v71; // [rsp+B8h] [rbp-40h]

  v59 = a1;
  v62 = a2;
  v71 = __readfsqword(0x28u);
  if ( a1 != a2 && a2 != a1 + 12 )
  {
    v2 = a1 + 24;
    v63 = &v64;
    do
    {
      v3 = *(v2 - 4);
      v61 = v2;
      v4 = v59[8];
      if ( v3 != v4 )
      {
        v5 = v59[9];
        if ( !*(v2 - 3) )
        {
          v7 = v5 == 0;
LABEL_9:
          if ( v7 )
            goto LABEL_10;
          goto LABEL_44;
        }
        if ( !v5 )
          goto LABEL_10;
        v6 = *(_QWORD *)(v4 + 24);
        if ( *(_QWORD *)(v3 + 24) != v6 )
        {
          v7 = *(_QWORD *)(v3 + 24) < v6;
          goto LABEL_9;
        }
      }
      v52 = *((_BYTE *)v2 - 12);
      if ( v52 == *((_BYTE *)v59 + 84) )
      {
        if ( *((_DWORD *)v2 - 4) < *((_DWORD *)v59 + 20) )
          goto LABEL_10;
      }
      else if ( !v52 )
      {
LABEL_10:
        v8 = v2 - 12;
        sub_605C0(v63, (__int64)(v2 - 12));
        v9 = *(v2 - 10);
        v10 = _mm_loadu_si128((const __m128i *)(v2 - 9));
        *(v2 - 10) = 0;
        v65 = v9;
        v11 = *(v2 - 7);
        v66 = v10;
        v12 = _mm_loadu_si128((const __m128i *)v2 - 3);
        v67 = v11;
        v13 = *(v2 - 2);
        v68 = v12;
        v14 = _mm_loadu_si128((const __m128i *)v2 - 2);
        *(_QWORD *)&v69[16] = v13;
        LOBYTE(v13) = *((_BYTE *)v2 - 8);
        *(v2 - 7) = 0;
        v70 = v13;
        v15 = v59;
        *(_OWORD *)(v2 - 9) = 0;
        v16 = (char *)(v2 - 12) - (char *)v15;
        *((_OWORD *)v2 - 3) = 0;
        *(__m128i *)v69 = v14;
        v60 = 0xAAAAAAAAAAAAAAABLL * (v16 >> 5);
        if ( v16 > 0 )
        {
          do
          {
            v17 = v8;
            v8 -= 12;
            sub_60E90(v17, v8);
            v18 = v17[2];
            v19 = *(v17 - 10);
            *(v17 - 10) = 0;
            v20 = _mm_loadu_si128((const __m128i *)(v17 - 9));
            *(_OWORD *)(v17 - 9) = 0;
            if ( v18 )
            {
              v17[3] = 0;
              v57 = v20;
              qfree(v18);
              v20 = _mm_load_si128(&v57);
            }
            v21 = *(v17 - 7);
            v17[2] = v19;
            v22 = _mm_loadu_si128((const __m128i *)v17 - 3);
            v23 = v17[5] == 0;
            *(v17 - 7) = 0;
            v57.m128i_i64[0] = v21;
            *(__m128i *)(v17 + 3) = v20;
            v58 = v22;
            *((_OWORD *)v17 - 3) = 0;
            if ( !v23 )
            {
              v24 = v17[6];
              v25 = 0;
              if ( v24 )
              {
                do
                {
                  v26 = (_QWORD *)(v17[5] + 40 * v25);
                  v27 = v26[2];
                  if ( v27 )
                  {
                    v26[3] = 0;
                    qfree(v27);
                  }
                  ++v25;
                  qfree(*v26);
                }
                while ( v24 != v25 );
              }
              v17[6] = 0;
              qfree(v17[5]);
            }
            v28 = _mm_loadu_si128((const __m128i *)v17 - 2);
            v23 = v60-- == 1;
            v29 = _mm_load_si128(&v58);
            v17[5] = v57.m128i_i64[0];
            v30 = *(__int64 *)((char *)v17 - 19);
            *((__m128i *)v17 + 4) = v28;
            *(__int64 *)((char *)v17 + 77) = v30;
            LOBYTE(v30) = *((_BYTE *)v17 - 8);
            *((__m128i *)v17 + 3) = v29;
            *((_BYTE *)v17 + 88) = v30;
          }
          while ( !v23 );
        }
        sub_60E90(v59, v63);
        v31 = v65;
        v65 = 0;
        v32 = _mm_loadu_si128(&v66);
        v66 = 0;
        v33 = v59[2];
        if ( v33 )
        {
          v59[3] = 0;
          v57 = v32;
          qfree(v33);
          v32 = _mm_load_si128(&v57);
        }
        v34 = v59;
        v35 = v67;
        v67 = 0;
        v36 = _mm_load_si128(&v68);
        v68 = 0;
        v37 = v59[5];
        v59[2] = v31;
        *(__m128i *)(v34 + 3) = v32;
        v57 = v36;
        if ( v37 )
        {
          v38 = v34[6];
          if ( v38 )
          {
            for ( i = 0; i != v38; ++i )
            {
              v40 = (_QWORD *)(v37 + 40 * i);
              v41 = v40[2];
              if ( v41 )
              {
                v40[3] = 0;
                qfree(v41);
              }
              qfree(*v40);
              v37 = v59[5];
            }
          }
          v42 = v59;
          v59[6] = 0;
          qfree(v37);
          v43 = _mm_load_si128(&v57);
          v44 = v67;
          v42[5] = v35;
          v45 = *(_QWORD *)&v69[13];
          si128 = _mm_load_si128((const __m128i *)v69);
          *((__m128i *)v42 + 3) = v43;
          *((__m128i *)v42 + 4) = si128;
          *(__int64 *)((char *)v42 + 77) = v45;
          *((_BYTE *)v42 + 88) = v70;
          if ( v44 )
          {
            v47 = v68.m128i_i64[0];
            if ( v68.m128i_i64[0] )
            {
              v48 = 0;
              do
              {
                v49 = (_QWORD *)(v44 + 40 * v48);
                v50 = v49[2];
                if ( v50 )
                {
                  v49[3] = 0;
                  qfree(v50);
                }
                ++v48;
                qfree(*v49);
                v44 = v67;
              }
              while ( v47 != v48 );
            }
            v68.m128i_i64[0] = 0;
            qfree(v44);
          }
        }
        else
        {
          v53 = v59;
          v54 = *(_QWORD *)&v69[13];
          v55 = _mm_load_si128((const __m128i *)v69);
          v56 = _mm_load_si128(&v57);
          v59[5] = v35;
          *((__m128i *)v53 + 4) = v55;
          *(__int64 *)((char *)v53 + 77) = v54;
          LOBYTE(v54) = v70;
          *((__m128i *)v53 + 3) = v56;
          *((_BYTE *)v53 + 88) = v54;
        }
        if ( v65 )
        {
          v66.m128i_i64[0] = 0;
          qfree(v65);
        }
        qfree(v64);
        goto LABEL_38;
      }
LABEL_44:
      sub_1EF040((__int64)(v2 - 12));
LABEL_38:
      v2 += 12;
    }
    while ( v62 != v61 );
  }
  return v71 - __readfsqword(0x28u);
}
