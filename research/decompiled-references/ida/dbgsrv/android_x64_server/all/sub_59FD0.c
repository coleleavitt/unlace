/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_59FD0
// Address: 0x0000000000059FD0

//----- (0000000000059FD0) ----------------------------------------------------
__int64 __fastcall sub_59FD0(__int64 a1, _OWORD *a2)
{
  __int64 v2; // rbx
  signed __int64 v3; // r14
  int v4; // eax
  __int64 v5; // rbx
  signed __int64 v6; // r14
  int v7; // ebp
  void (__fastcall *v8)(__int64, __int64, signed __int64, _QWORD, __int64); // r12
  __int64 v9; // rax
  void (__fastcall *v10)(__int64, __int64, signed __int64, __int64, __int64); // r12
  __int64 v11; // r15
  __int64 v12; // rax

  *a2 = 0;
  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(int *)(v2 + 436);
  v4 = lreadbytes(*(_QWORD *)(v2 + 472), a2, v3, *(_BYTE *)(v2 + 616));
  if ( v4 < 0 )
  {
    v10 = *(void (__fastcall **)(__int64, __int64, signed __int64, __int64, __int64))(v2 + 496);
    v11 = v4;
    v7 = 0;
    v12 = qlseek(*(_QWORD *)(v2 + 472), 0, 1);
    v10(v2, 19, v3, v11, v12);
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 8);
    v6 = *(int *)(v5 + 424);
    v7 = lreadbytes(*(_QWORD *)(v5 + 472), (char *)a2 + 8, v6, *(_BYTE *)(v5 + 616));
    if ( v7 < 0 )
    {
      v8 = *(void (__fastcall **)(__int64, __int64, signed __int64, _QWORD, __int64))(v5 + 496);
      v9 = qlseek(*(_QWORD *)(v5 + 472), 0, 1);
      v8(v5, 19, v6, v7, v9);
    }
    LOBYTE(v7) = v7 >= 0;
  }
  return (unsigned int)v7;
}
