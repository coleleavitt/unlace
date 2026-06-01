_QWORD *__fastcall sub_13BD8D0(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // r13
  __int64 v5; // r14
  __int64 *v6; // rbp
  unsigned __int8 v7; // r12
  int v8; // r15d
  int v9; // r15d
  int v10; // r12d
  int v11; // eax
  __int64 v12; // rdi
  _QWORD *result; // rax
  __int64 v14; // rdi
  __int64 *v15; // r13
  __int64 *v16; // r12
  __int64 *v17; // rbp
  __int64 v18; // rdi
  __int64 *v19; // r13
  __int64 *v20; // r12
  __int64 *v21; // rbp
  __int64 v22; // rdi
  __int64 *v23; // r13
  __int64 *v24; // r12
  __int64 *v25; // rbp
  __int64 v26; // rdi
  __int64 *v27; // r13
  __int64 *v28; // r12
  __int64 *v29; // rbp
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  char *v34; // rsi
  __int64 v35; // rcx
  unsigned __int8 *v36; // r15
  bool v37; // r13
  _QWORD *v38; // rax
  _QWORD *v39; // rdx
  __int64 v40; // r8
  __int64 v41; // rax
  void **v42; // r13
  _BYTE *v43; // rdi
  __int64 v44; // rax
  void **v45; // r12
  unsigned __int64 v46; // rax
  void **v47; // r15
  void **v48; // rbp
  void **v49; // rdi
  void **v50; // rdi
  void **v51; // rbp
  void **v52; // r15
  char v53; // bp
  int v54; // eax
  unsigned __int64 v55; // rdi
  int v56; // eax
  __int64 v57; // rax
  __int64 v58; // rax
  char *v59; // r8
  char *v60; // r14
  char *v61; // rdi
  int v62; // eax
  int v63; // eax
  int v64; // eax
  size_t v65; // rdx
  __int64 v66; // rdx
  __int64 v67; // [rsp+18h] [rbp-F0h]
  __int64 v68; // [rsp+20h] [rbp-E8h]
  char v69; // [rsp+28h] [rbp-E0h]
  __int64 v70; // [rsp+28h] [rbp-E0h]
  __int64 v71; // [rsp+28h] [rbp-E0h]
  char *src; // [rsp+30h] [rbp-D8h]
  void *srca; // [rsp+30h] [rbp-D8h]
  __int64 v74; // [rsp+38h] [rbp-D0h]
  void *v75; // [rsp+40h] [rbp-C8h] BYREF
  size_t n; // [rsp+48h] [rbp-C0h]
  char v77[16]; // [rsp+50h] [rbp-B8h] BYREF
  void *v78; // [rsp+60h] [rbp-A8h]
  size_t v79; // [rsp+68h] [rbp-A0h]
  _QWORD v80[2]; // [rsp+70h] [rbp-98h] BYREF
  void *v81; // [rsp+80h] [rbp-88h] BYREF
  unsigned __int64 v82; // [rsp+88h] [rbp-80h]
  __int64 v83; // [rsp+90h] [rbp-78h]
  void *v84; // [rsp+A0h] [rbp-68h]
  __int64 v85; // [rsp+B0h] [rbp-58h] BYREF
  __int16 v86; // [rsp+C0h] [rbp-48h]

  v2 = *(_QWORD *)(a1 + 24);
  v68 = *(_QWORD *)(v2 + 48);
  v3 = *(_QWORD *)(v2 + 56);
  *(_QWORD *)(v2 + 56) = 0;
  v67 = v3;
  sub_FC6FE0(v2, *(_QWORD *)(a1 + 32), 0);
  v4 = *(_QWORD *)(a1 + 80);
  if ( v4 )
  {
    v5 = *(_QWORD *)(a1 + 24);
    if ( *(_DWORD *)(a1 + 96) )
    {
LABEL_3:
      v6 = *(__int64 **)(a1 + 48);
      v7 = *(_BYTE *)(*(_QWORD *)(v5 + 40) + 40LL);
      v69 = v7 >> 4;
      v8 = sub_13BB8C0(v5, v4, (__int64)"error", (__int64 **)(a1 + 136), v6[2], v6[3], v7 >> 7);
      v9 = sub_13BB8C0(v5, v4, (__int64)"warning", (__int64 **)(a1 + 160), v6[5], v6[6], (v7 & 0x40) != 0) + v8;
      v10 = sub_13BB8C0(v5, v4, (__int64)"remark", (__int64 **)(a1 + 184), v6[8], v6[9], (v7 & 0x20) != 0);
      v11 = sub_13BB8C0(v5, v4, (__int64)"note", (__int64 **)(a1 + 208), v6[11], v6[12], v69 & 1);
      v12 = *(_QWORD *)(a1 + 24);
      *(_DWORD *)(a1 + 12) += v11 + v9 + v10;
      goto LABEL_4;
    }
    sub_FC70B0((__int64)&v81, *(_QWORD *)(a1 + 24), 0, 778);
    v31 = *(_QWORD *)(a1 + 24);
    HIBYTE(v86) = 1;
    v32 = *(_QWORD *)(v31 + 40);
    v33 = *(_QWORD *)(v32 + 216);
    if ( *(_QWORD *)(v32 + 224) == v33 )
    {
      v34 = v77;
      strcpy(v77, "expected");
      v75 = v77;
      n = 8;
      if ( v81 )
      {
        v35 = 8;
        *((_BYTE *)v81 + *(unsigned __int8 *)v81 + 1) = 0;
        v38 = v80;
        v78 = v80;
        goto LABEL_93;
      }
      v35 = 8;
      v37 = 0;
    }
    else
    {
      v75 = v77;
      sub_13B3C40(&v75, *(_BYTE **)v33, *(_QWORD *)v33 + *(_QWORD *)(v33 + 8));
      v34 = (char *)v75;
      v35 = n;
      v36 = (unsigned __int8 *)v81;
      v37 = v75 == nullptr && (char *)v75 + n != nullptr;
      if ( v81 )
        goto LABEL_37;
    }
    v55 = v82;
    v56 = *(_DWORD *)(v82 + 14976);
    if ( v56 )
    {
      v57 = (unsigned int)(v56 - 1);
      *(_DWORD *)(v82 + 14976) = v57;
      v36 = *(unsigned __int8 **)(v55 + 8 * v57 + 14848);
      v58 = *((unsigned int *)v36 + 134);
      *v36 = 0;
      v59 = *((char **)v36 + 66);
      *((_DWORD *)v36 + 106) = 0;
      v60 = &v59[64 * v58];
      while ( v59 != v60 )
      {
        while ( 1 )
        {
          v60 -= 64;
          v61 = *((char **)v60 + 3);
          if ( v61 == v60 + 40 )
            break;
          v74 = v35;
          src = v59;
          operator delete(v61);
          v59 = src;
          v35 = v74;
          if ( src == v60 )
            goto LABEL_84;
        }
      }
LABEL_84:
      *((_DWORD *)v36 + 134) = 0;
    }
    else
    {
      srca = (void *)v35;
      v36 = (unsigned __int8 *)operator new(0x3A0u);
      *v36 = 0;
      *((_QWORD *)v36 + 12) = v36 + 112;
      *((_QWORD *)v36 + 16) = v36 + 144;
      *((_QWORD *)v36 + 20) = v36 + 176;
      *((_QWORD *)v36 + 24) = v36 + 208;
      *((_QWORD *)v36 + 28) = v36 + 240;
      *((_QWORD *)v36 + 32) = v36 + 272;
      *((_QWORD *)v36 + 36) = v36 + 304;
      *((_QWORD *)v36 + 40) = v36 + 336;
      *((_QWORD *)v36 + 44) = v36 + 368;
      *((_QWORD *)v36 + 48) = v36 + 400;
      *((_QWORD *)v36 + 52) = v36 + 432;
      *((_QWORD *)v36 + 13) = 0;
      v36[112] = 0;
      *((_QWORD *)v36 + 17) = 0;
      v36[144] = 0;
      *((_QWORD *)v36 + 21) = 0;
      v36[176] = 0;
      *((_QWORD *)v36 + 25) = 0;
      v36[208] = 0;
      *((_QWORD *)v36 + 29) = 0;
      v36[240] = 0;
      *((_QWORD *)v36 + 33) = 0;
      v36[272] = 0;
      *((_QWORD *)v36 + 37) = 0;
      v36[304] = 0;
      *((_QWORD *)v36 + 41) = 0;
      v36[336] = 0;
      *((_QWORD *)v36 + 45) = 0;
      v36[368] = 0;
      *((_QWORD *)v36 + 49) = 0;
      v36[400] = 0;
      *((_QWORD *)v36 + 53) = 0x800000000LL;
      *((_QWORD *)v36 + 66) = v36 + 544;
      v35 = (__int64)srca;
      *((_QWORD *)v36 + 67) = 0x600000000LL;
    }
    v81 = v36;
LABEL_37:
    v36[*v36 + 1] = 0;
    v38 = v80;
    v78 = v80;
    if ( v37 )
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    if ( (unsigned __int64)v35 > 0xF )
    {
      if ( v35 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      v70 = v35;
      v38 = (_QWORD *)operator new(v35 + 1);
      v35 = v70;
      v78 = v38;
      v80[0] = v70;
    }
    else
    {
      if ( v35 == 1 )
      {
        LOBYTE(v80[0]) = *v34;
        goto LABEL_41;
      }
      if ( !v35 )
      {
LABEL_41:
        v79 = v35;
        *((_BYTE *)v38 + v35) = 0;
        v39 = v81;
        v40 = *(unsigned __int8 *)v81;
        *(_BYTE *)v81 = v40 + 1;
        v41 = 4 * (v40 + 3);
        v42 = (void **)&v39[v41];
        v43 = (_BYTE *)v39[v41];
        if ( v78 == v80 )
        {
          v65 = v79;
          if ( v79 )
          {
            if ( v79 == 1 )
              *v43 = v80[0];
            else
              memcpy(v43, v78, v79);
            v65 = v79;
            v43 = *v42;
          }
          v42[1] = (void *)v65;
          v43[v65] = 0;
          v43 = v78;
          goto LABEL_45;
        }
        if ( v43 == (_BYTE *)&v39[v41 + 2] )
        {
          *v42 = v78;
          v42[1] = (void *)v79;
          v42[2] = (void *)v80[0];
        }
        else
        {
          v44 = v39[4 * (int)v40 + 14];
          *v42 = v78;
          v42[1] = (void *)v79;
          v42[2] = (void *)v80[0];
          if ( v43 )
          {
            v78 = v43;
            v80[0] = v44;
LABEL_45:
            v79 = 0;
            *v43 = 0;
            if ( v78 != v80 )
              operator delete(v78);
            if ( v75 != v77 )
              operator delete(v75);
            if ( (_BYTE)v86 )
            {
              sub_FC7790(v83, (__int64 *)&v81, SHIBYTE(v86));
              v83 = 0;
              v86 = 0;
            }
            if ( v84 != &v85 )
              operator delete(v84);
            v45 = (void **)v81;
            if ( v81 )
            {
              v46 = v82;
              if ( v82 )
              {
                if ( (unsigned __int64)v81 < v82 || (unsigned __int64)v81 > v82 + 14848 )
                {
                  v47 = *((void ***)v81 + 66);
                  v48 = &v47[8 * (unsigned __int64)*((unsigned int *)v81 + 134)];
                  if ( v47 != v48 )
                  {
                    do
                    {
                      while ( 1 )
                      {
                        v48 -= 8;
                        v49 = (void **)v48[3];
                        if ( v49 == v48 + 5 )
                          break;
                        operator delete(v49);
                        if ( v47 == v48 )
                          goto LABEL_59;
                      }
                    }
                    while ( v47 != v48 );
LABEL_59:
                    v48 = (void **)v45[66];
                  }
                  if ( v48 != v45 + 68 )
                    free(v48);
                  v50 = (void **)v45[52];
                  v51 = v45 + 52;
                  if ( v50 != v45 + 54 )
                    free(v50);
                  v52 = v45 + 12;
                  do
                  {
                    while ( 1 )
                    {
                      v51 -= 4;
                      if ( *v51 == v51 + 2 )
                        break;
                      operator delete(*v51);
                      if ( v51 == v52 )
                        goto LABEL_67;
                    }
                  }
                  while ( v51 != v52 );
LABEL_67:
                  operator delete(v45, 0x3A0u);
                }
                else
                {
                  v66 = *(unsigned int *)(v82 + 14976);
                  *(_DWORD *)(v82 + 14976) = v66 + 1;
                  *(_QWORD *)(v46 + 8 * v66 + 14848) = v45;
                }
              }
            }
            v4 = *(_QWORD *)(a1 + 80);
            v5 = *(_QWORD *)(a1 + 24);
            *(_DWORD *)(a1 + 96) = 1;
            ++*(_DWORD *)(a1 + 12);
            goto LABEL_3;
          }
        }
        v43 = v80;
        v78 = v80;
        goto LABEL_45;
      }
    }
LABEL_93:
    v71 = v35;
    memcpy(v38, v34, v35);
    v38 = v78;
    v35 = v71;
    goto LABEL_41;
  }
  v12 = *(_QWORD *)(a1 + 24);
  v53 = ~(*(_BYTE *)(*(_QWORD *)(v12 + 40) + 40LL) >> 4);
  if ( (v53 & 8) != 0 )
  {
    v64 = sub_13BA170(
            v12,
            0,
            *(int **)(*(_QWORD *)(a1 + 48) + 16LL),
            *(int **)(*(_QWORD *)(a1 + 48) + 24LL),
            (__int64)"error");
    v12 = *(_QWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 12) += v64;
  }
  if ( (v53 & 4) != 0 )
  {
    v63 = sub_13BA170(
            v12,
            0,
            *(int **)(*(_QWORD *)(a1 + 48) + 40LL),
            *(int **)(*(_QWORD *)(a1 + 48) + 48LL),
            (__int64)"warn");
    v12 = *(_QWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 12) += v63;
  }
  if ( (v53 & 2) != 0 )
  {
    v62 = sub_13BA170(
            v12,
            0,
            *(int **)(*(_QWORD *)(a1 + 48) + 64LL),
            *(int **)(*(_QWORD *)(a1 + 48) + 72LL),
            (__int64)"remark");
    v12 = *(_QWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 12) += v62;
  }
  if ( (v53 & 1) != 0 )
  {
    v54 = sub_13BA170(
            v12,
            0,
            *(int **)(*(_QWORD *)(a1 + 48) + 88LL),
            *(int **)(*(_QWORD *)(a1 + 48) + 96LL),
            (__int64)"note");
    v12 = *(_QWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 12) += v54;
  }
LABEL_4:
  sub_FC6FE0(v12, v68, v67 != 0);
  result = (_QWORD *)operator new(0x88u);
  v14 = *(_QWORD *)(a1 + 48);
  result[1] = 0;
  result[2] = 0;
  *result = &off_2C44388;
  result[3] = 0;
  result[4] = 0;
  result[5] = 0;
  result[6] = 0;
  result[7] = 0;
  result[8] = 0;
  result[9] = 0;
  result[10] = 0;
  result[11] = 0;
  result[12] = 0;
  result[13] = 0;
  result[14] = 0;
  result[15] = 0;
  result[16] = 0;
  *(_QWORD *)(a1 + 48) = result;
  if ( v14 )
    result = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
  v15 = *(__int64 **)(a1 + 136);
  v16 = *(__int64 **)(a1 + 144);
  if ( v15 != v16 )
  {
    v17 = *(__int64 **)(a1 + 136);
    do
    {
      while ( 1 )
      {
        v18 = *v17;
        if ( !*v17 )
          break;
        ++v17;
        result = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
        if ( v17 == v16 )
          goto LABEL_10;
      }
      ++v17;
    }
    while ( v16 != v17 );
LABEL_10:
    *(_QWORD *)(a1 + 144) = v15;
  }
  v19 = *(__int64 **)(a1 + 160);
  v20 = *(__int64 **)(a1 + 168);
  if ( v19 != v20 )
  {
    v21 = *(__int64 **)(a1 + 160);
    do
    {
      while ( 1 )
      {
        v22 = *v21;
        if ( !*v21 )
          break;
        ++v21;
        result = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
        if ( v21 == v20 )
          goto LABEL_15;
      }
      ++v21;
    }
    while ( v20 != v21 );
LABEL_15:
    *(_QWORD *)(a1 + 168) = v19;
  }
  v23 = *(__int64 **)(a1 + 184);
  v24 = *(__int64 **)(a1 + 192);
  if ( v23 != v24 )
  {
    v25 = *(__int64 **)(a1 + 184);
    do
    {
      while ( 1 )
      {
        v26 = *v25;
        if ( !*v25 )
          break;
        ++v25;
        result = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26);
        if ( v25 == v24 )
          goto LABEL_20;
      }
      ++v25;
    }
    while ( v24 != v25 );
LABEL_20:
    *(_QWORD *)(a1 + 192) = v23;
  }
  v27 = *(__int64 **)(a1 + 208);
  v28 = *(__int64 **)(a1 + 216);
  if ( v27 != v28 )
  {
    v29 = *(__int64 **)(a1 + 208);
    do
    {
      while ( 1 )
      {
        v30 = *v29;
        if ( !*v29 )
          break;
        ++v29;
        result = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 8LL))(v30);
        if ( v28 == v29 )
          goto LABEL_25;
      }
      ++v29;
    }
    while ( v28 != v29 );
LABEL_25:
    *(_QWORD *)(a1 + 216) = v27;
  }
  return result;
}
