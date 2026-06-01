void __fastcall sub_1717870(__int64 *a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, __int64 a6)
{
  __int64 *v9; // rdi
  __int64 v10; // rax
  __int64 (*v11)(void); // rdx
  __int64 v12; // rcx
  __int64 (*v13)(void); // rax
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  _QWORD *v29; // rax
  __int64 v30; // r15
  char v31; // dl
  unsigned __int64 v32; // rsi
  char *v33; // rcx
  __int64 v34; // r8
  unsigned __int64 *v35; // rdi
  char *v36; // rax
  char *v37; // rcx
  __int64 v38; // rsi
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  char v46; // di
  unsigned __int64 v47; // rsi
  char *v48; // rdx
  __int64 v49; // rdi
  unsigned __int64 *v50; // rcx
  char *v51; // rax
  char *v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // [rsp-8h] [rbp-380h]
  __int64 v56; // [rsp+0h] [rbp-378h]
  __int64 v57; // [rsp+0h] [rbp-378h]
  __int128 v58; // [rsp+10h] [rbp-368h] BYREF
  __int64 v59; // [rsp+20h] [rbp-358h]
  unsigned int v60[4]; // [rsp+30h] [rbp-348h] BYREF
  int v61; // [rsp+40h] [rbp-338h]
  __int64 v62; // [rsp+44h] [rbp-334h]
  int v63; // [rsp+50h] [rbp-328h]
  __int128 v64; // [rsp+58h] [rbp-320h] BYREF
  __int64 v65; // [rsp+68h] [rbp-310h]
  char v66; // [rsp+70h] [rbp-308h]
  __int64 v67; // [rsp+78h] [rbp-300h]
  __int64 v68; // [rsp+80h] [rbp-2F8h]
  __int64 v69; // [rsp+88h] [rbp-2F0h]
  void *ptr; // [rsp+90h] [rbp-2E8h] BYREF
  __int64 v71; // [rsp+98h] [rbp-2E0h]
  __int64 v72; // [rsp+A0h] [rbp-2D8h]
  _QWORD v73[8]; // [rsp+A8h] [rbp-2D0h] BYREF
  char v74; // [rsp+E8h] [rbp-290h]
  __int64 *v75; // [rsp+F0h] [rbp-288h]
  __int64 v76; // [rsp+F8h] [rbp-280h]
  int v77; // [rsp+100h] [rbp-278h]
  char v78; // [rsp+104h] [rbp-274h]
  __int64 v79; // [rsp+108h] [rbp-270h] BYREF
  __int64 v80; // [rsp+150h] [rbp-228h] BYREF
  __int64 v81; // [rsp+158h] [rbp-220h]
  __int64 v82[2]; // [rsp+238h] [rbp-140h] BYREF
  __int64 v83; // [rsp+248h] [rbp-130h]
  int v84[62]; // [rsp+280h] [rbp-F8h] BYREF

  v9 = (__int64 *)a1[1];
  LODWORD(ptr) = 33;
  BYTE4(ptr) = 0;
  v71 = 0;
  v72 = 0;
  v73[0] = 0;
  v73[1] = 0;
  v75 = &v79;
  v10 = *v9;
  v74 = 0;
  v11 = *(__int64 (**)(void))(v10 + 48);
  v78 = 1;
  v76 = 8;
  v77 = 0;
  if ( (char *)v11 == (char *)sub_15A1860 )
  {
    v12 = (__int64)(v9 + 3);
  }
  else
  {
    v54 = v11();
    v9 = (__int64 *)a1[1];
    v12 = v54;
    v10 = *v9;
  }
  v13 = *(__int64 (**)(void))(v10 + 40);
  if ( (char *)v13 == (char *)sub_15A1850 )
  {
    v14 = v9[6];
  }
  else
  {
    v57 = v12;
    v53 = v13();
    v12 = v57;
    v14 = v53;
  }
  sub_16FF270((__int64)&v80, *a1, v14, v12, (unsigned int *)&ptr, a6, 0);
  sub_17038E0((__int64)&ptr);
  v15 = *a1;
  ptr = v73;
  v71 = 16;
  LODWORD(v72) = 0;
  BYTE4(v72) = 1;
  v17 = sub_1A5B7C0(v15, *(_QWORD *)(v15 + 192), a3, a4, 0, 0);
  if ( !v17 || (*(_BYTE *)(v17 + 28) & 0x7F) != 0x14 )
    goto LABEL_16;
  v20 = *(_QWORD *)(v17 + 120);
  if ( !v20 )
  {
    sub_A794E0((__int64 *)(*(_QWORD *)(v17 + 96) + 88LL), *(_QWORD *)(v17 + 96), v55, v16, v18, v19);
    v20 = *(_QWORD *)(v17 + 120);
  }
  v21 = v20 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v21 )
    goto LABEL_16;
  if ( (*(_BYTE *)(v21 + 72) & 1) != 0 )
  {
    sub_BA8900(v17);
    v21 = *(_QWORD *)(v17 + 120) & 0xFFFFFFFFFFFFFFF8LL;
  }
  v22 = *(_QWORD *)(v21 + 56);
  if ( !v22 )
    goto LABEL_16;
  while ( *(char *)(v22 + 28) < 0 || (*(_BYTE *)(v22 + 8) & 6) != 0 )
  {
    v22 = *(_QWORD *)(v22 + 128);
    if ( !v22 )
      goto LABEL_16;
  }
  v46 = BYTE4(v72);
