void __fastcall sub_12100F0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        double a8)
{
  _BYTE *v12; // rcx
  const __m128i *v13; // rbx
  _QWORD *v14; // r8
  __int64 v15; // rax
  const __m128i *v16; // r9
  __int64 v17; // rax
  __int64 v18; // r10
  unsigned __int64 v19; // rdx
  void **v20; // rbx
  __int64 v21; // rbp
  void *v22; // r13
  __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  __int64 v25; // rsi
  int v26; // eax
  __int64 v27; // rcx
  void *v28; // rsi
  _QWORD *v29; // rbp
  void (__fastcall *v30)(_QWORD *); // rax
  __int64 v31; // r12
  __int64 v32; // rbx
  void *v33; // rdi
  _QWORD *v34; // rdi
  _QWORD *v35; // rdi
  void **v36; // r12
  void **v37; // rbx
  void *v38; // rdi
  _QWORD *v39; // rdi
  unsigned int v40; // eax
  __int64 v41; // rdx
  unsigned __int8 *v42; // rbp
  _BYTE *v43; // r15
  signed __int64 v44; // r13
  _QWORD *v45; // rax
  _QWORD *v46; // rdx
  __int64 v47; // rax
  int v48; // ecx
  __int64 v49; // rax
  void **v50; // r13
  _BYTE *v51; // rdi
  __int64 v52; // rax
  void **v53; // rbp
  unsigned __int64 v54; // rax
  __int64 v55; // r12
  __int64 v56; // rbx
  void *v57; // rdi
  void **v58; // rdi
  void **v59; // rdi
  void **v60; // rbx
  void **v61; // r12
  unsigned __int64 v62; // rbp
  __int64 v63; // rdi
  __int64 v64; // rdx
  size_t v65; // rdx
  unsigned __int64 v66; // rdx
  int v67; // eax
  __int64 v68; // rax
  __int64 v69; // r14
  __int64 v70; // rax
  __int64 v71; // r14
  void *v72; // rdi
  unsigned int v74; // [rsp+8h] [rbp-190h]
  __int64 v75; // [rsp+8h] [rbp-190h]
  __int64 *v76; // [rsp+10h] [rbp-188h]
  const __m128i *v77; // [rsp+20h] [rbp-178h]
  _BYTE *v78; // [rsp+20h] [rbp-178h]
  __int64 v79; // [rsp+20h] [rbp-178h]
  _QWORD *v80; // [rsp+20h] [rbp-178h]
  __int64 v81; // [rsp+28h] [rbp-170h]
  __int64 v82; // [rsp+30h] [rbp-168h]
  const __m128i *v83; // [rsp+38h] [rbp-160h]
  void *src[2]; // [rsp+40h] [rbp-158h] BYREF
  __int64 v85; // [rsp+50h] [rbp-148h] BYREF
  void *v86; // [rsp+60h] [rbp-138h]
  size_t v87; // [rsp+68h] [rbp-130h]
  _QWORD v88[2]; // [rsp+70h] [rbp-128h] BYREF
  void *v89; // [rsp+80h] [rbp-118h] BYREF
  unsigned __int64 v90; // [rsp+88h] [rbp-110h]
  __int64 v91; // [rsp+90h] [rbp-108h] BYREF
  void *v92; // [rsp+A0h] [rbp-F8h]
  __int64 v93; // [rsp+B0h] [rbp-E8h] BYREF
  __int16 v94; // [rsp+C0h] [rbp-D8h]
  void *ptr; // [rsp+D0h] [rbp-C8h] BYREF
  __int64 v96; // [rsp+D8h] [rbp-C0h]
  _QWORD v97[23]; // [rsp+E0h] [rbp-B8h] BYREF

  v76 = *(__int64 **)(*(_QWORD *)(a1 + 24) + 8LL);
  sub_21B7CF0(a6, 36);
  sub_21B7CF0(a6, 345);
  sub_21B7CF0(a6, 3480);
  sub_21B7CF0(a6, 3306);
  v12 = *(_BYTE **)a4;
  v13 = *(const __m128i **)a5;
  v14 = v97;
  v97[0] = "rcsD";
  v96 = 0x1000000002LL;
  v15 = *(unsigned int *)(a5 + 8);
  ptr = v97;
  v97[1] = v12;
  v16 = (const __m128i *)((char *)v13 + 40 * v15);
  if ( v16 != v13 )
  {
    do
    {
      while ( v13->m128i_i32[2] != 1 )
      {
        v13 = (const __m128i *)((char *)v13 + 40);
        if ( v16 == v13 )
          goto LABEL_8;
      }
      v17 = (unsigned int)v96;
      v18 = v13->m128i_i64[0];
      v19 = (unsigned int)v96 + 1LL;
      if ( v19 > HIDWORD(v96) )
      {
        v83 = v16;
        v82 = v13->m128i_i64[0];
        v80 = v14;
        sub_2237220(&ptr, v14, v19, 8);
        v16 = v83;
        v18 = v82;
        v17 = (unsigned int)v96;
        v14 = v80;
      }
      v13 = (const __m128i *)((char *)v13 + 40);
      *((_QWORD *)ptr + v17) = v18;
      LODWORD(v96) = v96 + 1;
    }
    while ( v16 != v13 );
LABEL_8:
    v12 = *(_BYTE **)a4;
  }
  v20 = &v89;
  if ( *(_DWORD *)(a4 + 8) == 1 )
  {
    LOWORD(v92) = 257;
    if ( *v12 )
    {
      v89 = v12;
      LOBYTE(v92) = 3;
    }
    v20 = &v89;
    v78 = v12;
    if ( !(unsigned int)sub_228C1E0(&v89, 0) )
    {
      LOWORD(v92) = 257;
      if ( *v78 )
      {
        v89 = v78;
        LOBYTE(v92) = 3;
      }
      v40 = sub_228BF70(&v89, 1);
      if ( v40 )
      {
        v74 = v40;
        v79 = v41;
        sub_FC70B0((__int64)&v89, *v76, 0, 477);
        (*(void (__fastcall **)(void **, __int64, _QWORD))(*(_QWORD *)v79 + 32LL))(src, v79, v74);
        v42 = (unsigned __int8 *)v89;
        v43 = src[0];
        v44 = (signed __int64)src[1];
        if ( !v89 )
        {
          v66 = v90;
          v67 = *(_DWORD *)(v90 + 14976);
          if ( v67 )
          {
            v68 = (unsigned int)(v67 - 1);
            *(_DWORD *)(v90 + 14976) = v68;
            v42 = *(unsigned __int8 **)(v66 + 8 * v68 + 14848);
            v69 = *((unsigned int *)v42 + 134);
            *v42 = 0;
            v70 = *((_QWORD *)v42 + 66);
            *((_DWORD *)v42 + 106) = 0;
            v71 = v70 + (v69 << 6);
            while ( v70 != v71 )
            {
              while ( 1 )
              {
                v71 -= 64;
                v72 = *(void **)(v71 + 24);
                if ( v72 == (void *)(v71 + 40) )
                  break;
                v75 = v70;
                operator delete(v72);
                v70 = v75;
                if ( v75 == v71 )
                  goto LABEL_112;
              }
            }
LABEL_112:
            *((_DWORD *)v42 + 134) = 0;
          }
          else
          {
            v42 = (unsigned __int8 *)operator new(0x3A0u);
            *v42 = 0;
            *((_QWORD *)v42 + 12) = v42 + 112;
            *((_QWORD *)v42 + 16) = v42 + 144;
            *((_QWORD *)v42 + 20) = v42 + 176;
            *((_QWORD *)v42 + 24) = v42 + 208;
            *((_QWORD *)v42 + 28) = v42 + 240;
            *((_QWORD *)v42 + 32) = v42 + 272;
            *((_QWORD *)v42 + 36) = v42 + 304;
            *((_QWORD *)v42 + 40) = v42 + 336;
            *((_QWORD *)v42 + 44) = v42 + 368;
            *((_QWORD *)v42 + 48) = v42 + 400;
            *((_QWORD *)v42 + 52) = v42 + 432;
            *((_QWORD *)v42 + 13) = 0;
            v42[112] = 0;
            *((_QWORD *)v42 + 17) = 0;
            v42[144] = 0;
            *((_QWORD *)v42 + 21) = 0;
            v42[176] = 0;
            *((_QWORD *)v42 + 25) = 0;
            v42[208] = 0;
            *((_QWORD *)v42 + 29) = 0;
            v42[240] = 0;
            *((_QWORD *)v42 + 33) = 0;
            v42[272] = 0;
            *((_QWORD *)v42 + 37) = 0;
            v42[304] = 0;
            *((_QWORD *)v42 + 41) = 0;
            v42[336] = 0;
            *((_QWORD *)v42 + 45) = 0;
            v42[368] = 0;
            *((_QWORD *)v42 + 49) = 0;
            v42[400] = 0;
            *((_QWORD *)v42 + 53) = 0x800000000LL;
            *((_QWORD *)v42 + 66) = v42 + 544;
            *((_QWORD *)v42 + 67) = 0x600000000LL;
          }
          v89 = v42;
        }
        v42[*v42 + 1] = 0;
        v86 = v88;
        if ( &v43[v44] && !v43 )
          std::__throw_logic_error("basic_string::_M_construct null not valid");
        if ( (unsigned __int64)v44 > 0xF )
        {
          if ( v44 < 0 )
            std::__throw_length_error("basic_string::_M_create");
          v45 = (_QWORD *)operator new(v44 + 1);
          v88[0] = v44;
          v86 = v45;
        }
        else
        {
          if ( v44 == 1 )
          {
            LOBYTE(v88[0]) = *v43;
            v45 = v88;
            goto LABEL_58;
          }
          v45 = v88;
          if ( !v44 )
          {
LABEL_58:
            v87 = v44;
            *((_BYTE *)v45 + v44) = 0;
            v46 = v89;
            v47 = *(unsigned __int8 *)v89;
            *(_BYTE *)v89 = v47 + 1;
            v48 = (unsigned __int8)v47;
            v49 = 4 * (v47 + 3);
            v50 = (void **)&v46[v49];
            v51 = (_BYTE *)v46[v49];
            if ( v86 == v88 )
            {
              v65 = v87;
              if ( v87 )
              {
                if ( v87 == 1 )
                  *v51 = v88[0];
                else
                  memcpy(v51, v86, v87);
                v65 = v87;
                v51 = *v50;
              }
              v50[1] = (void *)v65;
              v51[v65] = 0;
              v51 = v86;
            }
            else
            {
              if ( v51 == (_BYTE *)&v46[v49 + 2] )
              {
                *v50 = v86;
                v50[1] = (void *)v87;
                v50[2] = (void *)v88[0];
              }
              else
              {
                v52 = v46[4 * v48 + 14];
                *v50 = v86;
                v50[1] = (void *)v87;
                v50[2] = (void *)v88[0];
                if ( v51 )
                {
                  v86 = v51;
                  v88[0] = v52;
                  goto LABEL_62;
                }
              }
              v51 = v88;
              v86 = v88;
            }
LABEL_62:
            v87 = 0;
            *v51 = 0;
            if ( v86 != v88 )
              operator delete(v86);
            if ( src[0] != &v85 )
              operator delete(src[0]);
            if ( (_BYTE)v94 )
            {
              sub_FC7790(v91, (__int64 *)&v89, SHIBYTE(v94));
              v91 = 0;
              v94 = 0;
            }
            if ( v92 != &v93 )
              operator delete(v92);
            v53 = (void **)v89;
            if ( v89 )
            {
              v54 = v90;
              if ( v90 )
              {
                if ( (unsigned __int64)v89 < v90 || (unsigned __int64)v89 > v90 + 14848 )
                {
                  v55 = *((_QWORD *)v89 + 66);
                  v56 = v55 + ((unsigned __int64)*((unsigned int *)v89 + 134) << 6);
                  while ( v55 != v56 )
                  {
                    while ( 1 )
                    {
                      v56 -= 64;
                      v57 = *(void **)(v56 + 24);
                      if ( v57 == (void *)(v56 + 40) )
                        break;
                      operator delete(v57);
                      if ( v55 == v56 )
                        goto LABEL_77;
                    }
                  }
LABEL_77:
                  v58 = (void **)v53[66];
                  if ( v58 != v53 + 68 )
                    free(v58);
                  v59 = (void **)v53[52];
                  if ( v59 != v53 + 54 )
                    free(v59);
                  v60 = v53 + 48;
                  v61 = v53 + 8;
                  do
                  {
                    while ( *v60 != v60 + 2 )
                    {
                      operator delete(*v60);
                      v60 -= 4;
                      if ( v61 == v60 )
                        goto LABEL_84;
                    }
                    v60 -= 4;
                  }
                  while ( v61 != v60 );
LABEL_84:
                  operator delete(v53, 0x3A0u);
                }
                else
                {
                  v64 = *(unsigned int *)(v90 + 14976);
                  *(_DWORD *)(v90 + 14976) = v64 + 1;
                  *(_QWORD *)(v54 + 8 * v64 + 14848) = v53;
                }
              }
            }
            goto LABEL_41;
          }
        }
        memcpy(v45, v43, v44);
        v45 = v86;
        goto LABEL_58;
      }
    }
  }
  sub_112D580(&v89, *(_QWORD *)(a1 + 24));
  v21 = (*(__int64 (__fastcall **)(__int64, void *, unsigned __int64))(*(_QWORD *)a6 + 16LL))(a6, v89, v90);
  if ( v89 != &v91 )
    operator delete(v89);
  v77 = *(const __m128i **)a5;
  v81 = *(unsigned int *)(a5 + 8);
  v22 = (void *)operator new(0x208u);
  sub_1106AE0((__int64)v22, a3, a1, 0x100000000LL, (__int64)"@", v21, (__int64)&ptr, v77, v81, a4, 1, 0);
  v23 = *(unsigned int *)(a2 + 160);
  v24 = *(unsigned int *)(a2 + 164);
  v89 = v22;
  v25 = v23 + 1;
  v26 = v23;
  if ( v23 + 1 > v24 )
  {
    v62 = *(_QWORD *)(a2 + 152);
    v63 = a2 + 152;
    if ( v62 > (unsigned __int64)&v89 || (unsigned __int64)&v89 >= v62 + 8 * v23 )
    {
      sub_11673D0(v63, v25, a7, a8);
      v23 = *(unsigned int *)(a2 + 160);
      v27 = *(_QWORD *)(a2 + 152);
      v26 = *(_DWORD *)(a2 + 160);
    }
    else
    {
      sub_11673D0(v63, v25, a7, a8);
      v27 = *(_QWORD *)(a2 + 152);
      v23 = *(unsigned int *)(a2 + 160);
      v20 = (void **)((char *)&v89 + v27 - v62);
      v26 = *(_DWORD *)(a2 + 160);
    }
  }
  else
  {
    v27 = *(_QWORD *)(a2 + 152);
  }
  v28 = *v20;
  *v20 = nullptr;
  *(_QWORD *)(v27 + 8 * v23) = v28;
  v29 = v89;
  *(_DWORD *)(a2 + 160) = v26 + 1;
  if ( v29 )
  {
    v30 = *(void (__fastcall **)(_QWORD *))(*v29 + 8LL);
    if ( v30 == sub_10D4290 )
    {
      v31 = v29[58];
      v32 = v29[57];
      *v29 = &off_2BA8F30;
      if ( v31 != v32 )
      {
        do
        {
          if ( *(_BYTE *)(v32 + 32) && *(_QWORD *)v32 != v32 + 16 )
            operator delete(*(void **)v32);
          v32 += 40;
        }
        while ( v31 != v32 );
        v32 = v29[57];
      }
      if ( v32 )
        operator delete((void *)v32);
      v33 = (void *)v29[54];
      if ( v33 )
        operator delete(v33);
      v34 = (_QWORD *)v29[50];
      if ( v34 != v29 + 52 )
        operator delete(v34);
      v35 = (_QWORD *)v29[32];
      if ( v35 != v29 + 34 )
        free(v35);
      v36 = (void **)v29[29];
      v37 = (void **)v29[28];
      if ( v36 != v37 )
      {
        do
        {
          while ( *v37 != v37 + 2 )
          {
            operator delete(*v37);
            v37 += 4;
            if ( v37 == v36 )
            {
              v37 = (void **)v29[28];
              goto LABEL_34;
            }
          }
          v37 += 4;
        }
        while ( v36 != v37 );
        v37 = (void **)v29[28];
      }
LABEL_34:
      if ( v37 )
        operator delete(v37);
      v38 = (void *)v29[25];
      if ( v38 )
        operator delete(v38);
      v39 = (_QWORD *)v29[7];
      if ( v39 != v29 + 9 )
        free(v39);
      operator delete(v29, 0x208u);
    }
    else
    {
      v30(v29);
    }
  }
LABEL_41:
  if ( ptr != v97 )
    free(ptr);
}
