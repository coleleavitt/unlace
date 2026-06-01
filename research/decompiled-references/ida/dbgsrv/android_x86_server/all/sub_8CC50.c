/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8CC50
// Address: 0x0008CC50

//----- (0008CC50) --------------------------------------------------------
int __cdecl sub_8CC50(int a1, int a2, unsigned int a3)
{
  int v3; // eax
  int v4; // esi
  int v5; // esi
  bool v6; // di
  char *error_string; // eax
  char v9; // [esp+8h] [ebp-54h]
  unsigned int qerrno; // [esp+8h] [ebp-54h]
  int error_data; // [esp+Ch] [ebp-50h]
  char v12[32]; // [esp+10h] [ebp-4Ch] BYREF
  char v13[4]; // [esp+30h] [ebp-2Ch] BYREF
  __int64 v14; // [esp+34h] [ebp-28h]
  int v15; // [esp+3Ch] [ebp-20h]
  int v16; // [esp+40h] [ebp-1Ch]
  unsigned int v17; // [esp+48h] [ebp-14h]

  v17 = __readgsdword(0x14u);
  v3 = *(_DWORD *)(a1 + 176);
  if ( !v3 )
    return 0;
  v4 = a1 + 176;
  do
  {
    if ( *(_DWORD *)(v3 + 16) >= a3 )
      v4 = v3;
    v3 = *(_DWORD *)(v3 + 4 * (*(_DWORD *)(v3 + 16) < a3));
  }
  while ( v3 );
  if ( v4 == a1 + 176 || *(_DWORD *)(v4 + 16) > a3 )
    return 0;
  v13[0] = 2;
  v14 = 0;
  v16 = 0;
  v15 = 0;
  qsnprintf(v12, 32, "__lc%a", a3);
  sub_8EAC0();
  sub_8EAE0(a1, a2);
  if ( *(_BYTE *)(v4 + 268) )
    goto LABEL_11;
  if ( (unsigned __int8)compile_idc_snippet((int)v12, *(char **)(v4 + 24), 0, 0, 1) )
  {
    *(_BYTE *)(v4 + 268) = 1;
LABEL_11:
    v9 = call_idc_func(v13, v12, nullptr, 0, 0, 0);
    goto LABEL_12;
  }
  v9 = 0;
LABEL_12:
  sub_8EAD0();
  if ( v9 )
  {
    idcv_int64((int)v13);
    v5 = v4 + 20;
    v6 = v14 != 0;
  }
  else
  {
    qerrno = get_qerrno();
    error_data = get_error_data(0);
    error_string = (char *)get_error_string(0);
    v5 = 0;
    sub_7BE00(*(_DWORD *)(a1 + 208), a3, qerrno, error_data, error_string);
    v6 = 0;
  }
  free_idcv(v13);
  if ( v6 )
    return 0;
  return v5;
}
