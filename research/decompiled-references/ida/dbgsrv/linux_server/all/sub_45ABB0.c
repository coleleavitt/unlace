/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45ABB0
// Address: 0x000000000045ABB0

//----- (000000000045ABB0) ----------------------------------------------------
__int64 __fastcall sub_45ABB0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 v4; // rax
  char v6; // [rsp+7h] [rbp-21h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 40);
  v3 = *(_QWORD *)(a1 + 8);
  v7 = __readfsqword(0x28u);
  v6 = v2;
  v4 = sub_45A880();
  *(_QWORD *)(a2 + 8) = (*(__int64 (__fastcall **)(__int64, __int64, char *, __int64, _QWORD))(*(_QWORD *)v4 + 296LL))(
                          v4,
                          v3,
                          &v6,
                          1,
                          0);
  return 0;
}
