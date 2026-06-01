/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: del_idcv_attr
// Address: 0x000465D8

//----- (000465D8) --------------------------------------------------------
int __fastcall del_idcv_attr(int a1, char *a2)
{
  int v4; // r0
  int v5; // r4
  void *v7[3]; // [sp+4h] [bp-10h] BYREF

  if ( !a1 || *(_BYTE *)a1 != 5 )
    return set_qerrno(1532);
  sub_1B09C((int)v7, a2);
  v4 = sub_4DF18(*(_DWORD *)(a1 + 8), (int)v7);
  v5 = 0;
  if ( !v4 )
  {
    set_error_string(0, a2);
    v5 = set_qerrno(1538);
  }
  if ( v7[0] )
  {
    v7[1] = nullptr;
    qfree(v7[0]);
    v7[2] = nullptr;
    v7[0] = nullptr;
  }
  return v5;
}
