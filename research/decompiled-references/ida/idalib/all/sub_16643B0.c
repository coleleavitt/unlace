__int64 __fastcall sub_16643B0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7, int a8)
{
  int v8; // r13d
  __int64 v11; // rdi
  _QWORD *v12; // rax
  __int64 v13; // r12
  _QWORD *v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdi
  unsigned int v22; // r14d
  __int64 v24; // rax
  __int64 (__fastcall *v25)(_QWORD); // rax
  __int64 v26; // rax
  _BYTE *v27; // r15
  unsigned __int64 v28; // rax
  _QWORD *v29; // r13
  _QWORD *v30; // r12
  _QWORD *v31; // rdi
  _BYTE *v32; // rdi
  void **v33; // r12
  void **v34; // r13
  int v35; // edx
  __int64 v36; // rdx
  __int64 v37; // r12
  __int64 v38; // r13
  __int64 v39; // r12
  void *v40; // rdi
  _QWORD *v41; // rdx
  __int64 v42; // rax
  unsigned __int8 *v43; // rbx
  _QWORD *v44; // rdx
  __int64 v45; // rax
  void **v46; // rbp
  unsigned __int64 v47; // rdx
  void **v48; // r12
  void **v49; // rbx
  void **v50; // rdi
  void **v51; // rdi
  void **v52; // rbx
  void **v53; // r12
  __int64 v54; // rcx
  __int64 v55; // rcx
  unsigned __int64 v56; // rdx
  int v57; // eax
  __int64 v58; // rax
  __int64 v59; // r13
  __int64 v60; // r15
  __int64 v61; // r13
  void *v62; // rdi
  __int64 *v63; // [rsp+8h] [rbp-130h] BYREF
  __int64 v64; // [rsp+10h] [rbp-128h]
  int v65; // [rsp+18h] [rbp-120h]
  unsigned int v66; // [rsp+1Ch] [rbp-11Ch]
  __int64 v67; // [rsp+20h] [rbp-118h]
  __int64 v68; // [rsp+28h] [rbp-110h] BYREF
  __m128 v69; // [rsp+30h] [rbp-108h]
  char v70[8]; // [rsp+40h] [rbp-F8h] BYREF
  _QWORD *v71; // [rsp+48h] [rbp-F0h]
  _QWORD *v72; // [rsp+50h] [rbp-E8h]
  __int64 v73; // [rsp+58h] [rbp-E0h]
  void *v74; // [rsp+60h] [rbp-D8h]
  unsigned __int64 v75; // [rsp+68h] [rbp-D0h]
  int v76; // [rsp+70h] [rbp-C8h]
  char v77; // [rsp+78h] [rbp-C0h]
  __int64 v78; // [rsp+80h] [rbp-B8h]
  _QWORD *v79; // [rsp+88h] [rbp-B0h]
  __int64 v80; // [rsp+90h] [rbp-A8h] BYREF
  void *v81; // [rsp+98h] [rbp-A0h]
  __int64 v82; // [rsp+A0h] [rbp-98h]
  _BYTE v83[32]; // [rsp+A8h] [rbp-90h] BYREF
  void *ptr; // [rsp+C8h] [rbp-70h]
  __int64 v85; // [rsp+D0h] [rbp-68h]
  _BYTE v86[96]; // [rsp+D8h] [rbp-60h] BYREF

  v8 = a6;
  v64 = a5;
  v66 = a2;
  v65 = a8;
  v63 = &v68;
  v68 = a3;
  v11 = *(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL);
  v67 = a4;
  v69 = _mm_loadh_ps((const double *)&v63);
  v12 = sub_F63270(v11, a2, a3, a4, a5, a6);
  v13 = v68;
  v14 = v12;
  v19 = sub_F63270(*(_QWORD *)(v68 & 0xFFFFFFFFFFFFFFF0LL), a2, v15, v16, v17, v18);
  v21 = (__int64)v19;
  if ( !a7 )
  {
    v22 = 0;
    if ( (*(_BYTE *)(a1[29] + 46LL) & 0x20) == 0 )
      return v22;
  }
  v22 = *(_DWORD *)(v64 + 112);
  if ( !v22 )
    return v22;
  v77 &= 0xFCu;
  v79 = v19;
  v71 = v19;
  v72 = v14;
  v70[0] = v22 & 3 | v70[0] & 0xF8;
  v24 = a1[31];
  v78 = 0;
  v76 = 0;
  v73 = 0;
  v74 = nullptr;
  v75 = v24 + 2448;
  v25 = *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v21 + 32LL);
  if ( v25 == sub_A01140 )
    v26 = sub_B70A60(v21);
  else
    v26 = ((__int64 (__fastcall *)(__int64, __int64, __int64 (__fastcall *)(_QWORD), __int64, __int64))v25)(
            v21,
            a2,
            sub_A01140,
            v20,
            v64);
  v79 = (_QWORD *)v26;
  if ( v8 )
  {
    v27 = v74;
    v28 = v75;
    v76 = v8;
    if ( v74 )
    {
      if ( !v75 )
      {
LABEL_32:
        v27[(unsigned __int8)*v27 + 1] = 8;
        v41 = v74;
        v42 = *(unsigned __int8 *)v74;
        *(_BYTE *)v74 = v42 + 1;
        v41[v42 + 2] = a4;
        v43 = (unsigned __int8 *)v74;
        if ( !v74 )
        {
          v56 = v75;
          v57 = *(_DWORD *)(v75 + 14976);
          if ( v57 )
          {
            v58 = (unsigned int)(v57 - 1);
            *(_DWORD *)(v75 + 14976) = v58;
            v43 = *(unsigned __int8 **)(v56 + 8 * v58 + 14848);
            v59 = *((unsigned int *)v43 + 134);
            *v43 = 0;
            v60 = *((_QWORD *)v43 + 66);
            *((_DWORD *)v43 + 106) = 0;
            v61 = v60 + (v59 << 6);
            while ( v60 != v61 )
            {
              while ( 1 )
              {
                v61 -= 64;
                v62 = *(void **)(v61 + 24);
                if ( v62 == (void *)(v61 + 40) )
                  break;
                operator delete(v62);
                if ( v60 == v61 )
                  goto LABEL_76;
              }
            }
LABEL_76:
            *((_DWORD *)v43 + 134) = 0;
          }
          else
          {
            v43 = (unsigned __int8 *)operator new(0x3A0u);
            *v43 = 0;
            *((_QWORD *)v43 + 12) = v43 + 112;
            *((_QWORD *)v43 + 16) = v43 + 144;
            *((_QWORD *)v43 + 20) = v43 + 176;
            *((_QWORD *)v43 + 24) = v43 + 208;
            *((_QWORD *)v43 + 28) = v43 + 240;
            *((_QWORD *)v43 + 32) = v43 + 272;
            *((_QWORD *)v43 + 36) = v43 + 304;
            *((_QWORD *)v43 + 40) = v43 + 336;
            *((_QWORD *)v43 + 44) = v43 + 368;
            *((_QWORD *)v43 + 48) = v43 + 400;
            *((_QWORD *)v43 + 52) = v43 + 432;
            *((_QWORD *)v43 + 13) = 0;
            v43[112] = 0;
            *((_QWORD *)v43 + 17) = 0;
            v43[144] = 0;
            *((_QWORD *)v43 + 21) = 0;
            v43[176] = 0;
            *((_QWORD *)v43 + 25) = 0;
            v43[208] = 0;
            *((_QWORD *)v43 + 29) = 0;
            v43[240] = 0;
            *((_QWORD *)v43 + 33) = 0;
            v43[272] = 0;
            *((_QWORD *)v43 + 37) = 0;
            v43[304] = 0;
            *((_QWORD *)v43 + 41) = 0;
            v43[336] = 0;
            *((_QWORD *)v43 + 45) = 0;
            v43[368] = 0;
            *((_QWORD *)v43 + 49) = 0;
            v43[400] = 0;
            *((_QWORD *)v43 + 53) = 0x800000000LL;
            *((_QWORD *)v43 + 66) = v43 + 544;
            *((_QWORD *)v43 + 67) = 0x600000000LL;
          }
          v74 = v43;
        }
        v43[*v43 + 1] = 8;
        v44 = v74;
        v45 = *(unsigned __int8 *)v74;
        *(_BYTE *)v74 = v45 + 1;
        v44[v45 + 2] = v13;
        goto LABEL_34;
      }
      if ( (unsigned __int64)v74 < v75 || (unsigned __int64)v74 > v75 + 14848 )
      {
        v29 = *((_QWORD **)v74 + 66);
        v30 = &v29[8 * (unsigned __int64)*((unsigned int *)v74 + 134)];
        if ( v29 != v30 )
        {
          do
          {
            while ( 1 )
            {
              v30 -= 8;
              v31 = (_QWORD *)v30[3];
              if ( v31 == v30 + 5 )
                break;
              operator delete(v31);
              if ( v29 == v30 )
                goto LABEL_14;
            }
          }
          while ( v29 != v30 );
LABEL_14:
          v30 = *((_QWORD **)v27 + 66);
        }
        if ( v30 != (_QWORD *)(v27 + 544) )
          free(v30);
        v32 = *((_BYTE **)v27 + 52);
        if ( v32 != v27 + 432 )
          free(v32);
        v33 = (void **)(v27 + 384);
        v34 = (void **)(v27 + 64);
        do
        {
          while ( *v33 != v33 + 2 )
          {
            operator delete(*v33);
            v33 -= 4;
            if ( v33 == v34 )
              goto LABEL_22;
          }
          v33 -= 4;
        }
        while ( v33 != v34 );
LABEL_22:
        operator delete(v27, 0x3A0u);
        v28 = v75;
        v35 = *(_DWORD *)(v75 + 14976);
      }
      else
      {
        v54 = *(unsigned int *)(v75 + 14976);
        v35 = v54 + 1;
        *(_DWORD *)(v75 + 14976) = v54 + 1;
        *(_QWORD *)(v28 + 8 * v54 + 14848) = v27;
      }
      v74 = nullptr;
    }
    else
    {
      v35 = *(_DWORD *)(v75 + 14976);
    }
    if ( v35 )
    {
      v36 = (unsigned int)(v35 - 1);
      *(_DWORD *)(v28 + 14976) = v36;
      v27 = *(_BYTE **)(v28 + 8 * v36 + 14848);
      v37 = *((unsigned int *)v27 + 134);
      *v27 = 0;
      v38 = *((_QWORD *)v27 + 66);
      *((_DWORD *)v27 + 106) = 0;
      v39 = v38 + (v37 << 6);
      while ( v38 != v39 )
      {
        while ( 1 )
        {
          v39 -= 64;
          v40 = *(void **)(v39 + 24);
          if ( v40 == (void *)(v39 + 40) )
            break;
          operator delete(v40);
          if ( v38 == v39 )
            goto LABEL_29;
        }
      }
LABEL_29:
      *((_DWORD *)v27 + 134) = 0;
    }
    else
    {
      v27 = (_BYTE *)operator new(0x3A0u);
      *v27 = 0;
      *((_QWORD *)v27 + 12) = v27 + 112;
      *((_QWORD *)v27 + 16) = v27 + 144;
      *((_QWORD *)v27 + 20) = v27 + 176;
      *((_QWORD *)v27 + 24) = v27 + 208;
      *((_QWORD *)v27 + 28) = v27 + 240;
      *((_QWORD *)v27 + 32) = v27 + 272;
      *((_QWORD *)v27 + 36) = v27 + 304;
      *((_QWORD *)v27 + 40) = v27 + 336;
      *((_QWORD *)v27 + 44) = v27 + 368;
      *((_QWORD *)v27 + 48) = v27 + 400;
      *((_QWORD *)v27 + 52) = v27 + 432;
      *((_QWORD *)v27 + 13) = 0;
      v27[112] = 0;
      *((_QWORD *)v27 + 17) = 0;
      v27[144] = 0;
      *((_QWORD *)v27 + 21) = 0;
      v27[176] = 0;
      *((_QWORD *)v27 + 25) = 0;
      v27[208] = 0;
      *((_QWORD *)v27 + 29) = 0;
      v27[240] = 0;
      *((_QWORD *)v27 + 33) = 0;
      v27[272] = 0;
      *((_QWORD *)v27 + 37) = 0;
      v27[304] = 0;
      *((_QWORD *)v27 + 41) = 0;
      v27[336] = 0;
      *((_QWORD *)v27 + 45) = 0;
      v27[368] = 0;
      *((_QWORD *)v27 + 49) = 0;
      v27[400] = 0;
      *((_QWORD *)v27 + 53) = 0x800000000LL;
      *((_QWORD *)v27 + 66) = v27 + 544;
      *((_QWORD *)v27 + 67) = 0x600000000LL;
    }
    v74 = v27;
    v13 = v68;
    goto LABEL_32;
  }
