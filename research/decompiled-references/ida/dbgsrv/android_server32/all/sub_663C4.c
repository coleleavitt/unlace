/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_663C4
// Address: 0x000663C4

//----- (000663C4) --------------------------------------------------------
_DWORD *__fastcall sub_663C4(int a1, int a2, unsigned int a3)
{
  _DWORD *v5; // r7
  int v6; // r0
  _DWORD *v7; // r6
  unsigned int v8; // r2
  _DWORD *v9; // r3
  _DWORD *v10; // r7
  const char *v11; // r1
  int v12; // r6
  _BOOL4 v13; // r4
  char *error_data; // r6
  char *s; // r0
  _BYTE *v18; // [sp+10h] [bp-44h]
  unsigned int qerrno; // [sp+10h] [bp-44h]
  char v20[32]; // [sp+18h] [bp-3Ch] BYREF
  unsigned __int8 v21[8]; // [sp+38h] [bp-1Ch] BYREF
  __int64 v22; // [sp+40h] [bp-14h]
  int v23; // [sp+48h] [bp-Ch]
  int v24; // [sp+4Ch] [bp-8h]

  v5 = *(_DWORD **)(a1 + 176);
  v6 = a1 + 176;
  if ( !v5 )
    return nullptr;
  v7 = (_DWORD *)v6;
  do
  {
    v8 = v5[4];
    if ( v8 >= a3 )
      v7 = v5;
    v9 = v5 + 1;
    if ( v8 >= a3 )
      v9 = v5;
    v5 = (_DWORD *)*v9;
  }
  while ( *v9 );
  if ( v7 == (_DWORD *)v6 || v7[4] > a3 )
    return nullptr;
  v21[0] = 2;
  v24 = 0;
  v23 = 0;
  v22 = 0;
  qsnprintf(v20, 32, "__lc%a");
  v10 = v7 + 5;
  sub_6760C();
  sub_67614(a1, a2);
  if ( !*((_BYTE *)v7 + 268) )
  {
    v18 = v7 + 67;
    v11 = (const char *)v7[6];
    v12 = 0;
    if ( !compile_idc_snippet(v20, v11, 0, 0, 1) )
      goto LABEL_14;
    *v18 = 1;
  }
  v12 = call_idc_func((int)v21, v20, nullptr, 0, 0, 0);
LABEL_14:
  sub_67610();
  if ( v12 )
  {
    idcv_int64((int)v21);
    v13 = v22 != 0;
  }
  else
  {
    qerrno = get_qerrno();
    error_data = (char *)get_error_data(0);
    s = (char *)get_error_string(0);
    v10 = nullptr;
    sub_5A9E0(*(_DWORD **)(a1 + 208), a3, qerrno, error_data, s);
    v13 = 0;
  }
  free_idcv(v21);
  if ( v13 )
    return nullptr;
  return v10;
}
