bool __fastcall PatchTableV2::imageHasClient(PatchTableV2 *this, unsigned int a2, int a3)
{
  __int64 v3; // x8
  __int64 v4; // x10
  unsigned int *v5; // x11
  __int64 v6; // x9
  int *v7; // x8
  __int64 v8; // x9
  int v9; // t1
  _BOOL8 result; // x0
  bool v11; // zf

  v3 = *(_QWORD *)this;
  if ( *(_QWORD *)(*(_QWORD *)this + 16LL) <= (unsigned __int64)a2 )
    return 0;
  v4 = *((_QWORD *)this + 1);
  v5 = (unsigned int *)(v3 + *(_QWORD *)(v3 + 8) - v4 + 16LL * a2);
  v6 = v5[1];
  if ( !(_DWORD)v6 )
    return 0;
  v7 = (int *)(v3 + *(_QWORD *)(v3 + 40) - v4 + 12LL * *v5);
  v8 = 12 * v6 - 12;
  do
  {
    v9 = *v7;
    v7 += 3;
    result = v9 == a3;
    v11 = v9 == a3 || v8 == 0;
    v8 -= 12;
  }
  while ( !v11 );
  return result;
}
