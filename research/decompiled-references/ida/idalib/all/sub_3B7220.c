__int64 __fastcall sub_3B7220(void **a1, char *a2, __int64 a3, size_t a4)
{
  void **bpt_kernel_interface; // rdi
  size_t v8; // r13
  void *v9; // rcx
  _QWORD *v10; // rbx
  int v11; // r8d
  int v12; // r9d
  void **v13; // rsi
  _QWORD *v14; // r15
  __int64 i; // rdx
  _QWORD *v16; // r14
  size_t v17; // rax
  void **v18; // rax
  void *v19; // rdx
  __int64 v20; // rax
  void ***v21; // r13
  void ***v22; // rbx
  __int64 (__fastcall *v23)(__int64, _BYTE *, __int64, int, int, int); // rax
  _QWORD **v24; // rbx
  void *v25; // rdi
  __int64 v27; // rax
  void *v28; // r14
  __int64 v29; // rax
  size_t v30; // r13
  __int64 v31; // rbp
  unsigned __int64 v32; // r14
  char *v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rax
  size_t v36; // rbp
  __int64 v37; // r13
  unsigned __int64 v38; // r14
  char *v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rax
  size_t v42; // rbp
  __int64 v43; // r13
  unsigned __int64 v44; // r14
  char *v45; // rsi
  __int64 v46; // rax
  int v47; // r13d
  __int64 v48; // rax
  size_t v49; // rbp
  __int64 v50; // rbp
  __int64 v51; // r15
  __int64 v52; // r13
  char *v53; // rsi
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // r14
  unsigned __int64 v58; // r15
  char *v59; // rsi
  __int64 v60; // rax
  __int64 v61; // r8
  size_t v62; // r10
  unsigned __int64 v63; // r11
  _DWORD *v64; // [rsp+0h] [rbp-128h]
  char *v65; // [rsp+8h] [rbp-120h]
  __int64 v66; // [rsp+10h] [rbp-118h] BYREF
  __int64 *v67; // [rsp+18h] [rbp-110h]
  size_t n; // [rsp+20h] [rbp-108h]
  __int64 v69; // [rsp+28h] [rbp-100h]
  __int64 v70; // [rsp+30h] [rbp-F8h]
  __int64 v71; // [rsp+38h] [rbp-F0h]
  void *v72; // [rsp+40h] [rbp-E8h] BYREF
  __int128 v73; // [rsp+48h] [rbp-E0h]
  void *v74; // [rsp+60h] [rbp-C8h] BYREF
  __int128 v75; // [rsp+68h] [rbp-C0h]
  void *ptr; // [rsp+80h] [rbp-A8h] BYREF
  __int128 v77; // [rsp+88h] [rbp-A0h]
  __int64 v78; // [rsp+A0h] [rbp-88h] BYREF
  int v79; // [rsp+A8h] [rbp-80h] BYREF
  void *v80; // [rsp+B0h] [rbp-78h]
  int *v81; // [rsp+B8h] [rbp-70h]
  int *v82; // [rsp+C0h] [rbp-68h]
  __int64 v83; // [rsp+C8h] [rbp-60h]
  _BYTE src[3]; // [rsp+DEh] [rbp-4Ah] BYREF
  char v85[7]; // [rsp+E1h] [rbp-47h] BYREF
  _QWORD v86[8]; // [rsp+E8h] [rbp-40h] BYREF

  v66 = a3;
  n = a4;
  v86[0] = __readfsqword(0x28u);
  v67 = &v78;
  v79 = 0;
  v80 = nullptr;
  v81 = &v79;
  v82 = &v79;
  v83 = 0;
  v65 = a2;
  sub_3B40A0(&v78, a2, a4, nullptr);
  bpt_kernel_interface = (void **)&v66;
  v72 = nullptr;
  v8 = a4 + a3;
  v74 = nullptr;
  v71 = 0;
  v70 = a3;
  v73 = 0;
  v75 = 0;
  v10 = sub_3AF270((__int64)&v66);
  v13 = (void **)&a2[-a3];
  v64 = v13;
  v14 = *(_QWORD **)(qword_2CCB598 + 1576);
  for ( i = v14[1]; v10 != (_QWORD *)(*v14 + 8 * i); ++v10 )
  {
    v16 = (_QWORD *)*v10;
    v13 = (void **)*(unsigned int *)(*v10 + 44LL);
    if ( (_DWORD)v13 )
      break;
    v17 = v16[7];
    if ( v17 >= v8 )
      break;
    *(_QWORD *)&v77 = 0;
    ptr = (char *)v64 + v17;
    bpt_kernel_interface = (void **)get_bpt_kernel_interface();
    if ( (*((__int64 (__fastcall **)(void **, void **))*bpt_kernel_interface + 35))(bpt_kernel_interface, &ptr) )
    {
      v18 = (void **)v80;
      if ( !v80 )
        goto LABEL_12;
      v13 = (void **)&v79;
      do
      {
        while ( 1 )
        {
          v19 = v18[2];
          v9 = v18[3];
          if ( v18[4] >= v16 )
            break;
          v18 = (void **)v18[3];
          if ( !v9 )
            goto LABEL_10;
        }
        v13 = v18;
        v18 = (void **)v18[2];
      }
      while ( v19 );
LABEL_10:
      if ( v13 == (void **)&v79 || v16 < v13[4] )
      {
LABEL_12:
        v20 = v73;
        v13 = (void **)v72;
        if ( *((_QWORD *)&v73 + 1) < (unsigned __int64)(v73 + 1) )
        {
          bpt_kernel_interface = &v72;
          v72 = (void *)qvector_reserve(&v72, v72, v73 + 1, 8);
          v13 = (void **)v72;
          v20 = v73;
        }
        v13[v20] = v16;
        *(_QWORD *)&v73 = v73 + 1;
      }
    }
    else
    {
      v27 = v75;
      v28 = (void *)v16[7];
      v13 = (void **)v74;
      if ( *((_QWORD *)&v75 + 1) < (unsigned __int64)(v75 + 1) )
      {
        bpt_kernel_interface = &v74;
        v74 = (void *)qvector_reserve(&v74, v74, v75 + 1, 8);
        v13 = (void **)v74;
        v27 = v75;
      }
      v13[v27] = v28;
      *(_QWORD *)&v75 = v75 + 1;
    }
    i = v14[1];
  }
  v21 = (void ***)v72;
  v22 = (void ***)((char *)v72 + 8 * v73);
  if ( v22 != v72 )
  {
    do
    {
      while ( 1 )
      {
        bpt_kernel_interface = *v21;
        v23 = *((__int64 (__fastcall **)(__int64, _BYTE *, __int64, int, int, int))*a1 + 15);
        if ( v23 == sub_3B5790 )
          break;
        v13 = *v21;
        bpt_kernel_interface = a1;
        ((void (__fastcall *)(void **, _QWORD))v23)(a1, *v21++);
        if ( v22 == v21 )
          goto LABEL_23;
      }
      if ( bpt_kernel_interface )
      {
        v13 = nullptr;
        sub_3B5300(bpt_kernel_interface, 0, i, (int)v9, v11, v12);
      }
      ++v21;
    }
    while ( v22 != v21 );
  }
LABEL_23:
  if ( (unsigned __int8)must_journal(bpt_kernel_interface, v13, i) )
  {
    ptr = nullptr;
    v77 = 0;
    v29 = pack_dq(src, v86, v65) - (_QWORD)src;
    v30 = v29;
    if ( !v29 )
      goto LABEL_40;
    v31 = v77;
    v32 = v77 + v29;
    if ( __CFADD__((_QWORD)v77, v29) )
    {
      if ( (unsigned __int64)v77 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v77 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v77 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_39;
      }
      v32 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v33 = (char *)ptr;
    v34 = v77;
    if ( *((_QWORD *)&v77 + 1) < v32 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v32, 1);
      v33 = (char *)ptr;
      v34 = v77;
    }
    memset(&v33[v34], 0, v32 - v34);
    *(_QWORD *)&v77 = v32;
LABEL_39:
    memcpy((char *)ptr + v31, src, v30);
LABEL_40:
    v35 = pack_dq(src, v86, v66) - (_QWORD)src;
    v36 = v35;
    if ( !v35 )
      goto LABEL_46;
    v37 = v77;
    v38 = v77 + v35;
    if ( __CFADD__((_QWORD)v77, v35) )
    {
      if ( (unsigned __int64)v77 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v77 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v77 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_45;
      }
      v38 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v39 = (char *)ptr;
    v40 = v77;
    if ( *((_QWORD *)&v77 + 1) < v38 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v38, 1);
      v39 = (char *)ptr;
      v40 = v77;
    }
    memset(&v39[v40], 0, v38 - v40);
    *(_QWORD *)&v77 = v38;
LABEL_45:
    memcpy((char *)ptr + v37, src, v36);
LABEL_46:
    v41 = pack_dq(src, v86, n) - (_QWORD)src;
    v42 = v41;
    if ( !v41 )
      goto LABEL_52;
    v43 = v77;
    v44 = v77 + v41;
    if ( __CFADD__((_QWORD)v77, v41) )
    {
      if ( (unsigned __int64)v77 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v77 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v77 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_51;
      }
      v44 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v45 = (char *)ptr;
    v46 = v77;
    if ( *((_QWORD *)&v77 + 1) < v44 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v44, 1);
      v45 = (char *)ptr;
      v46 = v77;
    }
    memset(&v45[v46], 0, v44 - v46);
    *(_QWORD *)&v77 = v44;
LABEL_51:
    memcpy((char *)ptr + v43, src, v42);
LABEL_52:
    v47 = v75;
    v48 = pack_dw(src, v85, (unsigned __int16)v75) - (_QWORD)src;
    v49 = v48;
    if ( !v48 )
    {
LABEL_53:
      if ( v47 <= 0 )
      {
LABEL_65:
        add_undo_record(195, ptr, v77);
        if ( ptr )
        {
          *(_QWORD *)&v77 = 0;
          qfree(ptr);
        }
        goto LABEL_24;
      }
      v50 = v66;
      v51 = 0;
      v52 = 8LL * (unsigned int)(v47 - 1) + 8;
      while ( 1 )
      {
        v55 = v50;
        v50 = *(_QWORD *)((char *)v74 + v51);
        v56 = pack_dq(src, v86, v50 - v55) - (_QWORD)src;
        v62 = v56;
        if ( !v56 )
          goto LABEL_59;
        v61 = v77;
        v63 = v77 + v56;
        if ( !__CFADD__((_QWORD)v77, v56) )
          goto LABEL_55;
        if ( (unsigned __int64)v77 <= 0x7FFFFFFFFFFFFFFELL )
          break;
        if ( (_QWORD)v77 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v77 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_58:
        memcpy((char *)ptr + v61, src, v62);
LABEL_59:
        v51 += 8;
        if ( v52 == v51 )
          goto LABEL_65;
      }
      v63 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_55:
      v53 = (char *)ptr;
      v54 = v77;
      if ( *((_QWORD *)&v77 + 1) < v63 )
      {
        v69 = v77;
        n = v62;
        v64 = (_DWORD *)v63;
        ptr = (void *)qvector_reserve(&ptr, ptr, v63, 1);
        v53 = (char *)ptr;
        v61 = v69;
        v54 = v77;
        v62 = n;
        v63 = (unsigned __int64)v64;
      }
      v69 = v61;
      n = v62;
      v64 = (_DWORD *)v63;
      memset(&v53[v54], 0, v63 - v54);
      v62 = n;
      v61 = v69;
      *(_QWORD *)&v77 = v64;
      goto LABEL_58;
    }
    v57 = v77;
    v58 = v77 + v48;
    if ( __CFADD__((_QWORD)v77, v48) )
    {
      if ( (unsigned __int64)v77 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v77 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v77 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_72;
      }
      v58 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v59 = (char *)ptr;
    v60 = v77;
    if ( *((_QWORD *)&v77 + 1) < v58 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v58, 1);
      v59 = (char *)ptr;
      v60 = v77;
    }
    memset(&v59[v60], 0, v58 - v60);
    *(_QWORD *)&v77 = v58;
LABEL_72:
    memcpy((char *)ptr + v57, src, v49);
    goto LABEL_53;
  }
LABEL_24:
  sub_3B7060((__int64)v65, v66, (__int64)v67);
  if ( v74 )
  {
    *(_QWORD *)&v75 = 0;
    qfree(v74);
  }
  if ( v72 )
  {
    *(_QWORD *)&v73 = 0;
    qfree(v72);
  }
  v24 = (_QWORD **)v80;
  if ( v80 )
  {
    do
    {
      sub_3AC530(v24[3]);
      v25 = v24;
      v24 = (_QWORD **)v24[2];
      operator delete(v25, 0x28u);
    }
    while ( v24 );
  }
  return 1;
}
