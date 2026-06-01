_QWORD *__fastcall sub_1152AB0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  unsigned int v7; // r15d
  _BYTE *v8; // r13
  signed __int64 v9; // rdx
  signed __int64 v10; // r12
  unsigned int v11; // eax
  int v12; // eax
  __int64 *v13; // rsi
  unsigned int v14; // eax
  _BOOL8 v15; // rcx
  char v16; // r12
  char v17; // r13
  char v18; // r15
  void **v20; // rbp
  void **v21; // r14
  void **v22; // rbp
  void **v23; // r14
  void **v24; // rbp
  void **v25; // r14
  void **v26; // rbp
  void **v27; // r14
  void **v28; // rbp
  void **v29; // r14
  __int64 *v30; // [rsp+8h] [rbp-1C0h]
  unsigned int v31; // [rsp+8h] [rbp-1C0h]
  char *v32; // [rsp+10h] [rbp-1B8h]
  size_t v33; // [rsp+18h] [rbp-1B0h]
  _QWORD *v34; // [rsp+20h] [rbp-1A8h]
  char v36; // [rsp+2Ch] [rbp-19Ch]
  char v37; // [rsp+2Dh] [rbp-19Bh]
  char v38; // [rsp+2Eh] [rbp-19Ah]
  char v39; // [rsp+2Fh] [rbp-199h]
  __int64 *v40[8]; // [rsp+30h] [rbp-198h] BYREF
  void *v41; // [rsp+70h] [rbp-158h]
  void *v42; // [rsp+98h] [rbp-130h]
  void **v43; // [rsp+A0h] [rbp-128h]
  void *v44; // [rsp+B0h] [rbp-118h]
  void **v45; // [rsp+B8h] [rbp-110h]
  void *v46; // [rsp+C8h] [rbp-100h]
  void **v47; // [rsp+D0h] [rbp-F8h]
  void *v48; // [rsp+E0h] [rbp-E8h]
  void **v49; // [rsp+E8h] [rbp-E0h]
  void *v50; // [rsp+F8h] [rbp-D0h]
  void **v51; // [rsp+100h] [rbp-C8h]
  void *v52; // [rsp+140h] [rbp-88h]
  __int64 v53; // [rsp+150h] [rbp-78h] BYREF
  void *v54; // [rsp+170h] [rbp-58h]
  __int64 v55; // [rsp+180h] [rbp-48h] BYREF

  v7 = sub_228CEA0(*(void **)a4, *(_QWORD *)(a4 + 8));
  v8 = (_BYTE *)sub_228CDC0(v7);
  v10 = v9;
  v34 = (_QWORD *)(a2 + 3808);
  if ( !*(_BYTE *)(a2 + 4880) )
    sub_1151BC0(a2 + 3808, *(__int64 **)(a2 + 3736), a2 + 3744, *(_QWORD *)(a2 + 3800));
  v11 = sub_2220DF0(v8, v10);
  v12 = sub_2221120(a2 + 4192, v8, v10, v11);
  if ( v12 == -1 )
    v13 = (__int64 *)(*(_QWORD *)(a2 + 4192) + 8LL * *(unsigned int *)(a2 + 4200));
  else
    v13 = (__int64 *)(*(_QWORD *)(a2 + 4192) + 8LL * v12);
  sub_114A8D0(v40, v13, 1);
  v30 = v40[0];
  sub_114A8D0(v40, (__int64 *)(*(_QWORD *)(a2 + 4192) + 8LL * *(unsigned int *)(a2 + 4200)), 1);
  if ( v40[0] == v30 )
  {
    v33 = j__strlen(&byte_22CD811);
    v32 = (char *)&byte_22CD811;
  }
  else
  {
    v32 = *(char **)(*v30 + 8);
    v33 = *(_QWORD *)(*v30 + 16);
  }
  v14 = sub_1198880(*(_QWORD *)(a2 + 8), a3);
  if ( v14 < 4 )
    v14 = 4;
  v31 = 100 * v14;
  if ( !*(_BYTE *)(a2 + 4880) )
    sub_1151BC0(a2 + 3808, *(__int64 **)(a2 + 3736), a2 + 3744, *(_QWORD *)(a2 + 3800));
  if ( (unsigned __int8)sub_1149610((__int64 **)(a2 + 3808), v8, v10, (__int64)v32, v33, v31) )
  {
    v15 = 0;
    if ( v7 )
      v15 = (sub_228CFC0(v7) & 0x30) != 48;
    v16 = 1;
    v36 = sub_2193B10(a3, 823, 1163, v15);
    v37 = sub_2193B10(a3, 703, 1139, 0);
    v38 = sub_2193B10(a3, 1905, 1456, 0);
    v39 = sub_2193B10(a3, 696, 1134, 0);
    v17 = sub_2193B10(a3, 832, 1167, 1);
    if ( (sub_228CFC0(v7) & 0x40) != 0 )
      v16 = sub_2193B10(a3, 2969, 2764, 0);
    v18 = 0;
    if ( (unsigned __int8)sub_2193B10(a3, 826, 1165, 1) )
    {
      sub_11088B0((__int64)v40, a2, a3);
      v18 = (__int64)v40[0] & 1;
      if ( v54 != &v55 )
        operator delete(v54);
      if ( v52 != &v53 )
        operator delete(v52);
      v20 = v51;
      v21 = (void **)v50;
      if ( v51 != v50 )
      {
        do
        {
          while ( *v21 != v21 + 2 )
          {
            operator delete(*v21);
            v21 += 4;
            if ( v21 == v20 )
              goto LABEL_31;
          }
          v21 += 4;
        }
        while ( v20 != v21 );
LABEL_31:
        v21 = (void **)v50;
      }
      if ( v21 )
        operator delete(v21);
      v22 = v49;
      v23 = (void **)v48;
      if ( v49 != v48 )
      {
        do
        {
          while ( *v23 != v23 + 2 )
          {
            operator delete(*v23);
            v23 += 4;
            if ( v23 == v22 )
              goto LABEL_37;
          }
          v23 += 4;
        }
        while ( v22 != v23 );
LABEL_37:
        v23 = (void **)v48;
      }
      if ( v23 )
        operator delete(v23);
      v24 = v47;
      v25 = (void **)v46;
      if ( v47 != v46 )
      {
        do
        {
          while ( *v25 != v25 + 2 )
          {
            operator delete(*v25);
            v25 += 4;
            if ( v25 == v24 )
              goto LABEL_43;
          }
          v25 += 4;
        }
        while ( v24 != v25 );
LABEL_43:
        v25 = (void **)v46;
      }
      if ( v25 )
        operator delete(v25);
      v26 = v45;
      v27 = (void **)v44;
      if ( v45 != v44 )
      {
        do
        {
          while ( *v27 != v27 + 2 )
          {
            operator delete(*v27);
            v27 += 4;
            if ( v27 == v26 )
              goto LABEL_49;
          }
          v27 += 4;
        }
        while ( v26 != v27 );
LABEL_49:
        v27 = (void **)v44;
      }
      if ( v27 )
        operator delete(v27);
      v28 = v43;
      v29 = (void **)v42;
      if ( v43 != v42 )
      {
        do
        {
          while ( *v29 != v29 + 2 )
          {
            operator delete(*v29);
            v29 += 4;
            if ( v28 == v29 )
              goto LABEL_55;
          }
          v29 += 4;
        }
        while ( v28 != v29 );
LABEL_55:
        v29 = (void **)v42;
      }
      if ( v29 )
        operator delete(v29);
      if ( v41 )
        operator delete(v41);
    }
    if ( !*(_BYTE *)(a2 + 4880) )
      sub_1151BC0((__int64)v34, *(__int64 **)(a2 + 3736), a2 + 3744, *(_QWORD *)(a2 + 3800));
    sub_114D920(a1, v34, v32, v33, v16, v36, v37, v38, v39, v17, v31, v18, a5);
  }
  else
  {
    *a1 = a1 + 2;
    a1[1] = 0xC00000000LL;
  }
  return a1;
}

