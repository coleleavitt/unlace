/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_53B10
// Address: 0x0000000000053B10

//----- (0000000000053B10) ----------------------------------------------------
__int64 __fastcall sub_53B10(__int64 a1, void *a2)
{
  __int64 v2; // rbx
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 v5; // r14
  int v6; // ebx
  void (__fastcall *v8)(__int64, __int64, __int64, _QWORD, __int64); // r15
  __int64 v9; // rax
  int v10; // [rsp+Ch] [rbp-2Ch] BYREF
  unsigned __int64 v11; // [rsp+10h] [rbp-28h]

  v11 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 488) - *(_QWORD *)(a1 + 480);
  v3 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
  v4 = *(_QWORD *)(a1 + 480);
  v5 = v3 - v4;
  if ( qlseek(*(_QWORD *)(a1 + 472), v2 + v4 - 4, 0) == -1
    || qlread(*(_QWORD *)(a1 + 472), &v10, 4) != 4
    || v10 != 541413968
    || qlseek(*(_QWORD *)(a1 + 472), v2 - 8, 0) == -1 )
  {
    v6 = 0;
  }
  else
  {
    v6 = lreadbytes(*(_QWORD *)(a1 + 472), a2, 4, *(_BYTE *)(a1 + 616));
    if ( v6 < 0 )
    {
      v8 = *(void (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64))(a1 + 496);
      v9 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
      v8(a1, 19, 4, v6, v9);
    }
    LOBYTE(v6) = v6 >= 0;
  }
  qlseek(*(_QWORD *)(a1 + 472), *(_QWORD *)(a1 + 480) + v5, 0);
  return (unsigned int)v6;
}
