void __fastcall sub_3F9700(int a1, __int64 *a2, __int64 a3, __int64 a4)
{
  if ( a1 )
  {
    if ( a1 == 1 )
      sub_3F9640(a2[2], **(_QWORD **)(a4 + 8));
  }
  else if ( a2 )
  {
    operator delete(a2, 0x18u);
  }
}
