/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001D970
// Address: 0x000000014001D970

//----- (000000014001D970) ----------------------------------------------------
bool __fastcall sub_14001D970(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // ebx
  bool v6; // cf
  unsigned __int8 v8; // [rsp+58h] [rbp+20h] BYREF
  char v9; // [rsp+59h] [rbp+21h]
  unsigned __int8 v10; // [rsp+5Ah] [rbp+22h]

  if ( (int)sub_14001D310(a3) <= 0 )
    return 0;
  v5 = 0;
  if ( (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int8 *, __int64, _QWORD))(*(_QWORD *)a1 + 280LL))(
         a1,
         *(_QWORD *)(a2 + 8),
         &v8,
         3,
         0) != 3 )
    return 0;
  v6 = v8 < 0x64u;
  if ( v8 != 100 || (v6 = v9 != -1, v9 != -1) || (v6 = v10 < 0x15u, v10 != 21) )
    v5 = v6 ? -1 : 1;
  return v5 == 0;
}
