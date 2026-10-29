unsigned __int64 __fastcall sub_413C60(_QWORD *a1, unsigned __int64 a2, char a3, __int64 a4, unsigned int a5, char a6)
{
  unsigned __int64 v8; // rbp
  __int64 v10; // rax
  unsigned __int64 v12; // [rsp+8h] [rbp-50h] BYREF
  unsigned __int64 v13; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v14; // [rsp+18h] [rbp-40h]

  v8 = (unsigned __int64)a5 << 56;
  v14 = __readfsqword(0x28u);
  v12 = sub_3BDD60(a1, a2);
  v13 = v8 + sub_3BDD60(a1, a4) + 1;
  v10 = -32770;
  if ( _bittest64(&v10, a3 & 0xF) || (sub_7BE7C0(&v12, *a1, 11, &v13, 8, 65), (a3 & 0xF) != 0) )
  {
    sub_7BE7C0(&v12, *a1, 12, &v13, 8, 65);
    if ( !a6 )
      return v14 - __readfsqword(0x28u);
  }
  else if ( !a6 )
  {
    return v14 - __readfsqword(0x28u);
  }
  if ( sub_3BD540((__int64)a1, a2) )
    sub_3A61A0(a1, a2, a2 + 1, 0x28u);
  return v14 - __readfsqword(0x28u);
}
