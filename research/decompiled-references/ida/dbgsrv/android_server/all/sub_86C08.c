/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_86C08
// Address: 0x0000000000086C08

//----- (0000000000086C08) ----------------------------------------------------
void __fastcall sub_86C08(void **a1, unsigned __int64 a2)
{
  void **v2; // x19
  unsigned __int64 v3; // x20
  void *v4; // x0
  void *v5; // x8
  char *v6; // x8
  _QWORD *v7; // x14
  unsigned __int64 v8; // x15
  unsigned __int64 v9; // x25
  __int64 v10; // x24
  void *v11; // x0
  __int64 *v12; // x22
  unsigned __int64 v13; // x27
  __int64 v14; // x8
  _QWORD *v15; // x26
  unsigned __int64 v16; // x23
  unsigned __int8 *v17; // x16
  _QWORD *v18; // x29
  size_t v19; // x21
  __int64 v20; // x8
  char v21; // w9
  unsigned int v22; // t1
  unsigned __int64 v23; // x10
  unsigned __int64 v24; // x11
  const void *v25; // x0
  unsigned __int8 *v26; // x1
  __int64 v27; // x8
  unsigned __int8 *v28; // x9
  unsigned __int64 v29; // x19
  unsigned __int8 *v30; // x20
  int v31; // w0
  std::logic_error *exception; // x19
  void **v33; // [xsp+8h] [xbp-78h]
  unsigned __int64 v34; // [xsp+10h] [xbp-70h]
  _QWORD *v35; // [xsp+18h] [xbp-68h]

  v2 = a1;
  if ( a2 )
  {
    v3 = a2;
    if ( a2 >> 61 )
    {
      exception = (std::logic_error *)_cxa_allocate_exception(0x10u);
      std::logic_error::logic_error(exception, "allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
      *(_QWORD *)exception = off_161528;
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::length_error,
        (void (*)(void *))std::out_of_range::~out_of_range);
    }
    v4 = operator new(8 * a2);
    v5 = *v2;
    *v2 = v4;
    if ( v5 )
      operator delete(v5);
    v6 = nullptr;
    v2[1] = (void *)v3;
    do
      *((_QWORD *)*v2 + (_QWORD)v6++) = 0;
    while ( (char *)v3 != v6 );
    v7 = v2[2];
    if ( v7 )
    {
      v8 = v7[1];
      v9 = v3 - 1;
      v10 = (v3 - 1) & v3;
      if ( v10 )
      {
        if ( v8 >= v3 )
          v8 %= v3;
      }
      else
      {
        v8 &= v9;
      }
      *((_QWORD *)*v2 + v8) = v2 + 2;
      v12 = (__int64 *)*v7;
      if ( *v7 )
      {
        v33 = v2;
        v34 = v3;
        do
        {
          v13 = v12[1];
          if ( v10 )
          {
            if ( v13 >= v3 )
              v13 %= v3;
            if ( v13 != v8 )
            {
LABEL_23:
              if ( *((_QWORD *)*v2 + v13) )
              {
                v14 = *v12;
                v15 = v12;
                if ( *v12 )
                {
                  v16 = *((unsigned __int8 *)v12 + 16);
                  v17 = (unsigned __int8 *)v12 + 17;
                  v18 = v12;
                  if ( (v16 & 1) != 0 )
                    v19 = v12[3];
                  else
                    v19 = v16 >> 1;
                  v35 = v7;
                  do
                  {
                    v15 = v18;
                    v18 = (_QWORD *)v14;
                    v22 = *(unsigned __int8 *)(v14 + 16);
                    v20 = v14 + 16;
                    v21 = v22;
                    v23 = *(_QWORD *)(v20 + 8);
                    v24 = (unsigned __int64)v22 >> 1;
                    if ( (v22 & 1) == 0 )
                      v23 = v24;
                    if ( v19 != v23 )
                      break;
                    if ( (v16 & 1) != 0 )
                      v25 = (const void *)v12[4];
                    else
                      v25 = v17;
                    if ( (v21 & 1) != 0 )
                      v26 = (unsigned __int8 *)v18[4];
                    else
                      v26 = (unsigned __int8 *)(v20 + 1);
                    if ( (v16 & 1) != 0 )
                    {
                      if ( v19 )
                      {
                        v29 = v8;
                        v30 = v17;
                        v31 = memcmp(v25, v26, v19);
                        v17 = v30;
                        v8 = v29;
                        v2 = v33;
                        v3 = v34;
                        v7 = v35;
                        if ( v31 )
                          break;
                      }
                    }
                    else
                    {
                      v27 = -(__int64)(v16 >> 1);
                      v28 = v17;
                      if ( v19 )
                      {
                        while ( *v28 == *v26 )
                        {
                          ++v28;
                          ++v27;
                          ++v26;
                          if ( !v27 )
                            goto LABEL_45;
                        }
                        break;
                      }
                    }
LABEL_45:
                    v14 = *v18;
                    v15 = v18;
                  }
                  while ( *v18 );
                }
                *v7 = *v15;
                *v15 = **((_QWORD **)*v2 + v13);
                **((_QWORD **)*v2 + v13) = v12;
              }
              else
              {
                *((_QWORD *)*v2 + v13) = v7;
                v7 = v12;
                v8 = v13;
              }
              goto LABEL_48;
            }
          }
          else
          {
            v13 &= v9;
            if ( v13 != v8 )
              goto LABEL_23;
          }
          v7 = v12;
LABEL_48:
          v12 = (__int64 *)*v7;
        }
        while ( *v7 );
      }
    }
  }
  else
  {
    v11 = *a1;
    *v2 = nullptr;
    if ( v11 )
      operator delete(v11);
    v2[1] = nullptr;
  }
}
// 161528: using guessed type void (__fastcall *off_161528[2])(std::out_of_range *__hidden this);
// 161540: using guessed type __int64 *`typeinfo for'std::length_error;
