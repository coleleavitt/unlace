/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100019210
// Address: 0x0000000100019210

//----- (0000000100019210) ----------------------------------------------------
bool __fastcall sub_100019210(
        __int64 a1,
        int a2,
        __int64 a3,
        void (__fastcall ***a4)(_QWORD, __int64, __int64, _BYTE *, void **))
{
  int v7; // w8
  __int64 v8; // x19
  void *v9; // x2
  __int64 v10; // x22
  __int64 *v11; // x23
  __int64 *v12; // x26
  int v15; // w8
  __int64 v16; // x24
  __int64 v17; // x25
  _QWORD *v18; // x0
  _QWORD *generic_linput; // x25
  void *v20; // [xsp+0h] [xbp-490h] BYREF
  __int64 v21; // [xsp+8h] [xbp-488h]
  __int64 v22; // [xsp+10h] [xbp-480h]
  __int64 v23; // [xsp+18h] [xbp-478h] BYREF
  void *v24; // [xsp+20h] [xbp-470h] BYREF
  __int64 v25; // [xsp+28h] [xbp-468h]
  __int64 v26; // [xsp+30h] [xbp-460h]
  _BYTE v27[1024]; // [xsp+38h] [xbp-458h] BYREF

  v7 = a2 * *(_DWORD *)(a1 + 20);
  v8 = (unsigned int)(3 * v7);
  v24 = nullptr;
  v25 = 0;
  v26 = 0;
  if ( 3 * v7 )
  {
    v24 = qvector_reserve(&v24, nullptr, (unsigned int)(3 * v7), 1u);
    bzero((char *)v24 + v25, v8 - v25);
    v25 = v8;
    v9 = v24;
  }
  else
  {
    v9 = nullptr;
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, void *, __int64, _QWORD))(**(_QWORD **)(a1 + 8) + 288LL))(
          *(_QWORD *)(a1 + 8),
          a3,
          v9,
          v8,
          0);
  v11 = (__int64 *)v24;
  v12 = (__int64 *)((char *)v24 + v8);
  if ( v10 != v8 || v24 >= v12 )
  {
    if ( !v24 )
      return v10 == v8;
LABEL_10:
    v25 = 0;
    qfree(v11);
    return v10 == v8;
  }
  v15 = *(_DWORD *)(a1 + 20);
  do
  {
    if ( v15 == 8 )
    {
      v16 = *v11;
      v17 = v11[1];
    }
    else
    {
      v16 = *(unsigned int *)v11;
      v17 = *(unsigned int *)((char *)v11 + v15);
    }
    bzero(v27, 0x400u);
    (*(void (__fastcall **)(_QWORD, __int64, _BYTE *, __int64, _QWORD))(**(_QWORD **)(a1 + 8) + 288LL))(
      *(_QWORD *)(a1 + 8),
      v17,
      v27,
      1024,
      0);
    v27[1023] = 0;
    v22 = 0;
    v23 = 0;
    v20 = nullptr;
    v21 = 0;
    v18 = operator new(0x28u);
    v18[3] = v16;
    v18[4] = a1;
    *v18 = off_10009D838;
    v18[1] = 0xFFFFFFFFLL;
    *((_DWORD *)v18 + 4) = 0;
    generic_linput = create_generic_linput(v18);
    if ( generic_linput )
    {
      sub_100018334(a1, nullptr, &v23, (__int64)&v20, (__int64)generic_linput, v16);
      close_linput(generic_linput);
    }
    (**a4)(a4, v16, v23, v27, &v20);
    if ( v20 )
    {
      v21 = 0;
      qfree(v20);
    }
    v15 = *(_DWORD *)(a1 + 20);
    v11 = (__int64 *)((char *)v11 + 3 * v15);
  }
  while ( v11 < v12 );
  v11 = (__int64 *)v24;
  if ( v24 )
    goto LABEL_10;
  return v10 == v8;
}
// 10009D838: using guessed type __int64 (__fastcall *off_10009D838[2])();
