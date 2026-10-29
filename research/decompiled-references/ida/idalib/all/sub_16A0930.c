__int64 __fastcall sub_16A0930(__int64 a1, unsigned __int32 a2, __int64 a3, __int32 *a4, __int64 a5, __int64 a6)
{
  __int32 v6; // r13d
  __int64 v10; // r9
  __int64 *v11; // rax
  int v12; // edx
  __int64 v13; // rdi
  __int64 v14; // r14
  unsigned __int64 v15; // r14
  _QWORD *v16; // r14
  __int64 v17; // r15
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  _QWORD *v20; // rcx
  __int64 *v22; // rsi
  unsigned int v23; // ecx
  __int64 v24; // r8
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rax
  _DWORD *v29; // rax
  __int64 v30; // rdi
  int v31; // edx
  __int64 v32; // rbx
  const char *v33; // r13
  size_t v34; // rbx
  unsigned int *v35; // r13
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rbp
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // r14
  unsigned __int8 *v44; // rbp
  _QWORD *v45; // rax
  _BYTE *v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  void **v50; // rbx
  _BYTE *v51; // rdi
  __int64 v52; // rax
  void *v53; // rdi
  unsigned __int8 *v54; // rbp
  _QWORD *v55; // rax
  unsigned __int8 *v56; // rdx
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rax
  void **v60; // rbx
  unsigned __int8 *v61; // rdi
  __int64 v62; // rax
  size_t v63; // rdx
  size_t v64; // rdx
  __int64 v65; // rdx
  int v66; // eax
  __int64 v67; // rdx
  int v68; // eax
  __int64 v69; // rax
  __int64 v70; // r14
  __int64 v71; // r15
  __int64 v72; // r14
  void *v73; // rdi
  __int64 v74; // rax
  __int64 v75; // r15
  __int64 v76; // rdx
  __int64 v77; // r15
  void *v78; // rdi
  __int64 v79; // [rsp+8h] [rbp-120h]
  __int64 v80; // [rsp+8h] [rbp-120h]
  __int64 v81; // [rsp+18h] [rbp-110h] BYREF
  void *src; // [rsp+20h] [rbp-108h]
  size_t n; // [rsp+28h] [rbp-100h]
  _QWORD v84[2]; // [rsp+30h] [rbp-F8h] BYREF
  void *v85; // [rsp+40h] [rbp-E8h]
  size_t v86; // [rsp+48h] [rbp-E0h]
  _QWORD v87[2]; // [rsp+50h] [rbp-D8h] BYREF
  _QWORD v88[2]; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v89; // [rsp+70h] [rbp-B8h]
  unsigned __int8 *v90; // [rsp+80h] [rbp-A8h]
  __int64 v91; // [rsp+88h] [rbp-A0h]
  char v92; // [rsp+D8h] [rbp-50h]
  unsigned int v93; // [rsp+E0h] [rbp-48h]
  char v94; // [rsp+E4h] [rbp-44h]

  v6 = a3;
  if ( sub_15F2610(a1, 0, a3, (__int64)a4, a5, a6) )
  {
    v22 = (__int64 *)(a1 + 8);
    v23 = 5043;
    goto LABEL_21;
  }
  v11 = *(__int64 **)(a1 + 608);
  if ( !v11 )
  {
LABEL_20:
    v22 = (__int64 *)(a1 + 8);
    v23 = 4061;
LABEL_21:
    sub_168B9F0((__int64)v88, v22, a2, v23, 0);
    goto LABEL_22;
  }
  while ( 1 )
  {
    v12 = *((_DWORD *)v11 + 2);
    if ( (v12 & 1) != 0 )
    {
      if ( (v12 & 0x80) != 0 )
        BUG();
      v13 = v11[45];
      if ( (*(_BYTE *)(v13 + 8) & 0x7Fu) - 35 <= 3 && v13 != 72 )
      {
        v14 = *(_QWORD *)(sub_B8C1B0(v13) + 16);
        if ( (v14 & 4) != 0 )
          v15 = *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF8LL);
        else
          v15 = v14 & 0xFFFFFFFFFFFFFFF8LL;
        goto LABEL_12;
      }
      goto LABEL_20;
    }
    if ( (v12 & 0x20) != 0 )
      break;
    v11 = (__int64 *)*v11;
    if ( !v11 )
      goto LABEL_20;
  }
  if ( (v12 & 0x80) != 0 )
    goto LABEL_20;
  v15 = v11[45];
