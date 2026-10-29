void __fastcall sub_169D790(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  if ( a2 )
  {
    sub_15AB8B0(a4, *a2, (__int64)(a2 + 1));
  }
  else
  {
    if ( !*(_DWORD *)a4 )
      *(_DWORD *)a4 = a3;
    *(_DWORD *)(a4 + 4) = HIDWORD(a3);
    *(_QWORD *)(a4 + 8) = 0;
    *(_DWORD *)(a4 + 24) = 0;
  }
}
