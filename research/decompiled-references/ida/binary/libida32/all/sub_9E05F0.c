void __fastcall sub_9E05F0(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v6; // rax
  signed __int64 v7; // rdx
  signed __int64 v8; // rbp
  _BYTE *v9; // r12
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  _BYTE *v12; // rsi
  signed __int64 v13; // r14
  unsigned __int8 *v14; // r13
  _QWORD *v15; // rax
  _QWORD *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  void **v20; // r14
  _BYTE *v21; // rdi
  __int64 v22; // rax
  unsigned __int8 *v23; // r13
  _QWORD *v24; // rax
  _QWORD *v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  _QWORD *v29; // rbp
  _BYTE *v30; // rdi
  __int64 v31; // rax
  void **v32; // rbp
  unsigned __int64 v33; // rax
  void **v34; // r12
  void **v35; // rbx
  void **v36; // rdi
  void **v37; // rdi
  void **v38; // rbx
  void **v39; // r12
  size_t v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rdx
  unsigned __int64 v43; // rdx
  int v44; // eax
  __int64 v45; // rax
  __int64 v46; // r15
  __int64 v47; // rdx
  __int64 v48; // r15
  void *v49; // rdi
  unsigned __int64 v50; // rdx
  int v51; // eax
  __int64 v52; // rax
  __int64 v53; // r14
  __int64 v54; // r15
  __int64 v55; // r14
  void *v56; // rdi
  __int64 v57; // [rsp+8h] [rbp-D0h]
  _QWORD *v58; // [rsp+10h] [rbp-C8h]
  size_t v59; // [rsp+18h] [rbp-C0h]
  _QWORD v60[2]; // [rsp+20h] [rbp-B8h] BYREF
  void *v61; // [rsp+30h] [rbp-A8h]
  size_t n; // [rsp+38h] [rbp-A0h]
  _QWORD v63[2]; // [rsp+40h] [rbp-98h] BYREF
  void *v64; // [rsp+50h] [rbp-88h] BYREF
  unsigned __int64 v65; // [rsp+58h] [rbp-80h]
  __int64 v66; // [rsp+60h] [rbp-78h]
  void *v67; // [rsp+70h] [rbp-68h]
  __int64 v68; // [rsp+80h] [rbp-58h] BYREF
  __int16 v69; // [rsp+90h] [rbp-48h]

  v4 = a2[1];
  if ( !v4 )
    return;
  v6 = sub_2266D20(*a2, v4, 0);
  v8 = v7;
  v9 = (_BYTE *)v6;
  v10 = sub_2266D60(v6, v7, 0);
  if ( v11 > 7 && *(_QWORD *)(v10 + v11 - 8) == 0x657461766972705FLL )
    return;
  sub_FA3370(&v64, a1, 0, (unsigned int)((*(_BYTE *)(a3 + 904) & 0x40) != 0) + 125);
  v12 = *(_BYTE **)a3;
  v13 = *(_QWORD *)(a3 + 8);
  v14 = (unsigned __int8 *)v64;
  if ( !v64 )
  {
    v43 = v65;
    v44 = *(_DWORD *)(v65 + 14976);
    if ( v44 )
    {
      v45 = (unsigned int)(v44 - 1);
      *(_DWORD *)(v65 + 14976) = v45;
      v14 = *(unsigned __int8 **)(v43 + 8 * v45 + 14848);
      v46 = *((unsigned int *)v14 + 134);
      *v14 = 0;
      v47 = *((_QWORD *)v14 + 66);
      *((_DWORD *)v14 + 106) = 0;
      v48 = v47 + (v46 << 6);
      while ( v47 != v48 )
      {
        while ( 1 )
        {
          v48 -= 64;
          v49 = *(void **)(v48 + 24);
          if ( v49 == (void *)(v48 + 40) )
            break;
          v57 = v47;
          operator delete(v49);
          v47 = v57;
          if ( v57 == v48 )
            goto LABEL_83;
        }
      }
LABEL_83:
      *((_DWORD *)v14 + 134) = 0;
    }
    else
    {
      v14 = (unsigned __int8 *)operator new(0x3A0u);
      *v14 = 0;
      *((_QWORD *)v14 + 12) = v14 + 112;
      *((_QWORD *)v14 + 16) = v14 + 144;
      *((_QWORD *)v14 + 20) = v14 + 176;
      *((_QWORD *)v14 + 24) = v14 + 208;
      *((_QWORD *)v14 + 28) = v14 + 240;
      *((_QWORD *)v14 + 32) = v14 + 272;
      *((_QWORD *)v14 + 36) = v14 + 304;
      *((_QWORD *)v14 + 40) = v14 + 336;
      *((_QWORD *)v14 + 44) = v14 + 368;
      *((_QWORD *)v14 + 48) = v14 + 400;
      *((_QWORD *)v14 + 52) = v14 + 432;
      *((_QWORD *)v14 + 13) = 0;
      v14[112] = 0;
      *((_QWORD *)v14 + 17) = 0;
      v14[144] = 0;
      *((_QWORD *)v14 + 21) = 0;
      v14[176] = 0;
      *((_QWORD *)v14 + 25) = 0;
      v14[208] = 0;
      *((_QWORD *)v14 + 29) = 0;
      v14[240] = 0;
      *((_QWORD *)v14 + 33) = 0;
      v14[272] = 0;
      *((_QWORD *)v14 + 37) = 0;
      v14[304] = 0;
      *((_QWORD *)v14 + 41) = 0;
      v14[336] = 0;
      *((_QWORD *)v14 + 45) = 0;
      v14[368] = 0;
      *((_QWORD *)v14 + 49) = 0;
      v14[400] = 0;
      *((_QWORD *)v14 + 53) = 0x800000000LL;
      *((_QWORD *)v14 + 66) = v14 + 544;
      *((_QWORD *)v14 + 67) = 0x600000000LL;
    }
    v64 = v14;
  }
  v14[*v14 + 1] = 0;
  v61 = v63;
  if ( &v12[v13] && !v12 )
LABEL_96:
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)v13 > 0xF )
  {
    if ( v13 < 0 )
      goto LABEL_97;
    v15 = (_QWORD *)operator new(v13 + 1);
    v63[0] = v13;
    v61 = v15;
LABEL_58:
    memcpy(v15, v12, v13);
    v15 = v61;
    goto LABEL_10;
  }
  if ( v13 == 1 )
  {
    LOBYTE(v63[0]) = *v12;
    v15 = v63;
    goto LABEL_10;
  }
  v15 = v63;
  if ( v13 )
    goto LABEL_58;
