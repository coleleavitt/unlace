void __fastcall sub_1C4A00(int a1, void *a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rax

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v4 = **(_QWORD ***)(a4 + 8);
      if ( v4 )
        sub_27E9E0(*v4, v4[1] - *v4);
    }
  }
  else if ( a2 )
  {
    operator delete(a2, 0x10u);
  }
}
