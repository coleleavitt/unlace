__int64 sub_447970()
{
  __int64 result; // rax

  if ( qword_65A7E8 )
  {
    result = Tcl_Free(qword_65A7E8);
    qword_65A7E8 = 0;
    dword_65A7E0 = 0;
    dword_65A7F8 = 0;
  }
  return result;
}

