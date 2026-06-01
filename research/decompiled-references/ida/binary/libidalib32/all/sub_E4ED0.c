unsigned __int64 __fastcall sub_E4ED0(_BYTE *a1)
{
  __int64 v2; // [rsp+0h] [rbp-38h] BYREF
  __int128 v3; // [rsp+8h] [rbp-30h]
  unsigned __int64 v4; // [rsp+18h] [rbp-20h]

  v4 = __readfsqword(0x28u);
  v2 = 0;
  v3 = 0;
  if ( (unsigned __int8)sub_E49E0(&v2, "StartDir") )
  {
    qstrncpy();
  }
  else if ( (unsigned __int8)is_miniidb() || (sub_E4E10(), !(unsigned __int8)qdirname()) )
  {
    *a1 = 0;
  }
  if ( v2 )
  {
    *(_QWORD *)&v3 = 0;
    qfree();
  }
  return v4 - __readfsqword(0x28u);
}

