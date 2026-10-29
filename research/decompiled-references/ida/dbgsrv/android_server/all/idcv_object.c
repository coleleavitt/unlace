/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: idcv_object
// Address: 0x0000000000070374

//----- (0000000000070374) ----------------------------------------------------
__int64 __fastcall idcv_object(__int64 *a1, __int64 a2)
{
  void *v4; // x0
  __int64 v5; // x20
  int v6; // w1

  if ( !a1 )
    return set_qerrno(0x5FCu);
  free_idcv(a1);
  *(_BYTE *)a1 = 5;
  v4 = operator new(0x20u);
  v5 = (__int64)v4;
  if ( a2 )
    v6 = *(_DWORD *)(a2 + 28);
  else
    v6 = 0;
  sub_680D4((__int64)v4, v6);
  a1[1] = v5;
  return 0;
}
