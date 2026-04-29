__int64 __fastcall sub_3E6470(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v4; // eax
  char *s1; // [rsp+0h] [rbp-28h] BYREF
  __int128 v6; // [rsp+8h] [rbp-20h]
  unsigned __int64 v7; // [rsp+18h] [rbp-10h]

  v7 = __readfsqword(0x28u);
  s1 = nullptr;
  v6 = 0;
  v2 = 1;
  if ( !sub_3E63A0(a2, (const char **)&s1) )
  {
    LOBYTE(v4) = sub_1CF6E0(s1);
    v2 = v4;
  }
  if ( s1 )
  {
    *(_QWORD *)&v6 = 0;
    qfree(s1);
  }
  return v2;
}
