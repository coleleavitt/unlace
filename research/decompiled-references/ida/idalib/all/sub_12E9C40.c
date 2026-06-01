void __fastcall sub_12E9C40(__int64 a1, _DWORD *a2)
{
  _DWORD *v2; // rbx

  if ( a2 )
    ++*a2;
  v2 = *(_DWORD **)(a1 + 64);
  *(_QWORD *)(a1 + 64) = a2;
  if ( v2 )
  {
    if ( (*v2)-- == 1 )
    {
      sub_FD6C20((__int64)v2);
      operator delete(v2, 0x328u);
    }
  }
}
