void __fastcall sub_12DB100(__int64 a1)
{
  _QWORD *v1; // rbx

  v1 = *(_QWORD **)(a1 + 40);
  if ( (*(_DWORD *)v1)-- == 1 )
  {
    sub_FCAA60(v1);
    operator delete(v1, 0x3B90u);
  }
}
