/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4825C
// Address: 0x000000000004825C

//----- (000000000004825C) ----------------------------------------------------
void __fastcall sub_4825C(__int64 a1)
{
  unsigned __int64 v2; // x8
  bool v3; // cf
  unsigned __int64 v4; // x8
  _QWORD *v5; // x20
  char *v6; // x24
  char *v7; // x20
  __int64 v8; // x23
  __int64 v9; // t1
  char *v10; // x8
  _BYTE *v11; // x21
  __int64 v12; // x9
  __int64 v13; // x8
  __int64 v14; // x8
  bool v15; // zf
  size_t v16; // x2
  __int64 v17; // x8
  char *v18; // x21
  __int64 v19; // x24
  __int64 v20; // x25
  __int64 v21; // x8
  __int64 v22; // x8
  __int64 v23; // x9
  unsigned __int64 v24; // x20
  __int64 v25; // x10
  _QWORD *v26; // x20
  __int64 v27; // t1
  char *v28; // x8
  __int64 v29; // x8
  __int64 v30; // x8
  unsigned __int64 v31; // x25
  char *v32; // x0
  unsigned __int64 v33; // x21
  char *v34; // x0
  __int64 v35; // x8
  __int64 v36; // x8
  unsigned __int64 v37; // x25
  char *v38; // x0
  _QWORD *i; // x20
  _QWORD *v40; // x8
  _BYTE *v41; // x0
  __int128 v42; // q0
  __int128 v43; // q1
  _QWORD *v44; // x8
  char *v45; // x10
  char *v46; // x9
  char *v47; // x8
  __int64 v48; // t1
  __int64 v49; // x11
  __int64 v50; // x12
  __int64 v51; // x9
  char *v52; // x10
  char *v53; // x9
  __int64 v54; // t1
  __int64 v55; // x11
  __int64 v56; // x12
  __int64 v57; // x9
  std::logic_error *exception; // x20
  void *v59; // [xsp+8h] [xbp-78h] BYREF
  void *ptr[2]; // [xsp+10h] [xbp-70h] BYREF
  __int128 v61; // [xsp+20h] [xbp-60h]
  __int64 v62; // [xsp+30h] [xbp-50h]
  __int64 v63; // [xsp+38h] [xbp-48h]

  v63 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = *(_QWORD *)(a1 + 32);
  v3 = v2 >= 0x38;
  v4 = v2 - 56;
  if ( v3 )
  {
    v5 = *(_QWORD **)(a1 + 8);
    v6 = *(char **)(a1 + 16);
    *(_QWORD *)(a1 + 32) = v4;
    v9 = *v5;
    v7 = (char *)(v5 + 1);
    v8 = v9;
    v10 = *(char **)(a1 + 24);
    *(_QWORD *)(a1 + 8) = v7;
    if ( v6 != v10 )
      goto LABEL_53;
    v11 = *(_BYTE **)a1;
    v12 = (__int64)&v7[-*(_QWORD *)a1];
    if ( (unsigned __int64)v7 > *(_QWORD *)a1 )
      goto LABEL_5;
    v35 = v10 - v11;
    v15 = v35 == 0;
    v36 = v35 >> 2;
    if ( v15 )
      v37 = 1;
    else
      v37 = v36;
    if ( v37 )
    {
      if ( v37 >> 61 )
        goto LABEL_67;
      v38 = (char *)operator new(8 * v37);
    }
    else
    {
      v38 = nullptr;
    }
    v45 = &v38[8 * (v37 >> 2)];
    v46 = &v38[8 * v37];
    if ( v7 == v6 )
    {
      *(_QWORD *)a1 = v38;
      *(_QWORD *)(a1 + 8) = v45;
      *(_QWORD *)(a1 + 16) = v45;
      *(_QWORD *)(a1 + 24) = v46;
      v6 = &v38[8 * (v37 >> 2)];
      if ( !v11 )
        goto LABEL_53;
      goto LABEL_52;
    }
    v47 = &v38[8 * (v37 >> 2)];
    do
    {
      v48 = *(_QWORD *)v7;
      v7 += 8;
      *(_QWORD *)v47 = v48;
      v47 += 8;
    }
    while ( v6 != v7 );
    v11 = *(_BYTE **)a1;
    v49 = *(_QWORD *)(a1 + 8);
    v50 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)a1 = v38;
    *(_QWORD *)(a1 + 8) = v45;
    *(_QWORD *)(a1 + 16) = v47;
    *(_QWORD *)(a1 + 24) = v46;
    if ( v50 != v49 )
    {
      v51 = v49 - v50;
      do
        v51 += 8;
      while ( v51 );
    }
LABEL_51:
    v6 = v47;
    if ( v11 )
    {
LABEL_52:
      operator delete(v11);
      v6 = *(char **)(a1 + 16);
    }
LABEL_53:
    *(_QWORD *)v6 = v8;
    *(_QWORD *)(a1 + 16) += 8LL;
    return;
  }
  v22 = *(_QWORD *)(a1 + 16);
  v23 = *(_QWORD *)(a1 + 24);
  v24 = (v22 - *(_QWORD *)(a1 + 8)) >> 3;
  v25 = v23 - *(_QWORD *)a1;
  if ( v24 < v25 >> 3 )
  {
    if ( v23 != v22 )
    {
      ptr[0] = operator new(0xFC0u);
      sub_47F24((_BYTE **)a1, ptr);
      return;
    }
    ptr[0] = operator new(0xFC0u);
    sub_47D88((char **)a1, ptr);
    v26 = *(_QWORD **)(a1 + 8);
    v6 = *(char **)(a1 + 16);
    v27 = *v26;
    v7 = (char *)(v26 + 1);
    v8 = v27;
    v28 = *(char **)(a1 + 24);
    *(_QWORD *)(a1 + 8) = v7;
    if ( v6 != v28 )
      goto LABEL_53;
    v11 = *(_BYTE **)a1;
    v12 = (__int64)&v7[-*(_QWORD *)a1];
    if ( (unsigned __int64)v7 <= *(_QWORD *)a1 )
    {
      v29 = v28 - v11;
      v15 = v29 == 0;
      v30 = v29 >> 2;
      if ( v15 )
        v31 = 1;
      else
        v31 = v30;
      if ( !v31 )
      {
        v32 = nullptr;
        goto LABEL_58;
      }
      if ( !(v31 >> 61) )
      {
        v32 = (char *)operator new(8 * v31);
LABEL_58:
        v52 = &v32[8 * (v31 >> 2)];
        v53 = &v32[8 * v31];
        if ( v7 == v6 )
        {
          v6 = &v32[8 * (v31 >> 2)];
          *(_QWORD *)a1 = v32;
          *(_QWORD *)(a1 + 8) = v52;
          *(_QWORD *)(a1 + 16) = v52;
          *(_QWORD *)(a1 + 24) = v53;
          if ( !v11 )
            goto LABEL_53;
          goto LABEL_52;
        }
        v47 = &v32[8 * (v31 >> 2)];
        do
        {
          v54 = *(_QWORD *)v7;
          v7 += 8;
          *(_QWORD *)v47 = v54;
          v47 += 8;
        }
        while ( v6 != v7 );
        v11 = *(_BYTE **)a1;
        v55 = *(_QWORD *)(a1 + 8);
        v56 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)a1 = v32;
        *(_QWORD *)(a1 + 8) = v52;
        *(_QWORD *)(a1 + 16) = v47;
        *(_QWORD *)(a1 + 24) = v53;
        if ( v56 != v55 )
        {
          v57 = v55 - v56;
          do
            v57 += 8;
          while ( v57 );
        }
        goto LABEL_51;
      }
      exception = (std::logic_error *)_cxa_allocate_exception(0x10u);
      std::logic_error::logic_error(exception, "allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
LABEL_68:
      *(_QWORD *)exception = off_161528;
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::length_error,
        (void (*)(void *))std::out_of_range::~out_of_range);
    }
