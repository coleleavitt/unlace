__int64 __fastcall bookmarks_t_get_by_inode(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  unsigned int v6; // r13d
  __int64 v8[4]; // [rsp+0h] [rbp-58h] BYREF
  char v9; // [rsp+24h] [rbp-34h]
  unsigned __int64 v10; // [rsp+28h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  if ( a1 && *(_QWORD *)(a1 + 40) && a3 != -1 )
  {
    v6 = -1;
    sub_4B7DA0(v8, **(_QWORD **)(qword_2CCB598 + 1672), a1, a4, 0, a5);
    if ( (v9 & 1) != 0 )
      v6 = sub_4B9610(v8, a1, a2, a3);
    qfree((void *)v8[1]);
  }
  else
  {
    return (unsigned int)-1;
  }
  return v6;
}
