__int64 __fastcall bookmarks_t_get(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4, double a5)
{
  __int64 v6; // r8
  int v7; // r9d
  unsigned int v8; // r12d
  __int64 v10[4]; // [rsp+0h] [rbp-58h] BYREF
  char v11; // [rsp+24h] [rbp-34h]
  unsigned __int64 v12; // [rsp+28h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  if ( a1 && *(_QWORD *)(a1 + 40) && a3 )
  {
    sub_4B7DA0(v10, **(_QWORD **)(qword_2CCB598 + 1672), a1, a4, 0, a5);
    v8 = v11 & 1;
    if ( (v11 & 1) != 0 || *a3 == -1 )
      v8 = sub_4B8F10(v10, a1, a2, a3, v6, v7);
    qfree((void *)v10[1]);
  }
  else
  {
    return 0;
  }
  return v8;
}
