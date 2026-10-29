void __fastcall sub_1710880(__int64 *a1, char a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v7; // rdi
  __int64 v8; // rax
  __int64 (*v9)(void); // rdx
  __int64 v10; // rcx
  __int64 (*v11)(void); // rax
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rdi
  unsigned int v16; // r8d
  _QWORD *v17; // r15
  __int64 v18; // rax
  __int64 v19; // rax
  __m128i v20; // xmm2
  _QWORD *v21; // rdx
  _QWORD *v22; // rbx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned int *v25; // rax
  __int64 v26; // rdx
  char *v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned __int64 v32; // rax
  _QWORD *v33; // rbp
  _QWORD *v34; // r14
  _QWORD *v35; // rdi
  __int64 v36; // rax
  _QWORD *v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // [rsp+8h] [rbp-360h]
  unsigned __int64 v40; // [rsp+18h] [rbp-350h]
  const void **v41; // [rsp+20h] [rbp-348h] BYREF
  unsigned __int64 v42; // [rsp+28h] [rbp-340h]
  __m128i si128; // [rsp+30h] [rbp-338h]
  int v44; // [rsp+40h] [rbp-328h]
  void *v45[2]; // [rsp+48h] [rbp-320h]
  __int64 v46; // [rsp+58h] [rbp-310h]
  char v47; // [rsp+60h] [rbp-308h]
  __int64 v48; // [rsp+68h] [rbp-300h]
  __int64 v49; // [rsp+70h] [rbp-2F8h]
  __int64 v50; // [rsp+78h] [rbp-2F0h]
  __m128i v51; // [rsp+80h] [rbp-2E8h] BYREF
  __int64 v52; // [rsp+90h] [rbp-2D8h]
  __int64 v53; // [rsp+98h] [rbp-2D0h]
  __int64 v54; // [rsp+A0h] [rbp-2C8h]
  __int64 v55; // [rsp+A8h] [rbp-2C0h]
  _BYTE *v56; // [rsp+B0h] [rbp-2B8h]
  __int64 v57; // [rsp+B8h] [rbp-2B0h]
  _BYTE v58[32]; // [rsp+C0h] [rbp-2A8h] BYREF
  _QWORD *v59; // [rsp+E0h] [rbp-288h]
  __int64 v60; // [rsp+E8h] [rbp-280h]
  int v61; // [rsp+F0h] [rbp-278h]
  char v62; // [rsp+F4h] [rbp-274h]
  _QWORD v63[3]; // [rsp+F8h] [rbp-270h] BYREF
  __int64 v64; // [rsp+110h] [rbp-258h] BYREF
  char *v65; // [rsp+140h] [rbp-228h] BYREF
  char *v66; // [rsp+148h] [rbp-220h]
  char *v67; // [rsp+150h] [rbp-218h]
  __m128i v68[3]; // [rsp+1F8h] [rbp-170h] BYREF
  __int64 v69[9]; // [rsp+228h] [rbp-140h] BYREF
  int v70[62]; // [rsp+270h] [rbp-F8h] BYREF

  v7 = (__int64 *)a1[1];
  v51.m128i_i8[4] = 0;
  v51.m128i_i64[1] = 0;
  v51.m128i_i32[0] = (a2 == 0) + 22;
  v52 = 0;
  v53 = 0;
  v54 = 0;
  v59 = v63;
  v8 = *v7;
  v58[24] = 0;
  v9 = *(__int64 (**)(void))(v8 + 48);
  v62 = 1;
  v60 = 8;
  v61 = 0;
  if ( (char *)v9 == (char *)sub_15A1860 )
  {
    v10 = (__int64)(v7 + 3);
  }
  else
  {
    v19 = v9();
    v7 = (__int64 *)a1[1];
    v10 = v19;
    v8 = *v7;
  }
  v11 = *(__int64 (**)(void))(v8 + 40);
  if ( (char *)v11 == (char *)sub_15A1850 )
  {
    v12 = v7[6];
  }
  else
  {
    v39 = v10;
    v18 = v11();
    v10 = v39;
    v12 = v18;
  }
  sub_16FF270((__int64)&v65, *a1, v12, v10, (unsigned int *)&v51, a6, 0);
  sub_17038E0((__int64)&v51);
  if ( !a2 )
  {
    v13 = a1[1];
    if ( (*(_BYTE *)(v13 + 8) & 1) == 0 )
    {
      v14 = (__int64)v65;
      v15 = *a1;
      v16 = -1431655765 * ((v66 - v65) >> 5);
      if ( v66 == v65 )
        v14 = 0;
LABEL_9:
      sub_1700D50(v15, v13, v70, v14, v16);
      goto LABEL_10;
    }
    v20 = _mm_loadu_si128(v68);
    v52 = 0;
    v56 = v58;
    v57 = 0x400000000LL;
    v63[1] = &v64;
    v63[2] = 0x200000000LL;
    v51 = v20;
    v53 = 0;
    v54 = 0;
    v55 = 0;
    sub_16FF160((__int64)v69, (std::__detail::_List_node_base *)v69);
    v17 = (_QWORD *)sub_145EC70(*(_QWORD *)(*a1 + 240), 1);
    v22 = v21;
    v40 = sub_145F720(*(_QWORD *)(*a1 + 240), 1);
    while ( v17 != (_QWORD *)v40 )
    {
      v25 = *(unsigned int **)(*v17 + 16LL);
      v26 = *v25;
      LOWORD(v44) = 261;
      v41 = (const void **)(v25 + 4);
      v42 = v26;
      v27 = sub_15A4EB0((char **)v51.m128i_i64[0], &v41, v26, 261, v23, v24);
      sub_15A2F70((__int64)&v51, (__int64)v27);
      v32 = sub_15A5CA0((__int64)&v51, (__int64)v27, v28, v29, v30, v31);
      v41 = nullptr;
      v42 = v32;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23AA9C0);
      *(_OWORD *)v45 = 0;
      v44 = 0;
      v46 = 0;
      v47 = v47 & 0x80 | 0x40;
      v48 = 0;
      v49 = 0;
      v50 = 0;
      if ( v66 == v67 )
      {
        sub_1706840((__int64)&v65, v66, (__int64)&v41);
      }
      else
      {
        sub_17048E0((__int64)v66, (__int64)&v41);
        v66 += 96;
      }
      v33 = v45[1];
      v34 = v45[0];
      if ( v45[1] != v45[0] )
      {
        do
        {
          while ( 1 )
          {
            v35 = (_QWORD *)v34[3];
            if ( v35 == v34 + 5 )
              break;
            operator delete(v35);
            v34 += 8;
            if ( v33 == v34 )
              goto LABEL_26;
          }
          v34 += 8;
        }
        while ( v33 != v34 );
LABEL_26:
        v34 = v45[0];
      }
      if ( v34 )
        operator delete(v34);
      if ( v17 + 2 == v22 )
      {
        v17 = v22;
      }
      else
      {
        v36 = v17[2];
        if ( v36 == -4096 || v36 == -8192 )
        {
          v37 = v17 + 4;
          do
          {
            v17 = v37;
            if ( v22 == v37 )
              break;
            v38 = *v37;
            v37 += 2;
          }
          while ( v38 == -4096 || v38 == -8192 );
        }
        else
        {
          v17 += 2;
        }
      }
    }
    sub_16FF8C0((__int64)v69, v69[1]);
    sub_1704B40(&v51);
  }
  v14 = (__int64)v65;
  v13 = a1[1];
  v15 = *a1;
  v16 = -1431655765 * ((v66 - v65) >> 5);
  if ( v65 == v66 )
    v14 = 0;
  if ( v13 )
    goto LABEL_9;
LABEL_10:
  sub_1700A70((__int64)&v65);
}
