unsigned __int64 __fastcall sub_2C9D90(__int64 a1)
{
  const char *v2; // rsi
  __int64 v3; // rbp
  bool v4; // dl
  const char *v5; // rdi
  const char *v7; // [rsp+0h] [rbp-58h] BYREF
  __int128 v8; // [rsp+8h] [rbp-50h]
  const char *v9; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+28h] [rbp-30h]
  unsigned __int64 v11; // [rsp+38h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v7 = nullptr;
  v8 = 0;
  sub_1FA630((__int64)&v9);
  v2 = &s1;
  if ( v10 )
    v2 = v9;
  sub_27D840((__int64 *)&v7, v2, "Hex View-");
  if ( v9 )
  {
    v10 = 0;
    qfree(v9, v2);
  }
  v3 = (__int64)v7;
  v4 = 0;
  if ( dbg && dword_8BA590 != -1 )
  {
    v5 = v7;
    v2 = *(const char **)(*(_QWORD *)(dbg + 56) + 32LL * dword_8BA590);
    if ( !(_QWORD)v8 )
      v5 = &s1;
    v4 = strcmp(v5, v2) == 0;
  }
  *(_BYTE *)(a1 + 1032) = v4;
  if ( v3 )
  {
    *(_QWORD *)&v8 = 0;
    qfree(v3, v2);
  }
  return v11 - __readfsqword(0x28u);
}
