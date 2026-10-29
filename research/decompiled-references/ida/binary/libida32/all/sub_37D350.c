__int64 __fastcall sub_37D350(
        __int64 a1,
        unsigned int a2,
        char a3,
        const char *a4,
        unsigned __int8 a5,
        signed int a6,
        unsigned __int64 a7,
        char a8)
{
  unsigned int v9; // eax
  char v10; // r12
  unsigned int v11; // ebp
  unsigned int v12; // r13d
  __int16 flags; // ax
  __int64 v15; // rdi
  unsigned int v16; // r13d
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
  size_t v28; // r10
  _BYTE *v29; // rsi
  __int64 v30; // r15
  bool v31; // cf
  _UNKNOWN *__ptr32 *v32; // r13
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
  unsigned int v64; // [rsp+4h] [rbp-D4h]
  char v66; // [rsp+13h] [rbp-C5h]
  int v67; // [rsp+14h] [rbp-C4h]
  int v70; // [rsp+28h] [rbp-B0h]
  unsigned int v71; // [rsp+28h] [rbp-B0h]
  __int64 v72; // [rsp+28h] [rbp-B0h]
  __int64 v73; // [rsp+28h] [rbp-B0h]
  unsigned __int64 v74; // [rsp+28h] [rbp-B0h]
  unsigned __int64 v75; // [rsp+28h] [rbp-B0h]
  size_t v76; // [rsp+28h] [rbp-B0h]
  size_t v77; // [rsp+28h] [rbp-B0h]
  __int64 v78; // [rsp+30h] [rbp-A8h]
  __int64 v79; // [rsp+30h] [rbp-A8h]
  size_t v80; // [rsp+30h] [rbp-A8h]
  size_t v81; // [rsp+30h] [rbp-A8h]
  int v83; // [rsp+40h] [rbp-98h]
  unsigned int v84; // [rsp+40h] [rbp-98h]
  char v86; // [rsp+45h] [rbp-93h]
  size_t v87; // [rsp+48h] [rbp-90h]
  __int64 v88; // [rsp+48h] [rbp-90h]
  int v89; // [rsp+58h] [rbp-80h] BYREF
  char v90; // [rsp+5Ch] [rbp-7Ch]
  void *ptr; // [rsp+60h] [rbp-78h] BYREF
  __int128 v92; // [rsp+68h] [rbp-70h]
  void *src; // [rsp+80h] [rbp-58h] BYREF
  __int128 v94; // [rsp+88h] [rbp-50h]
  unsigned __int64 v95; // [rsp+98h] [rbp-40h]

  v95 = __readfsqword(0x28u);
  v83 = -1;
  if ( !a8 )
  {
    src = nullptr;
    getinf_buf(26, &src, 8);
    v83 = HIDWORD(src);
  }
  v9 = a2 + a7;
  if ( a7 >= v83 - a2 )
    v9 = v83;
  v84 = v9;
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
          goto LABEL_13;
        if ( (flags & 0x1000) != 0 )
          break;
        if ( v84 == ++v12 )
          goto LABEL_13;
      }
      v64 = v12;
    }
    v90 = 0;
    v89 = -1;
    v15 = *(_QWORD *)(qword_2CA1698 + 1480);
    v86 = a3 ? sub_3FD660(v15, &v89, v64) : sub_3DC4D0(v15, &v89, v64);
    if ( v86 )
      break;
