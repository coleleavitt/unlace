void __fastcall sub_1C5350(int a1, void *a2)
{
  __int64 path; // rax

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      sub_3D5CD0();
      path = get_path(1);
      sub_37A650(path, 0);
      sub_31E360(&qword_8C96A0);
      sub_19A600((__int64)&qword_8C96A0, 0);
      if ( (unsigned __int8)is_cvt64() )
        sub_383FF0();
    }
  }
  else if ( a2 )
  {
    operator delete(a2, 0x10u);
  }
}
