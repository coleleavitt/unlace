unsigned __int64 __fastcall sub_8FC50(__int64 a1, int a2)
{
  const char *v3; // rdx
  const char *v4; // [rsp+0h] [rbp-38h] BYREF
  __int128 v5; // [rsp+8h] [rbp-30h]
  unsigned __int64 v6; // [rsp+18h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 52) )
  {
    v4 = nullptr;
    v5 = 0;
    sub_6B870((__int64 *)&v4);
    v3 = s1;
    if ( (_QWORD)v5 )
      v3 = v4;
    sub_8F680(a1, a2, v3);
    if ( v4 )
    {
      *(_QWORD *)&v5 = 0;
      qfree((__int64)v4);
    }
  }
  return v6 - __readfsqword(0x28u);
}