LABEL_73:
    if ( v84 == ++v64 )
    {
LABEL_13:
      if ( !v10 )
        sub_37D2F0(a1, a5);
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
        v80 = v58;
        v76 = v58 + 1;
        ptr = (void *)qvector_reserve(&ptr, ptr, v60, 1);
        v57 = v87;
        v59 = ptr;
        v58 = v80;
        v60 = v76;
      }
      *(_QWORD *)&v92 = v60;
      v59[v58] = 0;
      memmove((char *)ptr + v56, a4, v57);
    }
    if ( a6 <= (int)v11 || (getinf(33) & 8) == 0 )
      break;
    v17 = v92;
    v18 = 2;
    v19 = *(_QWORD **)(qword_2CA1698 + 1480);
    if ( (_QWORD)v92 )
    {
      v18 = v92 + 1;
      v17 = v92 - 1;
    }
    v20 = ptr;
    if ( *((_QWORD *)&v92 + 1) < v18 )
    {
      v79 = v17;
      v75 = v18;
      ptr = (void *)qvector_reserve(&ptr, ptr, v18, 1);
      v17 = v79;
      v20 = ptr;
      v18 = v75;
    }
    *(_QWORD *)&v92 = v18;
    v20[v17] = 32;
    *((_BYTE *)ptr + v17 + 1) = 0;
    tag_addr(&ptr, v16, 0);
    v70 = (sub_614FB0(*v19, 33) & 4) == 0 ? 10 : 2;
    v21 = sub_614FB0(*v19, 33);
    v22 = v70;
    v94 = 0;
    src = nullptr;
    if ( (v21 & 1) == 0 )
      v22 = v70 | 1;
    v71 = v22;
    v23 = sub_3B8910(v19, v16, v21 & 1);
    v24 = v71;
    if ( !v23 && (v61 = sub_3DE710(v19, &src, v16), v24 = v71, v61) || sub_4BBA40(v19, &src, v16, v24) )
    {
      v25 = v94;
      if ( (_QWORD)v94 )
      {
        v26 = v94 - 1;
        if ( (_QWORD)v94 != 1 )
        {
          v27 = v92;
          v28 = v94 - 1;
          if ( (_QWORD)v92 )
          {
            v27 = v92 - 1;
            v28 = v26 + v92 - 1;
            v25 = v94 + v92 - 1;
          }
          v29 = ptr;
          if ( *((_QWORD *)&v92 + 1) < v25 )
          {
            v88 = v27;
            v81 = v94 - 1;
            v77 = v28;
            ptr = (void *)qvector_reserve(&ptr, ptr, v25, 1);
            v27 = v88;
            v29 = ptr;
            v26 = v81;
            v28 = v77;
          }
          *(_QWORD *)&v92 = v25;
          v29[v28] = 0;
          memcpy((char *)ptr + v27, src, v26);
        }
      }
    }
    v30 = v92;
    if ( a8 )
    {
      v31 = v16 < v64;
      v32 = &off_2388DF4;
      if ( !v31 )
        v32 = (_UNKNOWN *__ptr32 *)&unk_2388DF0;
      if ( (_QWORD)v92 )
      {
        v33 = v92 + 2;
        v34 = v92 + 3;
        v35 = ptr;
        v30 = v92 - 1;
        if ( *((_QWORD *)&v92 + 1) >= (unsigned __int64)(v92 + 3) )
        {
LABEL_45:
          *(_QWORD *)&v92 = v34;
          v35[v33] = 0;
          memmove((char *)ptr + v30, v32, 3u);
          goto LABEL_46;
        }
      }
      else
      {
        v35 = ptr;
        v34 = 4;
        v33 = 3;
        if ( *((_QWORD *)&v92 + 1) >= 4u )
          goto LABEL_45;
      }
      v78 = v33;
      v73 = v34;
      ptr = (void *)qvector_reserve(&ptr, v35, v34, 1);
      v33 = v78;
      v35 = ptr;
      v34 = v73;
      goto LABEL_45;
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
LABEL_46:
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
      v74 = v39;
      ptr = (void *)qvector_reserve(&ptr, ptr, v39, 1);
      v39 = v74;
      v40 = ptr;
    }
    *(_QWORD *)&v92 = v39;
    v40[v37] = v38;
    *((_BYTE *)ptr + v37 + 1) = 0;
    if ( src )
    {
      *(_QWORD *)&v94 = 0;
      qfree(src);
    }
    if ( (*(_DWORD *)(a1 + 144) & 0x60) == 0x20 )
      goto LABEL_59;
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
LABEL_59:
        v45 = 0;
        if ( v10 )
          goto LABEL_60;
        goto LABEL_99;
      }
    }
    v53 = 0;
    if ( v64 != a2 )
      goto LABEL_79;
LABEL_93:
    if ( (v66 & 0x40) == 0 )
    {
      if ( v67 )
      {
        a5 -= 2;
        v67 = 0;
      }
      goto LABEL_81;
    }
LABEL_79:
    if ( !v67 )
    {
      a5 += 2;
      v67 = 1;
    }
LABEL_81:
    v54 = v10 == 0;
    v46 = a5;
    v10 = v53;
    if ( !v54 )
      goto LABEL_64;
LABEL_65:
    ++v11;
    v47 = haystack;
    if ( (_QWORD)v92 )
      v47 = (const char *)ptr;
    (*(void (__fastcall **)(__int64, const char *, _QWORD))(*(_QWORD *)a1 + 56LL))(a1, v47, v46);
    if ( v10 )
    {
      sub_37D2F0(a1, v46);
      v11 = a6 + 1;
      goto LABEL_113;
    }
    if ( ptr )
    {
      *(_QWORD *)&v92 = 0;
      qfree(ptr);
    }
    v48 = *(_QWORD *)(qword_2CA1698 + 1480);
    if ( a3 )
    {
      if ( !(unsigned __int8)sub_3FD7C0(v48, &v89, v64) )
        goto LABEL_72;
    }
    else if ( !(unsigned __int8)sub_3DD2D0(v48, &v89, v64) )
    {
LABEL_72:
      v10 = 0;
      goto LABEL_73;
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
      goto LABEL_77;
LABEL_91:
    v72 = v51;
    ptr = (void *)qvector_reserve(&ptr, v52, v51, 1);
    v51 = v72;
    v52 = ptr;
  }
  else
  {
    v52 = ptr;
    v51 = 5;
    v50 = 4;
    if ( *((_QWORD *)&v92 + 1) < 5u )
      goto LABEL_91;
  }
LABEL_77:
  *(_QWORD *)&v92 = v51;
  v52[v50] = 0;
  *(_DWORD *)((char *)ptr + v49) = 774778400;
  if ( (*(_DWORD *)(a1 + 144) & 0x60) != 0x20 )
  {
    v53 = v86;
    if ( v64 != a2 )
      goto LABEL_79;
    goto LABEL_93;
  }
  v45 = v86;
  if ( v10 )
    goto LABEL_60;
LABEL_99:
  sub_37D2F0(a1, a5);
LABEL_60:
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
LABEL_64:
    sub_37D0E0(a1, v46);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 72LL))(a1, v46);
    goto LABEL_65;
  }
  v11 = -1;
LABEL_113:
  if ( ptr )
  {
    *(_QWORD *)&v92 = 0;
    qfree(ptr);
  }
  return v11;
}

