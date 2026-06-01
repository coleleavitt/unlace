/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000654F0
// Address: 0x00000001000654F0

//----- (00000001000654F0) ----------------------------------------------------
__int64 __fastcall sub_1000654F0(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rax
  char v5; // [rsp+7h] [rbp-19h] BYREF

  v5 = *(_BYTE *)(a1 + 40);
  v2 = *(_QWORD *)(a1 + 8);
  v3 = sub_100064B70();
  *(_QWORD *)(a2 + 8) = (*(__int64 (__fastcall **)(__int64, __int64, char *, __int64, _QWORD))(*(_QWORD *)v3 + 296LL))(
                          v3,
                          v2,
                          &v5,
                          1,
                          0);
  return 0;
}
