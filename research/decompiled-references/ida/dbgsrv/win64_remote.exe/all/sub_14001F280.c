/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001F280
// Address: 0x000000014001F280

//----- (000000014001F280) ----------------------------------------------------
__int64 __fastcall sub_14001F280(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdi
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]
  char v8; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0;
  v3 = 0;
  v7 = 0;
  v4 = *(_QWORD *)(a1 + 40);
  if ( v4 > 0 )
  {
    *((_QWORD *)&v6 + 1) = 0;
    v8 = *(_BYTE *)(a1 + 8);
    sub_14001A7E0((__int64)&v6, v4 + 1, &v8);
    *(_BYTE *)(v6 + v4) = 0;
    v3 = v7;
  }
  *(_BYTE *)a2 = 7;
  *(_OWORD *)(a2 + 8) = v6;
  *(_QWORD *)(a2 + 24) = v3;
  return 0;
}
// 14001F2BA: conditional instruction was optimized away because rdi.8>=1
