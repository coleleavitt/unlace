__int64 __fastcall sub_1019D0(const char *a1)
{
  const char *v1; // rsi
  __int64 v2; // rbx
  __int64 *v4; // [rsp+0h] [rbp-48h] BYREF
  __int128 v5; // [rsp+8h] [rbp-40h]
  const char *v6; // [rsp+20h] [rbp-28h] BYREF
  __int128 v7; // [rsp+28h] [rbp-20h]
  unsigned __int64 v8; // [rsp+38h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  v4 = nullptr;
  v6 = nullptr;
  v5 = 0;
  v7 = 0;
  sub_1018E0((__int64 *)&v6, a1);
  v1 = s1;
  if ( (_QWORD)v7 )
    v1 = v6;
  sub_F5300((__int64 *)&v4, v1, "hexview_t");
  v2 = 0;
  if ( (_QWORD)v5 )
    v2 = *v4;
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree();
  }
  if ( v4 )
  {
    *(_QWORD *)&v5 = 0;
    qfree();
  }
  return v2;
}

