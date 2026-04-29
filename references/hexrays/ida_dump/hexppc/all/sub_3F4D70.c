unsigned __int64 __fastcall sub_3F4D70(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v6; // [rsp+0h] [rbp-48h] BYREF
  __int128 v7; // [rsp+8h] [rbp-40h]
  __int64 v8; // [rsp+18h] [rbp-30h]
  unsigned __int64 v9; // [rsp+28h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  sub_195A30(a1, a3);
  *(_QWORD *)(a1 + 384) = -1;
  *(_QWORD *)(a1 + 392) = -1;
  *(_QWORD *)a1 = &off_4D9A78;
  *(_QWORD *)(a1 + 360) = a2;
  *(_BYTE *)(a1 + 400) = 0;
  *(_OWORD *)(a1 + 368) = -1;
  v4 = *(unsigned int *)(a3 + 72);
  v6 = 32;
  v8 = 0;
  v7 = 0;
  if ( (unsigned __int8)get_stkarg_area_info(&v6, v4) )
    *(_DWORD *)(a1 + 352) = DWORD2(v7);
  return v9 - __readfsqword(0x28u);
}
