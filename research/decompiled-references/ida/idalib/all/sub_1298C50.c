void __fastcall sub_1298C50(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        double a8)
{
  __int64 v10; // r12
  __int64 *v11; // r15
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r14
  _BYTE *v18; // r9
  const __m128i *v19; // r14
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // r15
  __int64 v23; // rbp
  __int64 v24; // r12
  const __m128i *v25; // r14
  __int64 v26; // r15
  __int64 v27; // rcx
  __int64 v28; // rsi
  int v29; // edx
  __int64 v30; // rsi
  __m128i *v31; // rax
  __int64 v32; // rdi
  _QWORD *v33; // r12
  void (__fastcall *v34)(_QWORD *); // rax
  __int64 v35; // r13
  __int64 v36; // rbp
  void *v37; // rdi
  _QWORD *v38; // rdi
  _QWORD *v39; // rdi
  void **v40; // r13
  void **v41; // rbp
  void *v42; // rdi
  _QWORD *v43; // rdi
  __int64 v44; // rax
  __int64 v45; // rcx
  unsigned __int64 v46; // rdx
  void *v47; // rdi
  __int64 v48; // rax
  unsigned __int64 v49; // rdx
  void *v50; // r15
  __int64 v51; // rax
  __int64 v52; // rax
  char *v53; // rax
  __int64 v54; // rcx
  _BYTE *v55; // rsi
  unsigned __int64 v56; // rdx
  void *v57; // rdx
  bool v58; // zf
  __int64 v59; // rax
  unsigned __int64 v60; // rdx
  __int64 v61; // rax
  unsigned __int64 v62; // rdx
  _QWORD *v63; // rdx
  char *v64; // rsi
  const char *v65; // rax
  __int64 v66; // rcx
  unsigned __int64 v67; // rdx
  unsigned __int64 v68; // rdx
  unsigned __int64 v69; // rbp
  __int64 v70; // rdi
  __int64 v73; // [rsp+18h] [rbp-150h]
  _BYTE *v76; // [rsp+30h] [rbp-138h]
  const char *v77; // [rsp+30h] [rbp-138h]
  char *v78; // [rsp+30h] [rbp-138h]
  __int64 v79; // [rsp+30h] [rbp-138h]
  const __m128i *v80; // [rsp+38h] [rbp-130h]
  _BYTE *v81; // [rsp+40h] [rbp-128h] BYREF
  __int64 v82; // [rsp+48h] [rbp-120h]
  char *v83; // [rsp+50h] [rbp-118h] BYREF
  unsigned __int64 v84; // [rsp+58h] [rbp-110h]
  void *v85[2]; // [rsp+60h] [rbp-108h] BYREF
  __int64 v86; // [rsp+70h] [rbp-F8h] BYREF
  __m128i v87; // [rsp+80h] [rbp-E8h] BYREF
  _BYTE v88[16]; // [rsp+90h] [rbp-D8h] BYREF
  void *ptr; // [rsp+A0h] [rbp-C8h] BYREF
  __int64 v90; // [rsp+A8h] [rbp-C0h]
  _BYTE v91[184]; // [rsp+B0h] [rbp-B8h] BYREF

  v10 = *(_QWORD *)(a1 + 24);
  v11 = *(__int64 **)(v10 + 8);
  ptr = v91;
  v90 = 0x1000000000LL;
  sub_11BB1A0(a6);
  switch ( *(_DWORD *)(v10 + 48) )
  {
    case 1:
    case 2:
    case 0x23:
    case 0x24:
      v81 = nullptr;
      v82 = 0;
      v83 = nullptr;
      v84 = 0;
      sub_113D7E0(a6, &v81, &v83, 1);
      sub_1140F70((__int64)v85, v83, v84, v81, v82, v10 + 16);
      sub_C05100((__int64)&v87, "-mcpu=", (__int64)v85);
      v44 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a6 + 16LL))(
              a6,
              v87.m128i_i64[0],
              v87.m128i_i64[1]);
      v45 = (unsigned int)v90;
      v46 = (unsigned int)v90 + 1LL;
      if ( v46 > HIDWORD(v90) )
      {
        v79 = v44;
        sub_2237220(&ptr, v91, v46, 8);
        v45 = (unsigned int)v90;
        v44 = v79;
      }
      *((_QWORD *)ptr + v45) = v44;
      LODWORD(v90) = v90 + 1;
      if ( (_BYTE *)v87.m128i_i64[0] != v88 )
        operator delete((void *)v87.m128i_i64[0]);
      v47 = v85[0];
      if ( v85[0] != &v86 )
        goto LABEL_55;
      break;
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
      v85[0] = nullptr;
      v85[1] = nullptr;
      v87 = 0u;
      sub_1152ED0(a6, (_DWORD *)(v10 + 16), (const char **)v85, (char **)&v87);
      v48 = (unsigned int)v90;
      v49 = (unsigned int)v90 + 1LL;
      if ( v49 > HIDWORD(v90) )
      {
        sub_2237220(&ptr, v91, v49, 8);
        v48 = (unsigned int)v90;
      }
      *((_QWORD *)ptr + v48) = "-march";
      v50 = v85[0];
      LODWORD(v90) = v90 + 1;
      v51 = (unsigned int)v90;
      if ( (unsigned __int64)(unsigned int)v90 + 1 > HIDWORD(v90) )
      {
        sub_2237220(&ptr, v91, (unsigned int)v90 + 1LL, 8);
        v51 = (unsigned int)v90;
      }
      *((_QWORD *)ptr + v51) = v50;
      LODWORD(v90) = v90 + 1;
      v52 = (unsigned int)v90;
      if ( (unsigned __int64)(unsigned int)v90 + 1 > HIDWORD(v90) )
      {
        sub_2237220(&ptr, v91, (unsigned int)v90 + 1LL, 8);
        v52 = (unsigned int)v90;
      }
      *((_QWORD *)ptr + v52) = "-mabi";
      LODWORD(v90) = v90 + 1;
      v53 = sub_11539E0((char *)v87.m128i_i64[0], v87.m128i_i64[1]);
      v54 = (unsigned int)v90;
      v55 = (_BYTE *)HIDWORD(v90);
      v56 = (unsigned int)v90 + 1LL;
      if ( v56 > HIDWORD(v90) )
      {
        v55 = v91;
        v78 = v53;
        sub_2237220(&ptr, v91, v56, 8);
        v54 = (unsigned int)v90;
        v53 = v78;
      }
      v57 = ptr;
      *((_QWORD *)ptr + v54) = v53;
      LODWORD(v90) = v90 + 1;
      v58 = (unsigned __int8)sub_22B7F00(v10 + 16, v55, v57, v54) == 0;
      v59 = (unsigned int)v90;
      v60 = (unsigned int)v90 + 1LL;
      if ( v58 )
      {
        if ( v60 > HIDWORD(v90) )
        {
          sub_2237220(&ptr, v91, v60, 8);
          v59 = (unsigned int)v90;
        }
        *((_QWORD *)ptr + v59) = "-EB";
        LODWORD(v90) = v90 + 1;
      }
      else
      {
        if ( v60 > HIDWORD(v90) )
        {
          sub_2237220(&ptr, v91, v60, 8);
          v59 = (unsigned int)v90;
        }
        *((_QWORD *)ptr + v59) = "-EL";
        LODWORD(v90) = v90 + 1;
      }
      sub_11C6770((_DWORD *)v10, a6, (__int64)&ptr);
      break;
    case 0x1D:
      v61 = (unsigned int)v90;
      v62 = (unsigned int)v90 + 1LL;
      if ( v62 > HIDWORD(v90) )
      {
        sub_2237220(&ptr, v91, v62, 8);
        v61 = (unsigned int)v90;
      }
      v63 = ptr;
      v64 = "-32";
      goto LABEL_72;
    case 0x1E:
      v61 = (unsigned int)v90;
      v68 = (unsigned int)v90 + 1LL;
      if ( v68 > HIDWORD(v90) )
      {
        sub_2237220(&ptr, v91, v68, 8);
        v61 = (unsigned int)v90;
      }
      v63 = ptr;
      v64 = "-64";
