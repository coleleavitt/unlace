unsigned __int64 __fastcall sub_174550(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  const char *v6; // rsi
  const char *v7; // [rsp+0h] [rbp-28h] BYREF
  __int128 v8; // [rsp+8h] [rbp-20h]
  unsigned __int64 v9; // [rsp+18h] [rbp-10h]

  v9 = __readfsqword(0x28u);
  if ( !*(_BYTE *)(a1 + 32) && *(_QWORD *)(a1 + 48) > 1u )
  {
    v7 = nullptr;
    v8 = 0;
    if ( (unsigned int)sub_174130(a1, (__int64 *)&v7) )
    {
      v6 = s1;
      if ( (_QWORD)v8 )
        v6 = v7;
      sub_92050((__int64)"Cannot use license: %s", (__int64)v6, v1, v2, v3, v4, (char)v7);
    }
    if ( v7 )
    {
      *(_QWORD *)&v8 = 0;
      qfree();
    }
  }
  return v9 - __readfsqword(0x28u);
}

