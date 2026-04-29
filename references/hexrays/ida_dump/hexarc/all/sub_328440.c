__int64 __fastcall sub_328440(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v5; // [rsp+0h] [rbp-48h] BYREF
  __int128 v6; // [rsp+8h] [rbp-40h]
  __int64 v7; // [rsp+18h] [rbp-30h]
  unsigned __int64 v8; // [rsp+28h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v3 = *(unsigned int *)(a1 + 20);
  v6 = 0;
  v5 = 32;
  v7 = 0;
  get_stkarg_area_info(&v5, v3);
  return *(_QWORD *)(a2 + 1440) + *(int *)(a1 + 12);
}
