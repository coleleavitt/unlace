unsigned __int64 __fastcall sub_3329E0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rsi
  unsigned __int64 v7; // rbp
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v11; // [rsp+0h] [rbp-48h] BYREF
  __int128 v12; // [rsp+8h] [rbp-40h]
  __int64 v13; // [rsp+18h] [rbp-30h]
  int v14; // [rsp+20h] [rbp-28h]
  unsigned __int64 v15; // [rsp+28h] [rbp-20h]

  v6 = *a1;
  v15 = __readfsqword(0x28u);
  if ( !v6 )
    return *(_QWORD *)(a1[1] + 16 * a1[2] - 8);
  v11 = 0;
  v13 = 0;
  v14 = -1;
  v12 = 0;
  get_func_ranges(&v11, v6, a3, a4, a5, a6);
  v7 = *(_QWORD *)(v11 + 16 * v12 - 8);
  v8 = a1[2];
  if ( v8 )
  {
    v9 = *(_QWORD *)(a1[1] + 16 * v8 - 8);
    if ( v7 < v9 )
      v7 = v9;
  }
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree(v11);
  }
  return v7;
}
