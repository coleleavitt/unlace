/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5EB40
// Address: 0x000000000005EB40

//----- (000000000005EB40) ----------------------------------------------------
__int64 __fastcall sub_5EB40(__int64 a1, __int64 a2)
{
  int v2; // eax
  int v3; // ebp
  void (__fastcall *v4)(__int64, __int64, __int64, _QWORD, __int64); // r15
  __int64 v5; // rax
  void (__fastcall *v6)(__int64, __int64, __int64, __int64, __int64); // r15
  __int64 v7; // r14
  __int64 v8; // rax

  v2 = lreadbytes(*(_QWORD *)(a2 + 472), (void *)a1, 4, *(_BYTE *)(a2 + 616));
  if ( v2 < 0 )
  {
    v6 = *(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(a2 + 496);
    v7 = v2;
    v3 = 0;
    v8 = qlseek(*(_QWORD *)(a2 + 472), 0, 1);
    v6(a2, 19, 4, v7, v8);
  }
  else
  {
    v3 = lreadbytes(*(_QWORD *)(a2 + 472), (void *)(a1 + 4), 4, *(_BYTE *)(a2 + 616));
    if ( v3 < 0 )
    {
      v4 = *(void (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64))(a2 + 496);
      v5 = qlseek(*(_QWORD *)(a2 + 472), 0, 1);
      v4(a2, 19, 4, v3, v5);
    }
    LOBYTE(v3) = v3 >= 0;
  }
  return (unsigned int)v3;
}
