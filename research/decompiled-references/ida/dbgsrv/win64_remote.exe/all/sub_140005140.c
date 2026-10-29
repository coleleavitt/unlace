/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140005140
// Address: 0x0000000140005140

//----- (0000000140005140) ----------------------------------------------------
__int64 __fastcall sub_140005140(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdi
  const char *v6; // rax
  _QWORD v7[3]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v8[3]; // [rsp+38h] [rbp-40h] BYREF
  _QWORD v9[4]; // [rsp+50h] [rbp-28h] BYREF

  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 120LL))(a1, 0, 0);
  if ( (*(unsigned int (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 24LL))(a1, v4, a2) )
  {
    unknown_libname_41(v7);
    sub_140002FB0((__int64)v7, "Failed loading symbol data for ID %u", a2);
    if ( v4 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 288LL))(v4, 1);
    v6 = sub_140001880(v7);
    sub_1400015D0(v8, v6);
    sub_140003130(v9, (__int64)v8);
    sub_14006C754(v9, &_TI1_AUpdb_exception_t__);
    JUMPOUT(0x1400051FBLL);
  }
  return v4;
}
// 1400051F6: control flows out of bounds to 1400051FB
// 140001620: using guessed type __int64 __fastcall unknown_libname_41(_QWORD);
// 1400C4A08: using guessed type __TI_flags _TI1_AUpdb_exception_t__;
