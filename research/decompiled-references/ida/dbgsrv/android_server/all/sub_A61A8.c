/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A61A8
// Address: 0x00000000000A61A8

//----- (00000000000A61A8) ----------------------------------------------------
__int64 __fastcall sub_A61A8(__int64 a1, pthread_mutex_t *a2, void *a3, unsigned __int64 a4)
{
  unsigned int v6; // w21
  unsigned int v7; // w0
  size_t v8; // x22
  void *v9; // x23
  __int64 result; // x0
  void *v11; // x1
  unsigned int v12; // w21
  pthread_mutex_t *v13; // x0
  unsigned int v14; // w0
  _BYTE *v15; // x1
  char *v16; // x2
  _OWORD *v17; // x3
  size_t v18; // x21
  void *v19; // x22
  pthread_mutex_t *v20; // x0
  size_t v21; // [xsp+0h] [xbp-70h] BYREF
  void *ptr; // [xsp+8h] [xbp-68h] BYREF
  void *src; // [xsp+10h] [xbp-60h] BYREF
  unsigned __int64 v24; // [xsp+18h] [xbp-58h]
  pthread_mutex_t v25; // [xsp+20h] [xbp-50h] BYREF

  *(&v25.__align + 1) = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( !*(_QWORD *)(a1 + 40) )
    return 1;
  src = a3;
  v24 = a4;
  v6 = unpack_dd((unsigned __int64 *)&src, a4);
  v7 = unpack_dd((unsigned __int64 *)&src, v24);
  v8 = v7;
  if ( v7 )
  {
    v9 = qalloc((void *)v7);
    if ( !v9 )
      return 2;
  }
  else
  {
    v9 = nullptr;
  }
  v11 = src;
  result = 1;
  if ( (char *)src + v8 >= src && (unsigned __int64)src + v8 <= v24 )
  {
    src = (char *)src + v8;
    memcpy(v9, v11, v8);
    if ( v9 )
    {
      v21 = 0;
      ptr = nullptr;
      v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, void *, size_t, void **, size_t *))(a1 + 40))(
              a1,
              v6,
              v9,
              v8,
              &ptr,
              &v21);
      qfree(v9);
      v13 = pack_dd(&v25, (unsigned __int64)&v25.__align + 5, v12);
      v14 = (unsigned int)sub_545E8(a2, &v25, (char *)v13 - (char *)&v25);
      v18 = v21;
      if ( HIDWORD(v21) )
      {
        if ( !under_debugger )
          v14 = (unsigned int)interr(5);
        __break(1u);
        return sub_A6344(v14, v15, v16, v17);
      }
      else
      {
        v19 = ptr;
        v20 = pack_dd(&v25, (unsigned __int64)&v25.__align + 5, (unsigned int)v21);
        sub_545E8(a2, &v25, (char *)v20 - (char *)&v25);
        sub_545E8(a2, v19, v18);
        qfree(ptr);
        return 0;
      }
    }
    return 1;
  }
  return result;
}
// A6341: variable 'v15' is possibly undefined
// A6341: variable 'v16' is possibly undefined
// A6341: variable 'v17' is possibly undefined
// 168DF0: using guessed type char under_debugger;
