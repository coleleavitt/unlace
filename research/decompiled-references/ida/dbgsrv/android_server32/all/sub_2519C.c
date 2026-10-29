/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2519C
// Address: 0x0002519C

//----- (0002519C) --------------------------------------------------------
int __fastcall sub_2519C(int a1)
{
  int v1; // r1
  int v2; // r7
  int v3; // r4
  int v4; // r3
  int v5; // r3
  int v6; // r5
  int v7; // r1
  char *v8; // r0
  unsigned int v9; // r4
  char *v10; // r7
  char *v11; // r2
  char *v12; // r6
  char *v13; // r5
  int v14; // r4
  char *v15; // r0
  unsigned int v16; // r5
  unsigned int v17; // r3
  char *v18; // r0
  char *v19; // r2
  char *v20; // r3
  char *v21; // r1
  int v22; // r5
  void *v23; // r6
  char *v24; // r0
  char *v25; // r3
  _BYTE *v26; // r0
  void *v27; // r0
  int v28; // r0
  int v29; // r0
  char *v30; // r4
  char *v31; // r0
  char *v32; // r1
  char *v33; // r3
  int v34; // r3
  int v35; // r1
  std::logic_error *v37; // r5
  std::logic_error *exception; // r5
  int v39; // [sp+8h] [bp-24h]
  void *v40; // [sp+8h] [bp-24h]
  int v41; // [sp+Ch] [bp-20h]
  void *v42; // [sp+10h] [bp-1Ch] BYREF
  void *ptr; // [sp+14h] [bp-18h] BYREF
  char *v44; // [sp+18h] [bp-14h]
  char *v45; // [sp+1Ch] [bp-10h]
  char *v46; // [sp+20h] [bp-Ch]
  int v47; // [sp+24h] [bp-8h]
  int v48; // [sp+28h] [bp-4h]

  v1 = *(_DWORD *)(a1 + 4);
  v2 = *(_DWORD *)(a1 + 8);
  v3 = 93 * ((v2 - v1) >> 2) - 1;
  if ( v2 == v1 )
    v3 = v2 - v1;
  v4 = *(_DWORD *)(a1 + 16);
  if ( (unsigned int)(v3 - (*(_DWORD *)(a1 + 20) + v4)) >= 0x5D )
  {
    *(_DWORD *)(a1 + 16) = v4 + 93;
    ptr = *(void **)(v2 - 4);
    *(_DWORD *)(a1 + 8) = v2 - 4;
    sub_254AC((char **)a1, &ptr);
    return _stack_chk_guard - v48;
  }
  v5 = *(_DWORD *)(a1 + 12) - *(_DWORD *)a1;
  v6 = a1;
  if ( v2 - v1 < (unsigned int)v5 )
  {
    if ( v1 == *(_DWORD *)a1 )
    {
      ptr = operator new(0xFFCu);
      sub_256EC((char **)v6, &ptr);
      v7 = *(_DWORD *)(v6 + 8);
      ptr = *(void **)(v7 - 4);
      *(_DWORD *)(v6 + 8) = v7 - 4;
      sub_254AC((char **)v6, &ptr);
    }
    else
    {
      ptr = operator new(0xFFCu);
      sub_255CC((char **)v6, &ptr);
    }
    v29 = 46;
    if ( *(_DWORD *)(v6 + 8) - *(_DWORD *)(v6 + 4) != 4 )
      v29 = *(_DWORD *)(v6 + 16) + 93;
    *(_DWORD *)(v6 + 16) = v29;
    return _stack_chk_guard - v48;
  }
  v8 = nullptr;
  v46 = nullptr;
  v47 = v6 + 12;
  v9 = 1;
  if ( v5 )
    v9 = v5 >> 1;
  if ( v9 )
  {
    if ( v9 > 0x3FFFFFFF )
    {
      exception = (std::logic_error *)_cxa_allocate_exception(8u);
      std::logic_error::logic_error(exception, "allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
      *(_DWORD *)exception = &off_DBAE4;
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::length_error,
        (void (*)(void *))std::length_error::~length_error);
    }
    v8 = (char *)operator new(4 * v9);
  }
  v41 = v6;
  v45 = v8;
  ptr = v8;
  v44 = v8;
  v46 = &v8[4 * v9];
  v42 = operator new(0xFFCu);
  sub_25820((char **)&ptr, &v42);
  v10 = *(char **)(v6 + 4);
  v11 = *(char **)(v6 + 8);
  if ( v10 == v11 )
  {
    v30 = v45;
    goto LABEL_44;
  }
  v30 = v45;
  do
  {
    if ( v30 != v46 )
      goto LABEL_39;
    v12 = v44;
    if ( v44 <= ptr )
    {
      v16 = 1;
      if ( v46 != ptr )
        v16 = (v46 - (_BYTE *)ptr) >> 1;
      v40 = ptr;
      v17 = v16 >> 2;
      v18 = nullptr;
      if ( v16 )
      {
        if ( v16 > 0x3FFFFFFF )
        {
          v37 = (std::logic_error *)_cxa_allocate_exception(8u);
          std::logic_error::logic_error(v37, "allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
          *(_DWORD *)v37 = &off_DBAE4;
          _cxa_throw(
            v37,
            (struct type_info *)&`typeinfo for'std::length_error,
            (void (*)(void *))std::length_error::~length_error);
        }
        v18 = (char *)operator new(4 * v16);
        v17 = v16 >> 2;
      }
      v19 = &v18[4 * v16];
      v20 = &v18[4 * v17];
      v21 = v20;
      if ( v12 == v30 )
      {
        v44 = v20;
        ptr = v18;
        v45 = v20;
        v46 = &v18[4 * v16];
        v30 = v20;
        v6 = v41;
        v27 = v40;
        if ( v40 )
          goto LABEL_38;
      }
      else
      {
        do
        {
          v22 = *(_DWORD *)v12;
          v12 += 4;
          *(_DWORD *)v21 = v22;
          v21 += 4;
        }
        while ( v30 != v12 );
        v23 = ptr;
        ptr = v18;
        v24 = v44;
        v44 = v20;
        v25 = v45;
        v45 = v21;
        v46 = v19;
        if ( v25 == v24 )
        {
          v30 = v21;
          v6 = v41;
        }
        else
        {
          v26 = (_BYTE *)(v24 - v25);
          v6 = v41;
          do
            v26 += 4;
          while ( v26 );
          v30 = v21;
        }
        v27 = v23;
        if ( v23 )
        {
LABEL_38:
          operator delete(v27);
          v30 = v45;
        }
      }
    }
    else
    {
      v13 = &v44[-4 * ((((v44 - (_BYTE *)ptr) >> 2) + 1) / 2)];
      v14 = (v46 - v44) >> 2;
      v15 = v13;
      if ( v46 != v44 )
      {
        v39 = (((v44 - (_BYTE *)ptr) >> 2) + 1) / -2;
        memmove(v13, v44, v46 - v44);
        v15 = &v44[4 * v39];
      }
      v44 = v15;
      v30 = &v13[4 * v14];
      v45 = v30;
      v6 = v41;
    }
LABEL_39:
    v28 = *(_DWORD *)v10;
    v10 += 4;
    *(_DWORD *)v30 = v28;
    v30 = v45 + 4;
    v45 += 4;
    v11 = *(char **)(v6 + 8);
  }
  while ( v10 != v11 );
  v10 = *(char **)(v6 + 4);
LABEL_44:
  v31 = *(char **)v6;
  *(_DWORD *)v6 = ptr;
  ptr = v31;
  v32 = v44;
  *(_DWORD *)(v6 + 4) = v44;
  v44 = v10;
  *(_DWORD *)(v6 + 8) = v30;
  v45 = v11;
  v33 = *(char **)(v6 + 12);
  *(_DWORD *)(v41 + 12) = v46;
  v46 = v33;
  v34 = v30 - v32;
  v35 = 46;
  if ( v34 != 4 )
    v35 = *(_DWORD *)(v41 + 16) + 93;
  *(_DWORD *)(v41 + 16) = v35;
  if ( v11 != v10 )
  {
    do
      v11 -= 4;
    while ( v10 != v11 );
    v45 = v10;
  }
  if ( v31 )
    operator delete(v31);
  return _stack_chk_guard - v48;
}
// DBAE4: using guessed type _UNKNOWN *off_DBAE4;
// DBAF0: using guessed type _UNKNOWN *`typeinfo for'std::length_error;
