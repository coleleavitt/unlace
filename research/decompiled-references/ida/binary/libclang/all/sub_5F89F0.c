void __fastcall sub_5F89F0(__int64 a1)
{
  _DWORD *v1; // rbx

  v1 = *(_DWORD **)(a1 + 40);
  if ( (*v1)-- == 1 )
  {
    sub_C68450(v1);
    operator delete(v1, 0x3B90u);
  }
}

