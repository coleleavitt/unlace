/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100065840
// Address: 0x0000000100065840

//----- (0000000100065840) ----------------------------------------------------
__int64 __fastcall sub_100065840(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // r12
  bool v5; // cf
  __int64 v6; // r12
  __int64 v7; // rax

  v2 = a1[1];
  v3 = a1[5];
  v4 = a1[6];
  v5 = v4 == 0;
  v6 = v4 - 1;
  if ( v5 )
    v6 = 0;
  v7 = sub_100064B70();
  *(_QWORD *)(a2 + 8) = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v7 + 296LL))(
                          v7,
                          v2,
                          v3,
                          v6,
                          0);
  return 0;
}
