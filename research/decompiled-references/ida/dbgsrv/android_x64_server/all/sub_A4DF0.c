/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A4DF0
// Address: 0x00000000000A4DF0

//----- (00000000000A4DF0) ----------------------------------------------------
__int64 __fastcall sub_A4DF0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax

  v2 = a1[1];
  v3 = a1[5];
  v4 = a1[6];
  v5 = v4 - 1;
  if ( !v4 )
    v5 = 0;
  v6 = sub_A4110();
  *(_QWORD *)(a2 + 8) = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v6 + 296LL))(
                          v6,
                          v2,
                          v3,
                          v5,
                          0);
  return 0;
}
