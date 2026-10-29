void __fastcall sub_9C7F00(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rsi
  unsigned __int64 v10; // r8
  __int64 v11; // rdx
  unsigned __int64 v12; // r15
  __int64 v13; // r10
  int v14; // eax
  unsigned int v15; // eax
  __int64 v16; // rax
  unsigned __int8 v17; // cl
  _QWORD *v18; // rdi
  unsigned __int8 **v19; // rbp
  void *v20; // r15
  _BYTE *v21; // rbx
  void **p_src; // rsi
  _QWORD *v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rsi
  unsigned int v29; // r14d
  __int64 v30; // rax
  void *v31; // rax
  void *v32; // r9
  int v33; // eax
  unsigned int v34; // eax
  __int64 v35; // rax
  unsigned __int8 v36; // cl
  unsigned __int8 **v37; // rbp
  void *v38; // r15
  _BYTE *v39; // rbx
  _QWORD *v40; // rax
  void *v41; // rsi
  void *v42; // rsi
  __int64 *v43; // r8
  int v44; // eax
  __int64 *v45; // r9
  _QWORD *v46; // rdi
  int v47; // eax
  void **v48; // [rsp-8h] [rbp-150h]
  unsigned int v49; // [rsp+8h] [rbp-140h]
  unsigned int v50; // [rsp+8h] [rbp-140h]
  unsigned int v51; // [rsp+8h] [rbp-140h]
  int v52; // [rsp+8h] [rbp-140h]
  __int64 v53; // [rsp+10h] [rbp-138h]
  unsigned __int64 *v54; // [rsp+10h] [rbp-138h]
  int v55; // [rsp+10h] [rbp-138h]
  _QWORD *v56; // [rsp+10h] [rbp-138h]
  _QWORD *v57; // [rsp+18h] [rbp-130h]
  __int64 *v58; // [rsp+18h] [rbp-130h]
  __int64 v59; // [rsp+20h] [rbp-128h]
  __int64 *v60; // [rsp+28h] [rbp-120h]
  void *v61; // [rsp+30h] [rbp-118h] BYREF
  unsigned int v62; // [rsp+38h] [rbp-110h]
  void *v63; // [rsp+40h] [rbp-108h] BYREF
  unsigned int v64; // [rsp+48h] [rbp-100h]
  void *v65; // [rsp+50h] [rbp-F8h]
  _BYTE *v66; // [rsp+58h] [rbp-F0h]
  _QWORD v67[2]; // [rsp+60h] [rbp-E8h] BYREF
  _BYTE *v68; // [rsp+70h] [rbp-D8h]
  _BYTE *v69; // [rsp+78h] [rbp-D0h]
  _QWORD v70[2]; // [rsp+80h] [rbp-C8h] BYREF
  void *ptr; // [rsp+90h] [rbp-B8h] BYREF
  size_t n[2]; // [rsp+98h] [rbp-B0h]
  _BYTE v73[40]; // [rsp+A8h] [rbp-A0h] BYREF
  void *src; // [rsp+D0h] [rbp-78h] BYREF
  size_t v75[2]; // [rsp+D8h] [rbp-70h]
  _BYTE v76[96]; // [rsp+E8h] [rbp-60h] BYREF

  v7 = *(_QWORD *)(a1 + 216);
  v62 = 1;
  v61 = nullptr;
  v64 = 1;
  v63 = nullptr;
  if ( v7 && ((*(_BYTE *)(v7 + 28) & 0x7F) == 0x29 || *(char *)(v7 + 97) >= 0) )
    return;
  sub_782330(a3, (__int64)&v63, (__int64)&v61);
  sub_2586140(&v63, &v63, v8);
  v9 = *(unsigned int *)(a4 + 8);
  v10 = *(_QWORD *)a4;
  v11 = v64;
  if ( !(unsigned __int8)(*(_QWORD *)(a3 + 72) >> 31) )
  {
    v12 = *(_QWORD *)a4;
    if ( (unsigned int)v9 > 0x40 )
      v12 = *(_QWORD *)v10;
    v49 = v64;
    if ( v64 > 0x40 )
    {
      v54 = (unsigned __int64 *)v63;
      v33 = sub_831980((__int64)&v63);
      v32 = v54;
      if ( v49 - v33 > 0x40 || *v54 >= v12 )
      {
LABEL_49:
        if ( v32 )
          operator delete[](v32);
        goto LABEL_9;
      }
    }
    else if ( (unsigned __int64)v63 >= v12 )
    {
      goto LABEL_9;
    }
    v34 = sub_A1A260(*(_QWORD *)(a1 + 200), a2);
    v35 = sub_A2E050(a1, v34, 2291, 0);
    v36 = *(_BYTE *)(a4 + 12);
    src = v76;
    p_src = &src;
    v37 = (unsigned __int8 **)v35;
    *(__m128i *)v75 = _mm_load_si128((const __m128i *)&xmmword_3C7E610);
    sub_2593F40(a4, (unsigned int)&src, 10, v36 ^ 1, 0, 1, 0);
    v38 = src;
    v18 = v70;
    v39 = (_BYTE *)v75[0];
    v68 = v70;
    if ( !src && v75[0] )
      goto LABEL_108;
    ptr = (void *)v75[0];
    if ( v75[0] > 0xF )
    {
      v68 = (_BYTE *)std::string::_M_create();
      v18 = v68;
      v70[0] = ptr;
    }
    else
    {
      if ( v75[0] == 1 )
      {
        LOBYTE(v70[0]) = *(_BYTE *)src;
        v40 = v70;
        goto LABEL_57;
      }
      v40 = v70;
      if ( !v75[0] )
      {
LABEL_57:
        v69 = v39;
        v39[(_QWORD)v40] = 0;
        if ( src != v76 )
          free(src);
        if ( v37 )
        {
          sub_838D50(v37, v68, (size_t)v69);
          v41 = v61;
          if ( v62 > 0x40 )
            v41 = *(void **)v61;
          sub_9B58B0(v37, (__int64)v41);
          v42 = v63;
          if ( v64 > 0x40 )
            v42 = *(void **)v63;
          sub_9B58B0(v37, (__int64)v42);
          sub_8356A0(v37, a3, 0xAu);
        }
        std::string::_M_dispose();
LABEL_34:
        LODWORD(v11) = v64;
        goto LABEL_47;
      }
    }
    memcpy(v18, v38, (size_t)v39);
    v39 = ptr;
    v40 = v68;
    goto LABEL_57;
  }
  if ( (unsigned int)v9 > 0x40 )
  {
    v26 = *(_QWORD *)v10;
    v13 = *(_QWORD *)v10;
    if ( v64 > 0x40 )
      goto LABEL_16;
    if ( !v64 )
    {
      if ( v26 > 0 )
        goto LABEL_18;
      goto LABEL_41;
    }
LABEL_37:
    v27 = (__int64)((_QWORD)v63 << (64 - (unsigned __int8)v64)) >> (64 - (unsigned __int8)v64);
    goto LABEL_38;
  }
  if ( !(_DWORD)v9 )
  {
    if ( v64 <= 0x40 )
    {
      if ( !v64 )
      {
        v29 = v62;
        if ( v62 <= 0x40 )
        {
          if ( !v62 )
            return;
LABEL_99:
          v31 = v61;
          v28 = 0;
LABEL_45:
          v30 = (__int64)((_QWORD)v31 << (64 - (unsigned __int8)v29)) >> (64 - (unsigned __int8)v29);
          goto LABEL_46;
        }
LABEL_66:
        v28 = 0;
        goto LABEL_67;
      }
      if ( (__int64)((_QWORD)v63 << (64 - (unsigned __int8)v64)) < 0 )
        goto LABEL_18;
LABEL_97:
      v29 = v62;
      if ( v62 <= 0x40 )
      {
        if ( !v62 )
        {
          if ( (unsigned int)v11 <= 0x40 )
            return;
          goto LABEL_48;
        }
        goto LABEL_99;
      }
      goto LABEL_66;
    }
    v13 = 0;
    goto LABEL_16;
  }
  v13 = (__int64)(v10 << (64 - (unsigned __int8)v9)) >> (64 - (unsigned __int8)v9);
  if ( v64 <= 0x40 )
  {
    if ( !v64 )
    {
      if ( v13 > 0 )
        goto LABEL_18;
      goto LABEL_72;
    }
    goto LABEL_37;
  }
LABEL_16:
  v60 = (__int64 *)v63;
  if ( (*((_QWORD *)v63 + ((v64 - 1) >> 6)) & (1LL << ((unsigned __int8)v64 - 1))) != 0 )
  {
    v50 = v64;
    v57 = *(_QWORD **)a4;
    v53 = v13;
    v14 = sub_2587540(&v63, v9, v64);
    v11 = v50;
    if ( v50 + 1 - v14 > 0x40 )
    {
LABEL_18:
      v15 = sub_A1A260(*(_QWORD *)(a1 + 200), a2);
      v16 = sub_A2E050(a1, v15, 2291, 0);
      v17 = *(_BYTE *)(a4 + 12);
      v18 = (_QWORD *)a4;
      ptr = v73;
      v19 = (unsigned __int8 **)v16;
      *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_3C7E610);
      sub_2593F40(a4, (unsigned int)&ptr, 10, v17 ^ 1, 0, 1, 0);
      v20 = ptr;
      v21 = (_BYTE *)n[0];
      v65 = v67;
      p_src = v48;
      if ( !ptr && n[0] )
LABEL_108:
        sub_536ABE(v18, p_src);
      src = (void *)n[0];
      if ( n[0] > 0xF )
      {
        v65 = (void *)std::string::_M_create();
        v46 = v65;
        v67[0] = src;
      }
      else
      {
        if ( n[0] == 1 )
        {
          LOBYTE(v67[0]) = *(_BYTE *)ptr;
          v23 = v67;
          goto LABEL_23;
        }
        v23 = v67;
        if ( !n[0] )
        {
LABEL_23:
          v66 = v21;
          v21[(_QWORD)v23] = 0;
          if ( ptr != v73 )
            free(ptr);
          if ( v19 )
          {
            sub_838D50(v19, v65, (size_t)v66);
            if ( v62 <= 0x40 )
            {
              v24 = 0;
              if ( v62 )
                v24 = (__int64)((_QWORD)v61 << (64 - (unsigned __int8)v62)) >> (64 - (unsigned __int8)v62);
            }
            else
            {
              v24 = *(_QWORD *)v61;
            }
            sub_9B5410(v19, v24);
            if ( v64 > 0x40 )
            {
              v25 = *(_QWORD *)v63;
            }
            else
            {
              v25 = 0;
              if ( v64 )
                v25 = (__int64)((_QWORD)v63 << (64 - (unsigned __int8)v64)) >> (64 - (unsigned __int8)v64);
            }
            sub_9B5410(v19, v25);
            sub_8356A0(v19, a3, 0xAu);
          }
          if ( v65 != v67 )
            operator delete(v65, v67[0] + 1LL);
          goto LABEL_34;
        }
        v46 = v67;
      }
      memcpy(v46, v20, (size_t)v21);
      v21 = src;
      v23 = v65;
      goto LABEL_23;
    }
    v13 = v53;
    v10 = (unsigned __int64)v57;
    v45 = v60;
  }
  else
  {
    v56 = *(_QWORD **)a4;
    v51 = v64;
    v59 = v13;
    v44 = sub_831980((__int64)&v63);
    v11 = v51;
    v10 = (unsigned __int64)v56;
    if ( v51 + 1 - v44 > 0x40 )
      goto LABEL_39;
    v13 = v59;
    v45 = v60;
  }
  v27 = *v45;
