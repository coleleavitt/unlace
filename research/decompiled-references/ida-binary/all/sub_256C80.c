unsigned __int64 __fastcall sub_256C80(_BYTE *a1, const char *a2)
{
  const char *v3; // rsi
  const char *v5; // [rsp+0h] [rbp-38h] BYREF
  __int128 v6; // [rsp+8h] [rbp-30h]
  unsigned __int64 v7; // [rsp+18h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  v3 = "StartDir";
  v5 = nullptr;
  v6 = 0;
  if ( (unsigned __int8)sub_256790((__int64 *)&v5, "StartDir") )
  {
    v3 = &s1;
    if ( (_QWORD)v6 )
      v3 = v5;
    qstrncpy(a1, v3, a2);
  }
  else if ( (unsigned __int8)is_miniidb()
         || (sub_256BC0((__int64)a1, a2), v3 = a2, !(unsigned __int8)qdirname(a1, a2, a1)) )
  {
    *a1 = 0;
  }
  if ( v5 )
  {
    *(_QWORD *)&v6 = 0;
    qfree(v5, v3);
  }
  return v7 - __readfsqword(0x28u);
}
