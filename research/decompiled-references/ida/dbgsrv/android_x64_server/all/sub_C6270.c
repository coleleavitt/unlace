/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C6270
// Address: 0x00000000000C6270

//----- (00000000000C6270) ----------------------------------------------------
__int64 __fastcall sub_C6270(__int64 a1, int a2, int a3)
{
  __int64 v4; // rax
  __int64 v6; // [rsp+0h] [rbp-28h] BYREF
  _QWORD v7[4]; // [rsp+8h] [rbp-20h] BYREF

  v7[1] = __readfsqword(0x28u);
  v6 = a1 + 24;
  sub_C8810(v7, a1 + 24, &v6);
  v4 = v7[0];
  *(_DWORD *)(v7[0] + 16LL) = a2;
  *(_DWORD *)(v4 + 28) = a3;
  return v4 + 16;
}
