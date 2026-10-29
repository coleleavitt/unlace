__int64 __fastcall sub_228C060(_QWORD **a1, bool *a2)
{
  int v2; // eax
  char *v3; // rdi
  int v4; // ebp
  bool v5; // al
  char *file; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v8; // [rsp+10h] [rbp-A8h] BYREF
  struct statfs buf; // [rsp+20h] [rbp-98h] BYREF

  sub_2253560(&file, a1);
  v2 = statfs(file, &buf);
  v3 = file;
  v4 = v2;
  if ( file != (char *)&v8 )
    operator delete(file);
  if ( v4 )
  {
    std::_V2::generic_category((std::_V2 *)v3);
    return (unsigned int)*__errno_location();
  }
  else
  {
    v5 = LODWORD(buf.f_type) != 26985 && LODWORD(buf.f_type) != -11317950 && LODWORD(buf.f_type) != 20859;
    *a2 = v5;
    std::_V2::system_category((std::_V2 *)v3);
    return 0;
  }
}
