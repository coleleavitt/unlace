/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_25954
// Address: 0x00025954

//----- (00025954) --------------------------------------------------------
int __fastcall sub_25954(void **a1)
{
  void **v1; // r4
  unsigned int v2; // r0
  _DWORD *v3; // r5
  int v4; // r3
  char *v5; // r5
  char *v6; // r7
  char *v7; // r0
  char *v8; // r1
  char *v9; // r6
  int v10; // r1
  size_t v11; // r2
  int v12; // r7
  int v13; // r0
  char *v14; // r1
  int v15; // r5
  char *v16; // r0
  void *v17; // r3
  int *v18; // r4
  int v19; // r1
  int v20; // r2
  unsigned int v21; // r5
  int v22; // r0
  _DWORD *v23; // r5
  char *v24; // r0
  int v25; // r1
  unsigned int v26; // r6
  unsigned int v27; // r2
  char *v28; // r0
  char *v29; // r3
  char *v30; // r2
  char *v31; // r1
  int v32; // r6
  char *v33; // r5
  _BYTE *v34; // r0
  _BYTE *v35; // r2
  int v36; // r0
  unsigned int v37; // r7
  char *v38; // r0
  char *i; // r5
  char *v40; // r1
  char *v41; // r0
  char *v42; // r1
  char *v43; // r2
  int v44; // r1
  unsigned int v45; // r6
  unsigned int v46; // r2
  int v47; // r6
  _BYTE *v48; // r0
  _BYTE *v49; // r2
  int v50; // r0
  char *v51; // r0
  std::logic_error *exception; // r5
  char *v54; // [sp+8h] [bp-28h]
  int v55; // [sp+Ch] [bp-24h]
  int v56; // [sp+Ch] [bp-24h]
  void *v57; // [sp+14h] [bp-1Ch] BYREF
  void *ptr; // [sp+18h] [bp-18h] BYREF
  char *v59; // [sp+1Ch] [bp-14h]
  char *v60; // [sp+20h] [bp-10h]
  char *v61; // [sp+24h] [bp-Ch]
  _DWORD *v62; // [sp+28h] [bp-8h]
  int v63; // [sp+2Ch] [bp-4h]

  v1 = a1;
  v2 = (unsigned int)a1[4];
  if ( v2 >= 0x5D )
  {
    v1[4] = (void *)(v2 - 93);
    v3 = v1[1];
    v4 = *v3;
    v5 = (char *)(v3 + 1);
    v1[1] = v5;
    v6 = (char *)v1[2];
    v7 = (char *)v1[3];
    if ( v6 != v7 )
      goto LABEL_56;
    v8 = (char *)*v1;
    if ( v5 > *v1 )
    {
LABEL_4:
      v9 = &v5[-4 * ((((v5 - v8) >> 2) + 1) / 2)];
      v10 = (((v5 - v8) >> 2) + 1) / -2;
      v11 = v6 - v5;
      v12 = (v6 - v5) >> 2;
      v13 = (int)v9;
      if ( v11 )
      {
        v55 = v10;
        v14 = v5;
        v15 = v4;
        memmove(v9, v14, v11);
        v4 = v15;
        v13 = (int)v1[1] + 4 * v55;
      }
      v6 = &v9[4 * v12];
      v1[1] = (void *)v13;
      v1[2] = v6;
      goto LABEL_56;
    }
    v56 = v4;
    v54 = (char *)*v1;
    v44 = v7 - v8;
    v45 = 1;
    if ( v44 )
      v45 = v44 >> 1;
    v46 = v45 >> 2;
    v28 = nullptr;
    if ( !v45 )
    {
LABEL_44:
      v29 = &v28[4 * v45];
      v30 = &v28[4 * v46];
      if ( v5 != v6 )
      {
        v31 = v30;
        do
        {
          v47 = *(_DWORD *)v5;
          v5 += 4;
          *(_DWORD *)v31 = v47;
          v31 += 4;
        }
        while ( v6 != v5 );
        v1[3] = v29;
        v33 = (char *)*v1;
        *v1 = v28;
        v48 = v1[1];
        v1[1] = v30;
        v49 = v1[2];
        v1[2] = v31;
        if ( v49 != v48 )
        {
          v50 = v48 - v49;
          v4 = v56;
          do
            v50 += 4;
          while ( v50 );
LABEL_50:
          v6 = v31;
          goto LABEL_54;
        }
        goto LABEL_53;
      }
      goto LABEL_51;
    }
    if ( !(v45 >> 30) )
    {
      v28 = (char *)operator new(4 * v45);
      v46 = v45 >> 2;
      goto LABEL_44;
    }
    goto LABEL_58;
  }
  v16 = (char *)*v1;
  v17 = v1[1];
  v18 = (int *)(v1 + 2);
  v19 = *v18;
  v20 = v18[1];
  v21 = (*v18 - (int)v17) >> 2;
  v1 = (void **)(v18 - 2);
  v22 = v20 - (_DWORD)v16;
  if ( v21 >= v22 >> 2 )
  {
    v61 = nullptr;
    v62 = v1 + 3;
    v37 = 1;
    if ( v22 )
      v37 = v22 >> 1;
    v38 = nullptr;
    if ( v37 )
    {
      if ( v37 >> 30 )
      {
LABEL_58:
        exception = (std::logic_error *)_cxa_allocate_exception(8u);
        std::logic_error::logic_error(exception, "allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
LABEL_59:
        *(_DWORD *)exception = &off_DBAE4;
        _cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'std::length_error,
          (void (*)(void *))std::length_error::~length_error);
      }
      v38 = (char *)operator new(4 * v37);
    }
    ptr = v38;
    v60 = &v38[4 * v21];
    v59 = v60;
    v61 = &v38[4 * v37];
    v57 = operator new(0xFFCu);
    sub_25820((char **)&ptr, &v57);
    for ( i = (char *)v1[2]; ; sub_25C70((char **)&ptr, i) )
    {
      v40 = (char *)v1[1];
      if ( i == v40 )
        break;
      i -= 4;
    }
    v41 = (char *)*v1;
    *v1 = ptr;
    ptr = v41;
    v1[1] = v59;
    v59 = v40;
    v42 = (char *)v1[2];
    v1[2] = v60;
    v60 = v42;
    v43 = (char *)v1[3];
    v1[3] = v61;
    v61 = v43;
    if ( v42 != i )
    {
      do
        v42 -= 4;
      while ( i != v42 );
      v60 = i;
    }
    if ( v41 )
      operator delete(v41);
  }
  else
  {
    if ( v20 == v19 )
    {
      ptr = operator new(0xFFCu);
      sub_255CC((char **)v1, &ptr);
      v23 = v1[1];
      v4 = *v23;
      v5 = (char *)(v23 + 1);
      v1[1] = v5;
      v6 = (char *)v1[2];
      v24 = (char *)v1[3];
      if ( v6 != v24 )
        goto LABEL_56;
      v8 = (char *)*v1;
      if ( v5 > *v1 )
        goto LABEL_4;
      v56 = v4;
      v54 = (char *)*v1;
      v25 = v24 - v8;
      v26 = 1;
      if ( v25 )
        v26 = v25 >> 1;
      v27 = v26 >> 2;
      v28 = nullptr;
      if ( v26 )
      {
        if ( v26 >> 30 )
        {
          exception = (std::logic_error *)_cxa_allocate_exception(8u);
          std::logic_error::logic_error(
            exception,
            "allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
          goto LABEL_59;
        }
        v28 = (char *)operator new(4 * v26);
        v27 = v26 >> 2;
      }
      v29 = &v28[4 * v26];
      v30 = &v28[4 * v27];
      if ( v5 != v6 )
      {
        v31 = v30;
        do
        {
          v32 = *(_DWORD *)v5;
          v5 += 4;
          *(_DWORD *)v31 = v32;
          v31 += 4;
        }
        while ( v6 != v5 );
        v1[3] = v29;
        v33 = (char *)*v1;
        *v1 = v28;
        v34 = v1[1];
        v1[1] = v30;
        v35 = v1[2];
        v1[2] = v31;
        if ( v35 != v34 )
        {
          v36 = v34 - v35;
          v4 = v56;
          do
            v36 += 4;
          while ( v36 );
          goto LABEL_50;
        }
LABEL_53:
        v6 = v31;
        v4 = v56;
LABEL_54:
        v51 = v33;
        if ( v33 )
        {
LABEL_55:
          operator delete(v51);
          v4 = v56;
          v6 = (char *)v1[2];
        }
LABEL_56:
        *(_DWORD *)v6 = v4;
        v1[2] = (char *)v1[2] + 4;
        return _stack_chk_guard - v63;
      }
LABEL_51:
      *v1 = v28;
      v1[1] = v30;
      v1[2] = v30;
      v1[3] = v29;
      v6 = v30;
      v4 = v56;
      v51 = v54;
      if ( !v54 )
        goto LABEL_56;
      goto LABEL_55;
    }
    ptr = operator new(0xFFCu);
    sub_256EC((char **)v1, &ptr);
  }
  return _stack_chk_guard - v63;
}
// DBAE4: using guessed type _UNKNOWN *off_DBAE4;
// DBAF0: using guessed type _UNKNOWN *`typeinfo for'std::length_error;
