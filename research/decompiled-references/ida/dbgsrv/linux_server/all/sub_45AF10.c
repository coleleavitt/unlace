/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45AF10
// Address: 0x000000000045AF10

//----- (000000000045AF10) ----------------------------------------------------
__int64 __fastcall sub_45AF10(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // r13
  __int64 v4; // rbx
  __int64 v5; // rax

  v2 = a1[5];
  v3 = a1[1];
  v4 = (a1[6] == 0) + a1[6] - 1LL;
  v5 = sub_45A880();
  *(_QWORD *)(a2 + 8) = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v5 + 296LL))(
                          v5,
                          v3,
                          v2,
                          v4,
                          0);
  return 0;
}
