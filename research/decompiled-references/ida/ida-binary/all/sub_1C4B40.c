void __fastcall sub_1C4B40(int a1, void *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v4 = **(_QWORD **)(a4 + 8);
      if ( (unsigned __int8)is_mapped(v4) )
        sub_27E9E0(v4, 1);
    }
  }
  else if ( a2 )
  {
    operator delete(a2, 0x10u);
  }
}
