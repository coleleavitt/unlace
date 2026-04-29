__int64 __fastcall sub_58330(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r9
  __int64 v20; // [rsp+0h] [rbp-28h]
  unsigned __int64 v21; // [rsp+8h] [rbp-20h]
  __int64 v22; // [rsp+8h] [rbp-20h]
  __int64 v23; // [rsp+10h] [rbp-18h]
  __int64 v24; // [rsp+18h] [rbp-10h]

  v21 = __readfsqword(0x28u);
  netnode_check();
  if ( a2 == -1 || a2 == netnode_altval() )
    return v21 - __readfsqword(0x28u);
  *(_BYTE *)(a1 + 5489) = getinf() & 0xF;
  sub_496E0((__int64)"Coagulating exception descriptors", -1);
  ((void (__fastcall *)(__int64, __int64, __int64, __int64, __int64, __int64))callui)(25, -1, v11, v12, v13, v14);
  sub_57E80(a1, a2);
  if ( !(unsigned __int8)callui(27, a2, v15, v16, v17, v18, v20, v22, v23, v24) )
    netnode_supset();
  netnode_supdel_all();
  return callui(24, 10, 0, &callui, callui, v19, a7, a8, a9, a10);
}
