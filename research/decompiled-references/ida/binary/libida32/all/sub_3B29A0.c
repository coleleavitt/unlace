__int64 __fastcall sub_3B29A0(void **a1, unsigned int a2, unsigned int a3, int a4, __int64 a5, __int64 a6)
{
  void **bpt_kernel_interface; // rdi
  unsigned int v10; // r13d
  void *v11; // rcx
  _QWORD *v12; // rbx
  int v13; // r8d
  int v14; // r9d
  void **v15; // rsi
  _QWORD *v16; // r15
  __int64 i; // rdx
  _DWORD *v18; // r14
  unsigned int v19; // eax
  void **v20; // rax
  void *v21; // rdx
  __int64 v22; // rax
  void ***v23; // r13
  void ***v24; // rbx
  __int64 (__fastcall *v25)(__int64, _BYTE *, __int64, int, int, int); // rax
  _QWORD **v26; // rbx
  void *v27; // rdi
  __int64 v29; // rax
  int v30; // r14d
  __int64 v31; // rax
  size_t v32; // r13
  __int64 v33; // rbp
  unsigned __int64 v34; // r14
  char *v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rax
  size_t v38; // rbp
  __int64 v39; // r13
  unsigned __int64 v40; // r14
  char *v41; // rsi
  __int64 v42; // rax
  __int64 v43; // rax
  size_t v44; // rbp
  __int64 v45; // r13
  unsigned __int64 v46; // r14
  char *v47; // rsi
  __int64 v48; // rax
  int v49; // r13d
  __int64 v50; // rax
  size_t v51; // rbp
  unsigned int v52; // ebp
  __int64 v53; // r15
  __int64 v54; // r13
  char *v55; // rsi
  __int64 v56; // rax
  unsigned int v57; // eax
  __int64 v58; // rax
  __int64 v59; // r14
  unsigned __int64 v60; // r15
  char *v61; // rsi
  __int64 v62; // rax
  __int64 v63; // r8
  size_t v64; // r10
  unsigned __int64 v65; // r11
  unsigned __int64 v66; // [rsp+8h] [rbp-110h]
  unsigned int v67; // [rsp+10h] [rbp-108h]
  unsigned int v68; // [rsp+14h] [rbp-104h] BYREF
  __int64 *v69; // [rsp+18h] [rbp-100h]
  size_t n; // [rsp+20h] [rbp-F8h]
  __int64 v71; // [rsp+28h] [rbp-F0h]
  unsigned int v72; // [rsp+34h] [rbp-E4h]
  int v73; // [rsp+38h] [rbp-E0h]
  int v74; // [rsp+3Ch] [rbp-DCh]
  void *v75; // [rsp+40h] [rbp-D8h] BYREF
  __int128 v76; // [rsp+48h] [rbp-D0h]
  void *v77; // [rsp+60h] [rbp-B8h] BYREF
  __int128 v78; // [rsp+68h] [rbp-B0h]
  void *ptr; // [rsp+80h] [rbp-98h] BYREF
  __int128 v80; // [rsp+88h] [rbp-90h]
  __int64 v81; // [rsp+A0h] [rbp-78h] BYREF
  int v82; // [rsp+A8h] [rbp-70h] BYREF
  void *v83; // [rsp+B0h] [rbp-68h]
  int *v84; // [rsp+B8h] [rbp-60h]
  int *v85; // [rsp+C0h] [rbp-58h]
  __int64 v86; // [rsp+C8h] [rbp-50h]
  _BYTE src[3]; // [rsp+D3h] [rbp-45h] BYREF
  char v88[2]; // [rsp+D6h] [rbp-42h] BYREF
  _QWORD v89[8]; // [rsp+D8h] [rbp-40h] BYREF

  v68 = a3;
  LODWORD(n) = a4;
  v89[0] = __readfsqword(0x28u);
  v69 = &v81;
  v82 = 0;
  v83 = nullptr;
  v84 = &v82;
  v85 = &v82;
  v86 = 0;
  v67 = a2;
  sub_3AF8F0(&v81, a2, a4, nullptr, a5, a6);
  bpt_kernel_interface = (void **)&v68;
  v75 = nullptr;
  v10 = a4 + a3;
  v77 = nullptr;
  v73 = 0;
  v74 = 0;
  v72 = a3;
  v76 = 0;
  v78 = 0;
  v12 = sub_3AAB40((__int64)&v68);
  v15 = (void **)(a2 - a3);
  LODWORD(v66) = v67 - a3;
  v16 = *(_QWORD **)(qword_2CA1698 + 1384);
  for ( i = v16[1]; v12 != (_QWORD *)(*v16 + 8 * i); ++v12 )
  {
    v18 = (_DWORD *)*v12;
    v15 = (void **)*(unsigned int *)(*v12 + 40LL);
    if ( (_DWORD)v15 )
      break;
    v19 = v18[13];
    if ( v19 >= v10 )
      break;
    LODWORD(v80) = 0;
    ptr = (void *)((unsigned int)v66 + v19);
    bpt_kernel_interface = (void **)get_bpt_kernel_interface(bpt_kernel_interface, v15);
    if ( (*((__int64 (__fastcall **)(void **, void **))*bpt_kernel_interface + 35))(bpt_kernel_interface, &ptr) )
    {
      v20 = (void **)v83;
      if ( !v83 )
        goto LABEL_12;
      v15 = (void **)&v82;
      do
      {
        while ( 1 )
        {
          v21 = v20[2];
          v11 = v20[3];
          if ( v20[4] >= v18 )
            break;
          v20 = (void **)v20[3];
          if ( !v11 )
            goto LABEL_10;
        }
        v15 = v20;
        v20 = (void **)v20[2];
      }
      while ( v21 );
LABEL_10:
      if ( v15 == (void **)&v82 || v18 < v15[4] )
      {
LABEL_12:
        v22 = v76;
        v15 = (void **)v75;
        if ( *((_QWORD *)&v76 + 1) < (unsigned __int64)(v76 + 1) )
        {
          bpt_kernel_interface = &v75;
          v75 = (void *)qvector_reserve(&v75, v75, v76 + 1, 8);
          v15 = (void **)v75;
          v22 = v76;
        }
        v15[v22] = v18;
        *(_QWORD *)&v76 = v76 + 1;
      }
    }
    else
    {
      v29 = v78;
      v30 = v18[13];
      v15 = (void **)v77;
      if ( *((_QWORD *)&v78 + 1) < (unsigned __int64)(v78 + 1) )
      {
        bpt_kernel_interface = &v77;
        v77 = (void *)qvector_reserve(&v77, v77, v78 + 1, 4);
        v15 = (void **)v77;
        v29 = v78;
      }
      *((_DWORD *)v15 + v29) = v30;
      *(_QWORD *)&v78 = v78 + 1;
    }
    i = v16[1];
  }
  v23 = (void ***)v75;
  v24 = (void ***)((char *)v75 + 8 * v76);
  if ( v24 != v75 )
  {
    do
    {
      while ( 1 )
      {
        bpt_kernel_interface = *v23;
        v25 = *((__int64 (__fastcall **)(__int64, _BYTE *, __int64, int, int, int))*a1 + 15);
        if ( v25 == sub_3B0F40 )
          break;
        v15 = *v23;
        bpt_kernel_interface = a1;
        ((void (__fastcall *)(void **, _QWORD))v25)(a1, *v23++);
        if ( v24 == v23 )
          goto LABEL_23;
      }
      if ( bpt_kernel_interface )
      {
        v15 = nullptr;
        sub_3B0AC0(bpt_kernel_interface, 0, i, (int)v11, v13, v14);
      }
      ++v23;
    }
    while ( v24 != v23 );
  }
LABEL_23:
  if ( (unsigned __int8)must_journal(bpt_kernel_interface, v15, i) )
  {
    ptr = nullptr;
    v80 = 0;
    v31 = pack_dd(src, v89, v67) - (_QWORD)src;
    v32 = v31;
    if ( !v31 )
      goto LABEL_40;
    v33 = v80;
    v34 = v80 + v31;
    if ( __CFADD__((_QWORD)v80, v31) )
    {
      if ( (unsigned __int64)v80 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v80 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v80 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_39;
      }
      v34 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v35 = (char *)ptr;
    v36 = v80;
    if ( *((_QWORD *)&v80 + 1) < v34 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v34, 1);
      v35 = (char *)ptr;
      v36 = v80;
    }
    memset(&v35[v36], 0, v34 - v36);
    *(_QWORD *)&v80 = v34;
LABEL_39:
    memcpy((char *)ptr + v33, src, v32);
LABEL_40:
    v37 = pack_dd(src, v89, v68) - (_QWORD)src;
    v38 = v37;
    if ( !v37 )
      goto LABEL_46;
    v39 = v80;
    v40 = v80 + v37;
    if ( __CFADD__((_QWORD)v80, v37) )
    {
      if ( (unsigned __int64)v80 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v80 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v80 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_45;
      }
      v40 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v41 = (char *)ptr;
    v42 = v80;
    if ( *((_QWORD *)&v80 + 1) < v40 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v40, 1);
      v41 = (char *)ptr;
      v42 = v80;
    }
    memset(&v41[v42], 0, v40 - v42);
    *(_QWORD *)&v80 = v40;
LABEL_45:
    memcpy((char *)ptr + v39, src, v38);
LABEL_46:
    v43 = pack_dd(src, v89, (unsigned int)n) - (_QWORD)src;
    v44 = v43;
    if ( !v43 )
      goto LABEL_52;
    v45 = v80;
    v46 = v80 + v43;
    if ( __CFADD__((_QWORD)v80, v43) )
    {
      if ( (unsigned __int64)v80 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v80 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v80 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_51;
      }
      v46 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v47 = (char *)ptr;
    v48 = v80;
    if ( *((_QWORD *)&v80 + 1) < v46 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v46, 1);
      v47 = (char *)ptr;
      v48 = v80;
    }
    memset(&v47[v48], 0, v46 - v48);
    *(_QWORD *)&v80 = v46;
LABEL_51:
    memcpy((char *)ptr + v45, src, v44);
LABEL_52:
    v49 = v78;
    v50 = pack_dw(src, v88, (unsigned __int16)v78) - (_QWORD)src;
    v51 = v50;
    if ( !v50 )
    {
LABEL_53:
      if ( v49 <= 0 )
      {
LABEL_65:
        add_undo_record(195, ptr, v80);
        if ( ptr )
        {
          *(_QWORD *)&v80 = 0;
          qfree(ptr);
        }
        goto LABEL_24;
      }
      v52 = v68;
      v53 = 0;
      v54 = 4LL * (unsigned int)(v49 - 1) + 4;
      while ( 1 )
      {
        v57 = v52;
        v52 = *(_DWORD *)((char *)v77 + v53);
        v58 = pack_dd(src, v89, v52 - v57) - (_QWORD)src;
        v64 = v58;
        if ( !v58 )
          goto LABEL_59;
        v63 = v80;
        v65 = v80 + v58;
        if ( !__CFADD__((_QWORD)v80, v58) )
          goto LABEL_55;
        if ( (unsigned __int64)v80 <= 0x7FFFFFFFFFFFFFFELL )
          break;
        if ( (_QWORD)v80 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v80 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_58:
        memcpy((char *)ptr + v63, src, v64);
LABEL_59:
        v53 += 4;
        if ( v54 == v53 )
          goto LABEL_65;
      }
      v65 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_55:
      v55 = (char *)ptr;
      v56 = v80;
      if ( *((_QWORD *)&v80 + 1) < v65 )
      {
        v71 = v80;
        n = v64;
        v66 = v65;
        ptr = (void *)qvector_reserve(&ptr, ptr, v65, 1);
        v55 = (char *)ptr;
        v63 = v71;
        v56 = v80;
        v64 = n;
        v65 = v66;
      }
      v71 = v63;
      n = v64;
      v66 = v65;
      memset(&v55[v56], 0, v65 - v56);
      v64 = n;
      v63 = v71;
      *(_QWORD *)&v80 = v66;
      goto LABEL_58;
    }
    v59 = v80;
    v60 = v80 + v50;
    if ( __CFADD__((_QWORD)v80, v50) )
    {
      if ( (unsigned __int64)v80 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v80 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v80 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_72;
      }
      v60 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v61 = (char *)ptr;
    v62 = v80;
    if ( *((_QWORD *)&v80 + 1) < v60 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v60, 1);
      v61 = (char *)ptr;
      v62 = v80;
    }
    memset(&v61[v62], 0, v60 - v62);
    *(_QWORD *)&v80 = v60;
LABEL_72:
    memcpy((char *)ptr + v59, src, v51);
    goto LABEL_53;
  }
LABEL_24:
  sub_3B27E0(v67, v68, (__int64)v69);
  if ( v77 )
  {
    *(_QWORD *)&v78 = 0;
    qfree(v77);
  }
  if ( v75 )
  {
    *(_QWORD *)&v76 = 0;
    qfree(v75);
  }
  v26 = (_QWORD **)v83;
  if ( v83 )
  {
    do
    {
      sub_3A7E50(v26[3]);
      v27 = v26;
      v26 = (_QWORD **)v26[2];
      operator delete(v27, 0x28u);
    }
    while ( v26 );
  }
  return 1;
}

