/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000657B0
// Address: 0x00000001000657B0

//----- (00000001000657B0) ----------------------------------------------------
__int64 __fastcall sub_1000657B0(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // r14
  __int64 v4; // r12
  __int64 v5; // rax

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a1 + 40);
  *(_BYTE *)a2 = 7;
  *(_OWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 24) = 0;
  if ( v3
    && (sub_100012FB0(a2 + 8, v3),
        v4 = *(_QWORD *)(a2 + 8),
        v5 = sub_100064B70(),
        (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v5 + 288LL))(
          v5,
          v2,
          v4,
          v3,
          0) != v3) )
  {
    return throw_idc_exception((unsigned __int8 *)a2, "read error");
  }
  else
  {
    return 0;
  }
}
