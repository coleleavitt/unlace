__int64 __fastcall sub_3E0F70(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  char *v4; // rbx
  char *s1; // [rsp+0h] [rbp-38h] BYREF
  __int128 v6; // [rsp+8h] [rbp-30h]
  unsigned __int64 v7; // [rsp+18h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  s1 = 0;
  v6 = 0;
  v2 = 1;
  if ( !sub_3E07E0(a2, (__int64 *)&s1) )
  {
    v4 = s1;
    if ( s1 && sub_3E0ED0(s1) )
      goto LABEL_6;
    v2 = sub_1D0700(v4);
  }
  if ( s1 )
  {
LABEL_6:
    *(_QWORD *)&v6 = 0;
    qfree();
  }
  return v2;
}
