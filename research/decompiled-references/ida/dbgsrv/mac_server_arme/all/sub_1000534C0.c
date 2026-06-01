/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000534C0
// Address: 0x00000001000534C0

//----- (00000001000534C0) ----------------------------------------------------
__int64 __fastcall sub_1000534C0(__int64 a1, __int64 *a2, char **a3, __int64 a4)
{
  __int64 v4; // x19
  __int64 v7; // x27
  unsigned int v8; // w23
  char *v9; // x24
  __int64 v10; // x22
  __int64 v11; // x8
  char *v12; // x26
  int v13; // w8
  __int64 v14; // x22
  signed int v15; // w1
  size_t v16; // x0
  size_t v17; // x24
  size_t v18; // x28
  size_t v19; // x25
  char *v20; // x8
  size_t v21; // x24
  void *v22; // x25
  unsigned __int64 v23; // x22
  unsigned __int64 v24; // x26
  char *v25; // x8
  int v26; // w24
  void *v27; // x0
  void *__ptr; // [xsp+10h] [xbp-90h] BYREF
  unsigned __int64 v31; // [xsp+18h] [xbp-88h]
  unsigned __int64 v32; // [xsp+20h] [xbp-80h]
  void *__src; // [xsp+28h] [xbp-78h] BYREF
  size_t __n; // [xsp+30h] [xbp-70h]
  size_t v35; // [xsp+38h] [xbp-68h]
  char v36; // [xsp+47h] [xbp-59h] BYREF

  v4 = a4;
  if ( (_DWORD)a4 )
  {
    __src = nullptr;
    __n = 0;
    v35 = 0;
    do
    {
      if ( (int)v4 < 1 )
      {
        v4 = 0;
        v27 = __src;
        if ( !__src )
          return v4;
        goto LABEL_45;
      }
      v7 = 0;
      v8 = 0;
      __n = 0;
      v9 = &byte_1000931E5;
      while ( v8 != (_DWORD)v4 )
      {
        v10 = *a2 - v7;
        if ( v10 >= 0 )
          v11 = *a2 - v7;
        else
          v11 = v7 - *a2;
        sub_1000530E4((_QWORD **)&__src, v11 + 1);
        sub_10002E2F0((_QWORD **)&__src, (unsigned __int64)v10 >> 63);
        v12 = *a3;
        v13 = (unsigned __int8)**a3;
        if ( **a3 )
        {
          v14 = 0;
          v15 = 0;
          do
          {
            if ( v13 != (unsigned __int8)v9[v14] )
              break;
            v14 = ++v15;
            v13 = (unsigned __int8)v12[v15];
          }
          while ( v12[v15] );
        }
        else
        {
          v14 = 0;
          v15 = 0;
        }
        v7 = *a2;
        sub_10002E2F0((_QWORD **)&__src, v15);
        v16 = strlen(&v12[v14]);
        v17 = v16 + 1;
        if ( v16 != -1 )
        {
          v18 = __n;
          if ( __CFADD__(__n, v17) )
            v19 = 0x7FFFFFFFFFFFFFFFLL;
          else
            v19 = __n + v17;
          if ( __n >= v19 )
          {
            if ( __n != v19 )
            {
              LOBYTE(__ptr) = 0;
              sub_10001B764((_QWORD **)&__src, v19, &__ptr);
            }
          }
          else
          {
            v20 = (char *)__src;
            if ( v35 < v19 )
            {
              v20 = (char *)qvector_reserve(&__src, __src, v19, 1u);
              __src = v20;
            }
            bzero(&v20[__n], v19 - __n);
            __n = v19;
          }
          memcpy((char *)__src + v18, &v12[v14], v17);
        }
        ++a2;
        ++a3;
        ++v8;
        v9 = v12;
        if ( __n > 0x100000 )
          goto LABEL_29;
      }
      v8 = v4;
LABEL_29:
      sub_100063440(50, (__int64 *)&__ptr);
      sub_10002E2F0((_QWORD **)&__ptr, v8);
      v21 = __n;
      if ( __n )
      {
        v22 = __src;
        v23 = v31;
        if ( __CFADD__(v31, __n) )
          v24 = 0x7FFFFFFFFFFFFFFFLL;
        else
          v24 = v31 + __n;
        if ( v31 >= v24 )
        {
          if ( v31 != v24 )
          {
            v36 = 0;
            sub_10001B764((_QWORD **)&__ptr, v24, &v36);
          }
        }
        else
        {
          v25 = (char *)__ptr;
          if ( v32 < v24 )
          {
            v25 = (char *)qvector_reserve(&__ptr, __ptr, v24, 1u);
            __ptr = v25;
          }
          bzero(&v25[v31], v24 - v31);
          v31 = v24;
        }
        memcpy((char *)__ptr + v23, v22, v21);
      }
      v26 = sub_10005E41C(a1 + 192, (__int64)&__ptr, 0xFFFFFFFFLL, nullptr);
      if ( __ptr )
      {
        v31 = 0;
        qfree(__ptr);
      }
      LODWORD(v4) = v4 - v8;
    }
    while ( v8 == v26 );
    v4 = 1;
    v27 = __src;
    if ( !__src )
      return v4;
LABEL_45:
    __n = 0;
    qfree(v27);
  }
  return v4;
}
// 1000931E5: using guessed type char byte_1000931E5;
