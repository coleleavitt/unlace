__int64 __fastcall sub_B5B090(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 *v9; // rdi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // ecx
  __int64 v16; // rdi
  unsigned int v17; // r8d
  __int64 v18; // rax
  __int64 v19; // r10
  unsigned int v20; // r8d
  __int64 v21; // r9
  unsigned int *v22; // rbx
  int v23; // r8d
  __int64 v24; // r9
  unsigned __int8 *v25; // rax
  _BYTE *v26; // rsi
  signed __int64 v27; // r14
  _QWORD *v28; // rax
  _QWORD *v29; // rdx
  __int64 v30; // rsi
  __int64 v31; // rax
  _QWORD *v32; // r14
  _BYTE *v33; // rdi
  __int64 v34; // rax
  _QWORD *v35; // r14
  void *v36; // rsi
  __int64 v37; // rcx
  unsigned __int64 v38; // rdx
  __int64 v39; // rdx
  void **v40; // r12
  unsigned __int64 v41; // rax
  void **v42; // rcx
  unsigned __int64 v43; // rax
  void **v44; // r14
  void **v45; // rdi
  void **v46; // rdi
  void **v47; // r14
  size_t v49; // rdx
  __int64 v50; // rdx
  unsigned __int64 v51; // rdx
  int v52; // eax
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // rdx
  void *v57; // rdi
  unsigned __int64 v58; // rdi
  unsigned __int64 v59; // rdx
  int v60; // eax
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // rdx
  void *v65; // rdi
  _BYTE *v66; // rax
  _BYTE *v67; // rdi
  void **srca; // [rsp+8h] [rbp-D0h]
  void **src; // [rsp+8h] [rbp-D0h]
  void *srcb; // [rsp+8h] [rbp-D0h]
  _BYTE *srcc; // [rsp+8h] [rbp-D0h]
  __int64 v72; // [rsp+10h] [rbp-C8h]
  __int64 v73; // [rsp+18h] [rbp-C0h]
  unsigned __int8 *v74; // [rsp+18h] [rbp-C0h]
  __int64 v75; // [rsp+20h] [rbp-B8h]
  __int64 v76; // [rsp+20h] [rbp-B8h]
  __int64 v77; // [rsp+28h] [rbp-B0h]
  _QWORD *v78; // [rsp+30h] [rbp-A8h]
  void *v79; // [rsp+30h] [rbp-A8h]
  size_t n; // [rsp+38h] [rbp-A0h]
  int na; // [rsp+38h] [rbp-A0h]
  _QWORD v82[2]; // [rsp+40h] [rbp-98h] BYREF
  void *v83; // [rsp+50h] [rbp-88h] BYREF
  unsigned __int64 v84; // [rsp+58h] [rbp-80h]
  __int64 v85; // [rsp+60h] [rbp-78h]
  void *v86; // [rsp+70h] [rbp-68h]
  __int64 v87; // [rsp+80h] [rbp-58h] BYREF
  __int16 v88; // [rsp+90h] [rbp-48h]

  v9 = *(unsigned __int64 **)a1;
  v10 = *v9;
  v9[10] += 40LL;
  v11 = ((v10 + 15) & 0xFFFFFFFFFFFFFFF0LL) + 40;
  if ( v9[1] >= v11 && v10 )
  {
    *v9 = v11;
    v12 = (v10 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    v72 = v12;
  }
  else
  {
    v72 = sub_986170((__int64)v9, 40, 40, 4, a5, a6);
    v12 = v72;
  }
  v13 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)v12 = 0;
  *(_DWORD *)(v12 + 8) = 0;
  *(_BYTE *)(v12 + 12) = 6;
  *(_QWORD *)(v12 + 16) = a2;
  *(_QWORD *)(v12 + 24) = a3;
  *(_QWORD *)(v12 + 32) = v13;
  if ( a3 )
  {
    v14 = *a2;
    v15 = *(_DWORD *)(*a2 + 4);
    *(_DWORD *)(v12 + 8) = *(_DWORD *)(a2[a3 - 1] + 8);
    *(_DWORD *)(v12 + 4) = v15;
    *(_DWORD *)v12 = *(_DWORD *)(v14 + 4);
  }
  v16 = *(_QWORD *)(a1 + 40);
  if ( v16 )
  {
    if ( (*(_BYTE *)(v16 + 48) & 1) == 0 )
    {
      sub_B3A710((__int64 *)v16, v12);
      v16 = *(_QWORD *)(a1 + 40);
    }
    if ( (*(_QWORD *)(v16 + 32) & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      sub_B586F0(a1, v72);
  }
  v17 = *(_DWORD *)(a1 + 96);
  if ( v17 )
  {
    while ( 1 )
    {
      v18 = v17;
      v19 = *(_QWORD *)(a1 + 88);
      v20 = v17 - 1;
      v21 = 8 * v18 - 8;
      while ( 1 )
      {
        v22 = *(unsigned int **)(v19 + v21);
        *(_DWORD *)(a1 + 96) = v20;
        if ( !sub_B4CEC0(*((char **)v22 + 2), *((_QWORD *)v22 + 3)) )
          break;
        v21 = v24 - 8;
        if ( !v23 )
          return v72;
        v20 = v23 - 1;
      }
      sub_FC70B0(&v83, *(_QWORD *)(a1 + 16), *v22, 2639);
      v25 = (unsigned __int8 *)v83;
      v26 = *((_BYTE **)v22 + 2);
      v27 = *((_QWORD *)v22 + 3);
      if ( !v83 )
      {
        v59 = v84;
        v60 = *(_DWORD *)(v84 + 14976);
        if ( v60 )
        {
          v61 = (unsigned int)(v60 - 1);
          *(_DWORD *)(v84 + 14976) = v61;
          v25 = *(unsigned __int8 **)(v59 + 8 * v61 + 14848);
          v62 = *((unsigned int *)v25 + 134);
          *v25 = 0;
          v63 = *((_QWORD *)v25 + 66);
          *((_DWORD *)v25 + 106) = 0;
          v64 = v63 + (v62 << 6);
          while ( v63 != v64 )
          {
            while ( 1 )
            {
              v64 -= 64;
              v65 = *(void **)(v64 + 24);
              if ( v65 == (void *)(v64 + 40) )
                break;
              v77 = v64;
              v76 = v63;
              v74 = v25;
              operator delete(v65);
              v63 = v76;
              v64 = v77;
              v25 = v74;
              if ( v76 == v77 )
                goto LABEL_79;
            }
          }
LABEL_79:
          *((_DWORD *)v25 + 134) = 0;
        }
        else
        {
          srcc = *((_BYTE **)v22 + 2);
          v25 = (unsigned __int8 *)operator new(0x3A0u);
          *v25 = 0;
          *((_QWORD *)v25 + 12) = v25 + 112;
          *((_QWORD *)v25 + 16) = v25 + 144;
          *((_QWORD *)v25 + 20) = v25 + 176;
          *((_QWORD *)v25 + 24) = v25 + 208;
          *((_QWORD *)v25 + 28) = v25 + 240;
          *((_QWORD *)v25 + 32) = v25 + 272;
          *((_QWORD *)v25 + 36) = v25 + 304;
          *((_QWORD *)v25 + 40) = v25 + 336;
          *((_QWORD *)v25 + 44) = v25 + 368;
          *((_QWORD *)v25 + 48) = v25 + 400;
          *((_QWORD *)v25 + 52) = v25 + 432;
          *((_QWORD *)v25 + 13) = 0;
          v25[112] = 0;
          *((_QWORD *)v25 + 17) = 0;
          v25[144] = 0;
          *((_QWORD *)v25 + 21) = 0;
          v25[176] = 0;
          *((_QWORD *)v25 + 25) = 0;
          v25[208] = 0;
          *((_QWORD *)v25 + 29) = 0;
          v25[240] = 0;
          *((_QWORD *)v25 + 33) = 0;
          v25[272] = 0;
          *((_QWORD *)v25 + 37) = 0;
          v25[304] = 0;
          *((_QWORD *)v25 + 41) = 0;
          v25[336] = 0;
          *((_QWORD *)v25 + 45) = 0;
          v25[368] = 0;
          *((_QWORD *)v25 + 49) = 0;
          v25[400] = 0;
          *((_QWORD *)v25 + 53) = 0x800000000LL;
          v26 = srcc;
          *((_QWORD *)v25 + 66) = v25 + 544;
          *((_QWORD *)v25 + 67) = 0x600000000LL;
        }
        v83 = v25;
      }
      v25[*v25 + 1] = 0;
      v78 = v82;
      if ( &v26[v27] && !v26 )
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      if ( (unsigned __int64)v27 > 0xF )
        break;
      if ( v27 == 1 )
      {
        LOBYTE(v82[0]) = *v26;
        v28 = v82;
        goto LABEL_20;
      }
      v28 = v82;
      if ( v27 )
        goto LABEL_59;
LABEL_20:
      n = v27;
      *((_BYTE *)v28 + v27) = 0;
      v29 = v83;
      v30 = *(unsigned __int8 *)v83;
      *(_BYTE *)v83 = v30 + 1;
      v31 = 4 * (v30 + 3);
      v32 = &v29[v31];
      v33 = (_BYTE *)v29[v31];
      if ( v78 == v82 )
      {
        v49 = n;
        if ( !n )
          goto LABEL_63;
        if ( n != 1 )
        {
          memcpy(v33, v82, n);
          v49 = n;
          v33 = (_BYTE *)*v32;
LABEL_63:
          v32[1] = v49;
          v33[v49] = 0;
          v33 = v78;
          goto LABEL_24;
        }
        *v33 = v82[0];
        v67 = (_BYTE *)*v32;
        v32[1] = 1;
        v67[1] = 0;
        v33 = v78;
      }
      else
      {
        if ( v33 == (_BYTE *)&v29[v31 + 2] )
        {
          *v32 = v78;
          v32[1] = n;
          v32[2] = v82[0];
        }
        else
        {
          v34 = v29[4 * (int)v30 + 14];
          *v32 = v78;
          v32[1] = n;
          v32[2] = v82[0];
          if ( v33 )
          {
            v78 = v33;
            v82[0] = v34;
            goto LABEL_24;
          }
        }
        v78 = v82;
        v33 = v82;
      }
LABEL_24:
      na = 0;
      *v33 = 0;
      if ( v78 != v82 )
        operator delete(v78);
      v35 = v83;
      v36 = *(void **)(v22 + 1);
      if ( !v83 )
      {
        v51 = v84;
        v52 = *(_DWORD *)(v84 + 14976);
        if ( v52 )
        {
          v53 = (unsigned int)(v52 - 1);
          *(_DWORD *)(v84 + 14976) = v53;
          v35 = *(_QWORD **)(v51 + 8 * v53 + 14848);
          v54 = *((unsigned int *)v35 + 134);
          *(_BYTE *)v35 = 0;
          v55 = v35[66];
          *((_DWORD *)v35 + 106) = 0;
          v56 = v55 + (v54 << 6);
          if ( v55 == v56 )
          {
            v38 = 1;
            v37 = 0;
          }
          else
          {
            do
            {
              while ( 1 )
              {
                v56 -= 64;
                v57 = *(void **)(v56 + 24);
                if ( v57 == (void *)(v56 + 40) )
                  break;
                v75 = v56;
                v73 = v55;
                operator delete(v57);
                v55 = v73;
                v56 = v75;
                if ( v73 == v75 )
                  goto LABEL_72;
              }
            }
            while ( v55 != v56 );
LABEL_72:
            v37 = *((unsigned int *)v35 + 106);
            v38 = v37 + 1;
          }
          *((_DWORD *)v35 + 134) = 0;
          v58 = *((unsigned int *)v35 + 107);
        }
        else
        {
          srcb = *(void **)(v22 + 1);
          v66 = (_BYTE *)operator new(0x3A0u);
          v58 = 8;
          v37 = 0;
          v35 = v66;
          *v66 = 0;
          *((_QWORD *)v66 + 12) = v66 + 112;
          *((_QWORD *)v66 + 16) = v66 + 144;
          *((_QWORD *)v66 + 20) = v66 + 176;
          *((_QWORD *)v66 + 24) = v66 + 208;
          *((_QWORD *)v66 + 28) = v66 + 240;
          *((_QWORD *)v66 + 32) = v66 + 272;
          *((_QWORD *)v66 + 36) = v66 + 304;
          *((_QWORD *)v66 + 40) = v66 + 336;
          *((_QWORD *)v66 + 44) = v66 + 368;
          *((_QWORD *)v66 + 48) = v66 + 400;
          *((_QWORD *)v66 + 52) = v66 + 432;
          *((_QWORD *)v66 + 13) = 0;
          v66[112] = 0;
          *((_QWORD *)v66 + 17) = 0;
          v66[144] = 0;
          *((_QWORD *)v66 + 21) = 0;
          v66[176] = 0;
          *((_QWORD *)v66 + 25) = 0;
          v66[208] = 0;
          *((_QWORD *)v66 + 29) = 0;
          v66[240] = 0;
          *((_QWORD *)v66 + 33) = 0;
          v66[272] = 0;
          *((_QWORD *)v66 + 37) = 0;
          v66[304] = 0;
          *((_QWORD *)v66 + 41) = 0;
          v66[336] = 0;
          *((_QWORD *)v66 + 45) = 0;
          v66[368] = 0;
          *((_QWORD *)v66 + 49) = 0;
          v66[400] = 0;
          *((_QWORD *)v66 + 53) = 0x800000000LL;
          v36 = srcb;
          *((_QWORD *)v66 + 67) = 0x600000000LL;
          *((_QWORD *)v66 + 66) = v66 + 544;
          v38 = 1;
        }
        v83 = v35;
        v79 = v36;
        LOBYTE(na) = 1;
        if ( v58 >= v38 )
          goto LABEL_28;
LABEL_82:
        sub_2237220(v35 + 52, v35 + 54, v38, 12);
        v37 = *((unsigned int *)v35 + 106);
        goto LABEL_28;
      }
      v37 = *((unsigned int *)v83 + 106);
      v79 = *(void **)(v22 + 1);
      LOBYTE(na) = 1;
      v38 = v37 + 1;
      if ( *((unsigned int *)v83 + 107) < (unsigned __int64)(v37 + 1) )
        goto LABEL_82;
LABEL_28:
      v39 = v35[52] + 12 * v37;
      *(_QWORD *)v39 = v79;
      *(_DWORD *)(v39 + 8) = na;
      ++*((_DWORD *)v35 + 106);
      if ( (_BYTE)v88 )
      {
        sub_FC7790(v85, &v83, HIBYTE(v88));
        v85 = 0;
        v88 = 0;
      }
      if ( v86 != &v87 )
        operator delete(v86);
      v40 = (void **)v83;
      if ( v83 )
      {
        v41 = v84;
        if ( v84 )
        {
          if ( (unsigned __int64)v83 < v84 || (unsigned __int64)v83 > v84 + 14848 )
          {
            v42 = *((void ***)v83 + 66);
            v43 = (unsigned __int64)*((unsigned int *)v83 + 134) << 6;
            v44 = (void **)((char *)v42 + v43);
            if ( v42 != (void **)((char *)v42 + v43) )
            {
              do
              {
                while ( 1 )
                {
                  v44 -= 8;
                  v45 = (void **)v44[3];
                  if ( v45 == v44 + 5 )
                    break;
                  srca = v42;
                  operator delete(v45);
                  v42 = srca;
                  if ( srca == v44 )
                    goto LABEL_38;
                }
              }
              while ( v42 != v44 );
LABEL_38:
              v44 = (void **)v40[66];
            }
            if ( v44 != v40 + 68 )
              free(v44);
            v46 = (void **)v40[52];
            if ( v46 != v40 + 54 )
              free(v46);
            v47 = v40 + 48;
            src = v40 + 8;
            do
            {
              while ( *v47 != v47 + 2 )
              {
                operator delete(*v47);
                v47 -= 4;
                if ( v47 == src )
                  goto LABEL_46;
              }
              v47 -= 4;
            }
            while ( v47 != src );
LABEL_46:
            operator delete(v40, 0x3A0u);
          }
          else
          {
            v50 = *(unsigned int *)(v84 + 14976);
            *(_DWORD *)(v84 + 14976) = v50 + 1;
            *(_QWORD *)(v41 + 8 * v50 + 14848) = v40;
          }
        }
      }
      *((_BYTE *)v22 + 13) |= 2u;
      v17 = *(_DWORD *)(a1 + 96);
      if ( !v17 )
        return v72;
    }
    if ( v27 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v28 = (_QWORD *)operator new(v27 + 1);
    v82[0] = v27;
    v78 = v28;
LABEL_59:
    memcpy(v28, v26, v27);
    v28 = v78;
    goto LABEL_20;
  }
  return v72;
}
