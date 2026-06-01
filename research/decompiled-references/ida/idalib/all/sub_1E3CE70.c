void __fastcall sub_1E3CE70(__int64 a1, char a2, unsigned __int8 a3, double a4, __m128 a5)
{
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // r14
  unsigned int v11; // ebx
  char v12; // r13
  bool v13; // r12
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // r12
  __int64 v21; // rax
  __int64 v22; // rsi
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  __int64 v25; // rdi
  unsigned int v26; // eax
  __int64 v27; // r12
  __int64 v28; // rdx
  unsigned __int64 v29; // rax
  _QWORD *v30; // rdi
  __int64 v31; // rdx
  _QWORD *v32; // rcx
  __m128 v33; // xmm0
  int v34; // eax
  __int64 v35; // rdi
  __int64 v36; // r13
  unsigned __int64 v37; // rdx
  __int64 v38; // rax
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rsi
  unsigned __int64 v42; // rax
  __int64 v43; // rdi
  int v44; // eax
  __int64 v45; // rsi
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // rsi
  __int64 v48; // rdi
  int v49; // eax
  __int64 v50; // rax
  __m128i v51; // xmm0
  __int64 v52; // r13
  unsigned __int64 v53; // rdx
  __int64 v54; // rax
  unsigned __int64 v55; // rdx
  unsigned __int64 v56; // rax
  __int64 v57; // rax
  __m128i v58; // xmm0
  unsigned __int64 v59; // rdx
  __int64 *v60; // rdi
  int v61; // eax
  __int64 v62; // rax
  void *v63; // rdi
  __int64 v64; // rdx
  __int64 v65; // rsi
  __int64 v66; // rcx
  __m128i v67; // xmm1
  __m128i v68; // xmm2
  __int64 v69; // rdi
  __int64 v70; // rdx
  __m128i v71; // xmm3
  __int64 v72; // rsi
  __m128i v73; // xmm4
  __int64 v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // rax
  void **v77; // rbx
  unsigned __int64 v78; // rbp
  void *v79; // rdi
  __int64 v80; // r12
  __int64 *v81; // rax
  __m128i v82; // xmm0
  __m128i v84; // [rsp+10h] [rbp-C8h] BYREF
  _QWORD v85[2]; // [rsp+20h] [rbp-B8h] BYREF
  __m128 v86; // [rsp+30h] [rbp-A8h]
  int v87; // [rsp+40h] [rbp-98h]
  const char *v88; // [rsp+48h] [rbp-90h]
  __m128i v89; // [rsp+50h] [rbp-88h] BYREF
  __m128i v90; // [rsp+60h] [rbp-78h] BYREF
  __m128i v91; // [rsp+70h] [rbp-68h] BYREF
  __m128i v92; // [rsp+80h] [rbp-58h] BYREF
  __m128i v93; // [rsp+90h] [rbp-48h] BYREF

  v84.m128i_i64[1] = (__int64)&v89;
  v89 = 0u;
  v90 = 0u;
  v91 = 0u;
  v92 = 0u;
  v93 = 0u;
  sub_1DFE940(&v89);
LABEL_2:
  v9 = *(_QWORD *)(a1 + 15616);
  if ( v9 != *(_QWORD *)(a1 + 15648) )
  {
LABEL_3:
    v10 = *(_QWORD *)v9;
    v11 = *(_DWORD *)(v9 + 8);
    v12 = 1;
    if ( v9 == *(_QWORD *)(a1 + 15632) - 16LL )
    {
      operator delete(*(void **)(a1 + 15624));
      v50 = *(_QWORD *)(a1 + 15640);
      v84.m128i_i64[0] = *(_QWORD *)(v50 + 8);
      v51 = _mm_loadl_epi64(&v84);
      *(__m128i *)(a1 + 15616) = _mm_unpacklo_epi64(v51, v51);
      v84.m128i_i64[0] = v50 + 8;
      *(__m128 *)(a1 + 15632) = _mm_loadh_ps((const double *)v84.m128i_i64);
    }
    else
    {
      *(_QWORD *)(a1 + 15616) = v9 + 16;
    }
    goto LABEL_5;
  }
  while ( !a2 )
  {
    v19 = *(_QWORD *)(a1 + 12656);
    if ( v19 == *(_QWORD *)(a1 + 12688) )
      break;
    v10 = *(_QWORD *)v19;
    v11 = *(_DWORD *)(v19 + 8);
    if ( v19 == *(_QWORD *)(a1 + 12672) - 16LL )
    {
      v12 = 0;
      operator delete(*(void **)(a1 + 12664));
      v57 = *(_QWORD *)(a1 + 12680);
      v84.m128i_i64[0] = *(_QWORD *)(v57 + 8);
      v58 = _mm_loadl_epi64(&v84);
      *(__m128i *)(a1 + 12656) = _mm_unpacklo_epi64(v58, v58);
      v84.m128i_i64[0] = v57 + 8;
      *(__m128 *)(a1 + 12672) = _mm_loadh_ps((const double *)v84.m128i_i64);
LABEL_5:
      if ( (*(_BYTE *)(v10 + 28) & 0x7Fu) - 34 > 5 )
      {
LABEL_21:
        v20 = *(_QWORD *)(v10 + 80);
        v21 = *(_QWORD *)(v20 + 72);
        v22 = v21;
        v23 = v21 & 0xFFFFFFFFFFFFFFFELL;
        if ( (v21 & 1) == 0 )
        {
          v24 = v21 & 0xFFFFFFFFFFFFFFFCLL;
          if ( (v21 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
          {
            if ( (v21 & 2) == 0 )
            {
              if ( *(char *)(v24 + 28) < 0 )
                goto LABEL_2;
LABEL_25:
              v25 = v24;
              if ( (v21 & 2) == 0 )
              {
LABEL_26:
                v26 = sub_B73FA0(v25);
                if ( v26 >= 2 )
                {
                  if ( v26 <= 3 )
                    goto LABEL_2;
                  if ( v26 == 4 )
                  {
                    v27 = *(_QWORD *)(v10 + 80);
                    v28 = *(_QWORD *)(v27 + 72);
                    v29 = v28 & 0xFFFFFFFFFFFFFFFELL;
                    if ( (v28 & 1) == 0 )
                    {
                      v30 = (_QWORD *)(v28 & 0xFFFFFFFFFFFFFFFCLL);
                      if ( (v28 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
                      {
                        v31 = v28 & 2;
                        v32 = v30;
                        if ( !(_DWORD)v31 )
                        {
LABEL_32:
                          if ( v32 != (_QWORD *)v10 )
                            goto LABEL_2;
                          goto LABEL_33;
                        }
                        v29 = sub_6E2500(v30, *(_QWORD *)(v10 + 80), v31, (__int64)v30, v7, v8) & 0xFFFFFFFFFFFFFFFELL;
                        v28 = v29 | 1;
                        *(_QWORD *)(v27 + 72) = v29 | 1;
                      }
                    }
                    v59 = v28 & 0xFFFFFFFFFFFFFFF8LL;
                    v32 = (_QWORD *)v59;
                    if ( v29 )
                    {
                      if ( (v29 & 4) != 0 )
                      {
                        v32 = nullptr;
                        if ( v59 )
                        {
                          v60 = *(__int64 **)v59;
                          v61 = *(_DWORD *)(*(_QWORD *)v59 + 12LL);
                          if ( *(_DWORD *)(v59 + 8) != v61 )
                          {
                            *(_DWORD *)(v59 + 8) = v61;
                            v62 = *v60;
                            v84.m128i_i64[0] = v59;
                            (*(void (__fastcall **)(__int64 *, __int64, unsigned __int64, _QWORD))(v62 + 152))(
                              v60,
                              v27,
                              v59,
                              0);
                            v59 = v84.m128i_i64[0];
                          }
                          v32 = *(_QWORD **)(v59 + 16);
                        }
                      }
                    }
                    goto LABEL_32;
                  }
                }
LABEL_33:
                v84.m128i_i64[0] = *(_QWORD *)(a1 + 248);
                sub_2233820(v85);
                v84.m128i_i64[0] = v10;
                v87 = 0;
                v33 = _mm_loadh_ps((const double *)v84.m128i_i64);
                v86 = v33;
                v85[0] = &off_2B4A628;
                v88 = "instantiating variable definition";
                v34 = sub_B740B0(v10);
                sub_1E3BC50((__m128i *)a1, v11, v10, 1, v34 == 4, a3, *(double *)v33.m128_u64, a5);
                v85[0] = &off_2B4A628;
                sub_22338A0(v85);
                goto LABEL_2;
              }
              v52 = *(_QWORD *)(v24 + 18360);
              v53 = v20 & 0xFFFFFFFFFFFFFFFBLL;
              if ( v52 )
              {
                v54 = *(_QWORD *)(v24 + 2352);
                *(_QWORD *)(v24 + 2432) += 24LL;
                v55 = (v54 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                if ( *(_QWORD *)(v24 + 2360) >= v55 + 24 && v54 )
                {
                  *(_QWORD *)(v24 + 2352) = v55 + 24;
                  v56 = (v54 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                }
                else
                {
                  v56 = sub_986170(v24 + 2352, 24, 24, 3, v7, v8);
                  v55 = v56 & 0xFFFFFFFFFFFFFFFBLL;
                }
                *(_QWORD *)v56 = v52;
                v53 = v55 | 4;
                *(_DWORD *)(v56 + 8) = 0;
                *(_QWORD *)(v56 + 16) = v20;
              }
              v46 = v53 & 0xFFFFFFFFFFFFFFFELL;
              v45 = v46 | 1;
              *(_QWORD *)(v20 + 72) = v46 | 1;
LABEL_49:
              v47 = v45 & 0xFFFFFFFFFFFFFFF8LL;
              v25 = v47;
              if ( v46 )
              {
                if ( (v46 & 4) != 0 )
                {
                  v25 = 0;
                  if ( v47 )
                  {
                    v48 = *(_QWORD *)v47;
                    v49 = *(_DWORD *)(*(_QWORD *)v47 + 12LL);
                    if ( *(_DWORD *)(v47 + 8) != v49 )
                    {
                      *(_DWORD *)(v47 + 8) = v49;
                      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v48 + 152LL))(v48, v20);
                    }
                    v25 = *(_QWORD *)(v47 + 16);
                  }
                }
              }
              goto LABEL_26;
            }
            v36 = *(_QWORD *)(v24 + 18360);
            v37 = v20 & 0xFFFFFFFFFFFFFFFBLL;
            if ( v36 )
            {
              v38 = *(_QWORD *)(v24 + 2352);
              *(_QWORD *)(v24 + 2432) += 24LL;
              v39 = (v38 + 7) & 0xFFFFFFFFFFFFFFF8LL;
              if ( *(_QWORD *)(v24 + 2360) >= v39 + 24 && v38 )
              {
                *(_QWORD *)(v24 + 2352) = v39 + 24;
                v40 = (v38 + 7) & 0xFFFFFFFFFFFFFFF8LL;
              }
              else
              {
                v40 = sub_986170(v24 + 2352, 24, 24, 3, v7, v8);
                v39 = v40 & 0xFFFFFFFFFFFFFFFBLL;
              }
              *(_QWORD *)v40 = v36;
              v37 = v39 | 4;
              *(_DWORD *)(v40 + 8) = 0;
              *(_QWORD *)(v40 + 16) = v20;
            }
            v23 = v37 & 0xFFFFFFFFFFFFFFFELL;
            v22 = v23 | 1;
            *(_QWORD *)(v20 + 72) = v23 | 1;
          }
        }
        v41 = v22 & 0xFFFFFFFFFFFFFFF8LL;
        v42 = v41;
        if ( v23 )
        {
          if ( (v23 & 4) != 0 )
          {
            v42 = 0;
            if ( v41 )
            {
              v43 = *(_QWORD *)v41;
              v44 = *(_DWORD *)(*(_QWORD *)v41 + 12LL);
              if ( *(_DWORD *)(v41 + 8) != v44 )
              {
                *(_DWORD *)(v41 + 8) = v44;
                (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v43 + 152LL))(v43, v20);
              }
              v42 = *(_QWORD *)(v41 + 16);
            }
          }
        }
        if ( *(char *)(v42 + 28) >= 0 )
        {
          v20 = *(_QWORD *)(v10 + 80);
          v45 = *(_QWORD *)(v20 + 72);
          LOBYTE(v21) = v45;
          v46 = v45 & 0xFFFFFFFFFFFFFFFELL;
          if ( (v45 & 1) == 0 )
          {
            v24 = v45 & 0xFFFFFFFFFFFFFFFCLL;
            if ( (v45 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
              goto LABEL_25;
          }
          goto LABEL_49;
        }
        goto LABEL_2;
      }
    }
    else
    {
      v12 = 0;
      *(_QWORD *)(a1 + 12656) = v19 + 16;
      if ( (*(_BYTE *)(v10 + 28) & 0x7Fu) - 34 > 5 )
        goto LABEL_21;
    }
    v13 = (unsigned int)sub_B77D20(v10) == 4;
    if ( *(char *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 32LL))(v10) + 84) < 0 )
    {
      v85[0] = a1;
      v35 = *(_QWORD *)(a1 + 248);
      v85[1] = v10;
      v86.m128_u64[0] = v11;
      v86.m128_i8[8] = v13;
      v86.m128_i8[9] = a3;
      sub_AB8C30(v35, v10, (void (__fastcall *)(__int64, __int64))sub_1E3F0C0, (__int64)v85, v14, v15);
    }
    else
    {
      sub_1E3D740(a1, v11, v10, 1, v13, a3);
      if ( (unsigned __int8)sub_B7D390(v10, (__int64)v85, 0, v16) )
        *(_BYTE *)(v10 + 84) &= ~8u;
    }
    if ( (a2
       || (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 22LL) & 1) == 0
       || *(_DWORD *)(a1 + 184) != 1
       || (*(_BYTE *)(v10 + 84) & 8) == 0)
      && (a3 || (*(_BYTE *)(v10 + 84) & 8) == 0 || v12) )
    {
      goto LABEL_2;
    }
    v17 = v92.m128i_i64[0];
    if ( v92.m128i_i64[0] == v93.m128i_i64[0] - 16 )
    {
      v80 = v93.m128i_i64[1];
      if ( (unsigned __int64)(v89.m128i_i64[1] - ((v93.m128i_i64[1] - v89.m128i_i64[0]) >> 3)) <= 1 )
      {
        sub_160A9F0(v84.m128i_i64[1], 1u, 0);
        v80 = v93.m128i_i64[1];
      }
      *(_QWORD *)(v80 + 8) = operator new(0x200u);
      v81 = (__int64 *)v92.m128i_i64[0];
      *(_DWORD *)(v92.m128i_i64[0] + 8) = v11;
      *v81 = v10;
      v84.m128i_i64[0] = *(_QWORD *)(v93.m128i_i64[1] + 8);
      v82 = _mm_loadl_epi64(&v84);
      v92 = _mm_unpacklo_epi64(v82, v82);
      v84.m128i_i64[0] = v93.m128i_i64[1] + 8;
      v93 = (__m128i)_mm_loadh_ps((const double *)v84.m128i_i64);
      goto LABEL_2;
    }
    *(_QWORD *)v92.m128i_i64[0] = v10;
    v18 = v17 + 16;
    *(_DWORD *)(v18 - 8) = v11;
    v92.m128i_i64[0] = v18;
    v9 = *(_QWORD *)(a1 + 15616);
    if ( v9 != *(_QWORD *)(a1 + 15648) )
      goto LABEL_3;
  }
  v63 = (void *)v89.m128i_i64[0];
  if ( v92.m128i_i64[0] != v90.m128i_i64[0] )
  {
    v64 = *(_QWORD *)(a1 + 12680);
    v65 = *(_QWORD *)(a1 + 12664);
    v66 = *(_QWORD *)(a1 + 12672);
    v67 = _mm_load_si128(&v90);
    v68 = _mm_load_si128(&v91);
    v90.m128i_i64[0] = *(_QWORD *)(a1 + 12656);
    v91.m128i_i64[1] = v64;
    v69 = *(_QWORD *)(a1 + 12688);
    v70 = *(_QWORD *)(a1 + 12712);
    v90.m128i_i64[1] = v65;
    v71 = _mm_load_si128(&v92);
    v72 = *(_QWORD *)(a1 + 12696);
    v91.m128i_i64[0] = v66;
    v73 = _mm_load_si128(&v93);
    v74 = *(_QWORD *)(a1 + 12704);
    v92.m128i_i64[0] = v69;
    v93.m128i_i64[1] = v70;
    v63 = *(void **)(a1 + 12640);
    v75 = v89.m128i_i64[1];
    *(_QWORD *)(a1 + 12640) = v89.m128i_i64[0];
    v76 = *(_QWORD *)(a1 + 12648);
    v92.m128i_i64[1] = v72;
    v93.m128i_i64[0] = v74;
    v89.m128i_i64[0] = (__int64)v63;
    *(_QWORD *)(a1 + 12648) = v75;
    v89.m128i_i64[1] = v76;
    *(__m128i *)(a1 + 12656) = v67;
    *(__m128i *)(a1 + 12672) = v68;
    *(__m128i *)(a1 + 12688) = v71;
    *(__m128i *)(a1 + 12704) = v73;
  }
  if ( v63 )
  {
    v77 = (void **)v91.m128i_i64[1];
    v78 = v93.m128i_i64[1] + 8;
    if ( (unsigned __int64)(v93.m128i_i64[1] + 8) > v91.m128i_i64[1] )
    {
      do
      {
        v79 = *v77++;
        operator delete(v79);
      }
      while ( v78 > (unsigned __int64)v77 );
      v63 = (void *)v89.m128i_i64[0];
    }
    operator delete(v63);
  }
}