LABEL_10:
  n = v13;
  *((_BYTE *)v15 + v13) = 0;
  v16 = v64;
  v17 = *(unsigned __int8 *)v64;
  *(_BYTE *)v64 = v17 + 1;
  v18 = (unsigned __int8)v17;
  v19 = 4 * (v17 + 3);
  v20 = (void **)&v16[v19];
  v21 = (_BYTE *)v16[v19];
  if ( v61 == v63 )
  {
    v40 = n;
    if ( n )
    {
      if ( n == 1 )
        *v21 = v63[0];
      else
        memcpy(v21, v61, n);
      v40 = n;
      v21 = *v20;
    }
    v20[1] = (void *)v40;
    v21[v40] = 0;
    v21 = v61;
  }
  else
  {
    if ( v21 == (_BYTE *)&v16[v19 + 2] )
    {
      *v20 = v61;
      v20[1] = (void *)n;
      v20[2] = (void *)v63[0];
    }
    else
    {
      v22 = v16[4 * v18 + 14];
      *v20 = v61;
      v20[1] = (void *)n;
      v20[2] = (void *)v63[0];
      if ( v21 )
      {
        v61 = v21;
        v63[0] = v22;
        goto LABEL_14;
      }
    }
    v21 = v63;
    v61 = v63;
  }
LABEL_14:
  n = 0;
  *v21 = 0;
  if ( v61 != v63 )
    operator delete(v61);
  v23 = (unsigned __int8 *)v64;
  if ( !v64 )
  {
    v50 = v65;
    v51 = *(_DWORD *)(v65 + 14976);
    if ( v51 )
    {
      v52 = (unsigned int)(v51 - 1);
      *(_DWORD *)(v65 + 14976) = v52;
      v23 = *(unsigned __int8 **)(v50 + 8 * v52 + 14848);
      v53 = *((unsigned int *)v23 + 134);
      *v23 = 0;
      v54 = *((_QWORD *)v23 + 66);
      *((_DWORD *)v23 + 106) = 0;
      v55 = v54 + (v53 << 6);
      while ( v54 != v55 )
      {
        while ( 1 )
        {
          v55 -= 64;
          v56 = *(void **)(v55 + 24);
          if ( v56 == (void *)(v55 + 40) )
            break;
          operator delete(v56);
          if ( v54 == v55 )
            goto LABEL_89;
        }
      }
LABEL_89:
      *((_DWORD *)v23 + 134) = 0;
    }
    else
    {
      v23 = (unsigned __int8 *)operator new(0x3A0u);
      *v23 = 0;
      *((_QWORD *)v23 + 12) = v23 + 112;
      *((_QWORD *)v23 + 16) = v23 + 144;
      *((_QWORD *)v23 + 20) = v23 + 176;
      *((_QWORD *)v23 + 24) = v23 + 208;
      *((_QWORD *)v23 + 28) = v23 + 240;
      *((_QWORD *)v23 + 32) = v23 + 272;
      *((_QWORD *)v23 + 36) = v23 + 304;
      *((_QWORD *)v23 + 40) = v23 + 336;
      *((_QWORD *)v23 + 44) = v23 + 368;
      *((_QWORD *)v23 + 48) = v23 + 400;
      *((_QWORD *)v23 + 52) = v23 + 432;
      *((_QWORD *)v23 + 13) = 0;
      v23[112] = 0;
      *((_QWORD *)v23 + 17) = 0;
      v23[144] = 0;
      *((_QWORD *)v23 + 21) = 0;
      v23[176] = 0;
      *((_QWORD *)v23 + 25) = 0;
      v23[208] = 0;
      *((_QWORD *)v23 + 29) = 0;
      v23[240] = 0;
      *((_QWORD *)v23 + 33) = 0;
      v23[272] = 0;
      *((_QWORD *)v23 + 37) = 0;
      v23[304] = 0;
      *((_QWORD *)v23 + 41) = 0;
      v23[336] = 0;
      *((_QWORD *)v23 + 45) = 0;
      v23[368] = 0;
      *((_QWORD *)v23 + 49) = 0;
      v23[400] = 0;
      *((_QWORD *)v23 + 53) = 0x800000000LL;
      *((_QWORD *)v23 + 66) = v23 + 544;
      *((_QWORD *)v23 + 67) = 0x600000000LL;
    }
    v64 = v23;
  }
  v23[*v23 + 1] = 0;
  v58 = v60;
  if ( &v9[v8] && !v9 )
    goto LABEL_96;
  if ( (unsigned __int64)v8 > 0xF )
  {
    if ( v8 >= 0 )
    {
      v24 = (_QWORD *)operator new(v8 + 1);
      v60[0] = v8;
      v58 = v24;
LABEL_61:
      memcpy(v24, v9, v8);
      v24 = v58;
      goto LABEL_22;
    }
LABEL_97:
    std::__throw_length_error("basic_string::_M_create");
  }
  if ( v8 == 1 )
  {
    LOBYTE(v60[0]) = *v9;
    v24 = v60;
    goto LABEL_22;
  }
  v24 = v60;
  if ( v8 )
    goto LABEL_61;
