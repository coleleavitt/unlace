__int64 __fastcall sub_380DC0(
        __int64 a1,
        unsigned __int64 a2,
        char a3,
        const char *a4,
        unsigned __int8 a5,
        signed int a6,
        unsigned __int64 a7,
        char a8)
{
  unsigned __int64 v9; // rax
  char v10; // r12
  unsigned int v11; // ebp
  unsigned __int64 v12; // r13
  __int16 flags; // ax
  __int64 v15; // rdi
  unsigned __int64 v16; // r13
  __int64 v17; // r8
  unsigned __int64 v18; // rdx
  _QWORD *v19; // r15
  _BYTE *v20; // rsi
  char v21; // al
  int v22; // ecx
  char v23; // al
  __int64 v24; // rcx
  unsigned __int64 v25; // r15
  size_t v26; // r9
  __int64 v27; // r8
  __int64 v28; // r10
  _BYTE *v29; // rsi
  __int64 v30; // r15
  bool v31; // cf
  const void *v32; // r13
  __int64 v33; // r8
  __int64 v34; // rdx
  _BYTE *v35; // rsi
  char v36; // al
  __int64 v37; // r13
  char v38; // r15
  unsigned __int64 v39; // rdx
  _BYTE *v40; // rsi
  const char *v41; // rdi
  __int64 v42; // r13
  const char *v43; // rdi
  __int64 v44; // r13
  char v45; // r15
  unsigned int v46; // r13d
  const char *v47; // rsi
  __int64 v48; // rdi
  __int64 v49; // r13
  __int64 v50; // r15
  __int64 v51; // rdx
  _BYTE *v52; // rsi
  char v53; // al
  bool v54; // zf
  size_t v55; // rax
  __int64 v56; // r15
  size_t v57; // r8
  size_t v58; // r9
  _BYTE *v59; // rsi
  size_t v60; // rdx
  __int64 v61; // rax
  unsigned __int64 v62; // r13
  _BYTE *v63; // rsi
  unsigned __int64 v64; // [rsp+8h] [rbp-E0h]
  char v66; // [rsp+1Bh] [rbp-CDh]
  int v67; // [rsp+1Ch] [rbp-CCh]
  int v69; // [rsp+30h] [rbp-B8h]
  unsigned int v70; // [rsp+30h] [rbp-B8h]
  __int64 v71; // [rsp+30h] [rbp-B8h]
  __int64 v72; // [rsp+30h] [rbp-B8h]
  unsigned __int64 v73; // [rsp+30h] [rbp-B8h]
  unsigned __int64 v74; // [rsp+30h] [rbp-B8h]
  size_t v75; // [rsp+30h] [rbp-B8h]
  __int64 v76; // [rsp+30h] [rbp-B8h]
  __int64 v77; // [rsp+38h] [rbp-B0h]
  __int64 v78; // [rsp+38h] [rbp-B0h]
  size_t v79; // [rsp+38h] [rbp-B0h]
  __int64 v80; // [rsp+38h] [rbp-B0h]
  __int64 v82; // [rsp+48h] [rbp-A0h]
  unsigned __int64 v83; // [rsp+48h] [rbp-A0h]
  char v86; // [rsp+55h] [rbp-93h]
  size_t v87; // [rsp+58h] [rbp-90h]
  __int64 v88; // [rsp+58h] [rbp-90h]
  __int64 v89; // [rsp+60h] [rbp-88h] BYREF
  char v90; // [rsp+68h] [rbp-80h]
  void *ptr; // [rsp+70h] [rbp-78h] BYREF
  __int128 v92; // [rsp+78h] [rbp-70h]
  _BYTE src[24]; // [rsp+90h] [rbp-58h] BYREF
  unsigned __int64 v94; // [rsp+A8h] [rbp-40h]

  v94 = __readfsqword(0x28u);
  if ( a8 )
  {
    v82 = 0x100000000LL;
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(qword_2CCB598 + 1672) + 24LL) + 24LL) == 8 )
      v82 = -1;
  }
  else
  {
    *(_OWORD *)src = 0;
    getinf_buf(26, src, 16);
    v82 = *(_QWORD *)&src[8];
  }
  v9 = a2 + a7;
  if ( a7 >= v82 - a2 )
    v9 = v82;
  v83 = v9;
  if ( a2 >= v9 )
    return 0;
  v64 = a2;
  v10 = 1;
  v67 = 0;
  v11 = 0;
  while ( 1 )
  {
    if ( a8 )
    {
      v12 = v64;
      while ( 1 )
      {
        flags = get_flags_ex(v12, 4);
        if ( a2 != v12 && (flags & 0x600) != 0x200 )
          goto LABEL_14;
        if ( (flags & 0x1000) != 0 )
          break;
        if ( v83 == ++v12 )
          goto LABEL_14;
      }
      v64 = v12;
    }
    v89 = -1;
    v90 = 0;
    v15 = *(_QWORD *)(qword_2CCB598 + 1672);
    v86 = a3 ? sub_4108F0(v15, &v89, v64) : sub_3E2000(v15, &v89, v64);
    if ( v86 )
      break;
LABEL_74:
    if ( v83 == ++v64 )
    {
LABEL_14:
      if ( !v10 )
        sub_380D60(a1, a5);
      return v11;
    }
  }
  while ( 1 )
  {
    v16 = v89;
    ptr = nullptr;
    v66 = v90;
    v92 = 0;
    ptr = (void *)qvector_reserve(&ptr, 0, 1024, 1);
    if ( !v11 && (getinf(33) & 2) != 0 && a4 )
    {
      v55 = strlen(a4);
      v56 = v92;
      v57 = v55;
      v58 = v55;
      if ( (_QWORD)v92 )
      {
        v56 = v92 - 1;
        v58 = v55 + v92 - 1;
      }
      v59 = ptr;
      v60 = v58 + 1;
      if ( *((_QWORD *)&v92 + 1) < v58 + 1 )
      {
        v87 = v55;
        v79 = v58;
        v75 = v58 + 1;
        ptr = (void *)qvector_reserve(&ptr, ptr, v60, 1);
        v57 = v87;
        v59 = ptr;
        v58 = v79;
        v60 = v75;
      }
      *(_QWORD *)&v92 = v60;
      v59[v58] = 0;
      memmove((char *)ptr + v56, a4, v57);
    }
    if ( a6 <= (int)v11 || (getinf(33) & 8) == 0 )
      break;
    v17 = v92;
    v18 = 2;
    v19 = *(_QWORD **)(qword_2CCB598 + 1672);
    if ( (_QWORD)v92 )
    {
      v18 = v92 + 1;
      v17 = v92 - 1;
    }
    v20 = ptr;
    if ( *((_QWORD *)&v92 + 1) < v18 )
    {
      v78 = v17;
      v74 = v18;
      ptr = (void *)qvector_reserve(&ptr, ptr, v18, 1);
      v17 = v78;
      v20 = ptr;
      v18 = v74;
    }
    *(_QWORD *)&v92 = v18;
    v20[v17] = 32;
    *((_BYTE *)ptr + v17 + 1) = 0;
    tag_addr(&ptr, v16, 0);
    v69 = (sub_631AD0(*v19, 33) & 4) == 0 ? 10 : 2;
    v21 = sub_631AD0(*v19, 33);
    v22 = v69;
    memset(src, 0, sizeof(src));
    if ( (v21 & 1) == 0 )
      v22 = v69 | 1;
    v70 = v22;
    v23 = sub_3BD540(v19, v16, v21 & 1);
    v24 = v70;
    if ( !v23 && (v61 = sub_3E4410(v19, src, v16), v24 = v70, v61) || sub_4D2890(v19, src, v16, v24) )
    {
      v25 = *(_QWORD *)&src[8];
      if ( *(_QWORD *)&src[8] )
      {
        v26 = *(_QWORD *)&src[8] - 1LL;
        if ( *(_QWORD *)&src[8] != 1 )
        {
          v27 = v92;
          v28 = *(_QWORD *)&src[8] - 1LL;
          if ( (_QWORD)v92 )
          {
            v27 = v92 - 1;
            v28 = v26 + v92 - 1;
            v25 = *(_QWORD *)&src[8] + v92 - 1;
          }
          v29 = ptr;
          if ( *((_QWORD *)&v92 + 1) < v25 )
          {
            v88 = v27;
            v80 = *(_QWORD *)&src[8] - 1LL;
            v76 = v28;
            ptr = (void *)qvector_reserve(&ptr, ptr, v25, 1);
            v27 = v88;
            v29 = ptr;
            v26 = v80;
            v28 = v76;
          }
          *(_QWORD *)&v92 = v25;
          v29[v28] = 0;
          memcpy((char *)ptr + v27, *(const void **)src, v26);
        }
      }
    }
    v30 = v92;
    if ( a8 )
    {
      v31 = v16 < v64;
      v32 = &unk_23ACE1C;
      if ( !v31 )
        v32 = &unk_23ACE18;
      if ( (_QWORD)v92 )
      {
        v33 = v92 + 2;
        v34 = v92 + 3;
        v35 = ptr;
        v30 = v92 - 1;
        if ( *((_QWORD *)&v92 + 1) >= (unsigned __int64)(v92 + 3) )
        {
LABEL_46:
          *(_QWORD *)&v92 = v34;
          v35[v33] = 0;
          memmove((char *)ptr + v30, v32, 3u);
          goto LABEL_47;
        }
      }
      else
      {
        v35 = ptr;
        v34 = 4;
        v33 = 3;
        if ( *((_QWORD *)&v92 + 1) >= 4u )
          goto LABEL_46;
      }
      v77 = v33;
      v72 = v34;
      ptr = (void *)qvector_reserve(&ptr, v35, v34, 1);
      v33 = v77;
      v35 = ptr;
      v34 = v72;
      goto LABEL_46;
    }
    v62 = 2;
    if ( (_QWORD)v92 )
    {
      v62 = v92 + 1;
      v30 = v92 - 1;
    }
    v63 = ptr;
    if ( *((_QWORD *)&v92 + 1) < v62 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v62, 1);
      v63 = ptr;
    }
    *(_QWORD *)&v92 = v62;
    v63[v30] = 47;
    *((_BYTE *)ptr + v30 + 1) = 0;
