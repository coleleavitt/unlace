/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_874B4
// Address: 0x00000000000874B4

//----- (00000000000874B4) ----------------------------------------------------
void __fastcall sub_874B4(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 prime; // x20
  unsigned __int64 v4; // x21
  void **v5; // x0
  unsigned __int64 v6; // x1
  _BOOL4 v7; // w8
  unsigned __int64 v8; // x0
  void **v9; // x19
  unsigned __int64 v10; // x20
  void *v11; // x0
  void *v12; // x8
  __int64 v13; // x8
  _QWORD *v14; // x14
  unsigned __int64 v15; // x15
  unsigned __int64 v16; // x25
  __int64 v17; // x24
  void *v18; // x0
  __int64 *v19; // x22
  unsigned __int64 v20; // x27
  __int64 v21; // x8
  _QWORD *v22; // x26
  unsigned __int64 v23; // x23
  unsigned __int8 *v24; // x16
  _QWORD *v25; // x29
  size_t v26; // x21
  __int64 v27; // x8
  char v28; // w9
  unsigned int v29; // t1
  unsigned __int64 v30; // x10
  unsigned __int64 v31; // x11
  const void *v32; // x0
  unsigned __int8 *v33; // x1
  __int64 v34; // x8
  unsigned __int8 *v35; // x9
  unsigned __int64 v36; // x19
  unsigned __int8 *v37; // x20
  int v38; // w0
  std::logic_error *exception; // x19
  void **v40; // [xsp+8h] [xbp-78h]
  unsigned __int64 v41; // [xsp+10h] [xbp-70h]
  _QWORD *v42; // [xsp+18h] [xbp-68h]

  if ( a2 == 1 )
  {
    prime = 2;
  }
  else
  {
    prime = a2;
    if ( ((a2 - 1) & a2) != 0 )
      prime = std::__next_prime(a2);
  }
  v4 = *(_QWORD *)(a1 + 8);
  if ( prime <= v4 )
  {
    if ( prime >= v4 )
      return;
    v7 = v4 >= 3 && ((v4 - 1) & v4) == 0;
    v8 = vcvtps_u32_f32((float)*(unsigned __int64 *)(a1 + 24) / *(float *)(a1 + 32));
    if ( v7 )
    {
      if ( v8 >= 2 )
        v8 = 1LL << -(char)__clz(v8 - 1);
    }
    else
    {
      v8 = std::__next_prime(v8);
    }
    v6 = prime >= v8 ? prime : v8;
    if ( v6 >= v4 )
      return;
    v5 = (void **)a1;
  }
  else
  {
    v5 = (void **)a1;
    v6 = prime;
  }
  v9 = v5;
  if ( v6 )
  {
    v10 = v6;
    if ( v6 >> 61 )
    {
      exception = (std::logic_error *)_cxa_allocate_exception(0x10u);
      std::logic_error::logic_error(exception, "allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
      *(_QWORD *)exception = off_161528;
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::length_error,
        (void (*)(void *))std::out_of_range::~out_of_range);
    }
    v11 = operator new(8 * v6);
    v12 = *v9;
    *v9 = v11;
    if ( v12 )
      operator delete(v12);
    v13 = 0;
    v9[1] = (void *)v10;
    do
      *((_QWORD *)*v9 + v13++) = 0;
    while ( v10 != v13 );
    v14 = v9[2];
    if ( v14 )
    {
      v15 = v14[1];
      v16 = v10 - 1;
      v17 = (v10 - 1) & v10;
      if ( v17 )
      {
        if ( v15 >= v10 )
          v15 %= v10;
      }
      else
      {
        v15 &= v16;
      }
      *((_QWORD *)*v9 + v15) = v9 + 2;
      v19 = (__int64 *)*v14;
      if ( *v14 )
      {
        v40 = v9;
        v41 = v10;
        do
        {
          v20 = v19[1];
          if ( v17 )
          {
            if ( v20 >= v10 )
              v20 %= v10;
            if ( v20 != v15 )
            {
LABEL_43:
              if ( *((_QWORD *)*v9 + v20) )
              {
                v21 = *v19;
                v22 = v19;
                if ( *v19 )
                {
                  v23 = *((unsigned __int8 *)v19 + 16);
                  v24 = (unsigned __int8 *)v19 + 17;
                  v25 = v19;
                  if ( (v23 & 1) != 0 )
                    v26 = v19[3];
                  else
                    v26 = v23 >> 1;
                  v42 = v14;
                  do
                  {
                    v22 = v25;
                    v25 = (_QWORD *)v21;
                    v29 = *(unsigned __int8 *)(v21 + 16);
                    v27 = v21 + 16;
                    v28 = v29;
                    v30 = *(_QWORD *)(v27 + 8);
                    v31 = (unsigned __int64)v29 >> 1;
                    if ( (v29 & 1) == 0 )
                      v30 = v31;
                    if ( v26 != v30 )
                      break;
                    if ( (v23 & 1) != 0 )
                      v32 = (const void *)v19[4];
                    else
                      v32 = v24;
                    if ( (v28 & 1) != 0 )
                      v33 = (unsigned __int8 *)v25[4];
                    else
                      v33 = (unsigned __int8 *)(v27 + 1);
                    if ( (v23 & 1) != 0 )
                    {
                      if ( v26 )
                      {
                        v36 = v15;
                        v37 = v24;
                        v38 = memcmp(v32, v33, v26);
                        v24 = v37;
                        v15 = v36;
                        v9 = v40;
                        v10 = v41;
                        v14 = v42;
                        if ( v38 )
                          break;
                      }
                    }
                    else
                    {
                      v34 = -(__int64)(v23 >> 1);
                      v35 = v24;
                      if ( v26 )
                      {
                        while ( *v35 == *v33 )
                        {
                          ++v35;
                          ++v34;
                          ++v33;
                          if ( !v34 )
                            goto LABEL_65;
                        }
                        break;
                      }
                    }
LABEL_65:
                    v21 = *v25;
                    v22 = v25;
                  }
                  while ( *v25 );
                }
                *v14 = *v22;
                *v22 = **((_QWORD **)*v9 + v20);
                **((_QWORD **)*v9 + v20) = v19;
              }
              else
              {
                *((_QWORD *)*v9 + v20) = v14;
                v14 = v19;
                v15 = v20;
              }
              goto LABEL_68;
            }
          }
          else
          {
            v20 &= v16;
            if ( v20 != v15 )
              goto LABEL_43;
          }
          v14 = v19;
LABEL_68:
          v19 = (__int64 *)*v14;
        }
        while ( *v14 );
      }
    }
  }
  else
  {
    v18 = *v5;
    *v9 = nullptr;
    if ( v18 )
      operator delete(v18);
    v9[1] = nullptr;
  }
}
// 161528: using guessed type void (__fastcall *off_161528[2])(std::out_of_range *__hidden this);
// 161540: using guessed type __int64 *`typeinfo for'std::length_error;
