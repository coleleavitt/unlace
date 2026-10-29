/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140046530
// Address: 0x0000000140046530

//----- (0000000140046530) ----------------------------------------------------
__int64 __fastcall sub_140046530(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // r9

  v2 = a1[6];
  v4 = a1[5];
  v5 = a1[1];
  v6 = sub_140040170();
  v7 = v2 - 1;
  if ( !v2 )
    v7 = 0;
  *(_QWORD *)(a2 + 8) = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v6 + 288LL))(
                          v6,
                          v5,
                          v4,
                          v7,
                          0);
  return 0;
}
