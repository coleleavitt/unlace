/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4FBA0
// Address: 0x000000000004FBA0

//----- (000000000004FBA0) ----------------------------------------------------
__int64 __fastcall sub_4FBA0(__int64 a1, __int64 a2)
{
  unsigned int v2; // r15d
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 v5; // r14
  int v6; // ebp
  void (__fastcall *v7)(__int64, __int64, __int64, _QWORD, __int64); // r15
  __int64 v8; // rax
  unsigned int v10; // [rsp+Ch] [rbp-2Ch] BYREF
  unsigned __int64 v11; // [rsp+10h] [rbp-28h]

  v11 = __readfsqword(0x28u);
  v2 = 0;
  v3 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
  v4 = *(_QWORD *)(a1 + 480);
  v5 = v3 - v4;
  if ( qlseek(*(_QWORD *)(a1 + 472), v4 + a2, 0) != -1 )
  {
    v6 = lreadbytes(*(_QWORD *)(a1 + 472), &v10, 4, *(_BYTE *)(a1 + 616));
    if ( v6 < 0 )
    {
      v7 = *(void (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64))(a1 + 496);
      v8 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
      v7(a1, 19, 4, v6, v8);
    }
    v2 = 0;
    if ( v6 >= 0 )
      v2 = v10;
  }
  qlseek(*(_QWORD *)(a1 + 472), *(_QWORD *)(a1 + 480) + v5, 0);
  return v2;
}