LABEL_12:
  if ( !v15 )
    goto LABEL_20;
  v16 = (_QWORD *)(v15 - 64);
  if ( !v16 )
    goto LABEL_20;
  v17 = v16[13];
  v18 = *(_QWORD *)(v17 + 96);
  v19 = v18 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v18 & 1) == 0 )
  {
    v20 = (_QWORD *)(v18 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v18 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      if ( (v18 & 2) == 0 )
        goto LABEL_17;
      v24 = v20[2295];
      v25 = v17 & 0xFFFFFFFFFFFFFFFBLL;
      if ( v24 )
      {
        v26 = v20[294];
        v20[304] += 24LL;
        v27 = (v26 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v20[295] >= v27 + 24 && v26 )
        {
          v20[294] = v27 + 24;
          v28 = (v26 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          v79 = v24;
          v28 = sub_986170((__int64)(v20 + 294), 24, 24, 3, v24, v10);
          v24 = v79;
          v27 = v28 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(_QWORD *)v28 = v24;
        v25 = v27 | 4;
        *(_DWORD *)(v28 + 8) = 0;
        *(_QWORD *)(v28 + 16) = v17;
      }
      v19 = v25 & 0xFFFFFFFFFFFFFFFELL;
      v18 = v19 | 1;
      *(_QWORD *)(v17 + 96) = v19 | 1;
    }
  }
  if ( v19 )
  {
    if ( (v19 & 4) != 0 )
    {
      v29 = (_DWORD *)(v18 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v29 )
      {
        v30 = *(_QWORD *)v29;
        v31 = *(_DWORD *)(*(_QWORD *)v29 + 12LL);
        if ( v29[2] != v31 )
        {
          v29[2] = v31;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v30 + 152LL))(v30, v17);
        }
      }
    }
  }
