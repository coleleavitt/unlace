/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: idcv_object
// Address: 0x0000000000074210

//----- (0000000000074210) ----------------------------------------------------
__int64 __fastcall idcv_object(__int64 a1, __int64 a2, double a3, __m128 a4)
{
  void *v4; // rax
  void *v5; // r14
  int v6; // esi

  if ( !a1 )
    return set_qerrno(0x5FCu);
  free_idcv((char *)a1, a3, a4);
  *(_BYTE *)a1 = 5;
  v4 = operator new(0x20u);
  v5 = v4;
  if ( a2 )
    v6 = *(_DWORD *)(a2 + 28);
  else
    v6 = 0;
  sub_6B170((__int64)v4, v6);
  *(_QWORD *)(a1 + 8) = v5;
  return 0;
}
