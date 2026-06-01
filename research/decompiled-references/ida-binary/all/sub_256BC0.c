unsigned __int64 __fastcall sub_256BC0(__int64 a1, const char *a2)
{
  const char *v2; // rbp
  const char *v4; // [rsp+0h] [rbp-38h] BYREF
  __int128 v5; // [rsp+8h] [rbp-30h]
  unsigned __int64 v6; // [rsp+18h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  v2 = a2;
  v4 = nullptr;
  v5 = 0;
  if ( (unsigned __int8)sub_256790((__int64 *)&v4, "Path") )
  {
    a2 = &s1;
    if ( (_QWORD)v5 )
      a2 = v4;
    qstrncpy(a1, a2, v2);
  }
  else
  {
    dbg_get_input_path(a1, a2);
  }
  if ( v4 )
  {
    *(_QWORD *)&v5 = 0;
    qfree(v4, a2);
  }
  return v6 - __readfsqword(0x28u);
}
