__int64 __fastcall sub_3DCFA0(double a1, double a2, double a3, __m128 a4, __int64 a5, __int64 a6, _QWORD *a7)
{
  char *v7; // rax
  int v8; // r8d
  int v9; // ecx

  v7 = (char *)&unk_41EB80;
  v8 = *(_DWORD *)(a6 + 56);
  while ( 1 )
  {
    v9 = *(_DWORD *)v7;
    if ( *(_DWORD *)v7 > v8 )
      break;
    v7 += 4;
    if ( v7 == "$ mbui.view_id" )
      return 0;
  }
  if ( v8 == v9 )
    return 0;
  sub_3DBD00(a6, a7, 5u, v9, a1, a2, a3, a4);
  return 0;
}
