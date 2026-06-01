/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100063550
// Address: 0x0000000100063550

//----- (0000000100063550) ----------------------------------------------------
__int64 __fastcall sub_100063550(__int64 a1, int a2, unsigned __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // rbx
  char v6; // r12
  __int64 v7; // rbx
  bool v8; // r14
  unsigned int qerrno; // ebx
  const char *error_data; // r12
  const char *error_string; // rax
  char v13[40]; // [rsp+0h] [rbp-70h] BYREF
  unsigned __int8 v14[8]; // [rsp+28h] [rbp-48h] BYREF
  __int128 v15; // [rsp+30h] [rbp-40h]
  __int64 v16; // [rsp+40h] [rbp-30h]

  v3 = *(_QWORD *)(a1 + 336);
  if ( !v3 )
    return 0;
  v5 = a1 + 336;
  do
  {
    if ( *(_QWORD *)(v3 + 32) >= a3 )
      v5 = v3;
    v3 = *(_QWORD *)(v3 + 8LL * (*(_QWORD *)(v3 + 32) < a3));
  }
  while ( v3 );
  if ( v5 == a1 + 336 || *(_QWORD *)(v5 + 32) > a3 )
    return 0;
  v14[0] = 2;
  v15 = 0;
  v16 = 0;
  qsnprintf(v13, 32, "__lc%a", 0.0);
  sub_100064B10();
  sub_100064B50(a1, a2);
  if ( *(_BYTE *)(v5 + 464) )
    goto LABEL_11;
  if ( (unsigned __int8)compile_idc_snippet(v13, *(const char **)(v5 + 48), 0, 0, 1) )
  {
    *(_BYTE *)(v5 + 464) = 1;
LABEL_11:
    v6 = call_idc_func(v14, v13, nullptr, 0, nullptr, 0);
    goto LABEL_13;
  }
  v6 = 0;
LABEL_13:
  sub_100064B30();
  if ( v6 )
  {
    idcv_int64(v14);
    v7 = v5 + 40;
    v8 = (_QWORD)v15 != 0;
  }
  else
  {
    qerrno = get_qerrno();
    error_data = (const char *)get_error_data(0);
    error_string = (const char *)get_error_string(0);
    sub_1000540A0(*(_QWORD *)(a1 + 400), a3, qerrno, error_data, error_string);
    v7 = 0;
    v8 = 0;
  }
  free_idcv(v14);
  if ( v8 )
    return 0;
  return v7;
}