LABEL_17:
  if ( *(_DWORD *)(v16[16] + 16LL) )
  {
    sub_15AB860(a4, *(_QWORD **)(a1 + 248), (__int64)v16, a2, v6);
    return 0;
  }
  sub_168B9F0((__int64)v88, (__int64 *)(a1 + 8), a2, 0x10ACu, 0);
  v32 = v16[5];
  if ( (v32 & 7) != 0 )
  {
    v34 = 0;
    v33 = &byte_22F0C30;
  }
  else
  {
    v33 = &byte_22F0C30;
    v34 = v32 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v34 )
    {
      v35 = *(unsigned int **)(v34 + 16);
      v34 = *v35;
      v33 = (const char *)(v35 + 4);
    }
  }
  if ( v92 )
  {
    v54 = v90;
    if ( !v90 )
    {
      v65 = v91;
      v66 = *(_DWORD *)(v91 + 14976);
      if ( v66 )
      {
        v69 = (unsigned int)(v66 - 1);
        *(_DWORD *)(v91 + 14976) = v69;
        v54 = *(unsigned __int8 **)(v65 + 8 * v69 + 14848);
        v70 = *((unsigned int *)v54 + 134);
        *v54 = 0;
        v71 = *((_QWORD *)v54 + 66);
        *((_DWORD *)v54 + 106) = 0;
        v72 = v71 + (v70 << 6);
        while ( v71 != v72 )
        {
          while ( 1 )
          {
            v72 -= 64;
            v73 = *(void **)(v72 + 24);
            if ( v73 == (void *)(v72 + 40) )
              break;
            operator delete(v73);
            if ( v71 == v72 )
              goto LABEL_101;
          }
        }
LABEL_101:
        *((_DWORD *)v54 + 134) = 0;
      }
      else
      {
        v54 = (unsigned __int8 *)operator new(0x3A0u);
        *v54 = 0;
        *((_QWORD *)v54 + 12) = v54 + 112;
        *((_QWORD *)v54 + 16) = v54 + 144;
        *((_QWORD *)v54 + 20) = v54 + 176;
        *((_QWORD *)v54 + 24) = v54 + 208;
        *((_QWORD *)v54 + 28) = v54 + 240;
        *((_QWORD *)v54 + 32) = v54 + 272;
        *((_QWORD *)v54 + 36) = v54 + 304;
        *((_QWORD *)v54 + 40) = v54 + 336;
        *((_QWORD *)v54 + 44) = v54 + 368;
        *((_QWORD *)v54 + 48) = v54 + 400;
        *((_QWORD *)v54 + 52) = v54 + 432;
        *((_QWORD *)v54 + 13) = 0;
        v54[112] = 0;
        *((_QWORD *)v54 + 17) = 0;
        v54[144] = 0;
        *((_QWORD *)v54 + 21) = 0;
        v54[176] = 0;
        *((_QWORD *)v54 + 25) = 0;
        v54[208] = 0;
        *((_QWORD *)v54 + 29) = 0;
        v54[240] = 0;
        *((_QWORD *)v54 + 33) = 0;
        v54[272] = 0;
        *((_QWORD *)v54 + 37) = 0;
        v54[304] = 0;
        *((_QWORD *)v54 + 41) = 0;
        v54[336] = 0;
        *((_QWORD *)v54 + 45) = 0;
        v54[368] = 0;
        *((_QWORD *)v54 + 49) = 0;
        v54[400] = 0;
        *((_QWORD *)v54 + 53) = 0x800000000LL;
        *((_QWORD *)v54 + 66) = v54 + 544;
        *((_QWORD *)v54 + 67) = 0x600000000LL;
      }
      v90 = v54;
    }
    v54[*v54 + 1] = 0;
    src = v84;
    if ( &v33[v34] && !v33 )
      goto LABEL_109;
    if ( v34 > 0xF )
    {
      v55 = (_QWORD *)operator new(v34 + 1);
      v84[0] = v34;
      src = v55;
    }
    else
    {
      if ( v34 == 1 )
      {
        LOBYTE(v84[0]) = *v33;
        v55 = v84;
        goto LABEL_63;
      }
      v55 = v84;
      if ( !v34 )
      {
LABEL_63:
        n = v34;
        *((_BYTE *)v55 + v34) = 0;
        v56 = v90;
        v57 = *v90;
        *v90 = v57 + 1;
        v58 = (unsigned __int8)v57;
        v59 = 32 * (v57 + 3);
        v60 = (void **)&v56[v59];
        v61 = *(unsigned __int8 **)&v56[v59];
        if ( src == v84 )
        {
          v63 = n;
          if ( n )
          {
            if ( n == 1 )
              *v61 = v84[0];
            else
              memcpy(v61, src, n);
            v63 = n;
            v61 = (unsigned __int8 *)*v60;
          }
          v60[1] = (void *)v63;
          v61[v63] = 0;
          v61 = (unsigned __int8 *)src;
        }
        else
        {
          if ( v61 == &v56[v59 + 16] )
          {
            *v60 = src;
            v60[1] = (void *)n;
            v60[2] = (void *)v84[0];
          }
          else
          {
            v62 = *(_QWORD *)&v56[32 * v58 + 112];
            *v60 = src;
            v60[1] = (void *)n;
            v60[2] = (void *)v84[0];
            if ( v61 )
            {
              src = v61;
              v84[0] = v62;
              goto LABEL_67;
            }
          }
          v61 = (unsigned __int8 *)v84;
          src = v84;
        }
LABEL_67:
        n = 0;
        *v61 = 0;
        v53 = src;
        if ( src != v84 )
          goto LABEL_55;
        goto LABEL_22;
      }
    }
    memcpy(v55, v33, v34);
    v55 = src;
    goto LABEL_63;
  }
  if ( !v94 )
    goto LABEL_22;
  v38 = sub_168B9E0(v88);
  v41 = v89;
  if ( v89 )
    v41 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v89 + 32LL))(v89);
  v81 = v41;
  v42 = sub_1587BC0(v38, &v81, v36, v37, v39, v40);
  v43 = *v42 + 32LL * v93;
  v44 = *(unsigned __int8 **)(v43 + 8);
  if ( !v44 )
  {
    v67 = *(_QWORD *)(v43 + 16);
    v68 = *(_DWORD *)(v67 + 14976);
    if ( v68 )
    {
      v74 = (unsigned int)(v68 - 1);
      *(_DWORD *)(v67 + 14976) = v74;
      v44 = *(unsigned __int8 **)(v67 + 8 * v74 + 14848);
      v75 = *((unsigned int *)v44 + 134);
      *v44 = 0;
      v76 = *((_QWORD *)v44 + 66);
      *((_DWORD *)v44 + 106) = 0;
      v77 = v76 + (v75 << 6);
      while ( v76 != v77 )
      {
        while ( 1 )
        {
          v77 -= 64;
          v78 = *(void **)(v77 + 24);
          if ( v78 == (void *)(v77 + 40) )
            break;
          v80 = v76;
          operator delete(v78);
          v76 = v80;
          if ( v80 == v77 )
            goto LABEL_106;
        }
      }
LABEL_106:
      *((_DWORD *)v44 + 134) = 0;
    }
    else
    {
      v44 = (unsigned __int8 *)operator new(0x3A0u);
      *v44 = 0;
      *((_QWORD *)v44 + 12) = v44 + 112;
      *((_QWORD *)v44 + 16) = v44 + 144;
      *((_QWORD *)v44 + 20) = v44 + 176;
      *((_QWORD *)v44 + 24) = v44 + 208;
      *((_QWORD *)v44 + 28) = v44 + 240;
      *((_QWORD *)v44 + 32) = v44 + 272;
      *((_QWORD *)v44 + 36) = v44 + 304;
      *((_QWORD *)v44 + 40) = v44 + 336;
      *((_QWORD *)v44 + 44) = v44 + 368;
      *((_QWORD *)v44 + 48) = v44 + 400;
      *((_QWORD *)v44 + 52) = v44 + 432;
      *((_QWORD *)v44 + 13) = 0;
      v44[112] = 0;
      *((_QWORD *)v44 + 17) = 0;
      v44[144] = 0;
      *((_QWORD *)v44 + 21) = 0;
      v44[176] = 0;
      *((_QWORD *)v44 + 25) = 0;
      v44[208] = 0;
      *((_QWORD *)v44 + 29) = 0;
      v44[240] = 0;
      *((_QWORD *)v44 + 33) = 0;
      v44[272] = 0;
      *((_QWORD *)v44 + 37) = 0;
      v44[304] = 0;
      *((_QWORD *)v44 + 41) = 0;
      v44[336] = 0;
      *((_QWORD *)v44 + 45) = 0;
      v44[368] = 0;
      *((_QWORD *)v44 + 49) = 0;
      v44[400] = 0;
      *((_QWORD *)v44 + 53) = 0x800000000LL;
      *((_QWORD *)v44 + 66) = v44 + 544;
      *((_QWORD *)v44 + 67) = 0x600000000LL;
    }
    *(_QWORD *)(v43 + 8) = v44;
  }
  v44[*v44 + 1] = 0;
  v85 = v87;
  if ( &v33[v34] && !v33 )
