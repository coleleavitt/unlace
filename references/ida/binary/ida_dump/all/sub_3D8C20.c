__int64 __fastcall sub_3D8C20(_QWORD *a1, int a2, __int64 a3, double a4, __int64 a5, __int64 a6)
{
  unsigned int v7; // eax
  __int64 *v8; // rcx

  if ( a2 != 116 )
    return 0;
  v7 = *(_DWORD *)a3;
  if ( *(_DWORD *)a3 > 0x2Fu )
  {
    v8 = *(__int64 **)(a3 + 8);
    *(_QWORD *)(a3 + 8) = v8 + 1;
  }
  else
  {
    v8 = (__int64 *)(*(_QWORD *)(a3 + 16) + v7);
    *(_DWORD *)a3 = v7 + 8;
  }
  sub_3D8900(a1, *v8, a4, a3, (__int64)v8, a6);
  return 0;
}
