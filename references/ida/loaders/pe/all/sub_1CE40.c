unsigned __int64 __fastcall sub_1CE40(unsigned int a1)
{
  __int64 v1; // rax
  int v2; // eax
  unsigned int v4; // [rsp+Ch] [rbp-5Ch] BYREF
  unsigned int v5; // [rsp+10h] [rbp-58h] BYREF
  int v6; // [rsp+14h] [rbp-54h] BYREF
  __int64 v7; // [rsp+18h] [rbp-50h] BYREF
  __int64 v8; // [rsp+20h] [rbp-48h] BYREF
  __int128 v9; // [rsp+28h] [rbp-40h]
  unsigned __int64 v10; // [rsp+38h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  v6 = 0;
  v7 = 0;
  v1 = *(_QWORD *)qword_44A20;
  v4 = 0;
  v5 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(v1 + 48))(qword_44A20, a1) )
  {
    v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *, void *, __int64, unsigned int *, __int64 *, unsigned int *))(*(_QWORD *)qword_44A20 + 208LL))(
           qword_44A20,
           a1,
           &v6,
           &unk_34A00,
           0x8000,
           &v4,
           &v7,
           &v5);
    if ( !(unsigned __int8)sub_1CDD0("GetMemberRefProps", v2) )
    {
      if ( v4 > 0x7FFF )
        word_449FE = 0;
      v9 = 0;
      v8 = 0;
      utf16_utf8();
      sub_F030(a1, (__int64)&v8);
      sub_EF20(a1, &v6, 4, 97);
      sub_EF20(a1, v7, v5, 100);
      if ( v8 )
      {
        *(_QWORD *)&v9 = 0;
        qfree();
      }
    }
  }
  else
  {
    sub_A660((__int64)"%s: invalid token.", "display_memberref");
  }
  return v10 - __readfsqword(0x28u);
}
