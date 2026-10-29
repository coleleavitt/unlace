void __fastcall sub_12E9BC0(__int64 a1, _DWORD *a2)
{
  _QWORD *v2; // rbx

  if ( a2 )
    ++*a2;
  v2 = *(_QWORD **)(a1 + 32);
  *(_QWORD *)(a1 + 32) = a2;
  if ( v2 )
  {
    if ( (*(_DWORD *)v2)-- == 1 )
    {
      sub_FCAA60(v2);
      operator delete(v2, 0x3B90u);
    }
  }
}
