unsigned __int64 __fastcall sub_5264C0(__int64 *a1, const char *a2, unsigned int a3, char a4)
{
  const char *v5; // rdx
  const char *v7; // [rsp+0h] [rbp-38h] BYREF
  __int128 v8; // [rsp+8h] [rbp-30h]
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  v7 = nullptr;
  v8 = 0;
  sub_525EC0((__int64 *)&v7, (const char *)a3);
  v5 = &s1;
  if ( (_QWORD)v8 )
    v5 = v7;
  sub_5258E0(a1, a2, v5, a4);
  if ( v7 )
  {
    *(_QWORD *)&v8 = 0;
    qfree(v7, a2);
  }
  return v9 - __readfsqword(0x28u);
}
