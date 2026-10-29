__int64 __fastcall sub_B7A90(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rdi
  __int64 v5; // [rsp+0h] [rbp-48h] BYREF
  __int128 v6; // [rsp+8h] [rbp-40h]
  __int64 v7; // [rsp+18h] [rbp-30h]
  int v8; // [rsp+20h] [rbp-28h]
  unsigned __int64 v9; // [rsp+28h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  v3 = *a3;
  v5 = 0;
  v7 = 0;
  v8 = -1;
  v6 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 72LL))(v3, &v5) )
    rangeset_t_add2();
  if ( v5 )
  {
    *(_QWORD *)&v6 = 0;
    qfree();
  }
  return 0;
}

