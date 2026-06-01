void __fastcall sub_12E9C80(__int64 a1, _DWORD *a2)
{
  _DWORD *v2; // rbx

  if ( a2 )
    ++*a2;
  v2 = *(_DWORD **)(a1 + 72);
  *(_QWORD *)(a1 + 72) = a2;
  if ( v2 )
  {
    if ( (*v2)-- == 1 )
    {
      sub_101EB00((__int64)v2);
      operator delete(v2, 0x300u);
    }
  }
}
