void __fastcall sub_170F590(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rdi
  __int64 v7; // rax
  __int64 (*v8)(void); // rdx
  __int64 (__fastcall *v9)(__int64); // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  const void ***v12; // rbx
  __int64 v13; // rax
  const void **v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // r14
  _QWORD *v20; // r15
  _QWORD *v21; // rdi
  char *v22; // rax
  _QWORD *v23; // r15
  _QWORD *v24; // rbp
  _QWORD *v25; // rdi
  __int64 v26; // rcx
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // [rsp+0h] [rbp-328h]
  const void **v31[4]; // [rsp+10h] [rbp-318h] BYREF
  __int16 v32; // [rsp+30h] [rbp-2F8h]
  __int64 v33; // [rsp+40h] [rbp-2E8h] BYREF
  void *v34; // [rsp+48h] [rbp-2E0h]
  __m128i si128; // [rsp+50h] [rbp-2D8h]
  __int64 v36; // [rsp+60h] [rbp-2C8h]
  void *v37[2]; // [rsp+68h] [rbp-2C0h]
  void *v38; // [rsp+78h] [rbp-2B0h]
  char v39; // [rsp+80h] [rbp-2A8h]
  int v40; // [rsp+84h] [rbp-2A4h]
  __int64 v41; // [rsp+88h] [rbp-2A0h]
  __int64 v42; // [rsp+90h] [rbp-298h]
  __int64 v43; // [rsp+98h] [rbp-290h]
  void *ptr; // [rsp+A0h] [rbp-288h]
  __int64 v45; // [rsp+A8h] [rbp-280h]
  int v46; // [rsp+B0h] [rbp-278h]
  char v47; // [rsp+B4h] [rbp-274h]
  __int64 v48; // [rsp+B8h] [rbp-270h] BYREF
  char *v49; // [rsp+100h] [rbp-228h] BYREF
  char *v50; // [rsp+108h] [rbp-220h]
  char *v51; // [rsp+110h] [rbp-218h]
  char **v52; // [rsp+1B8h] [rbp-170h]
  __int64 v53[2]; // [rsp+1E8h] [rbp-140h] BYREF
  __int64 v54; // [rsp+1F8h] [rbp-130h]
  int v55[62]; // [rsp+230h] [rbp-F8h] BYREF

  v6 = (_QWORD *)a1[1];
  BYTE4(v33) = 0;
  LODWORD(v33) = 0;
  v34 = nullptr;
  si128 = 0u;
  v36 = 0;
  ptr = &v48;
  v7 = *v6;
  LOBYTE(v43) = 0;
  v8 = *(__int64 (**)(void))(v7 + 48);
  v47 = 1;
  v45 = 8;
  v46 = 0;
  if ( (char *)v8 != (char *)sub_15A1860 )
  {
    v10 = v8();
    v6 = (_QWORD *)a1[1];
    v9 = *(__int64 (__fastcall **)(__int64))(*v6 + 40LL);
    if ( v9 == sub_15A1850 )
      goto LABEL_3;
LABEL_43:
    v29 = v10;
    v28 = ((__int64 (*)(void))v9)();
    v10 = v29;
    v11 = v28;
    goto LABEL_4;
  }
  v9 = *(__int64 (__fastcall **)(__int64))(v7 + 40);
  v10 = (__int64)(v6 + 3);
  if ( v9 != sub_15A1850 )
    goto LABEL_43;
LABEL_3:
  v11 = v6[6];
LABEL_4:
  sub_16FF270((__int64)&v49, *a1, v11, v10, (unsigned int *)&v33, a6, 0);
  if ( !v47 )
    free(ptr);
  if ( (_BYTE)v43 && v40 )
    free(v38);
  v12 = (const void ***)&off_2C8E640;
  v13 = operator new(0x28u);
  *(_QWORD *)(v13 + 16) = 0;
  *(_QWORD *)(v13 + 24) = 0;
  *(_DWORD *)(v13 + 32) = 0;
  std::__detail::_List_node_base::_M_hook((std::__detail::_List_node_base *)v13, (std::__detail::_List_node_base *)v53);
  ++v54;
  do
  {
    while ( 1 )
    {
      v14 = *v12;
      v33 = 0;
      *(_OWORD *)v37 = 0;
      v34 = v14;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
      LODWORD(v36) = 0;
      v38 = nullptr;
      v39 = v39 & 0x80 | 0x40;
      v41 = 0;
      v42 = 0;
      v43 = 0;
      if ( v50 == v51 )
      {
        sub_1706840((__int64)&v49, v50, (__int64)&v33);
      }
      else
      {
        sub_17048E0((__int64)v50, (__int64)&v33);
        v50 += 96;
      }
      v19 = v37[1];
      v20 = v37[0];
      if ( v37[1] != v37[0] )
      {
        do
        {
          while ( 1 )
          {
            v21 = (_QWORD *)v20[3];
            v16 = (__int64)(v20 + 5);
            if ( v21 == v20 + 5 )
              break;
            operator delete(v21);
            v20 += 8;
            if ( v19 == v20 )
              goto LABEL_15;
          }
          v20 += 8;
        }
        while ( v19 != v20 );
LABEL_15:
        v20 = v37[0];
      }
      if ( v20 )
        operator delete(v20);
      if ( *(_BYTE *)v14 )
      {
        v31[0] = v14;
        v31[2] = (const void **)"ApplicationExtension";
        v32 = 771;
      }
      else
      {
        v15 = 259;
        v31[0] = (const void **)"ApplicationExtension";
        v32 = 259;
      }
      v22 = sub_15A4EB0(v52, v31, v15, v16, v17, v18);
      v33 = 0;
      v34 = v22;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
      *(_OWORD *)v37 = 0;
      LODWORD(v36) = 0;
      v38 = nullptr;
      v39 = v39 & 0x80 | 0x40;
      v41 = 0;
      v42 = 0;
      v43 = 0;
      if ( v50 == v51 )
      {
        sub_1706840((__int64)&v49, v50, (__int64)&v33);
      }
      else
      {
        sub_17048E0((__int64)v50, (__int64)&v33);
        v50 += 96;
      }
      v23 = v37[1];
      v24 = v37[0];
      if ( v37[1] != v37[0] )
      {
        do
        {
          while ( 1 )
          {
            v25 = (_QWORD *)v24[3];
            if ( v25 == v24 + 5 )
              break;
            operator delete(v25);
            v24 += 8;
            if ( v24 == v23 )
              goto LABEL_25;
          }
          v24 += 8;
        }
        while ( v23 != v24 );
LABEL_25:
        v24 = v37[0];
      }
      if ( !v24 )
        break;
      ++v12;
      operator delete(v24);
      if ( &unk_2C8E660 == (_UNKNOWN *)v12 )
        goto LABEL_28;
    }
    ++v12;
  }
  while ( &unk_2C8E660 != (_UNKNOWN *)v12 );
LABEL_28:
  sub_16FF8C0((__int64)v53, v53[1]);
  v26 = 0;
  v27 = a1[1];
  if ( v49 != v50 )
    v26 = (__int64)v49;
  if ( v27 )
    sub_1700D50(*a1, v27, v55, v26, -1431655765 * ((v50 - v49) >> 5));
  sub_1700A70((__int64)&v49);
}
