__int64 __fastcall sub_3EB380(_DWORD *a1, __int64 a2)
{
  bool v2; // zf
  int v3; // edx
  __int64 v4; // rax

  v2 = a1[21] == 8;
  *(_DWORD *)a2 = a1[102];
  *(_DWORD *)(a2 + 4) = a1[101];
  if ( v2 )
  {
    v3 = a1[140];
    v4 = 16;
  }
  else
  {
    v3 = a1[97];
    v4 = 4;
  }
  *(_QWORD *)(a2 + 16) = v4;
  *(_DWORD *)(a2 + 8) = v3;
  *(_QWORD *)(a2 + 24) = 4;
  return 1;
}
