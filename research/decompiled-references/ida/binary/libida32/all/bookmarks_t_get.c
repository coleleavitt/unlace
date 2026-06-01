__int64 __fastcall bookmarks_t_get(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4)
{
  __int64 v5; // r8
  int v6; // r9d
  unsigned int v7; // r12d
  __int64 v9[4]; // [rsp+0h] [rbp-58h] BYREF
  char v10; // [rsp+20h] [rbp-38h]
  unsigned __int64 v11; // [rsp+28h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  if ( a1 && *(_QWORD *)(a1 + 40) && a3 )
  {
    sub_4A2850(v9, **(_QWORD **)(qword_2CA1698 + 1480), a1, a4, 0);
    v7 = v10 & 1;
    if ( (v10 & 1) != 0 || *a3 == -1 )
      v7 = sub_4A3920((__int64)v9, a1, a2, a3, v5, v6);
    qfree((void *)v9[1]);
  }
  else
  {
    return 0;
  }
  return v7;
}