LABEL_38:
  if ( v27 < v13 )
    goto LABEL_18;
LABEL_39:
  if ( (unsigned int)v9 > 0x40 )
  {
    v26 = *(_QWORD *)v10;
LABEL_41:
    v28 = v26;
    goto LABEL_42;
  }
  if ( !(_DWORD)v9 )
    goto LABEL_97;
LABEL_72:
  v28 = (__int64)(v10 << (64 - (unsigned __int8)v9)) >> (64 - (unsigned __int8)v9);
LABEL_42:
  v29 = v62;
  if ( v62 <= 0x40 )
  {
    v30 = 0;
    if ( !v62 )
      goto LABEL_46;
    v31 = v61;
    goto LABEL_45;
  }
LABEL_67:
  v58 = (__int64 *)v61;
  if ( (*((_QWORD *)v61 + ((v29 - 1) >> 6)) & (1LL << ((unsigned __int8)v29 - 1))) != 0 )
  {
    v52 = v11;
    v47 = sub_2587540(&v61, v28, v11);
    LODWORD(v11) = v52;
    if ( v29 + 1 - v47 > 0x40 )
      goto LABEL_47;
    v43 = v58;
  }
  else
  {
    v55 = v11;
    if ( v29 + 1 - (unsigned int)sub_831980((__int64)&v61) > 0x40 )
      goto LABEL_18;
    LODWORD(v11) = v55;
    v43 = v58;
  }
  v30 = *v43;
LABEL_46:
  if ( v28 < v30 )
    goto LABEL_18;
LABEL_47:
  if ( (unsigned int)v11 > 0x40 )
  {
LABEL_48:
    v32 = v63;
    goto LABEL_49;
  }
LABEL_9:
  if ( v62 > 0x40 )
  {
    if ( v61 )
      operator delete[](v61);
  }
}

