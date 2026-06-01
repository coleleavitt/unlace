void __fastcall sub_3D5F30(__int64 a1)
{
  __int64 path; // rax

  if ( a1 && dword_8CD7E0 && !(unsigned __int8)is_database_flag(1) && !(unsigned __int8)is_database_flag(8) )
  {
    path = get_path(0);
    sub_37A650(a1, path);
  }
}
