/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000655F0
// Address: 0x00000001000655F0

//----- (00000001000655F0) ----------------------------------------------------
__int64 __fastcall sub_1000655F0(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // rax
  unsigned int v4; // r14d
  unsigned __int16 v6; // [rsp+Eh] [rbp-22h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v3 = sub_100064B70();
  v4 = 0;
  if ( (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int16 *, __int64, _QWORD))(*(_QWORD *)v3 + 288LL))(
         v3,
         v2,
         &v6,
         2,
         0) == 2 )
    *(_QWORD *)(a2 + 8) = v6;
  else
    return (unsigned int)throw_idc_exception((unsigned __int8 *)a2, "read error");
  return v4;
}