LABEL_47:
    v36 = xrefchar((unsigned int)v66);
    v37 = v92;
    v38 = v36;
    v39 = 2;
    if ( (_QWORD)v92 )
    {
      v39 = v92 + 1;
      v37 = v92 - 1;
    }
    v40 = ptr;
    if ( *((_QWORD *)&v92 + 1) < v39 )
    {
      v73 = v39;
      ptr = (void *)qvector_reserve(&ptr, ptr, v39, 1);
      v39 = v73;
      v40 = ptr;
    }
    *(_QWORD *)&v92 = v39;
    v40[v37] = v38;
    *((_BYTE *)ptr + v37 + 1) = 0;
    if ( *(_QWORD *)src )
    {
      *(_QWORD *)&src[8] = 0;
      qfree(*(void **)src);
    }
    if ( (*(_DWORD *)(a1 + 144) & 0x60) == 0x20 )
      goto LABEL_60;
    v41 = haystack;
    if ( *(_QWORD *)(a1 + 32) )
      v41 = *(const char **)(a1 + 24);
    v42 = tag_strlen(v41);
    if ( *(_DWORD *)(a1 + 148) + (unsigned __int8)getinf(41) - 1 < v42 )
    {
      v43 = haystack;
      if ( (_QWORD)v92 )
        v43 = (const char *)ptr;
      v44 = tag_strlen(v43) + v42;
      if ( v44 > (unsigned __int16)getinf(43) )
      {
LABEL_60:
        v45 = 0;
        if ( v10 )
          goto LABEL_61;
        goto LABEL_100;
      }
    }
    v53 = 0;
    if ( v64 != a2 )
      goto LABEL_80;
