__int64 __fastcall sub_14BB70(__int64 a1)
{
  unsigned int v1; // ebx
  char *s1; // [rsp+0h] [rbp-28h] BYREF
  __int128 v4; // [rsp+8h] [rbp-20h]
  unsigned __int64 v5; // [rsp+18h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  s1 = 0;
  v4 = 0;
  v1 = sub_1CFF30(&s1, a1, 0, 0);
  if ( (_BYTE)v1 )
    v1 = sub_1D06C0(s1);
  if ( s1 )
  {
    *(_QWORD *)&v4 = 0;
    qfree();
  }
  return v1;
}
