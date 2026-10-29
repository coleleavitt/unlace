unsigned __int64 __fastcall sub_FF830(__int64 a1)
{
  const char *v2; // rsi
  size_t v3; // rbp
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
  sub_153C60(&v9, a1);
  v2 = s1;
  if ( v10 )
    v2 = v9;
  sub_F43F0((size_t *)&v7, v2, "Hex View-");
  if ( v9 )
  {
    v10 = 0;
    qfree();
  }
  v3 = (size_t)v7;
  v4 = 0;
  if ( dbg && dword_244118 != -1 )
  {
    v5 = v7;
    if ( !(_QWORD)v8 )
      v5 = s1;
    v4 = strcmp(v5, *(const char **)(*(_QWORD *)(dbg + 56LL) + 32LL * dword_244118)) == 0;
  }
  *(_BYTE *)(a1 + 1192) = v4;
  if ( v3 )
  {
    *(_QWORD *)&v8 = 0;
    qfree();
  }
  return v11 - __readfsqword(0x28u);
}

