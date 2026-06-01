unsigned __int64 __fastcall sub_514F20(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // rdi
  unsigned __int64 v9; // [rsp+18h] [rbp-40h]
  _BYTE v10[8]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+28h] [rbp-30h]
  __int64 v12; // [rsp+30h] [rbp-28h]

  v11 = a2;
  v12 = a3;
  v9 = __readfsqword(0x28u);
  if ( a1 > 6 )
  {
    if ( !under_debugger )
      interr(2198);
    BUG();
  }
  v7 = *(_QWORD *)(*(_QWORD *)(qword_2CA1698 + 1392) + 8LL * (int)a1 + 8);
  if ( v7 )
    sub_75A510(v7, (unsigned int)v11, v12, a4, a5, a6, 8, &a7, v10);
  return v9 - __readfsqword(0x28u);
}

