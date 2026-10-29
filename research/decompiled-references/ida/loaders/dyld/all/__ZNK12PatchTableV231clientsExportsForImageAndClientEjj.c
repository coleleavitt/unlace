char *__fastcall PatchTableV2::clientsExportsForImageAndClient(PatchTableV2 *this, unsigned int a2, int a3)
{
  _QWORD *v3; // x9
  __int64 v4; // x11
  unsigned int *v5; // x8
  __int64 v6; // x10
  __int64 v7; // x13
  char *v8; // x8
  __int64 v9; // x10
  __int64 i; // x9

  v3 = *(_QWORD **)this;
  if ( *(_QWORD *)(*(_QWORD *)this + 16LL) <= (unsigned __int64)a2 )
    return nullptr;
  v4 = *((_QWORD *)this + 1);
  v5 = (unsigned int *)((char *)&v3[2 * a2] + v3[1] - v4);
  v6 = v5[1];
  if ( !(_DWORD)v6 )
    return nullptr;
  v7 = *v5;
  v8 = (char *)v3 + v3[7] - v4;
  v9 = 12 * v6;
  for ( i = (__int64)v3 + v3[5] + 12 * v7 - v4 + 8; *(_DWORD *)(i - 8) != a3; i += 12 )
  {
    v9 -= 12;
    if ( !v9 )
      return nullptr;
  }
  return &v8[12 * *(unsigned int *)(i - 4)];
}
