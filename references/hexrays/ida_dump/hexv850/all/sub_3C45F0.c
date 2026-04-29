unsigned __int64 __fastcall sub_3C45F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  const char *v3; // rcx
  const char *v5; // [rsp+0h] [rbp-38h] BYREF
  __int128 v6; // [rsp+8h] [rbp-30h]
  unsigned __int64 v7; // [rsp+18h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  v5 = nullptr;
  v6 = 0;
  sub_25E450(a1, (__int64 *)&v5);
  v2 = a1 + 16;
  v3 = s1;
  if ( (_QWORD)v6 )
    v3 = v5;
  sub_31DD10(v2, a2, (__int64)&unk_3F60D3, v3);
  if ( v5 )
  {
    *(_QWORD *)&v6 = 0;
    qfree(v5);
  }
  return v7 - __readfsqword(0x28u);
}
