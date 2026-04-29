unsigned __int64 __fastcall sub_1AA4B0(__int64 *a1, __int64 a2, unsigned __int64 a3, __int64 *a4)
{
  __int64 v5; // rdx
  __int64 v6; // rbx
  const char *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ebx
  const char *v12; // [rsp+10h] [rbp-38h] BYREF
  __int128 v13; // [rsp+18h] [rbp-30h]
  unsigned __int64 v14; // [rsp+28h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  v5 = *a4;
  v12 = nullptr;
  v13 = 0;
  sub_3268C0(&v12, a3, v5, 0);
  v6 = sub_1AA3F0(a2, (__int64)a1, a3);
  v7 = s1;
  if ( (_QWORD)v13 )
    v7 = v12;
  sub_1A9CE0(a1, v7);
  if ( v6 != -1 )
  {
    v10 = v6 & 7;
    if ( v10 > 2 )
      sub_1A9C90(a1, v7, v8, v9);
    sub_325BB0(a1, (unsigned int)(v10 + 41));
  }
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree(v12);
  }
  return v14 - __readfsqword(0x28u);
}