LABEL_5:
    v13 = v12 >> 3;
    if ( (v12 >> 3) + 1 >= 0 )
      v14 = v13 + 1;
    else
      v14 = v13 + 2;
    v16 = v6 - v7;
    v15 = v6 == v7;
    v17 = v14 >> 1;
    v18 = &v7[-8 * v17];
    v19 = (v6 - v7) >> 3;
    if ( v15 )
    {
      v21 = (__int64)&v7[-8 * v17];
    }
    else
    {
      v20 = -v17;
      memmove(&v7[-8 * v17], v7, v16);
      v21 = *(_QWORD *)(a1 + 8) + 8 * v20;
    }
    v6 = &v18[8 * v19];
    *(_QWORD *)(a1 + 8) = v21;
    *(_QWORD *)(a1 + 16) = v6;
    goto LABEL_53;
  }
  if ( v25 )
    v33 = v25 >> 2;
  else
    v33 = 1;
  *((_QWORD *)&v61 + 1) = 0;
  v62 = a1 + 24;
  if ( v33 )
  {
    if ( !(v33 >> 61) )
    {
      v34 = (char *)operator new(8 * v33);
      goto LABEL_34;
    }
LABEL_67:
    exception = (std::logic_error *)_cxa_allocate_exception(0x10u);
    std::logic_error::logic_error(exception, "allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
    goto LABEL_68;
  }
  v34 = nullptr;
LABEL_34:
  *(_QWORD *)&v61 = &v34[8 * v24];
  *((_QWORD *)&v61 + 1) = &v34[8 * v33];
  ptr[0] = v34;
  ptr[1] = (void *)v61;
  v59 = operator new(0xFC0u);
  sub_480C0((_BYTE **)ptr, &v59);
  for ( i = *(_QWORD **)(a1 + 16); ; sub_48694((char **)ptr, i) )
  {
    v40 = *(_QWORD **)(a1 + 8);
    if ( i == v40 )
      break;
    --i;
  }
  v41 = *(_BYTE **)a1;
  v42 = *(_OWORD *)ptr;
  ptr[0] = *(void **)a1;
  ptr[1] = v40;
  v43 = *(_OWORD *)(a1 + 16);
  *(_OWORD *)a1 = v42;
  v44 = (_QWORD *)v43;
  *(_OWORD *)(a1 + 16) = v61;
  v61 = v43;
  if ( (_QWORD *)v43 != i )
  {
    do
      --v44;
    while ( i != v44 );
    *(_QWORD *)&v61 = i;
  }
  if ( v41 )
    operator delete(v41);
}
// 161528: using guessed type void (__fastcall *off_161528[2])(std::out_of_range *__hidden this);
// 161540: using guessed type __int64 *`typeinfo for'std::length_error;
