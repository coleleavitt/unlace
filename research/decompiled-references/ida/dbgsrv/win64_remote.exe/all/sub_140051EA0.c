/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140051EA0
// Address: 0x0000000140051EA0

//----- (0000000140051EA0) ----------------------------------------------------
char __fastcall sub_140051EA0(__int64 *a1, int a2, __int64 a3, int a4)
{
  int v4; // edi
  _DWORD *v5; // rax
  int v6; // r10d
  _QWORD *i; // r11
  int v9; // r8d
  __int64 v10; // rax

  v4 = 0;
  v5 = a1 + 91;
  v6 = 0;
  for ( i = a1 + 87; ; ++i )
  {
    if ( *i == a3 && *v5 == a2 )
      return 0;
    if ( *i == -1 )
      break;
    ++v6;
    ++v5;
    if ( v6 >= 4 )
      return 0;
  }
  if ( v6 == -1 )
    return 0;
  a1[v6 + 87] = a3;
  v9 = 0;
  if ( a2 != 8 )
    v9 = a2;
  *((_DWORD *)a1 + v6 + 182) = a2;
  switch ( a4 )
  {
    case 2:
      v4 = 1;
      break;
    case 4:
      v4 = 3;
      break;
    case 8:
      v4 = 2;
      break;
  }
  v10 = *a1;
  *((_DWORD *)a1 + 187) |= (v4 << (4 * v6 + 18)) | (v9 << (4 * v6 + 16)) | (1 << (2 * v6));
  return (*(__int64 (__fastcall **)(__int64 *))(v10 + 608))(a1);
}
