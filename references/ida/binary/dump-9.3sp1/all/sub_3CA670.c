unsigned __int64 __fastcall sub_3CA670(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  const char *v5; // rcx
  const char *v7; // [rsp+0h] [rbp-38h] BYREF
  __int128 v8; // [rsp+8h] [rbp-30h]
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  v7 = nullptr;
  v8 = 0;
  sub_263810(a1, (__int64 *)&v7, a3, a4);
  v4 = a1 + 16;
  v5 = s1;
  if ( (_QWORD)v8 )
    v5 = v7;
  sub_3235D0(v4, a2, (__int64)&unk_4190BD, v5);
  if ( v7 )
  {
    *(_QWORD *)&v8 = 0;
    qfree((__int64)v7);
  }
  return v9 - __readfsqword(0x28u);
}
