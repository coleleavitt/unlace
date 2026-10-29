/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100065710
// Address: 0x0000000100065710

//----- (0000000100065710) ----------------------------------------------------
__int64 __fastcall sub_100065710(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // rax
  unsigned int v4; // r14d
  __int64 v5; // r15
  __int64 v7; // [rsp+8h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v3 = sub_100064B70();
  v4 = 0;
  if ( (*(__int64 (__fastcall **)(__int64, __int64, __int64 *, __int64, _QWORD))(*(_QWORD *)v3 + 288LL))(
         v3,
         v2,
         &v7,
         8,
         0) == 8 )
  {
    v5 = v7;
    free_idcv((unsigned __int8 *)a2);
    *(_BYTE *)a2 = 9;
    *(_QWORD *)(a2 + 8) = v5;
  }
  else
  {
    return (unsigned int)throw_idc_exception((unsigned __int8 *)a2, "read error");
  }
  return v4;
}
