void __fastcall sub_4C9620(double a1)
{
  int v1; // eax
  __int64 v2; // rax

  v1 = dword_8D1D3C;
  if ( dword_8D1D3C <= 0 || (--dword_8D1D3C, v1 == 1) )
  {
    v2 = sub_47A690((__int64)QT::QCoreApplication::self);
    if ( v2 )
      sub_4C9440(v2, a1);
  }
}
