/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: set_idcv_attr
// Address: 0x0000000100032F5C

//----- (0000000100032F5C) ----------------------------------------------------
__int64 __fastcall set_idcv_attr(__int64 a1, char *__s, unsigned __int8 *a3, char a4)
{
  char v7; // w24
  size_t v8; // x22
  void *v9; // x0
  unsigned __int8 *idc_gvar; // x0
  __int64 qerrno; // x19
  __int64 **v13; // x20
  int v14; // w8
  __int64 v15; // x0
  __int64 v16; // x2
  __int64 *v17; // x0
  void *v18; // x0
  __int64 **v19; // x0
  __int64 *v20; // x0
  void *v21; // [xsp+8h] [xbp-108h] BYREF
  size_t v22; // [xsp+10h] [xbp-100h]
  __int64 v23; // [xsp+18h] [xbp-F8h]
  void **v24; // [xsp+28h] [xbp-E8h] BYREF
  __int64 v25[19]; // [xsp+30h] [xbp-E0h] BYREF

  if ( !a1 )
  {
    idc_gvar = (unsigned __int8 *)find_idc_gvar(__s);
    if ( idc_gvar )
    {
      copy_idcv(idc_gvar, a3);
      return 0;
    }
    set_error_string(0);
    return set_qerrno();
  }
  if ( *(_BYTE *)a1 != 5 )
    return set_qerrno();
  v21 = nullptr;
  v22 = 0;
  v23 = 0;
  if ( __s )
  {
    v7 = a4;
    v8 = strlen(__s);
    if ( v8 == -1 )
    {
      v9 = nullptr;
    }
    else
    {
      v9 = qvector_reserve(&v21, nullptr, v8 + 1, 1u);
      v21 = v9;
    }
    v22 = v8 + 1;
    memmove(v9, __s, v8);
    *((_BYTE *)v21 + v8) = 0;
    a4 = v7;
  }
  if ( (a4 & 1) != 0 )
  {
    sub_1000376D4((__int64)v25, 0, 1);
    v13 = *(__int64 ***)(a1 + 8);
    v14 = *((_DWORD *)v13 + 7);
    if ( v14 )
    {
      while ( 1 )
      {
        v15 = sub_10002DDA8(v25[1], v14);
        v16 = *(unsigned int *)(v15 + 60);
        if ( (_DWORD)v16 != -1 )
          break;
        v14 = *(_DWORD *)(v15 + 24);
        if ( !v14 )
          goto LABEL_17;
      }
      if ( (sub_100036294(v25, v13, v16, (__int64)&v21, a3, 0) & 1) == 0 )
      {
        qerrno = get_qerrno();
LABEL_19:
        sub_1000378A8((__int64)v25);
        v18 = v21;
        if ( !v21 )
          return qerrno;
        goto LABEL_22;
      }
    }
    else
    {
LABEL_17:
      v24 = &v21;
      v17 = sub_10003D200(v13, (__int64)&v21, (__int64)&byte_1000763D7, (__int64 *)&v24);
      copy_idcv((unsigned __int8 *)v17 + 56, a3);
    }
    qerrno = 0;
    goto LABEL_19;
  }
  v19 = *(__int64 ***)(a1 + 8);
  v25[0] = (__int64)&v21;
  v20 = sub_10003D200(v19, (__int64)&v21, (__int64)&byte_1000763D7, v25);
  copy_idcv((unsigned __int8 *)v20 + 56, a3);
  qerrno = 0;
  v18 = v21;
  if ( v21 )
  {
LABEL_22:
    v22 = 0;
    qfree(v18);
  }
  return qerrno;
}
// 1000763D7: using guessed type char byte_1000763D7;