LABEL_72:
      v63[v61] = v64;
      LODWORD(v90) = v90 + 1;
      sub_11C8180(&v87, v11, a6, (_DWORD *)(v10 + 16), 0);
      v65 = sub_115C610(v87.m128i_i64[0], v87.m128i_i64[1], v10 + 16);
      v66 = (unsigned int)v90;
      v67 = (unsigned int)v90 + 1LL;
      if ( v67 > HIDWORD(v90) )
      {
        v77 = v65;
        sub_2237220(&ptr, v91, v67, 8);
        v66 = (unsigned int)v90;
        v65 = v77;
      }
      *((_QWORD *)ptr + v66) = v65;
      LODWORD(v90) = v90 + 1;
      sub_11C6770((_DWORD *)v10, a6, (__int64)&ptr);
      v47 = (void *)v87.m128i_i64[0];
      if ( (_BYTE *)v87.m128i_i64[0] != v88 )
LABEL_55:
        operator delete(v47);
      break;
    case 0x25:
      v12 = (unsigned int)v90;
      v13 = (unsigned int)v90 + 1LL;
      if ( v13 > HIDWORD(v90) )
      {
        sub_2237220(&ptr, v91, v13, 8);
        v12 = (unsigned int)v90;
      }
      *((_QWORD *)ptr + v12) = "--32";
      LODWORD(v90) = v90 + 1;
      break;
    default:
      break;
  }
  sub_21B6F20(a6, &ptr, 3403, 3487, 0);
  v14 = (unsigned int)v90;
  v15 = (unsigned int)v90 + 1LL;
  if ( v15 > HIDWORD(v90) )
  {
    sub_2237220(&ptr, v91, v15, 8);
    v14 = (unsigned int)v90;
  }
  *((_QWORD *)ptr + v14) = "-o";
  LODWORD(v90) = v90 + 1;
  v16 = (unsigned int)v90;
  v17 = *a4;
  if ( (unsigned __int64)(unsigned int)v90 + 1 > HIDWORD(v90) )
  {
    sub_2237220(&ptr, v91, (unsigned int)v90 + 1LL, 8);
    v16 = (unsigned int)v90;
  }
  v18 = v91;
  *((_QWORD *)ptr + v16) = v17;
  v19 = *(const __m128i **)a5;
  v20 = (unsigned int)(v90 + 1);
  v21 = *(_QWORD *)a5 + 40LL * *(unsigned int *)(a5 + 8);
  LODWORD(v90) = v90 + 1;
  if ( v19 != (const __m128i *)v21 )
  {
    do
    {
      while ( 1 )
      {
        v22 = v19->m128i_i64[0];
        if ( v20 + 1 > (unsigned __int64)HIDWORD(v90) )
          break;
        v19 = (const __m128i *)((char *)v19 + 40);
        *((_QWORD *)ptr + v20) = v22;
        v20 = (unsigned int)(v90 + 1);
        LODWORD(v90) = v90 + 1;
        if ( (const __m128i *)v21 == v19 )
          goto LABEL_14;
      }
      v80 = (const __m128i *)v21;
      v76 = v18;
      v19 = (const __m128i *)((char *)v19 + 40);
      sub_2237220(&ptr, v18, v20 + 1, 8);
      v21 = (__int64)v80;
      v18 = v76;
      *((_QWORD *)ptr + (unsigned int)v90) = v22;
      v20 = (unsigned int)(v90 + 1);
      LODWORD(v90) = v90 + 1;
    }
    while ( v80 != v19 );
  }