LABEL_48:
  v47 = *(_QWORD *)(v22 + 40) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(v22 + 40) & 7) != 0 )
    v47 = 0;
  if ( v46 )
  {
    v48 = (char *)ptr;
    v49 = 8LL * HIDWORD(v71);
    v50 = (unsigned __int64 *)((char *)ptr + v49);
    if ( ptr != (char *)ptr + v49 )
    {
      v51 = (char *)ptr;
      if ( v47 == *(_QWORD *)ptr )
        goto LABEL_58;
      while ( 1 )
      {
        v51 += 8;
        if ( v50 == (unsigned __int64 *)v51 )
          break;
        if ( v47 == *(_QWORD *)v51 )
          goto LABEL_58;
      }
    }
    if ( HIDWORD(v71) < (unsigned int)v71 )
    {
      ++HIDWORD(v71);
      *v50 = v47;
      v48 = (char *)ptr;
      v51 = (char *)ptr + v49;
LABEL_58:
      v46 = 1;
      v52 = &v48[8 * HIDWORD(v71)];
      goto LABEL_59;
    }
  }
  v51 = (char *)sub_2236760(&ptr, v47);
  v46 = BYTE4(v72);
  v48 = (char *)ptr;
  if ( BYTE4(v72) )
    goto LABEL_58;
  v52 = (char *)ptr + 8 * (unsigned int)v71;
LABEL_59:
  if ( v52 != v51 && (*(_QWORD *)v51 == -2 || *(_QWORD *)v51 == -1) )
  {
    do
      v51 += 8;
    while ( v52 != v51 && *(_QWORD *)v51 >= 0xFFFFFFFFFFFFFFFELL );
  }
  while ( 1 )
  {
    v22 = *(_QWORD *)(v22 + 128);
    if ( !v22 )
      break;
    if ( *(char *)(v22 + 28) >= 0 && (*(_BYTE *)(v22 + 8) & 6) == 0 )
      goto LABEL_48;
  }
LABEL_16:
  v23 = operator new(0x28u);
  *(_QWORD *)(v23 + 16) = 0;
  *(_QWORD *)(v23 + 24) = 0;
  *(_DWORD *)(v23 + 32) = 0;
  std::__detail::_List_node_base::_M_hook((std::__detail::_List_node_base *)v23, (std::__detail::_List_node_base *)v82);
  ++v83;
  v24 = sub_168B6C0((__int64)a1);
  v29 = sub_704780(
          (__int64 *)(*(_QWORD *)(*(_QWORD *)(v24 + 2264) + 80LL) + 72LL),
          *(_QWORD *)(*(_QWORD *)(v24 + 2264) + 80LL),
          v25,
          v26,
          v27,
          v28);
  v30 = sub_B8E970((__int64)(v29 + 5));
  if ( v30 )
  {
    while ( (*(_BYTE *)(v30 + 28) & 0x7F) != 0x17 )
    {
LABEL_36:
      v30 = *(_QWORD *)(v30 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v30 )
        goto LABEL_37;
    }
    v31 = BYTE4(v72);
    v32 = *(_QWORD *)(v30 + 40) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v30 + 40) & 7) != 0 )
      v32 = 0;
    if ( !BYTE4(v72) )
      goto LABEL_44;
    v33 = (char *)ptr;
    v34 = 8LL * HIDWORD(v71);
    v35 = (unsigned __int64 *)((char *)ptr + v34);
    if ( ptr != (char *)ptr + v34 )
    {
      v36 = (char *)ptr;
      if ( v32 == *(_QWORD *)ptr )
      {
LABEL_46:
        v31 = 0;
        goto LABEL_28;
      }
      while ( 1 )
      {
        v36 += 8;
        if ( v35 == (unsigned __int64 *)v36 )
          break;
        if ( v32 == *(_QWORD *)v36 )
          goto LABEL_46;
      }
    }
    if ( HIDWORD(v71) < (unsigned int)v71 )
    {
      ++HIDWORD(v71);
      *v35 = v32;
      v33 = (char *)ptr;
      v36 = (char *)ptr + v34;
    }
    else
    {
LABEL_44:
      v36 = (char *)sub_2236760(&ptr, v32);
      v33 = (char *)ptr;
      if ( !BYTE4(v72) )
      {
        v37 = (char *)ptr + 8 * (unsigned int)v71;
LABEL_29:
        if ( v37 != v36 && (unsigned __int64)(*(_QWORD *)v36 + 2LL) <= 1 )
        {
          do
            v36 += 8;
          while ( v37 != v36 && *(_QWORD *)v36 >= 0xFFFFFFFFFFFFFFFELL );
        }
        if ( v31 )
        {
          v40 = *a1;
          v58 = 0;
          v41 = *(_QWORD *)(v40 + 544);
          v59 = 0;
          v56 = v41;
          v61 = sub_16FE9F0((__int64)&v80, v30);
          *(_QWORD *)v60 = v30;
          v64 = v58;
          v62 = 0;
          v58 = 0;
          v65 = v59;
          v63 = 0;
          v59 = 0;
          v67 = 0;
          v66 = v66 & 0x80 | 0x40;
          v68 = 0;
          v69 = 0;
          sub_15A3440(v60, 1, v42, v43, v44, v45);
          sub_1715C60((__int64)&v80, (__int64)v60, v56, 0, 0, 0);
          sub_1705410((__int64)&v64);
          sub_1705410((__int64)&v58);
        }
        goto LABEL_36;
      }
    }
LABEL_28:
    v37 = &v33[8 * HIDWORD(v71)];
    goto LABEL_29;
  }
LABEL_37:
  sub_16FF8C0((__int64)v82, v82[1]);
  v38 = a1[1];
  v39 = 0;
  if ( v80 != v81 )
    v39 = v80;
  if ( v38 )
    sub_1700D50(*a1, v38, v84, v39, -1431655765 * ((v81 - v80) >> 5));
  if ( !BYTE4(v72) )
    free(ptr);
  sub_1700A70((__int64)&v80);
}
