/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000198B0
// Address: 0x00000001000198B0

//----- (00000001000198B0) ----------------------------------------------------
__int64 __fastcall sub_1000198B0(__int64 a1, _DWORD *a2, _QWORD *a3, __int64 a4, __int64 a5)
{
  _QWORD *v7; // rax
  _QWORD *generic_linput; // rax
  void *v9; // r14
  unsigned int v10; // ebx

  v7 = operator new(0x28u);
  *v7 = off_1000A80A8;
  v7[3] = a5;
  v7[4] = a1;
  v7[1] = 0xFFFFFFFFLL;
  *((_DWORD *)v7 + 4) = 0;
  generic_linput = create_generic_linput((__int64)v7);
  if ( !generic_linput )
    return 0;
  v9 = generic_linput;
  v10 = sub_100019760(a1, a2, a3, a4, (__int64)generic_linput, a5);
  close_linput(v9);
  return v10;
}
// 1000A80A8: using guessed type __int64 (__fastcall *off_1000A80A8[3])();