LABEL_14:
  sub_112D530(&v87, v10, "as");
  v23 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a6 + 16LL))(
          a6,
          v87.m128i_i64[0],
          v87.m128i_i64[1]);
  if ( (_BYTE *)v87.m128i_i64[0] != v88 )
    operator delete((void *)v87.m128i_i64[0]);
  v24 = (__int64)a4;
  v25 = *(const __m128i **)a5;
  v26 = *(unsigned int *)(a5 + 8);
  v73 = operator new(0x208u);
  sub_1106AE0(v73, a3, a1, 0x100000000LL, (__int64)"@", v23, (__int64)&ptr, v25, v26, v24, 1, 0);
  v27 = *(unsigned int *)(a2 + 160);
  v87.m128i_i64[0] = v73;
  v28 = v27 + 1;
  v29 = v27;
  if ( v27 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 164) )
  {
    v69 = *(_QWORD *)(a2 + 152);
    v70 = a2 + 152;
    if ( v69 > (unsigned __int64)&v87 )
    {
      sub_11673D0(v70, v28, a7, a8);
      v27 = *(unsigned int *)(a2 + 160);
      v30 = *(_QWORD *)(a2 + 152);
      v31 = &v87;
      v29 = *(_DWORD *)(a2 + 160);
    }
    else
    {
      if ( (unsigned __int64)&v87 >= v69 + 8 * v27 )
      {
        sub_11673D0(v70, v28, a7, a8);
        v27 = *(unsigned int *)(a2 + 160);
        v30 = *(_QWORD *)(a2 + 152);
        v31 = &v87;
      }
      else
      {
        sub_11673D0(v70, v28, a7, a8);
        v30 = *(_QWORD *)(a2 + 152);
        v27 = *(unsigned int *)(a2 + 160);
        v31 = (__m128i *)((char *)&v87 + v30 - v69);
      }
      v29 = *(_DWORD *)(a2 + 160);
    }
  }
  else
  {
    v30 = *(_QWORD *)(a2 + 152);
    v31 = &v87;
  }
  v32 = v31->m128i_i64[0];
  v31->m128i_i64[0] = 0;
  *(_QWORD *)(v30 + 8 * v27) = v32;
  v33 = (_QWORD *)v87.m128i_i64[0];
  *(_DWORD *)(a2 + 160) = v29 + 1;
  if ( v33 )
  {
    v34 = *(void (__fastcall **)(_QWORD *))(*v33 + 8LL);
    if ( v34 == sub_10D4290 )
    {
      v35 = v33[58];
      v36 = v33[57];
      *v33 = &off_2BA8F30;
      if ( v35 != v36 )
      {
        do
        {
          if ( *(_BYTE *)(v36 + 32) && *(_QWORD *)v36 != v36 + 16 )
            operator delete(*(void **)v36);
          v36 += 40;
        }
        while ( v35 != v36 );
        v36 = v33[57];
      }
      if ( v36 )
        operator delete((void *)v36);
      v37 = (void *)v33[54];
      if ( v37 )
        operator delete(v37);
      v38 = (_QWORD *)v33[50];
      if ( v38 != v33 + 52 )
        operator delete(v38);
      v39 = (_QWORD *)v33[32];
      if ( v39 != v33 + 34 )
        free(v39);
      v40 = (void **)v33[29];
      v41 = (void **)v33[28];
      if ( v40 != v41 )
      {
        do
        {
          while ( *v41 != v41 + 2 )
          {
            operator delete(*v41);
            v41 += 4;
            if ( v41 == v40 )
              goto LABEL_37;
          }
          v41 += 4;
        }
        while ( v40 != v41 );
LABEL_37:
        v41 = (void **)v33[28];
      }
      if ( v41 )
        operator delete(v41);
      v42 = (void *)v33[25];
      if ( v42 )
        operator delete(v42);
      v43 = (_QWORD *)v33[7];
      if ( v43 != v33 + 9 )
        free(v43);
      operator delete(v33, 0x208u);
    }
    else
    {
      v34(v33);
    }
  }
  if ( ptr != v91 )
    free(ptr);
}
