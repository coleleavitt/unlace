/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140046120
// Address: 0x0000000140046120

//----- (0000000140046120) ----------------------------------------------------
__int64 __fastcall sub_140046120(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  char v6; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  v6 = *(_BYTE *)(a1 + 40);
  v4 = sub_140040170();
  *(_QWORD *)(a2 + 8) = (*(__int64 (__fastcall **)(__int64, __int64, char *, __int64, _QWORD))(*(_QWORD *)v4 + 288LL))(
                          v4,
                          v3,
                          &v6,
                          1,
                          0);
  return 0;
}
