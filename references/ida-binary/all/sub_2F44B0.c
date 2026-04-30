__int64 __fastcall sub_2F44B0(const char *a1, __int64 a2, const char *a3, char a4, double a5)
{
  unsigned int v7; // ebp
  const char *v8; // rcx
  const char *v9; // rsi
  const char *v11; // [rsp+0h] [rbp-58h] BYREF
  __int128 v12; // [rsp+8h] [rbp-50h]
  const char *v13; // [rsp+20h] [rbp-38h] BYREF
  __int128 v14; // [rsp+28h] [rbp-30h]
  unsigned __int64 v15; // [rsp+38h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  v7 = sub_2EE840(a1, a2, a4, a5);
  if ( v7 <= 3 )
  {
    if ( *(_QWORD *)(a2 + 688) )
    {
      v11 = nullptr;
      v12 = 0;
      sub_2F3FD0((__int64 *)&v11, (__int64 **)(a2 + 680));
      v13 = nullptr;
      v8 = &s1;
      v14 = 0;
      if ( (_QWORD)v12 )
        v8 = v11;
      sub_169A50((__int64 *)&v13, (__int64)"%s %s", a3, v8);
      v9 = &s1;
      if ( (_QWORD)v14 )
        v9 = v13;
      sub_2EE810(a2, (__int64)v9);
      if ( v13 )
      {
        *(_QWORD *)&v14 = 0;
        qfree(v13, v9);
      }
      if ( v11 )
      {
        *(_QWORD *)&v12 = 0;
        qfree(v11, v9);
      }
    }
    else
    {
      return 7;
    }
  }
  return v7;
}