LABEL_22:
  v59 = v8;
  *((_BYTE *)v24 + v8) = 0;
  v25 = v64;
  v26 = *(unsigned __int8 *)v64;
  *(_BYTE *)v64 = v26 + 1;
  v27 = (unsigned __int8)v26;
  v28 = 4 * (v26 + 3);
  v29 = &v25[v28];
  v30 = (_BYTE *)v25[v28];
  if ( v58 == v60 )
  {
    v41 = v59;
    if ( v59 )
    {
      if ( v59 == 1 )
      {
        *v30 = v60[0];
        v41 = 1;
      }
      else
      {
        memcpy(v30, v58, v59);
        v41 = v59;
      }
      v30 = (_BYTE *)*v29;
    }
    v29[1] = v41;
    v30[v41] = 0;
    v30 = v58;
  }
  else
  {
    if ( v30 == (_BYTE *)&v25[v28 + 2] )
    {
      *v29 = v58;
      v29[1] = v59;
      v29[2] = v60[0];
    }
    else
    {
      v31 = v25[4 * v27 + 14];
      *v29 = v58;
      v29[1] = v59;
      v29[2] = v60[0];
      if ( v30 )
      {
        v58 = v30;
        v60[0] = v31;
        goto LABEL_26;
      }
    }
    v30 = v60;
    v58 = v60;
  }
LABEL_26:
  *v30 = 0;
  if ( v58 != v60 )
    operator delete(v58);
  if ( (_BYTE)v69 )
  {
    sub_FA3A50(v66, &v64, HIBYTE(v69));
    v66 = 0;
    v69 = 0;
  }
  if ( v67 != &v68 )
    operator delete(v67);
  v32 = (void **)v64;
  if ( v64 )
  {
    v33 = v65;
    if ( v65 )
    {
      if ( (unsigned __int64)v64 < v65 || (unsigned __int64)v64 > v65 + 14848 )
      {
        v34 = *((void ***)v64 + 66);
        v35 = &v34[8 * (unsigned __int64)*((unsigned int *)v64 + 134)];
        if ( v34 != v35 )
        {
          do
          {
            while ( 1 )
            {
              v35 -= 8;
              v36 = (void **)v35[3];
              if ( v36 == v35 + 5 )
                break;
              operator delete(v36);
              if ( v34 == v35 )
                goto LABEL_38;
            }
          }
          while ( v34 != v35 );
LABEL_38:
          v35 = (void **)v32[66];
        }
        if ( v35 != v32 + 68 )
          free(v35);
        v37 = (void **)v32[52];
        if ( v37 != v32 + 54 )
          free(v37);
        v38 = v32 + 48;
        v39 = v32 + 8;
        do
        {
          while ( *v38 != v38 + 2 )
          {
            operator delete(*v38);
            v38 -= 4;
            if ( v39 == v38 )
              goto LABEL_46;
          }
          v38 -= 4;
        }
        while ( v39 != v38 );
LABEL_46:
        operator delete(v32, 0x3A0u);
      }
      else
      {
        v42 = *(unsigned int *)(v65 + 14976);
        *(_DWORD *)(v65 + 14976) = v42 + 1;
        *(_QWORD *)(v33 + 8 * v42 + 14848) = v32;
      }
    }
  }
}

