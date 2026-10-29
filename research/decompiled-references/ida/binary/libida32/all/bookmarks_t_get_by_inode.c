__int64 __fastcall bookmarks_t_get_by_inode(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int v5; // r13d
  __int64 v7[4]; // [rsp+0h] [rbp-58h] BYREF
  char v8; // [rsp+20h] [rbp-38h]
  unsigned __int64 v9; // [rsp+28h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  if ( a1 && *(_QWORD *)(a1 + 40) && a3 != -1 )
  {
    v5 = -1;
    sub_4A2850(v7, **(_QWORD **)(qword_2CA1698 + 1480), a1, a4, 0);
    if ( (v8 & 1) != 0 )
      v5 = sub_4A3F60((__int64)v7, a1, a2, a3);
    qfree((void *)v7[1]);
  }
  else
  {
    return (unsigned int)-1;
  }
  return v5;
}

