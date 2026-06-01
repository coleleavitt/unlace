/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_56084
// Address: 0x00056084

//----- (00056084) --------------------------------------------------------
int __fastcall sub_56084(void **a1, unsigned int a2)
{
  int *v2; // r5
  unsigned int v3; // r7
  void *v4; // r1
  void *v5; // r0
  int result; // r0
  int v7; // r1
  unsigned int v8; // r2
  _DWORD *v9; // r3
  unsigned int v10; // r2
  void *v11; // r0
  int *v12; // r6
  unsigned int v13; // r4
  unsigned int v14; // r0
  int v15; // r1
  int v16; // r0
  _DWORD *v17; // r4
  unsigned int v18; // r2
  _DWORD *v19; // r5
  unsigned int v20; // r0
  unsigned int v21; // r1
  int v22; // r0
  unsigned __int8 *v23; // r1
  int v24; // r0
  unsigned __int8 *v25; // r2
  std::logic_error *exception; // r4
  int *v27; // [sp+8h] [bp-30h]
  int v28; // [sp+Ch] [bp-2Ch]
  unsigned int v29; // [sp+10h] [bp-28h]
  _DWORD *v30; // [sp+14h] [bp-24h]
  int v31; // [sp+18h] [bp-20h]
  unsigned int v32; // [sp+1Ch] [bp-1Ch]
  unsigned int v33; // [sp+20h] [bp-18h]
  int v34; // [sp+24h] [bp-14h]
  int v35; // [sp+30h] [bp-8h]
  size_t n; // [sp+34h] [bp-4h]

  v2 = (int *)a1;
  if ( a2 )
  {
    v3 = a2;
    if ( a2 >> 30 )
    {
      exception = (std::logic_error *)_cxa_allocate_exception(8u);
      std::logic_error::logic_error(exception, "allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
      *(_DWORD *)exception = &off_DBAE4;
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::length_error,
        (void (*)(void *))std::length_error::~length_error);
    }
    v4 = operator new(4 * a2);
    v5 = (void *)*v2;
    *v2 = (int)v4;
    if ( v5 )
      operator delete(v5);
    v2[1] = v3;
    result = 0;
    v7 = 0;
    v8 = v3;
    do
    {
      *(_DWORD *)(*v2 + v7) = 0;
      v7 += 4;
      --v8;
    }
    while ( v8 );
    v9 = (_DWORD *)v2[2];
    if ( v9 )
    {
      v10 = v9[1];
      v34 = (v3 - 1) & v3;
      v28 = v3 - 1;
      if ( v34 )
      {
        if ( v10 >= v3 )
          v10 %= v3;
      }
      else
      {
        v10 &= v3 - 1;
      }
      result = *v2;
      *(_DWORD *)(*v2 + 4 * v10) = v2 + 2;
      v12 = (int *)*v9;
      if ( *v9 )
      {
        v27 = v2;
        v32 = v3;
        do
        {
          v13 = v12[1];
          result = v34;
          if ( v34 )
          {
            if ( v13 >= v3 )
            {
              v14 = v12[1];
              v15 = v14 % v3;
              result = v14 / v3;
              v3 = v32;
              v13 = v15;
            }
            if ( v13 != v10 )
            {
LABEL_24:
              v33 = v10;
              result = *v2 + 4 * v13;
              if ( *(_DWORD *)result )
              {
                v29 = v13;
                v30 = v9;
                v16 = *v12;
                v17 = v12;
                if ( *v12 )
                {
                  v18 = *((unsigned __int8 *)v12 + 8);
                  v35 = v18 & 1;
                  n = v18 >> 1;
                  if ( (v18 & 1) != 0 )
                    n = v12[3];
                  v31 = -(v18 >> 1);
                  v19 = v12;
                  do
                  {
                    v17 = v19;
                    v19 = (_DWORD *)v16;
                    v20 = *(unsigned __int8 *)(v16 + 8);
                    v21 = v20 >> 1;
                    v22 = v20 & 1;
                    if ( v22 )
                      v21 = v19[3];
                    if ( n != v21 )
                      break;
                    v23 = (unsigned __int8 *)v19 + 9;
                    if ( v22 )
                      v23 = (unsigned __int8 *)v19[4];
                    if ( v35 )
                    {
                      if ( n && memcmp((const void *)v12[4], v23, n) )
                        break;
                    }
                    else
                    {
                      v24 = v31;
                      v25 = (unsigned __int8 *)v12 + 9;
                      if ( n )
                      {
                        while ( *v25 == *v23 )
                        {
                          ++v24;
                          ++v23;
                          ++v25;
                          if ( !v24 )
                            goto LABEL_41;
                        }
                        break;
                      }
                    }
LABEL_41:
                    v16 = *v19;
                    v17 = v19;
                  }
                  while ( *v19 );
                }
                v9 = v30;
                *v30 = *v17;
                v2 = v27;
                *v17 = **(_DWORD **)(*v27 + 4 * v29);
                result = *(_DWORD *)(*v27 + 4 * v29);
                *(_DWORD *)result = v12;
                v3 = v32;
                v10 = v33;
              }
              else
              {
                *(_DWORD *)result = v9;
                v9 = v12;
                v10 = v13;
              }
              goto LABEL_44;
            }
          }
          else
          {
            result = v28;
            v13 &= v28;
            if ( v13 != v10 )
              goto LABEL_24;
          }
          v9 = v12;
LABEL_44:
          v12 = (int *)*v9;
        }
        while ( *v9 );
      }
    }
  }
  else
  {
    v11 = *a1;
    *v2 = 0;
    if ( v11 )
      operator delete(v11);
    v2[1] = 0;
    return 0;
  }
  return result;
}
// DBAE4: using guessed type _UNKNOWN *off_DBAE4;
// DBAF0: using guessed type _UNKNOWN *`typeinfo for'std::length_error;
