__int64 __fastcall sub_1DD4BA0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v9; // rbp
  __int64 v11; // r13
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // r13
  unsigned __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // rsi
  unsigned __int64 v19; // rdx
  _DWORD *v20; // rsi
  __int64 v21; // rdi
  int v22; // eax
  __int64 v23; // rdi
  __int64 v24; // rdx
  unsigned __int64 v25; // rsi
  __int64 v26; // rdi
  int v27; // eax
  __int64 v28; // r13
  unsigned int v29; // r14d
  __int64 v30; // r15
  _QWORD *v31; // rdx
  int v32; // edx
  unsigned int v33; // r12d
  int v34; // r13d
  int v35; // ecx
  unsigned int v36; // r12d
  void **v37; // rax
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rax
  __int64 v42; // r15
  unsigned __int64 v43; // rsi
  __int64 v44; // rax
  unsigned __int64 v45; // rsi
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rax
  char *v48; // rax
  _QWORD *v49; // rdi
  __int64 v50; // rax
  unsigned __int64 v51; // r12
  __m128 *v52; // rax
  __int64 v53; // rax
  unsigned __int64 v54; // rdx
  __int64 v55; // r14
  unsigned __int64 v56; // rdx
  __int64 v57; // rax
  unsigned __int64 v58; // rdx
  unsigned __int64 v59; // rax
  _DWORD *v60; // rax
  __int64 v61; // rdi
  int v62; // edx
  int v63; // r12d
  __int64 v64; // r13
  unsigned int v65; // r15d
  unsigned __int64 v66; // rdx
  int v67; // ecx
  int v68; // r14d
  void **v69; // rax
  __int64 v70; // r15
  unsigned __int64 v71; // rdx
  __int64 v72; // rax
  unsigned __int64 v73; // rdx
  unsigned __int64 v74; // rax
  unsigned __int64 v75; // rax
  __int64 v76; // [rsp-10h] [rbp-F8h]
  unsigned __int64 v77; // [rsp-10h] [rbp-F8h]
  unsigned __int64 v78; // [rsp-8h] [rbp-F0h]
  unsigned __int64 v79; // [rsp+8h] [rbp-E0h]
  unsigned __int8 v81; // [rsp+20h] [rbp-C8h]
  void **v82; // [rsp+20h] [rbp-C8h]
  unsigned __int64 v83; // [rsp+20h] [rbp-C8h]
  unsigned __int64 v84; // [rsp+38h] [rbp-B0h]
  unsigned __int8 v85; // [rsp+4Ah] [rbp-9Eh] BYREF
  char v86; // [rsp+4Bh] [rbp-9Dh] BYREF
  int v87; // [rsp+4Ch] [rbp-9Ch] BYREF
  void *v88; // [rsp+50h] [rbp-98h] BYREF
  __int64 v89; // [rsp+58h] [rbp-90h]
  _BYTE v90[32]; // [rsp+60h] [rbp-88h] BYREF
  void *ptr; // [rsp+80h] [rbp-68h] BYREF
  __int64 v92; // [rsp+88h] [rbp-60h]
  _BYTE v93[88]; // [rsp+90h] [rbp-58h] BYREF

  v9 = a4;
  v11 = *(_QWORD *)(a3 + 104);
  v88 = v90;
  v89 = 0x400000000LL;
  v12 = *(_QWORD *)(v11 + 96);
  v13 = v12 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v12 & 1) == 0 )
  {
    a4 = v12 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (v12 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      if ( (v12 & 2) == 0 )
        goto LABEL_4;
      v55 = *(_QWORD *)(a4 + 18360);
      v56 = v11 & 0xFFFFFFFFFFFFFFFBLL;
      if ( v55 )
      {
        v57 = *(_QWORD *)(a4 + 2352);
        *(_QWORD *)(a4 + 2432) += 24LL;
        v58 = (v57 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( *(_QWORD *)(a4 + 2360) >= v58 + 24 && v57 )
        {
          *(_QWORD *)(a4 + 2352) = v58 + 24;
          v59 = (v57 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          v59 = sub_986170(a4 + 2352, 24, 24, 3, a5, a6);
          v58 = v59 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(_QWORD *)v59 = v55;
        v56 = v58 | 4;
        *(_DWORD *)(v59 + 8) = 0;
        *(_QWORD *)(v59 + 16) = v11;
      }
      v13 = v56 & 0xFFFFFFFFFFFFFFFELL;
      v12 = v13 | 1;
      *(_QWORD *)(v11 + 96) = v13 | 1;
    }
  }
  if ( v13 )
  {
    if ( (v13 & 4) != 0 )
    {
      v60 = (_DWORD *)(v12 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v60 )
      {
        v61 = *(_QWORD *)v60;
        v62 = *(_DWORD *)(*(_QWORD *)v60 + 12LL);
        if ( v60[2] != v62 )
        {
          v60[2] = v62;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v61 + 152LL))(v61, v11);
          v14 = *(_QWORD *)(a3 + 128);
          if ( (*(_BYTE *)(v14 + 24) & 1) == 0 )
            goto LABEL_5;
LABEL_78:
          v15 = sub_B96980(v14);
          goto LABEL_6;
        }
      }
    }
  }
LABEL_4:
  v14 = *(_QWORD *)(a3 + 128);
  if ( (*(_BYTE *)(v14 + 24) & 1) != 0 )
    goto LABEL_78;
LABEL_5:
  v15 = *(_QWORD *)(v14 + 24);
LABEL_6:
  v16 = *(_QWORD *)(a3 + 104);
  v17 = *(_QWORD *)(v16 + 96);
  v18 = v17;
  v19 = v17 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v17 & 1) != 0 )
    goto LABEL_7;
  a4 = v17 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (v17 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
    goto LABEL_7;
  if ( (v17 & 2) != 0 )
  {
    v70 = *(_QWORD *)(a4 + 18360);
    v71 = v16 & 0xFFFFFFFFFFFFFFFBLL;
    if ( v70 )
    {
      v72 = *(_QWORD *)(a4 + 2352);
      *(_QWORD *)(a4 + 2432) += 24LL;
      v73 = (v72 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(_QWORD *)(a4 + 2360) >= v73 + 24 && v72 )
      {
        *(_QWORD *)(a4 + 2352) = v73 + 24;
        v74 = (v72 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      }
      else
      {
        v74 = sub_986170(a4 + 2352, 24, 24, 3, a5, a6);
        v73 = v74 & 0xFFFFFFFFFFFFFFFBLL;
      }
      *(_QWORD *)v74 = v70;
      v71 = v73 | 4;
      *(_DWORD *)(v74 + 8) = 0;
      *(_QWORD *)(v74 + 16) = v16;
    }
    v19 = v71 & 0xFFFFFFFFFFFFFFFELL;
    v18 = v19 | 1;
    *(_QWORD *)(v16 + 96) = v19 | 1;
LABEL_7:
    if ( v19 )
    {
      if ( (v19 & 4) != 0 )
      {
        v20 = (_DWORD *)(v18 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v20 )
        {
          v21 = *(_QWORD *)v20;
          v22 = *(_DWORD *)(*(_QWORD *)v20 + 12LL);
          if ( v20[2] != v22 )
          {
            v20[2] = v22;
            (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v21 + 152LL))(v21, v16);
          }
        }
      }
    }
    v23 = *(_QWORD *)(a3 + 128);
    v16 = *(_QWORD *)(a3 + 104);
    v24 = *(_QWORD *)(v16 + 96);
    v25 = v24 & 0xFFFFFFFFFFFFFFFELL;
    v79 = v15 + 24LL * *(unsigned int *)(v23 + 16);
    LOBYTE(v17) = v24;
    if ( (v24 & 1) != 0 )
      goto LABEL_13;
    a4 = v24 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (v24 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
      goto LABEL_13;
    goto LABEL_45;
  }
  v23 = *(_QWORD *)(a3 + 128);
  v24 = 3LL * *(unsigned int *)(v23 + 16);
  v25 = v15 + 24LL * *(unsigned int *)(v23 + 16);
  v79 = v25;
LABEL_45:
  if ( (v17 & 2) == 0 )
    goto LABEL_19;
  v42 = *(_QWORD *)(a4 + 18360);
  v43 = v16 & 0xFFFFFFFFFFFFFFFBLL;
  if ( v42 )
  {
    v44 = *(_QWORD *)(a4 + 2352);
    *(_QWORD *)(a4 + 2432) += 24LL;
    v45 = (v44 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( *(_QWORD *)(a4 + 2360) >= v45 + 24 && v44 )
    {
      *(_QWORD *)(a4 + 2352) = v45 + 24;
      v46 = (v44 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    }
    else
    {
      v46 = sub_986170(a4 + 2352, 24, 24, 3, a5, a6);
      v45 = v46 & 0xFFFFFFFFFFFFFFFBLL;
    }
    *(_QWORD *)v46 = v42;
    v43 = v45 | 4;
    *(_DWORD *)(v46 + 8) = 0;
    *(_QWORD *)(v46 + 16) = v16;
  }
  v25 = v43 & 0xFFFFFFFFFFFFFFFELL;
  v24 = v25 | 1;
  *(_QWORD *)(v16 + 96) = v25 | 1;
LABEL_13:
  if ( v25 )
  {
    v25 &= 4u;
    if ( (_DWORD)v25 )
    {
      v24 &= 0xFFFFFFFFFFFFFFF8LL;
      if ( v24 )
      {
        v26 = *(_QWORD *)v24;
        v27 = *(_DWORD *)(*(_QWORD *)v24 + 12LL);
        if ( *(_DWORD *)(v24 + 8) != v27 )
        {
          *(_DWORD *)(v24 + 8) = v27;
          v25 = v16;
          (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v26 + 152LL))(v26, v16);
        }
      }
    }
  }
  v23 = *(_QWORD *)(a3 + 128);
LABEL_19:
  if ( (*(_BYTE *)(v23 + 24) & 1) != 0 )
  {
    v28 = sub_B96980(v23);
    if ( v28 != v79 )
      goto LABEL_21;
  }
  else
  {
    v28 = *(_QWORD *)(v23 + 24);
    if ( v28 != v79 )
    {
LABEL_21:
      v29 = 0;
      v30 = v28;
      while ( 1 )
      {
        v40 = *(_QWORD *)(**(_QWORD **)(v30 + 16) & 0xFFFFFFFFFFFFFFF0LL);
        if ( (*(_BYTE *)(v40 + 8) & 0xF) != 0 )
          v40 = sub_F64F00(**(_QWORD **)(v30 + 16), v25, v24, a4, a5);
        if ( (*(_BYTE *)(*(_QWORD *)(v40 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0 )
        {
          v47 = *(_QWORD *)(**(_QWORD **)(v30 + 16) & 0xFFFFFFFFFFFFFFF0LL);
          if ( (*(_BYTE *)(v47 + 8) & 0xF) != 0 )
            v47 = sub_F64F00(**(_QWORD **)(v30 + 16), v25, v24, a4, a5);
          v48 = (char *)sub_F63270(*(_QWORD *)(v47 & 0xFFFFFFFFFFFFFFF0LL), v25, v24, a4, a5, a6);
          if ( v48 && v48[28] < 0 )
          {
            v25 = 1;
            sub_B88650(a2, 1);
          }
          v49 = *(_QWORD **)(a1 + 248);
          v50 = v49[294];
          v49[304] += 24LL;
          v51 = (v50 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v49[295] >= v51 + 24 && v50 )
          {
            v49[294] = v51 + 24;
            v52 = (__m128 *)((v50 + 7) & 0xFFFFFFFFFFFFFFF8LL);
          }
          else
          {
            v25 = 24;
            v52 = (__m128 *)sub_986170((__int64)(v49 + 294), 24, 24, 3, a5, a6);
            v51 = (unsigned __int64)v52;
          }
          a7 = (__m128)_mm_loadu_si128((const __m128i *)v30);
          *v52 = a7;
          a4 = HIDWORD(v89);
          v52[1].m128_u64[0] = *(_QWORD *)(v30 + 16);
          v53 = (unsigned int)v89;
          v54 = (unsigned int)v89 + 1LL;
          if ( v54 > a4 )
          {
            v25 = (unsigned __int64)v90;
            sub_2237220(&v88, v90, v54, 8);
            v53 = (unsigned int)v89;
          }
          v24 = (__int64)v88;
          *((_QWORD *)v88 + v53) = v51;
          LODWORD(v89) = v89 + 1;
          goto LABEL_31;
        }
        v36 = 0;
        if ( *(_DWORD *)(v30 + 8) )
        {
          ptr = v93;
          v31 = *(_QWORD **)(v30 + 16);
          v92 = 0x200000000LL;
          sub_1E4C9B0(a1, *v31, v31 + 1, &ptr);
          v85 = 0;
          v25 = *(unsigned int *)(v30 + 8);
          v32 = *(_DWORD *)v30;
          v86 = 0;
          v87 = 0;
          v33 = sub_1E54D70(a1, v25, v32, (_DWORD)ptr, v92, v9, (__int64)&v85, (__int64)&v86, (__int64)&v87);
          if ( (_BYTE)v33 )
            goto LABEL_53;
          v81 = v85;
          if ( v85 )
          {
            v33 = v29;
            if ( v87 != 1 )
            {
              v63 = 0;
              v64 = v30;
              v65 = v29;
              do
              {
                ++v63;
                v67 = *(_DWORD *)v64;
                v25 = *(_QWORD *)(v64 + 16);
                v68 = *(_DWORD *)(a1 + 12632);
                *(_DWORD *)(a1 + 12632) = v63;
                v69 = (void **)sub_1DD4AE0(a1, (void **)v25, v9, v67, 0, 0, a7, a8);
                if ( v69 )
                {
                  v75 = sub_18762A0(
                          (__int64 *)a1,
                          a2,
                          *(_QWORD *)v64,
                          *(_BYTE *)(v64 + 12) & 1,
                          (*(_BYTE *)(v64 + 12) >> 2) & 3,
                          v69,
                          a7,
                          0);
                  v25 = v77;
                  if ( v75 )
                  {
                    a4 = (unsigned int)v89;
                    v25 = HIDWORD(v89);
                    v66 = (unsigned int)v89 + 1LL;
                    if ( v66 > HIDWORD(v89) )
                    {
                      v84 = v75;
                      v25 = (unsigned __int64)v90;
                      sub_2237220(&v88, v90, v66, 8);
                      a4 = (unsigned int)v89;
                      v75 = v84;
                    }
                    v24 = (__int64)v88;
                    *((_QWORD *)v88 + a4) = v75;
                    LODWORD(v89) = v89 + 1;
                  }
                  else
                  {
                    v65 = v81;
                  }
                  *(_DWORD *)(a1 + 12632) = v68;
                }
                else
                {
                  *(_DWORD *)(a1 + 12632) = v68;
                  v65 = v81;
                }
              }
              while ( v87 - 1 != v63 );
              v33 = v65;
              v30 = v64;
            }
LABEL_53:
            if ( ptr != v93 )
              free(ptr);
            v29 = v33;
            goto LABEL_31;
          }
          v34 = *(_DWORD *)(a1 + 12632);
          v35 = *(_DWORD *)v30;
          v36 = *(_DWORD *)(v30 + 8);
          v25 = *(_QWORD *)(v30 + 16);
          *(_DWORD *)(a1 + 12632) = 0;
          v37 = (void **)sub_1DD4AE0(a1, (void **)v25, v9, v35, 0, 0, a7, a8);
          *(_DWORD *)(a1 + 12632) = v34;
          if ( ptr != v93 )
          {
            v82 = v37;
            free(ptr);
            v37 = v82;
          }
          if ( !v37 )
            goto LABEL_37;
        }
        else
        {
          v25 = *(_QWORD *)(v30 + 16);
          v37 = (void **)sub_1DD4AE0(a1, (void **)v25, v9, *(_DWORD *)v30, 0, 0, a7, a8);
          if ( !v37 )
            goto LABEL_37;
        }
        v25 = a2;
        v38 = sub_18762A0(
                (__int64 *)a1,
                a2,
                *(_QWORD *)v30,
                *(_BYTE *)(v30 + 12) & 1,
                (*(_BYTE *)(v30 + 12) >> 2) & 3,
                v37,
                a7,
                v36);
        v24 = v76;
        a4 = v78;
        if ( v38 )
        {
          a4 = (unsigned int)v89;
          v25 = HIDWORD(v89);
          v39 = (unsigned int)v89 + 1LL;
          if ( v39 > HIDWORD(v89) )
          {
            v83 = v38;
            v25 = (unsigned __int64)v90;
            sub_2237220(&v88, v90, v39, 8);
            a4 = (unsigned int)v89;
            v38 = v83;
          }
          v24 = (__int64)v88;
          *((_QWORD *)v88 + a4) = v38;
          LODWORD(v89) = v89 + 1;
LABEL_31:
          v30 += 24;
          if ( v79 == v30 )
            goto LABEL_38;
        }
        else
        {
LABEL_37:
          v29 = 1;
          v30 += 24;
          if ( v79 == v30 )
          {
LABEL_38:
            if ( (_BYTE)v29 )
              goto LABEL_39;
            break;
          }
        }
      }
    }
  }
  v29 = sub_18717A0(a1, a2, (unsigned __int64)v88, (unsigned int)v89, a5, a6);
LABEL_39:
  if ( v88 != v90 )
    free(v88);
  return v29;
}
