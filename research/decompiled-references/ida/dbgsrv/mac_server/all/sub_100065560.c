/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100065560
// Address: 0x0000000100065560

//----- (0000000100065560) ----------------------------------------------------
__int64 __fastcall sub_100065560(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // rax
  unsigned int v4; // r14d
  unsigned __int8 v6; // [rsp+Fh] [rbp-21h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v3 = sub_100064B70();
  v4 = 0;
  if ( (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int8 *, __int64, _QWORD))(*(_QWORD *)v3 + 288LL))(
         v3,
         v2,
         &v6,
         1,
         0) == 1 )
    *(_QWORD *)(a2 + 8) = v6;
  else
    return (unsigned int)throw_idc_exception((unsigned __int8 *)a2, "read error");
  return v4;
}
