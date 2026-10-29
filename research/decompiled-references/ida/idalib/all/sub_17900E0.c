__int64 __fastcall sub_17900E0(__int64 *a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v8; // r12
  _QWORD *v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  _QWORD *v19; // rax
  _BYTE *v20; // rsi
  __int64 v21; // r14
  __int64 v22; // r13
  unsigned __int8 *v23; // rbx
  _QWORD *v24; // rax
  _BYTE *v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  void **v29; // r13
  _BYTE *v30; // rdi
  __int64 v31; // rax
  void *v32; // rdi
  unsigned __int8 *v33; // rbx
  _BYTE *v34; // r15
  __int64 v35; // r13
  _QWORD *v36; // rax
  unsigned __int8 *v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  void **v41; // r13
  unsigned __int8 *v42; // rdi
  __int64 v43; // rax
  size_t v44; // rdx
  size_t v45; // rdx
  __int64 v46; // rdx
  int v47; // eax
  __int64 v48; // rdx
  int v49; // eax
  __int64 v50; // rax
  __int64 v51; // r14
  char *v52; // rdx
  char *v53; // r14
  char *v54; // rdi
  __int64 v55; // rax
  __int64 v56; // r15
  __int64 v57; // rdx
  __int64 v58; // r15
  void *v59; // rdi
  _BYTE *v60; // [rsp+0h] [rbp-158h]
  char *v61; // [rsp+0h] [rbp-158h]
  __int64 v62; // [rsp+8h] [rbp-150h]
  __int64 v63; // [rsp+8h] [rbp-150h]
  __int64 v64; // [rsp+8h] [rbp-150h]
  __int64 v65; // [rsp+18h] [rbp-140h]
  __int64 v66; // [rsp+28h] [rbp-130h] BYREF
  void *src; // [rsp+30h] [rbp-128h] BYREF
  size_t n; // [rsp+38h] [rbp-120h]
  __int64 v69; // [rsp+40h] [rbp-118h] BYREF
  void *v70; // [rsp+50h] [rbp-108h]
  size_t v71; // [rsp+58h] [rbp-100h]
  _QWORD v72[2]; // [rsp+60h] [rbp-F8h] BYREF
  void *v73; // [rsp+70h] [rbp-E8h]
  size_t v74; // [rsp+78h] [rbp-E0h]
  _QWORD v75[2]; // [rsp+80h] [rbp-D8h] BYREF
  _QWORD v76[2]; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v77; // [rsp+A0h] [rbp-B8h]
  unsigned __int8 *v78; // [rsp+B0h] [rbp-A8h]
  __int64 v79; // [rsp+B8h] [rbp-A0h]
  char v80; // [rsp+108h] [rbp-50h]
  unsigned int v81; // [rsp+110h] [rbp-48h]
  char v82; // [rsp+114h] [rbp-44h]

  v8 = *(_QWORD *)(sub_168B6C0((__int64)a1) + 1696);
  if ( v8 )
  {
    v65 = *(_QWORD *)(v8 + 48);
    v76[0] = 0;
    v62 = sub_168B6C0((__int64)a1);
    v9 = (_QWORD *)sub_168B6C0((__int64)a1);
    v10 = v62;
    v63 = sub_EEE9A0(32, v9, 8u);
    sub_BF7BD0(v63, v10, v8, 0, v65, 1, a3, v76, 0);
    sub_1910D40(*a1, a3, v8, 1);
    return sub_192A5E0(*a1, a6, 0, 1, 0);
  }
  sub_168B9F0((__int64)v76, a1, a3, 0x14E6u, 0);
  sub_178FB90((__m128i **)&src, (__int64)a1);
  if ( v80 )
  {
    v33 = v78;
    v34 = src;
    v35 = n;
    if ( !v78 )
    {
      v46 = v79;
      v47 = *(_DWORD *)(v79 + 14976);
      if ( v47 )
      {
        v50 = (unsigned int)(v47 - 1);
        *(_DWORD *)(v79 + 14976) = v50;
        v33 = *(unsigned __int8 **)(v46 + 8 * v50 + 14848);
        v51 = *((unsigned int *)v33 + 134);
        *v33 = 0;
        v52 = *((char **)v33 + 66);
        *((_DWORD *)v33 + 106) = 0;
        v53 = &v52[64 * v51];
        while ( v52 != v53 )
        {
          while ( 1 )
          {
            v53 -= 64;
            v54 = *((char **)v53 + 3);
            if ( v54 == v53 + 40 )
              break;
            v61 = v52;
            operator delete(v54);
            v52 = v61;
            if ( v61 == v53 )
              goto LABEL_69;
          }
        }
LABEL_69:
        *((_DWORD *)v33 + 134) = 0;
      }
      else
      {
        v33 = (unsigned __int8 *)operator new(0x3A0u);
        *v33 = 0;
        *((_QWORD *)v33 + 12) = v33 + 112;
        *((_QWORD *)v33 + 16) = v33 + 144;
        *((_QWORD *)v33 + 20) = v33 + 176;
        *((_QWORD *)v33 + 24) = v33 + 208;
        *((_QWORD *)v33 + 28) = v33 + 240;
        *((_QWORD *)v33 + 32) = v33 + 272;
        *((_QWORD *)v33 + 36) = v33 + 304;
        *((_QWORD *)v33 + 40) = v33 + 336;
        *((_QWORD *)v33 + 44) = v33 + 368;
        *((_QWORD *)v33 + 48) = v33 + 400;
        *((_QWORD *)v33 + 52) = v33 + 432;
        *((_QWORD *)v33 + 13) = 0;
        v33[112] = 0;
        *((_QWORD *)v33 + 17) = 0;
        v33[144] = 0;
        *((_QWORD *)v33 + 21) = 0;
        v33[176] = 0;
        *((_QWORD *)v33 + 25) = 0;
        v33[208] = 0;
        *((_QWORD *)v33 + 29) = 0;
        v33[240] = 0;
        *((_QWORD *)v33 + 33) = 0;
        v33[272] = 0;
        *((_QWORD *)v33 + 37) = 0;
        v33[304] = 0;
        *((_QWORD *)v33 + 41) = 0;
        v33[336] = 0;
        *((_QWORD *)v33 + 45) = 0;
        v33[368] = 0;
        *((_QWORD *)v33 + 49) = 0;
        v33[400] = 0;
        *((_QWORD *)v33 + 53) = 0x800000000LL;
        *((_QWORD *)v33 + 66) = v33 + 544;
        *((_QWORD *)v33 + 67) = 0x600000000LL;
      }
      v78 = v33;
    }
    v33[*v33 + 1] = 0;
    v70 = v72;
    if ( &v34[v35] && !v34 )
      goto LABEL_26;
    if ( (unsigned __int64)v35 > 0xF )
    {
      if ( v35 < 0 )
        goto LABEL_77;
      v36 = (_QWORD *)operator new(v35 + 1);
      v72[0] = v35;
      v70 = v36;
    }
    else
    {
      if ( v35 == 1 )
      {
        LOBYTE(v72[0]) = *v34;
        v36 = v72;
        goto LABEL_30;
      }
      v36 = v72;
      if ( !v35 )
      {
LABEL_30:
        v71 = v35;
        *((_BYTE *)v36 + v35) = 0;
        v37 = v78;
        v38 = *v78;
        *v78 = v38 + 1;
        v39 = (unsigned __int8)v38;
        v40 = 32 * (v38 + 3);
        v41 = (void **)&v37[v40];
        v42 = *(unsigned __int8 **)&v37[v40];
        if ( v70 == v72 )
        {
          v44 = v71;
          if ( v71 )
          {
            if ( v71 == 1 )
              *v42 = v72[0];
            else
              memcpy(v42, v70, v71);
            v44 = v71;
            v42 = (unsigned __int8 *)*v41;
          }
          v41[1] = (void *)v44;
          v42[v44] = 0;
          v42 = (unsigned __int8 *)v70;
        }
        else
        {
          if ( v42 == &v37[v40 + 16] )
          {
            *v41 = v70;
            v41[1] = (void *)v71;
            v41[2] = (void *)v72[0];
          }
          else
          {
            v43 = *(_QWORD *)&v37[32 * v39 + 112];
            *v41 = v70;
            v41[1] = (void *)v71;
            v41[2] = (void *)v72[0];
            if ( v42 )
            {
              v70 = v42;
              v72[0] = v43;
              goto LABEL_34;
            }
          }
          v42 = (unsigned __int8 *)v72;
          v70 = v72;
        }
LABEL_34:
        v71 = 0;
        *v42 = 0;
        v32 = v70;
        if ( v70 == v72 )
          goto LABEL_6;
        goto LABEL_22;
      }
    }
    memcpy(v36, v34, v35);
    v36 = v70;
    goto LABEL_30;
  }
  if ( v82 )
  {
    v15 = sub_168B9E0(v76);
    v18 = v77;
    if ( v77 )
      v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v77 + 32LL))(v77);
    v66 = v18;
    v19 = sub_1587BC0(v15, &v66, v13, v14, v16, v17);
    v20 = src;
    v21 = n;
    v22 = *v19 + 32LL * v81;
    v23 = *(unsigned __int8 **)(v22 + 8);
    if ( !v23 )
    {
      v48 = *(_QWORD *)(v22 + 16);
      v49 = *(_DWORD *)(v48 + 14976);
      if ( v49 )
      {
        v55 = (unsigned int)(v49 - 1);
        *(_DWORD *)(v48 + 14976) = v55;
        v23 = *(unsigned __int8 **)(v48 + 8 * v55 + 14848);
        v56 = *((unsigned int *)v23 + 134);
        *v23 = 0;
        v57 = *((_QWORD *)v23 + 66);
        *((_DWORD *)v23 + 106) = 0;
        v58 = v57 + (v56 << 6);
        while ( v57 != v58 )
        {
          while ( 1 )
          {
            v58 -= 64;
            v59 = *(void **)(v58 + 24);
            if ( v59 == (void *)(v58 + 40) )
              break;
            v64 = v57;
            operator delete(v59);
            v57 = v64;
            if ( v64 == v58 )
              goto LABEL_74;
          }
        }
LABEL_74:
        *((_DWORD *)v23 + 134) = 0;
      }
      else
      {
        v60 = src;
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
        v20 = v60;
        *((_QWORD *)v23 + 66) = v23 + 544;
        *((_QWORD *)v23 + 67) = 0x600000000LL;
      }
      *(_QWORD *)(v22 + 8) = v23;
    }
    v23[*v23 + 1] = 0;
    v73 = v75;
    if ( !&v20[v21] || v20 )
    {
      if ( (unsigned __int64)v21 <= 0xF )
      {
        if ( v21 == 1 )
        {
          LOBYTE(v75[0]) = *v20;
          v24 = v75;
          goto LABEL_17;
        }
        v24 = v75;
        if ( !v21 )
        {
LABEL_17:
          v74 = v21;
          *((_BYTE *)v24 + v21) = 0;
          v25 = *(_BYTE **)(v22 + 8);
          v26 = (unsigned __int8)*v25;
          *v25 = v26 + 1;
          v27 = (unsigned __int8)v26;
          v28 = 32 * (v26 + 3);
          v29 = (void **)&v25[v28];
          v30 = *(_BYTE **)&v25[v28];
          if ( v73 == v75 )
          {
            v45 = v74;
            if ( v74 )
            {
              if ( v74 == 1 )
                *v30 = v75[0];
              else
                memcpy(v30, v73, v74);
              v45 = v74;
              v30 = *v29;
            }
            v29[1] = (void *)v45;
            v30[v45] = 0;
            v30 = v73;
          }
          else
          {
            if ( v30 == &v25[v28 + 16] )
            {
              *v29 = v73;
              v29[1] = (void *)v74;
              v29[2] = (void *)v75[0];
            }
            else
            {
              v31 = *(_QWORD *)&v25[32 * v27 + 112];
              *v29 = v73;
              v29[1] = (void *)v74;
              v29[2] = (void *)v75[0];
              if ( v30 )
              {
                v73 = v30;
                v75[0] = v31;
                goto LABEL_21;
              }
            }
            v30 = v75;
            v73 = v75;
          }
LABEL_21:
          v74 = 0;
          *v30 = 0;
          v32 = v73;
          if ( v73 == v75 )
            goto LABEL_6;
LABEL_22:
          operator delete(v32);
          goto LABEL_6;
        }
LABEL_40:
        memcpy(v24, v20, v21);
        v24 = v73;
        goto LABEL_17;
      }
      if ( v21 >= 0 )
      {
        v24 = (_QWORD *)operator new(v21 + 1);
        v75[0] = v21;
        v73 = v24;
        goto LABEL_40;
      }
LABEL_77:
      std::__throw_length_error("basic_string::_M_create");
    }
LABEL_26:
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  }
LABEL_6:
  v11 = 1;
  if ( src != &v69 )
    operator delete(src);
  sub_15F7200(v76);
  return v11;
}
