unsigned __int64 sub_E5C30()
{
  __int64 v1; // [rsp+0h] [rbp-38h] BYREF
  __int128 v2; // [rsp+8h] [rbp-30h]
  unsigned __int64 v3; // [rsp+18h] [rbp-20h]

  v3 = __readfsqword(0x28u);
  v1 = 0;
  v2 = 0;
  if ( (unsigned __int8)sub_E5800(&v1, "Path") )
    qstrncpy();
  else
    dbg_get_input_path();
  if ( v1 )
  {
    *(_QWORD *)&v2 = 0;
    qfree();
  }
  return v3 - __readfsqword(0x28u);
}