LABEL_94:
    if ( (v66 & 0x40) == 0 )
    {
      if ( v67 )
      {
        a5 -= 2;
        v67 = 0;
      }
      goto LABEL_82;
    }
LABEL_80:
    if ( !v67 )
    {
      a5 += 2;
      v67 = 1;
    }
LABEL_82:
    v54 = v10 == 0;
    v46 = a5;
    v10 = v53;
    if ( !v54 )
      goto LABEL_65;
LABEL_66:
    ++v11;
    v47 = haystack;
    if ( (_QWORD)v92 )
      v47 = (const char *)ptr;
    (*(void (__fastcall **)(__int64, const char *, _QWORD))(*(_QWORD *)a1 + 56LL))(a1, v47, v46);
    if ( v10 )
    {
      sub_380D60(a1, v46);
      v11 = a6 + 1;
      goto LABEL_114;
    }
    if ( ptr )
    {
      *(_QWORD *)&v92 = 0;
      qfree(ptr);
    }
    v48 = *(_QWORD *)(qword_2CCB598 + 1672);
    if ( a3 )
    {
      if ( !(unsigned __int8)sub_410A70(v48, &v89, v64) )
        goto LABEL_73;
    }
    else if ( !(unsigned __int8)sub_3E2EB0(v48, &v89, v64) )
    {
LABEL_73:
      v10 = 0;
      goto LABEL_74;
    }
  }
  v49 = v92;
  if ( (_QWORD)v92 )
  {
    v50 = v92 + 3;
    v51 = v92 + 4;
    v52 = ptr;
    v49 = v92 - 1;
    if ( *((_QWORD *)&v92 + 1) >= (unsigned __int64)(v92 + 4) )
      goto LABEL_78;
LABEL_92:
    v71 = v51;
    ptr = (void *)qvector_reserve(&ptr, v52, v51, 1);
    v51 = v71;
    v52 = ptr;
  }
  else
  {
    v52 = ptr;
    v51 = 5;
    v50 = 4;
    if ( *((_QWORD *)&v92 + 1) < 5u )
      goto LABEL_92;
  }
