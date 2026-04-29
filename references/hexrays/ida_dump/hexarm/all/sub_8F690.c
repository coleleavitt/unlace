unsigned __int64 __fastcall sub_8F690(__int64 a1, int a2, int a3)
{
  const char *v4; // rdx
  const char *v5; // [rsp+0h] [rbp-38h] BYREF
  __int128 v6; // [rsp+8h] [rbp-30h]
  unsigned __int64 v7; // [rsp+18h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 52) )
  {
    v5 = nullptr;
    v6 = 0;
    sub_6B2B0((__int64 *)&v5, (__int64)"#%d", a3);
    v4 = s1;
    if ( (_QWORD)v6 )
      v4 = v5;
    sub_8F0C0(a1, a2, v4);
    if ( v5 )
    {
      *(_QWORD *)&v6 = 0;
      qfree(v5);
    }
  }
  return v7 - __readfsqword(0x28u);
}
