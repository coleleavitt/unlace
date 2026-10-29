/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: idcv_object
// Address: 0x0005ABF0

//----- (0005ABF0) --------------------------------------------------------
int __cdecl idcv_object(int a1, int a2)
{
  _DWORD *v2; // esi
  int v3; // eax

  if ( !a1 )
    return set_qerrno(1532);
  free_idcv((char *)a1);
  *(_BYTE *)a1 = 5;
  v2 = operator new(0x14u);
  if ( a2 )
    v3 = *(_DWORD *)(a2 + 16);
  else
    v3 = 0;
  sub_51020(v2, v3);
  *(_DWORD *)(a1 + 4) = v2;
  return 0;
}