LABEL_78:
  *(_QWORD *)&v92 = v51;
  v52[v50] = 0;
  *(_DWORD *)((char *)ptr + v49) = 774778400;
  if ( (*(_DWORD *)(a1 + 144) & 0x60) != 0x20 )
  {
    v53 = v86;
    if ( v64 != a2 )
      goto LABEL_80;
    goto LABEL_94;
  }
  v45 = v86;
  if ( v10 )
    goto LABEL_61;
LABEL_100:
  sub_380D60(a1, a5);
LABEL_61:
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 240LL))(a1) )
  {
    *(_DWORD *)(a1 + 144) &= ~0x20u;
    if ( v64 != a2 || (v66 & 0x40) != 0 )
    {
      if ( v67 )
      {
        v46 = a5;
        v10 = v45;
      }
      else
      {
        v67 = 1;
        v10 = v45;
        a5 += 2;
        v46 = a5;
      }
    }
    else
    {
      v46 = a5;
      v10 = v45;
      if ( v67 )
      {
        a5 -= 2;
        v46 = a5;
        v67 = 0;
      }
    }
LABEL_65:
    sub_380B50(a1, v46);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 72LL))(a1, v46);
    goto LABEL_66;
  }
  v11 = -1;
LABEL_114:
  if ( ptr )
  {
    *(_QWORD *)&v92 = 0;
    qfree(ptr);
  }
  return v11;
}
