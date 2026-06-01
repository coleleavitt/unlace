void __fastcall sub_1C4830(int a1, void *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v4 = **(_QWORD **)(a4 + 8);
      sub_27EDA0(v4);
      sub_238F80(v4);
    }
  }
  else if ( a2 )
  {
    operator delete(a2, 0x10u);
  }
}
