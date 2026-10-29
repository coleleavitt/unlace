/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A4A70
// Address: 0x00000000000A4A70

//----- (00000000000A4A70) ----------------------------------------------------
__int64 __fastcall sub_A4A70(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // rax
  char v5; // [rsp+7h] [rbp-21h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  v5 = *(_BYTE *)(a1 + 40);
  v2 = *(_QWORD *)(a1 + 8);
  v3 = sub_A4110();
  *(_QWORD *)(a2 + 8) = (*(__int64 (__fastcall **)(__int64, __int64, char *, __int64, _QWORD))(*(_QWORD *)v3 + 296LL))(
                          v3,
                          v2,
                          &v5,
                          1,
                          0);
  return 0;
}
