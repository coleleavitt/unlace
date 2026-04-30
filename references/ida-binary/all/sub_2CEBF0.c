__int64 __fastcall jump_or_follow_ah_t__::vfunc_1(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v4; // edx
  unsigned int v6; // eax
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  const char *v9; // rcx
  const char *v10; // rsi
  const char *v11; // rbp
  __int64 v12; // rax
  const char *v13; // [rsp+0h] [rbp-38h] BYREF
  __int128 v14; // [rsp+8h] [rbp-30h]
  unsigned __int64 v15; // [rsp+18h] [rbp-20h]

  v2 = *(_DWORD *)(a2 + 8);
  v15 = __readfsqword(0x28u);
  if ( v2 == 28 || (v4 = 6, v2 == 34) )
  {
    if ( *(_BYTE *)(*(_QWORD *)a2 + 1080LL) )
      return 7;
    v6 = *(_DWORD *)(a1 + 12);
    if ( v6 <= 1 )
    {
      if ( v6 )
        v7 = dword_8BA58C;
      else
        v7 = dword_8BA590;
      if ( (v7 & 0x80000000) != 0LL )
        return 7;
      if ( v7 >= (unsigned __int64)xmmword_8CC398 )
        return 7;
      v8 = qword_8CC390 + 56 * v7;
      if ( !v8 )
        return 7;
      v13 = nullptr;
      v9 = &s1;
      v14 = 0;
      if ( *(_QWORD *)(v8 + 8) )
        v9 = *(const char **)v8;
      v10 = "%s%s";
      sub_169A50((__int64 *)&v13, (__int64)"%s%s", "Jump to ", v9);
      v11 = &s1;
      if ( (_QWORD)v14 )
        v11 = v13;
      v12 = sub_534430(*(_QWORD *)(a2 + 72));
      if ( v12 )
      {
        v10 = (_BYTE *)(&dword_0 + 1);
        sub_537630(v12, 1, v11);
      }
      if ( v13 )
      {
        *(_QWORD *)&v14 = 0;
        qfree(v13, v10);
      }
    }
    return 3;
  }
  return v4;
}
