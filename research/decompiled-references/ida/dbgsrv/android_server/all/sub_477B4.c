/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_477B4
// Address: 0x00000000000477B4

//----- (00000000000477B4) ----------------------------------------------------
void __fastcall sub_477B4(__int64 a1)
{
  __int64 v2; // x8
  __int64 v3; // x9
  __int64 v4; // x11
  __int64 v5; // x12
  __int64 v6; // x11
  __int64 v7; // x8
  unsigned __int64 v8; // x20
  char *v9; // x0
  __int64 v10; // x8
  char *v11; // x8
  char *v12; // x23
  char *v13; // x24
  void *v14; // x20
  char *v15; // x21
  signed __int64 v16; // x9
  __int64 v17; // x9
  char *v18; // x20
  __int64 v19; // x24
  __int64 v20; // x25
  char *v21; // x8
  unsigned __int64 v22; // x25
  char *v23; // x0
  char *v24; // x8
  __int64 v25; // t1
  char *v26; // x11
  char *v27; // x12
  _BYTE *v28; // x9
  __int64 v29; // t1
  char *v30; // x0
  char *v31; // x9
  char *v32; // x10
  char *v33; // x11
  __int64 v34; // x9
  std::logic_error *v35; // x20
  std::logic_error *exception; // x20
  void *v37; // [xsp+8h] [xbp-78h] BYREF
  void *ptr; // [xsp+10h] [xbp-70h] BYREF
  char *v39; // [xsp+18h] [xbp-68h]
  char *v40; // [xsp+20h] [xbp-60h]
  char *v41; // [xsp+28h] [xbp-58h]
  __int64 v42; // [xsp+30h] [xbp-50h]
  __int64 v43; // [xsp+38h] [xbp-48h]

  v43 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 32);
  v5 = 56 * ((v3 - v2) >> 3) - 1;
  if ( v3 == v2 )
    v5 = 0;
  if ( (unsigned __int64)(v5 - (*(_QWORD *)(a1 + 40) + v4)) >= 0x38 )
  {
    *(_QWORD *)(a1 + 32) = v4 + 56;
    ptr = *(void **)(v3 - 8);
    *(_QWORD *)(a1 + 16) = v3 - 8;
    sub_47BEC((char **)a1, &ptr);
    return;
  }
  v6 = *(_QWORD *)(a1 + 24) - *(_QWORD *)a1;
  if ( v3 - v2 < (unsigned __int64)v6 )
  {
    if ( v2 == *(_QWORD *)a1 )
    {
      ptr = operator new(0xFC0u);
      sub_47F24((_BYTE **)a1, &ptr);
      v7 = *(_QWORD *)(a1 + 16);
      ptr = *(void **)(v7 - 8);
      *(_QWORD *)(a1 + 16) = v7 - 8;
      sub_47BEC((char **)a1, &ptr);
    }
    else
    {
      ptr = operator new(0xFC0u);
      sub_47D88((char **)a1, &ptr);
    }
    if ( *(_QWORD *)(a1 + 16) - *(_QWORD *)(a1 + 8) == 8 )
      v10 = 28;
    else
      v10 = *(_QWORD *)(a1 + 32) + 56LL;
    *(_QWORD *)(a1 + 32) = v10;
    return;
  }
  if ( v6 )
    v8 = v6 >> 2;
  else
    v8 = 1;
  v41 = nullptr;
  v42 = a1 + 24;
  if ( v8 )
  {
    if ( v8 >> 61 )
    {
      exception = (std::logic_error *)_cxa_allocate_exception(0x10u);
      std::logic_error::logic_error(exception, "allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
      *(_QWORD *)exception = off_161528;
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::length_error,
        (void (*)(void *))std::out_of_range::~out_of_range);
    }
    v9 = (char *)operator new(8 * v8);
  }
  else
  {
    v9 = nullptr;
  }
  ptr = v9;
  v39 = v9;
  v40 = v9;
  v41 = &v9[8 * v8];
  v37 = operator new(0xFC0u);
  sub_480C0((_BYTE **)&ptr, &v37);
  v12 = *(char **)(a1 + 8);
  v11 = *(char **)(a1 + 16);
  if ( v12 != v11 )
  {
    v13 = v40;
    while ( 1 )
    {
      if ( v13 == v41 )
      {
        v14 = ptr;
        v15 = v39;
        if ( v39 > ptr )
        {
          v16 = (v39 - (_BYTE *)ptr) >> 3;
          if ( v16 + 1 >= 0 )
            v17 = v16 + 1;
          else
            v17 = v16 + 2;
          v18 = &v39[-8 * (v17 >> 1)];
          v19 = (v41 - v39) >> 3;
          if ( v41 == v39 )
          {
            v21 = &v39[-8 * (v17 >> 1)];
          }
          else
          {
            v20 = -(v17 >> 1);
            memmove(&v39[-8 * (v17 >> 1)], v39, v41 - v39);
            v21 = &v39[8 * v20];
          }
          v13 = &v18[8 * v19];
          v39 = v21;
          v40 = v13;
          goto LABEL_47;
        }
        if ( v41 == ptr )
          v22 = 1;
        else
          v22 = (v41 - (_BYTE *)ptr) >> 2;
        if ( v22 )
        {
          if ( v22 >> 61 )
          {
            v35 = (std::logic_error *)_cxa_allocate_exception(0x10u);
            std::logic_error::logic_error(v35, "allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
            *(_QWORD *)v35 = off_161528;
            _cxa_throw(
              v35,
              (struct type_info *)&`typeinfo for'std::length_error,
              (void (*)(void *))std::out_of_range::~out_of_range);
          }
          v23 = (char *)operator new(8 * v22);
        }
        else
        {
          v23 = nullptr;
        }
        v24 = &v23[8 * (v22 >> 2)];
        if ( v15 == v13 )
        {
          ptr = v23;
          v39 = &v23[8 * (v22 >> 2)];
          v40 = v39;
          v41 = &v23[8 * v22];
          v13 = v39;
          if ( !v14 )
            goto LABEL_47;
        }
        else
        {
          do
          {
            v25 = *(_QWORD *)v15;
            v15 += 8;
            *(_QWORD *)v24 = v25;
            v24 += 8;
          }
          while ( v13 != v15 );
          v14 = ptr;
          v26 = v39;
          v27 = v40;
          ptr = v23;
          v39 = &v23[8 * (v22 >> 2)];
          v40 = v24;
          v41 = &v23[8 * v22];
          if ( v27 != v26 )
          {
            v28 = (_BYTE *)(v26 - v27);
            do
              v28 += 8;
            while ( v28 );
          }
          v13 = v24;
          if ( !v14 )
            goto LABEL_47;
        }
        operator delete(v14);
        v13 = v40;
      }
LABEL_47:
      v29 = *(_QWORD *)v12;
      v12 += 8;
      *(_QWORD *)v13 = v29;
      v13 = v40 + 8;
      v40 += 8;
      v11 = *(char **)(a1 + 16);
      if ( v12 == v11 )
      {
        v12 = *(char **)(a1 + 8);
        goto LABEL_50;
      }
    }
  }
  v13 = v40;
LABEL_50:
  v30 = *(char **)a1;
  *(_QWORD *)a1 = ptr;
  v31 = v39;
  *(_QWORD *)(a1 + 8) = v39;
  ptr = v30;
  v39 = v12;
  v40 = v11;
  v32 = v41;
  v33 = *(char **)(a1 + 24);
  *(_QWORD *)(a1 + 16) = v13;
  *(_QWORD *)(a1 + 24) = v32;
  v41 = v33;
  if ( v13 - v31 == 8 )
    v34 = 28;
  else
    v34 = *(_QWORD *)(a1 + 32) + 56LL;
  *(_QWORD *)(a1 + 32) = v34;
  if ( v11 != v12 )
  {
    do
      v11 -= 8;
    while ( v12 != v11 );
    v40 = v12;
  }
  if ( v30 )
    operator delete(v30);
}
// 161528: using guessed type void (__fastcall *off_161528[2])(std::out_of_range *__hidden this);
// 161540: using guessed type __int64 *`typeinfo for'std::length_error;