LABEL_34:
  if ( (_BYTE)v65 )
  {
    v80 = 0;
    v81 = v83;
    v82 = 0x400000000LL;
    ptr = v86;
    v85 = 0x400000000LL;
    v86[32] = 0;
    v22 = sub_165BA60((__int64)a1, &v80, v66, (__int64)v70);
    if ( ptr != v86 )
      free(ptr);
    if ( v81 != v83 )
      free(v81);
  }
  else
  {
    v22 = sub_165D180(a1, v66, (__int64)v70);
  }
  v46 = (void **)v74;
  if ( v74 )
  {
    v47 = v75;
    if ( v75 )
    {
      if ( (unsigned __int64)v74 >= v75 && (unsigned __int64)v74 <= v75 + 14848 )
      {
        v55 = *(unsigned int *)(v75 + 14976);
        *(_DWORD *)(v75 + 14976) = v55 + 1;
        *(_QWORD *)(v47 + 8 * v55 + 14848) = v46;
      }
      else
      {
        v48 = *((void ***)v74 + 66);
        v49 = &v48[8 * (unsigned __int64)*((unsigned int *)v74 + 134)];
        if ( v48 != v49 )
        {
          do
          {
            while ( 1 )
            {
              v49 -= 8;
              v50 = (void **)v49[3];
              if ( v50 == v49 + 5 )
                break;
              operator delete(v50);
              if ( v48 == v49 )
                goto LABEL_46;
            }
          }
          while ( v48 != v49 );
LABEL_46:
          v49 = (void **)v46[66];
        }
        if ( v49 != v46 + 68 )
          free(v49);
        v51 = (void **)v46[52];
        if ( v51 != v46 + 54 )
          free(v51);
        v52 = v46 + 48;
        v53 = v46 + 8;
        do
        {
          while ( *v52 != v52 + 2 )
          {
            operator delete(*v52);
            v52 -= 4;
            if ( v53 == v52 )
              goto LABEL_54;
          }
          v52 -= 4;
        }
        while ( v52 != v53 );
LABEL_54:
        operator delete(v46, 0x3A0u);
      }
    }
  }
  return v22;
}
