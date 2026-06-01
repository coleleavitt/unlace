void __fastcall sub_549450(__int64 a1, int a2, int a3, _QWORD **a4)
{
  _QWORD *v4; // rax

  if ( a2 )
  {
    if ( a2 == 7 )
    {
      v4 = *a4;
      if ( a3 != 1 || *(_DWORD *)a4[1] )
        *v4 = 0;
      else
        *v4 = &unk_8C3020;
    }
  }
  else if ( a3 )
  {
    if ( a3 == 1 )
      sub_4C6AB0(a1, *a4[1]);
  }
  else
  {
    sub_4C6540(a1);
  }
}
