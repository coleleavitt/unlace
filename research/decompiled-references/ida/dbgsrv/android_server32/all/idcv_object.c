/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: idcv_object
// Address: 0x000455A0

//----- (000455A0) --------------------------------------------------------
int __fastcall idcv_object(int a1, int a2)
{
  _DWORD *v4; // r0
  _DWORD *v5; // r5
  int v6; // r1

  if ( !a1 )
    return set_qerrno(1532);
  free_idcv((unsigned __int8 *)a1);
  *(_BYTE *)a1 = 5;
  v4 = operator new(0x14u);
  v5 = v4;
  v6 = 0;
  if ( a2 )
    v6 = *(_DWORD *)(a2 + 16);
  sub_3F83C(v4, v6);
  *(_DWORD *)(a1 + 8) = v5;
  return 0;
}
