__int64 __fastcall sub_5B47F0(_QWORD *a1, __int64 a2, const char *a3, char a4, char a5)
{
  __int64 v5; // rax
  const char *v7; // rsi
  _QWORD *v9; // rdi
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v12; // [rsp+8h] [rbp-30h]
  unsigned __int64 v13; // [rsp+18h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  v5 = 0;
  if ( !a3 )
    return 0;
  v7 = a3;
  if ( !*a3 )
    return 0;
  ptr = nullptr;
  v9 = a1 + 307;
  v12 = 0;
  if ( !a5 )
  {
    v7 = sub_5B38F0((__int64 *)&ptr, a3, a4);
    v9 = a1 + 307;
    v5 = ((_QWORD)v12 == 0) + (_QWORD)v12 - 1LL;
  }
  sub_7BE7C0(v9, *a1, a2, v7, v5, 70);
  if ( ptr )
  {
    *(_QWORD *)&v12 = 0;
    qfree(ptr);
  }
  return 1;
}
