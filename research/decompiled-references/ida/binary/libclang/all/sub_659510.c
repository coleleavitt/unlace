void __fastcall sub_659510(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdx
  const char *v3; // rcx
  __int64 v4; // r14
  __int64 v5; // r13
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rax
  __m128i v12; // xmm3
  __m128 v13; // xmm5
  __m128 v14; // xmm1
  unsigned __int64 v15; // r15
  int v16; // esi
  bool v17; // al
  int v18; // eax
  void **v19; // rbx
  _BYTE *v20; // rsi
  __int64 v21; // rax
  __int64 *v22; // r12
  __int64 v23; // r13
  char v24; // al
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rdx
  _BYTE *v29; // rbp
  size_t v30; // r14
  __int64 *v31; // rdi
  __int64 *v32; // rax
  __int64 *v33; // rax
  __int64 *v34; // rdi
  char *v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rax
  unsigned __int64 v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // rdx
  const void *v41; // r14
  size_t v42; // r15
  _QWORD *v43; // rdi
  _BYTE *v44; // rax
  __int64 *v45; // rbp
  __m128i v46; // xmm2
  __int64 v47; // rbp
  int v48; // eax
  char v49; // dl
  __int64 i; // rbx
  __m128i v51; // xmm0
  unsigned int *v52; // rcx
  __int64 v53; // rax
  char v54; // al
  char *v55; // rax
  __int64 *v56; // rbp
  int v57; // ebx
  unsigned __int64 v58; // rcx
  int v59; // eax
  char *v60; // rdi
  unsigned int v61; // eax
  unsigned int v62; // eax
  unsigned int v63; // edx
  __int64 v64; // rsi
  char v65; // [rsp+1Fh] [rbp-419h]
  int v66; // [rsp+20h] [rbp-418h]
  int v67; // [rsp+24h] [rbp-414h]
  __int64 v68; // [rsp+28h] [rbp-410h]
  __int64 v69; // [rsp+38h] [rbp-400h]
  __m128i v70; // [rsp+60h] [rbp-3D8h] BYREF
  _QWORD *v71; // [rsp+70h] [rbp-3C8h]
  __int64 *v72; // [rsp+78h] [rbp-3C0h]
  const char *v73; // [rsp+80h] [rbp-3B8h]
  __int64 v74; // [rsp+88h] [rbp-3B0h]
  const __m128i *v75; // [rsp+90h] [rbp-3A8h]
  _BYTE *v76; // [rsp+98h] [rbp-3A0h]
  unsigned __int64 v77; // [rsp+A0h] [rbp-398h]
  _QWORD *v78; // [rsp+A8h] [rbp-390h]
  __int64 v79; // [rsp+B0h] [rbp-388h]
  void **v80; // [rsp+B8h] [rbp-380h]
  _BYTE *v81; // [rsp+C0h] [rbp-378h]
  __int64 *v82; // [rsp+C8h] [rbp-370h]
  bool v83; // [rsp+D7h] [rbp-361h] BYREF
  __int64 v84; // [rsp+D8h] [rbp-360h] BYREF
  _BYTE v85[32]; // [rsp+E0h] [rbp-358h] BYREF
  __int64 v86[4]; // [rsp+100h] [rbp-338h] BYREF
  __int64 v87[4]; // [rsp+120h] [rbp-318h] BYREF
  void *v88[2]; // [rsp+140h] [rbp-2F8h] BYREF
  __int64 v89; // [rsp+150h] [rbp-2E8h] BYREF
  void *v90; // [rsp+160h] [rbp-2D8h]
  __m128 v91; // [rsp+168h] [rbp-2D0h] BYREF
  void *v92; // [rsp+180h] [rbp-2B8h] BYREF
  __int64 v93; // [rsp+188h] [rbp-2B0h]
  _QWORD v94[2]; // [rsp+190h] [rbp-2A8h] BYREF
  void *v95[2]; // [rsp+1A0h] [rbp-298h] BYREF
  _QWORD v96[2]; // [rsp+1B0h] [rbp-288h] BYREF
  __m128i v97; // [rsp+1C0h] [rbp-278h] BYREF
  _QWORD v98[6]; // [rsp+1D0h] [rbp-268h] BYREF
  void *ptr[2]; // [rsp+200h] [rbp-238h] BYREF
  __int64 v100; // [rsp+210h] [rbp-228h] BYREF
  char v101; // [rsp+218h] [rbp-220h] BYREF
  void *v102; // [rsp+270h] [rbp-1C8h] BYREF
  __m128i si128; // [rsp+278h] [rbp-1C0h]
  _BYTE v104[136]; // [rsp+288h] [rbp-1B0h] BYREF
  void *v105[2]; // [rsp+310h] [rbp-128h] BYREF
  _QWORD v106[10]; // [rsp+320h] [rbp-118h] BYREF
  _QWORD v107[2]; // [rsp+370h] [rbp-C8h] BYREF
  char v108; // [rsp+380h] [rbp-B8h] BYREF

  v2 = 0;
  v3 = &byte_3B9466E;
  v4 = (__int64)a1;
  v5 = a2;
  v6 = *(_QWORD *)(a2 + 40);
  if ( (v6 & 7) == 0 )
  {
    v7 = v6 & 0xFFFFFFFFFFFFFFF8LL;
    v2 = v7;
    if ( v7 )
    {
      v52 = *(unsigned int **)(v7 + 16);
      v2 = *v52;
      v3 = (const char *)(v52 + 4);
    }
  }
  v73 = v3;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E280);
  v74 = v2;
  v76 = v104;
  v102 = v104;
  sub_11240B0(a2, &v102);
  v8 = *(unsigned int *)(a2 + 24);
  v9 = *(_QWORD *)(*a1 + 2152LL);
  v75 = (const __m128i *)v85;
  sub_CAE550(v85, v9, v8, 1);
  v10 = v5;
  v69 = sub_6B37C0(*a1);
  if ( v69
    || (*(_BYTE *)(v5 + 28) & 0x7Fu) - 32 <= 0x11
    && (v53 = sub_B0D8A0(*(_QWORD *)(*(_QWORD *)(v5 + 48) & 0xFFFFFFFFFFFFFFF0LL)), (v10 = v53) != 0)
    && (v54 = *(_BYTE *)(v53 + 74), (v54 & 4) != 0)
    && (v54 & 1) != 0
    && (v69 = sub_6B37C0(*a1)) != 0
    || (v10 = v5, (v69 = sub_6F4910(*a1, v5, 0)) != 0) )
  {
    v11 = sub_6BB140(*a1, v10);
    sub_AA92F0(ptr, v69, *(_QWORD *)(*a1 + 2152LL), v11);
    v12 = _mm_load_si128((const __m128i *)ptr);
    *(_OWORD *)v105 = 0;
    v69 = v100;
    v106[0] = 0;
    v100 = 0;
    v70 = v12;
    *(_OWORD *)ptr = 0;
    sub_646A80((__int64 *)v105);
    sub_646A80((__int64 *)ptr);
  }
  else
  {
    v70 = 0;
  }
  v14 = (__m128)_mm_load_si128(&v70);
  v15 = _mm_movehl_ps(v13, v14).m128_u64[0];
  sub_FD5EC0(v86, v5);
  sub_FCD270(v87, v5);
  v16 = *(_DWORD *)(v5 + 24);
  v72 = (__int64 *)a1[1];
  v17 = 0;
  if ( v16 )
  {
    v18 = sub_CAE830(*(_QWORD *)(*a1 + 2152LL));
    v17 = v18 != 3 && v18 != 0;
  }
  v19 = v88;
  v20 = (_BYTE *)v5;
  v83 = v17;
  sub_643500((__int64 *)v88, v5);
  v105[0] = v106;
  v71 = v106;
  v107[0] = &v108;
  v105[1] = (void *)0x100000000LL;
  v107[1] = 0x100000000LL;
  v21 = *(_QWORD *)(v5 + 184);
  v22 = (__int64 *)(v21 + 24);
  if ( 8 * *(_DWORD *)(v21 + 20) )
  {
    v68 = v21 + (unsigned int)(8 * *(_DWORD *)(v21 + 20)) + 24;
    v77 = v15;
    v78 = a1;
    v79 = v5;
    v80 = v88;
    while ( 1 )
    {
      v23 = *v22;
      if ( (*(_BYTE *)(*v22 + 28) & 0x7F) == 0x41 )
        break;
LABEL_41:
      if ( (__int64 *)v68 == ++v22 )
      {
        v15 = v77;
        v4 = (__int64)v78;
        v5 = v79;
        v19 = v80;
        goto LABEL_43;
      }
    }
    v91.m128_i8[8] = 0;
    v91.m128_u64[0] = 0;
    v90 = &v91.m128_u16[4];
    v24 = *(_BYTE *)(v23 + 60);
    if ( (v24 & 2) == 0 )
    {
      v20 = nullptr;
      std::string::_M_replace();
      goto LABEL_24;
    }
    if ( (v24 & 4) == 0 )
      BUG();
    v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v23 + 88) + 56LL) + 40LL);
    if ( (v25 & 7) != 0 || (v26 = v25 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    {
      ptr[0] = &v100;
    }
    else
    {
      v27 = *(_QWORD **)(v26 + 16);
      v28 = *v27;
      v29 = v27 + 2;
      ptr[0] = &v100;
      v30 = (unsigned int)v28;
      v97.m128i_i64[0] = (unsigned int)v28;
      if ( (v28 & 0xFFFFFFF0) != 0 )
      {
        ptr[0] = (void *)std::string::_M_create();
        v31 = (__int64 *)ptr[0];
        v100 = v97.m128i_i64[0];
LABEL_17:
        v20 = v29;
        memcpy(v31, v29, v30);
        v30 = v97.m128i_i64[0];
        v32 = (__int64 *)((char *)ptr[0] + v97.m128i_i64[0]);
        goto LABEL_18;
      }
      if ( (unsigned int)v28 == 1 )
      {
        LOBYTE(v100) = *((_BYTE *)v27 + 16);
        v32 = (__int64 *)((char *)&v100 + 1);
LABEL_18:
        ptr[1] = (void *)v30;
        *(_BYTE *)v32 = 0;
        v33 = (__int64 *)v90;
        v34 = (__int64 *)v90;
        if ( v90 == &v91.m128_u16[4] )
        {
          if ( ptr[0] != &v100 )
          {
            v51 = _mm_loadu_si128((const __m128i *)&ptr[1]);
            v90 = ptr[0];
            v91 = (__m128)v51;
LABEL_67:
            ptr[0] = &v100;
            v33 = &v100;
            goto LABEL_22;
          }
          v35 = (char *)ptr[1];
          v20 = ptr[1];
        }
        else
        {
          v35 = (char *)ptr[1];
          v20 = ptr[1];
          if ( ptr[0] != &v100 )
          {
            v90 = ptr[0];
            v36 = v91.m128_i64[1];
            v91 = _mm_loadh_ps((const double *)&v100);
            if ( v33 )
            {
              ptr[0] = v33;
              v100 = v36;
              goto LABEL_22;
            }
            goto LABEL_67;
          }
        }
        if ( !v35 )
        {
LABEL_91:
          v91.m128_u64[0] = (unsigned __int64)v20;
          v20[(_QWORD)v33] = 0;
          v33 = (__int64 *)ptr[0];
LABEL_22:
          ptr[1] = nullptr;
          *(_BYTE *)v33 = 0;
          if ( ptr[0] != &v100 )
          {
            v20 = (_BYTE *)(v100 + 1);
            operator delete(ptr[0], v100 + 1);
          }
LABEL_24:
          v65 = sub_7D53F0(v23, v20);
          v66 = sub_7D53B0(v23);
          v67 = sub_7D53D0(v23);
          v37 = *(_QWORD *)(v23 + 40);
          if ( (v37 & 7) != 0 || (v38 = v37 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
          {
            v95[0] = v96;
          }
          else
          {
            v39 = *(_QWORD **)(v38 + 16);
            v40 = *v39;
            v41 = v39 + 2;
            v95[0] = v96;
            v42 = (unsigned int)v40;
            ptr[0] = (void *)(unsigned int)v40;
            if ( (v40 & 0xFFFFFFF0) != 0 )
            {
              v95[0] = (void *)std::string::_M_create();
              v43 = v95[0];
              v96[0] = ptr[0];
LABEL_28:
              memcpy(v43, v41, v42);
              v42 = (size_t)ptr[0];
              v44 = (char *)ptr[0] + (unsigned __int64)v95[0];
LABEL_29:
              v95[1] = (void *)v42;
              *v44 = 0;
              v92 = v94;
              sub_63E170((__int64 *)&v92, v90, (__int64)v90 + v91.m128_u64[0]);
              if ( LODWORD(v105[1]) >= (unsigned __int64)HIDWORD(v105[1]) )
              {
                v82 = (__int64 *)v105;
                v55 = (char *)sub_25D5F70(v105, v71, 0, 80, &v84);
                v97.m128i_i64[0] = (__int64)v98;
                v81 = v55;
                v56 = (__int64 *)&v55[80 * LODWORD(v105[1])];
                sub_63E170(v97.m128i_i64, (_BYTE *)v95[0], (__int64)v95[0] + (unsigned __int64)v95[1]);
                ptr[0] = &v100;
                sub_63E170((__int64 *)ptr, v92, (__int64)v92 + v93);
                *v56 = (__int64)(v56 + 2);
                sub_63E170(v56, (_BYTE *)ptr[0], (__int64)ptr[0] + (unsigned __int64)ptr[1]);
                v56[4] = (__int64)(v56 + 6);
                sub_63E170(v56 + 4, v97.m128i_i64[0], v97.m128i_i64[0] + v97.m128i_i64[1]);
                *((_DWORD *)v56 + 16) = v67;
                *((_DWORD *)v56 + 17) = v66;
                *((_BYTE *)v56 + 72) = v65;
                if ( ptr[0] != &v100 )
                  operator delete(ptr[0], v100 + 1);
                if ( (_QWORD *)v97.m128i_i64[0] != v98 )
                  operator delete((void *)v97.m128i_i64[0], v98[0] + 1LL);
                v20 = v81;
                sub_648CA0(v82, (__int64)v81);
                v57 = v84;
                if ( v105[0] != v71 )
                  free(v105[0]);
                ++LODWORD(v105[1]);
                HIDWORD(v105[1]) = v57;
                v105[0] = v81;
              }
              else
              {
                v97.m128i_i64[0] = (__int64)v98;
                v45 = (__int64 *)((char *)v105[0] + 80 * LODWORD(v105[1]));
                sub_63E170(v97.m128i_i64, (_BYTE *)v95[0], (__int64)v95[0] + (unsigned __int64)v95[1]);
                ptr[0] = &v100;
                sub_63E170((__int64 *)ptr, v92, (__int64)v92 + v93);
                *v45 = (__int64)(v45 + 2);
                sub_63E170(v45, (_BYTE *)ptr[0], (__int64)ptr[0] + (unsigned __int64)ptr[1]);
                v45[4] = (__int64)(v45 + 6);
                v20 = (_BYTE *)v97.m128i_i64[0];
                sub_63E170(v45 + 4, v97.m128i_i64[0], v97.m128i_i64[0] + v97.m128i_i64[1]);
                *((_DWORD *)v45 + 16) = v67;
                *((_DWORD *)v45 + 17) = v66;
                *((_BYTE *)v45 + 72) = v65;
                if ( ptr[0] != &v100 )
                {
                  v20 = (_BYTE *)(v100 + 1);
                  operator delete(ptr[0], v100 + 1);
                }
                if ( (_QWORD *)v97.m128i_i64[0] != v98 )
                {
                  v20 = (_BYTE *)(v98[0] + 1LL);
                  operator delete((void *)v97.m128i_i64[0], v98[0] + 1LL);
                }
                ++LODWORD(v105[1]);
              }
              if ( v92 != v94 )
              {
                v20 = (_BYTE *)(v94[0] + 1LL);
                operator delete(v92, v94[0] + 1LL);
              }
              if ( v95[0] != v96 )
              {
                v20 = (_BYTE *)(v96[0] + 1LL);
                operator delete(v95[0], v96[0] + 1LL);
              }
              if ( v90 != &v91.m128_u16[4] )
              {
                v20 = (_BYTE *)(v91.m128_u64[1] + 1);
                operator delete(v90, v91.m128_u64[1] + 1);
              }
              goto LABEL_41;
            }
            if ( (unsigned int)v40 == 1 )
            {
              LOBYTE(v96[0]) = *((_BYTE *)v39 + 16);
              v44 = (char *)v96 + 1;
              goto LABEL_29;
            }
            v43 = v96;
            if ( (_DWORD)v40 )
              goto LABEL_28;
          }
          v44 = v96;
          v42 = 0;
          goto LABEL_29;
        }
        if ( v35 == (_BYTE *)&dword_0 + 1 )
        {
          *(_BYTE *)v90 = v100;
          v20 = ptr[1];
          v33 = (__int64 *)v90;
          goto LABEL_91;
        }
        if ( (unsigned int)v35 >= 8 )
        {
          *(_QWORD *)v90 = v100;
          *(__int64 *)((char *)v34 + (unsigned int)v35 - 8) = *(__int64 *)((char *)&ptr[1] + (unsigned int)v35);
          v58 = (unsigned __int64)(v34 + 1) & 0xFFFFFFFFFFFFFFF8LL;
          v59 = (_DWORD)v34 - v58;
          v60 = (char *)((char *)&v100 - ((char *)v34 - v58));
          v61 = ((_DWORD)v35 + v59) & 0xFFFFFFF8;
          if ( v61 >= 8 )
          {
            v62 = v61 & 0xFFFFFFF8;
            v63 = 0;
            do
            {
              v64 = v63;
              v63 += 8;
              *(_QWORD *)(v58 + v64) = *(_QWORD *)&v60[v64];
            }
            while ( v63 < v62 );
          }
        }
        else
        {
          if ( ((unsigned __int8)v35 & 4) != 0 )
          {
            *(_DWORD *)v90 = v100;
            *(_DWORD *)((char *)v34 + (unsigned int)v35 - 4) = *(_DWORD *)((char *)&ptr[1] + (unsigned int)v35 + 4);
            v34 = (__int64 *)v90;
            v35 = (char *)ptr[1];
            goto LABEL_90;
          }
          if ( !(_DWORD)v35 )
          {
LABEL_90:
            v20 = v35;
            v33 = v34;
            goto LABEL_91;
          }
          *(_BYTE *)v90 = v100;
          if ( ((unsigned __int8)v35 & 2) != 0 )
          {
            *(_WORD *)((char *)v34 + (unsigned int)v35 - 2) = *(_WORD *)((char *)&ptr[1] + (unsigned int)v35 + 6);
            v34 = (__int64 *)v90;
            v35 = (char *)ptr[1];
            goto LABEL_90;
          }
        }
        v34 = (__int64 *)v90;
        v35 = (char *)ptr[1];
        goto LABEL_90;
      }
      v31 = &v100;
      if ( (_DWORD)v28 )
        goto LABEL_17;
    }
    v32 = &v100;
    v30 = 0;
    goto LABEL_18;
  }
LABEL_43:
  sub_766420(ptr, v5);
  sub_63E5A0((__int64)&v97, v4, v5);
  v46 = _mm_load_si128(&v70);
  v96[0] = v69;
  *(__m128i *)v95 = v46;
  v47 = sub_658D90(
          v72,
          (__int64)v102,
          si128.m128i_i64[0],
          (__int64)v73,
          v74,
          &v97,
          v75,
          (__int64)ptr,
          (__int64 *)v95,
          v86,
          v87,
          (__int64)v105,
          (__int64)v19,
          (unsigned __int8 *)&v83);
  if ( ptr[0] != &v101 )
    free(ptr[0]);
  sub_6469C0((__int64)v107);
  sub_646940((__int64)v105);
  if ( v88[0] != &v89 )
    operator delete(v88[0], v89 + 1);
  v48 = 5;
  v49 = *(_BYTE *)(v5 + 73) >> 5;
  if ( v49 != 2 )
    v48 = v49 == 0 ? 4 : 9;
  *(_DWORD *)(v47 + 352) = v48;
  sub_640BE0((__int64)v105, v4, v5);
  sub_63E210(v47 + 400, (__int64)v105);
  if ( v105[0] != v71 )
    free(v105[0]);
  sub_6441A0(v87);
  sub_6441A0(v86);
  for ( i = v14.m128_u64[0]; v15 != i; i += 80 )
  {
    if ( *(_QWORD *)i != i + 16 )
      operator delete(*(void **)i, *(_QWORD *)(i + 16) + 1LL);
  }
  if ( v14.m128_u64[0] )
    operator delete((void *)v14.m128_u64[0], v69 - v14.m128_u64[0]);
  if ( v102 != v76 )
    free(v102);
}

