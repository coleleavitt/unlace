__int64 __fastcall sub_13F3D60(unsigned int **a1, __int64 a2)
{
  int v2; // esi
  unsigned int *v4; // rdi
  unsigned int v5; // esi

  v2 = *(_DWORD *)(a2 + 32);
  if ( !v2 )
    return 0;
  v4 = *a1;
  v5 = v2 & 0x7FFFFFFF;
  if ( v5 < v4[119] || v5 >= v4[120] )
    return sub_101D590((__int64)v4, v5);
  else
    return v4[118];
}
