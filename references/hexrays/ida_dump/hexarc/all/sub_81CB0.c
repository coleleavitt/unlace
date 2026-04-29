__int64 __fastcall sub_81CB0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r12
  unsigned int v3; // ebp

  v2 = a1;
  v3 = sub_812D0(a1, (__int64)a2);
  if ( !(_BYTE)v3 )
    return v3;
  if ( *a2 >= a2[1] || (a1 = (__int64)a2, *(_DWORD *)(v2 + 16) = unpack_dd(a2) - 1, *a2 >= a2[1]) )
    sub_73F90(a1);
  *(_DWORD *)(v2 + 20) = unpack_dd(a2) - 1;
  return v3;
}
