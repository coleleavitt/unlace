__int64 __fastcall sub_3CDF80(_QWORD *a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v6; // eax
  __int64 *v7; // rcx

  if ( a2 != 116 )
    return 0;
  v6 = *(_DWORD *)a3;
  if ( *(_DWORD *)a3 > 0x2Fu )
  {
    v7 = *(__int64 **)(a3 + 8);
    *(_QWORD *)(a3 + 8) = v7 + 1;
  }
  else
  {
    v7 = (__int64 *)(*(_QWORD *)(a3 + 16) + v6);
    *(_DWORD *)a3 = v6 + 8;
  }
  sub_3CDC60(a1, *v7, a3, (__int64)v7, a5);
  return 0;
}
