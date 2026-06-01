/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9E4A0
// Address: 0x000000000009E4A0

//----- (000000000009E4A0) ----------------------------------------------------
__int64 __fastcall sub_9E4A0(__int64 a1, __int64 a2)
{
  __int64 v3; // x19
  __int64 v4; // x0
  _BYTE v6[4]; // [xsp+4h] [xbp-2Ch] BYREF
  __int64 v7; // [xsp+8h] [xbp-28h]

  v7 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6[0] = *(_QWORD *)(a1 + 40);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = sub_9DBD8();
  *(_QWORD *)(a2 + 8) = (*(__int64 (__fastcall **)(__int64, __int64, _BYTE *, __int64, _QWORD))(*(_QWORD *)v4 + 296LL))(
                          v4,
                          v3,
                          v6,
                          1,
                          0);
  return 0;
}
