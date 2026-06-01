/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9C0F8
// Address: 0x000000000009C0F8

//----- (000000000009C0F8) ----------------------------------------------------
__int64 __fastcall sub_9C0F8(__int64 a1, int a2, unsigned __int64 a3, double a4)
{
  __int64 v4; // x8
  __int64 v8; // x22
  unsigned __int64 v9; // x10
  bool v10; // cf
  _BOOL4 v11; // w10
  char v12; // w21
  __int64 v13; // x19
  bool v14; // w20
  unsigned int qerrno; // w21
  char *error_data; // x22
  char *error_string; // x0
  pthread_mutex_t v19; // [xsp+8h] [xbp-78h] BYREF
  __int64 v20; // [xsp+30h] [xbp-50h]
  __int64 v21; // [xsp+38h] [xbp-48h]
  __int64 v22; // [xsp+40h] [xbp-40h]
  __int64 v23; // [xsp+48h] [xbp-38h]
  int8x16x2_t v24; // 0:q0.32

  v23 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *(_QWORD *)(a1 + 336);
  if ( !v4 )
    return 0;
  v8 = a1 + 336;
  do
  {
    v9 = *(_QWORD *)(v4 + 32);
    v10 = v9 >= a3;
    v11 = v9 < a3;
    if ( v10 )
      v8 = v4;
    v4 = *(_QWORD *)(v4 + 8LL * v11);
  }
  while ( v4 );
  if ( v8 == a1 + 336 || *(_QWORD *)(v8 + 32) > a3 )
    return 0;
  v19.__size[32] = 2;
  v21 = 0;
  v22 = 0;
  v20 = 0;
  qsnprintf(&v19, 32, "__lc%a", a4);
  sub_9DBB4();
  sub_9DBC4(a1, a2);
  if ( *(_BYTE *)(v8 + 464) )
    goto LABEL_12;
  if ( (compile_idc_snippet((const char *)&v19, *(const char **)(v8 + 48), 0, 0, 1) & 1) != 0 )
  {
    *(_BYTE *)(v8 + 464) = 1;
LABEL_12:
    v12 = call_idc_func((unsigned __int8 *)&v19.__size[32], (__int64)&v19, nullptr, 0, nullptr, 0);
    goto LABEL_13;
  }
  v12 = 0;
LABEL_13:
  sub_9DBBC();
  if ( (v12 & 1) != 0 )
  {
    idcv_int64((__int64)&v19.__list.__next, v24);
    v13 = v8 + 40;
    v14 = v20 != 0;
  }
  else
  {
    qerrno = get_qerrno();
    error_data = (char *)get_error_data(nullptr);
    error_string = (char *)get_error_string(0);
    sub_8C81C(*(_QWORD *)(a1 + 400), a3, qerrno, error_data, error_string);
    v13 = 0;
    v14 = 0;
  }
  free_idcv((__int64 *)&v19.__list.__next);
  if ( v14 )
    return 0;
  return v13;
}
// 9C1EC: variable 'v24' is possibly undefined
