/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002DC24
// Address: 0x000000010002DC24

//----- (000000010002DC24) ----------------------------------------------------
bool __fastcall sub_10002DC24(__int64 a1, unsigned __int8 *a2, char *a3)
{
  int v4; // w8
  char *v5; // x20
  unsigned __int8 *idc_gvar; // x0
  _BOOL8 v7; // x20
  int idcv_class_name; // w0
  size_t v10; // x21
  void *v11; // x0
  void *__src; // [xsp+0h] [xbp-40h] BYREF
  size_t v13; // [xsp+8h] [xbp-38h]
  __int64 v14; // [xsp+10h] [xbp-30h]

  if ( !a2 )
    return (unsigned int)get_idcv_attr((unsigned __int8 *)a1, (__int64)a2, a3, 0) == 0;
  v4 = *a2;
  if ( v4 != 7 )
    goto LABEL_6;
  if ( !*((_QWORD *)a2 + 2) )
  {
    v5 = a3;
    idc_gvar = (unsigned __int8 *)find_idc_gvar(&byte_10007AE40);
    if ( idc_gvar )
      goto LABEL_5;
LABEL_17:
    set_qerrno();
    return 0;
  }
  v5 = a3;
  idc_gvar = (unsigned __int8 *)find_idc_gvar(*((const char **)a2 + 1));
  if ( !idc_gvar )
    goto LABEL_17;
LABEL_5:
  a2 = idc_gvar;
  v4 = *idc_gvar;
  a3 = v5;
LABEL_6:
  if ( v4 != 5 || a3 && *a3 )
    return (unsigned int)get_idcv_attr((unsigned __int8 *)a1, (__int64)a2, a3, 0) == 0;
  __src = nullptr;
  v13 = 0;
  v14 = 0;
  idcv_class_name = get_idcv_class_name(&__src, (__int64)a2);
  v7 = idcv_class_name == 0;
  if ( !idcv_class_name )
  {
    free_idcv((unsigned __int8 *)a1);
    *(_BYTE *)a1 = 7;
    *(_QWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 8) = 0;
    v10 = v13;
    if ( v13 )
    {
      v11 = qalloc_or_throw(v13);
      *(_QWORD *)(a1 + 8) = v11;
      *(_QWORD *)(a1 + 24) = v10;
      memcpy(v11, __src, v10);
      *(_QWORD *)(a1 + 16) = v10;
    }
  }
  if ( __src )
  {
    v13 = 0;
    qfree(__src);
  }
  return v7;
}
// 10007AE40: using guessed type char byte_10007AE40;
