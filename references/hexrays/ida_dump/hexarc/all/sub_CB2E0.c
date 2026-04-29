__int64 __fastcall sub_CB2E0(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // [rsp+0h] [rbp-48h] BYREF
  __int128 v8; // [rsp+8h] [rbp-40h]
  __int64 v9; // [rsp+18h] [rbp-30h]
  unsigned __int64 v10; // [rsp+28h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_367DA0(*(_QWORD *)(a2 + 1504), *(unsigned int *)(a1 + 72)) )
    return *(_QWORD *)(a2 + 144);
  v3 = *(unsigned int *)(a1 + 72);
  v7 = 32;
  v9 = 0;
  v8 = 0;
  get_stkarg_area_info(&v7, v3);
  result = *(_QWORD *)(a2 + 144);
  v5 = result + v8 - *(int *)(a2 + 120);
  if ( v5 != -1 )
  {
    v6 = 0;
    if ( (*(_BYTE *)(*(_QWORD *)(a2 + 1504) + 48LL) & 0x21) == 0 )
      v6 = *(_QWORD *)(a1 + 96);
    return v5 + v6 * *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL) + 80LL);
  }
  return result;
}
