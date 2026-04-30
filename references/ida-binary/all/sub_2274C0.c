__int64 __fastcall calc_bounds_of(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rdi
  __int64 v6; // [rsp+0h] [rbp-48h] BYREF
  __int128 v7; // [rsp+8h] [rbp-40h]
  __int64 v8; // [rsp+18h] [rbp-30h]
  int v9; // [rsp+20h] [rbp-28h]
  unsigned __int64 v10; // [rsp+28h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  v4 = *a3;
  v6 = 0;
  v8 = 0;
  v9 = -1;
  v7 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 72LL))(v4, &v6) )
    rangeset_t_add2(*(_QWORD *)(a1 + 8), &v6);
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree(v6, (const char *)&v6);
  }
  return 0;
}
