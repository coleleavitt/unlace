__int64 __fastcall sub_D8FC50(_QWORD *a1)
{
  __int64 v1; // r12
  char v2; // bl
  __int64 v3; // r12
  char v4; // r13
  __int64 v5; // rdi

  v1 = *a1;
  v2 = *(_BYTE *)sub_DFDA20(*a1, 8);
  sub_DFDA50(v1, 8);
  v3 = *a1;
  v4 = *(_BYTE *)sub_DFDA20(*a1, 8);
  sub_DFDA50(v3, 8);
  v5 = *a1;
  if ( !v4 )
    v2 = 0;
  *(_BYTE *)sub_DFD980(v5, 8) = v2;
  return 1;
}

