/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: set_idcv_attr
// Address: 0x00000000000703F0

//----- (00000000000703F0) ----------------------------------------------------
__int64 __fastcall set_idcv_attr(__int64 a1, char *s, unsigned __int8 *a3, char a4)
{
  _DWORD *v8; // x20
  int v9; // w8
  __int64 v10; // x0
  unsigned int v11; // w2
  __int64 *v12; // x0
  unsigned int qerrno; // w19
  void *v14; // x0
  unsigned __int8 *idc_gvar; // x0
  unsigned int v16; // w0
  __int64 v17; // x0
  __int64 *v18; // x0
  void *ptr[3]; // [xsp+8h] [xbp-108h] BYREF
  void **v21; // [xsp+28h] [xbp-E8h] BYREF
  __int64 v22[20]; // [xsp+30h] [xbp-E0h] BYREF

  v22[19] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a1 )
  {
    if ( *(_BYTE *)a1 == 5 )
    {
      sub_39140(ptr, s);
      if ( (a4 & 1) != 0 )
      {
        sub_7461C(v22, 0, 1);
        v8 = *(_DWORD **)(a1 + 8);
        v9 = v8[7];
        if ( v9 )
        {
          while ( 1 )
          {
            v10 = sub_6A248(v22[1], v9);
            v11 = *(_DWORD *)(v10 + 60);
            if ( v11 != -1 )
              break;
            v9 = *(_DWORD *)(v10 + 24);
            if ( !v9 )
              goto LABEL_7;
          }
          if ( (sub_732B0((__int64)v22, v8, v11, (__int64)ptr, a3, 0) & 1) == 0 )
          {
            qerrno = get_qerrno();
LABEL_9:
            sub_74848((__int64)v22);
            v14 = ptr[0];
            if ( !ptr[0] )
              return qerrno;
            goto LABEL_15;
          }
        }
        else
        {
LABEL_7:
          v21 = ptr;
          v12 = sub_7C2AC((__int64)v8, (__int64)ptr, (__int64)&byte_104627, (__int64 *)&v21);
          copy_idcv((unsigned __int8 *)v12 + 56, a3);
        }
        qerrno = 0;
        goto LABEL_9;
      }
      v17 = *(_QWORD *)(a1 + 8);
      v22[0] = (__int64)ptr;
      v18 = sub_7C2AC(v17, (__int64)ptr, (__int64)&byte_104627, v22);
      copy_idcv((unsigned __int8 *)v18 + 56, a3);
      qerrno = 0;
      v14 = ptr[0];
      if ( ptr[0] )
      {
LABEL_15:
        ptr[1] = nullptr;
        qfree(v14);
        ptr[0] = nullptr;
        ptr[2] = nullptr;
      }
      return qerrno;
    }
    v16 = 1532;
  }
  else
  {
    idc_gvar = (unsigned __int8 *)find_idc_gvar(s);
    if ( idc_gvar )
    {
      copy_idcv(idc_gvar, a3);
      return 0;
    }
    set_error_string(nullptr, s);
    v16 = 1538;
  }
  return set_qerrno(v16);
}
// 7461C: using guessed type __int64 __fastcall sub_7461C(_QWORD, _QWORD, _QWORD);
// 104627: using guessed type char byte_104627;
