/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_68B28
// Address: 0x0000000000068B28

//----- (0000000000068B28) ----------------------------------------------------
__int64 __fastcall sub_68B28(__int64 *a1, unsigned __int8 *a2, char *a3)
{
  int v5; // w8
  unsigned __int8 *idc_gvar; // x0
  unsigned int v7; // w19
  void *v9; // x0
  _QWORD *v10; // x20
  size_t v11; // x19
  void *v12; // x0
  void *src; // [xsp+0h] [xbp-40h] BYREF
  size_t v14; // [xsp+8h] [xbp-38h]
  __int64 v15; // [xsp+10h] [xbp-30h]
  __int64 v16; // [xsp+18h] [xbp-28h]

  v16 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( !a2 )
    return (unsigned int)get_idcv_attr((__int64)a1, (__int64)a2, a3, 0) == 0;
  v5 = *a2;
  if ( v5 != 7 )
    goto LABEL_6;
  if ( !*((_QWORD *)a2 + 2) )
  {
    idc_gvar = (unsigned __int8 *)find_idc_gvar(&byte_F154B);
    if ( idc_gvar )
      goto LABEL_5;
LABEL_15:
    set_qerrno(0x5FCu);
    return 0;
  }
  idc_gvar = (unsigned __int8 *)find_idc_gvar(*((const char **)a2 + 1));
  if ( !idc_gvar )
    goto LABEL_15;
LABEL_5:
  v5 = *idc_gvar;
  a2 = idc_gvar;
LABEL_6:
  if ( v5 != 5 || a3 && *a3 )
    return (unsigned int)get_idcv_attr((__int64)a1, (__int64)a2, a3, 0) == 0;
  src = nullptr;
  v14 = 0;
  v15 = 0;
  if ( (unsigned int)get_idcv_class_name((__int64)&src, (__int64)a2) )
  {
    v7 = 0;
    v9 = src;
    if ( !src )
      return v7;
    goto LABEL_19;
  }
  free_idcv(a1);
  *(_BYTE *)a1 = 7;
  a1[1] = 0;
  v10 = a1 + 1;
  a1[2] = 0;
  a1[3] = 0;
  v11 = v14;
  if ( v14 )
  {
    v12 = qalloc_or_throw(v14);
    *v10 = v12;
    v10[2] = v11;
    memcpy(v12, src, v11);
    v10[1] = v11;
  }
  v7 = 1;
  v9 = src;
  if ( src )
  {
LABEL_19:
    v14 = 0;
    qfree(v9);
    src = nullptr;
    v15 = 0;
  }
  return v7;
}
// F154B: using guessed type char byte_F154B;