LABEL_109:
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( v34 > 0xF )
  {
    v45 = (_QWORD *)operator new(v34 + 1);
    v87[0] = v34;
    v85 = v45;
    goto LABEL_80;
  }
  if ( v34 == 1 )
  {
    LOBYTE(v87[0]) = *v33;
    v45 = v87;
    goto LABEL_50;
  }
  v45 = v87;
  if ( v34 )
  {
LABEL_80:
    memcpy(v45, v33, v34);
    v45 = v85;
  }
LABEL_50:
  v86 = v34;
  *((_BYTE *)v45 + v34) = 0;
  v46 = *(_BYTE **)(v43 + 8);
  v47 = (unsigned __int8)*v46;
  *v46 = v47 + 1;
  v48 = (unsigned __int8)v47;
  v49 = 32 * (v47 + 3);
  v50 = (void **)&v46[v49];
  v51 = *(_BYTE **)&v46[v49];
  if ( v85 == v87 )
  {
    v64 = v86;
    if ( v86 )
    {
      if ( v86 == 1 )
        *v51 = v87[0];
      else
        memcpy(v51, v85, v86);
      v64 = v86;
      v51 = *v50;
    }
    v50[1] = (void *)v64;
    v51[v64] = 0;
    v51 = v85;
  }
  else
  {
    if ( v51 == &v46[v49 + 16] )
    {
      *v50 = v85;
      v50[1] = (void *)v86;
      v50[2] = (void *)v87[0];
    }
    else
    {
      v52 = *(_QWORD *)&v46[32 * v48 + 112];
      *v50 = v85;
      v50[1] = (void *)v86;
      v50[2] = (void *)v87[0];
      if ( v51 )
      {
        v85 = v51;
        v87[0] = v52;
        goto LABEL_54;
      }
    }
    v51 = v87;
    v85 = v87;
  }
LABEL_54:
  v86 = 0;
  *v51 = 0;
  v53 = v85;
  if ( v85 != v87 )
LABEL_55:
    operator delete(v53);
LABEL_22:
  sub_15F7200(v88);
  return 1;
}
