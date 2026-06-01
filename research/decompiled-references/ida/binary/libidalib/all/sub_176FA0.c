__int64 sub_176FA0()
{
  __int64 v0; // rbp
  unsigned int v1; // ebx
  __int64 v3; // [rsp+0h] [rbp-58h] BYREF
  __int128 v4; // [rsp+8h] [rbp-50h]
  __int64 v5; // [rsp+18h] [rbp-40h]
  __int128 v6; // [rsp+20h] [rbp-38h]
  __int64 v7; // [rsp+30h] [rbp-28h]
  unsigned __int64 v8; // [rsp+38h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v0 = qword_256580;
  if ( !qword_256580 )
  {
    if ( !under_debugger )
      interr();
    BUG();
  }
  v3 = 0;
  v5 = 0;
  v7 = 0;
  v4 = 0;
  v6 = 0;
  sub_94370(&v3);
  sub_17CDD0(0, 0, &v3);
  if ( (unsigned __int64)v4 <= 1 )
    v1 = 0;
  else
    v1 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v0 + 32LL))(v0, &v3);
  if ( v5 )
  {
    *(_QWORD *)&v6 = 0;
    qfree();
  }
  if ( v3 )
  {
    *(_QWORD *)&v4 = 0;
    qfree();
  }
  return v1;
}

