/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3C0D4
// Address: 0x0003C0D4

//----- (0003C0D4) --------------------------------------------------------
int __fastcall sub_3C0D4(int a1, int a2, int a3)
{
  int v3; // r6
  int *v4; // r4
  int v5; // r5
  int *v6; // r0

  v3 = *(_DWORD *)(a1 + 196);
  v4 = *(int **)(*(_DWORD *)(a1 + 192) + 4 * (v3 - 1));
  if ( v3 )
    *(_DWORD *)(a1 + 196) = v3 - 1;
  if ( a3 )
  {
    v5 = 58;
    if ( (*v4 | 4) == 5 )
      v5 = sub_3CA3C(a1, v4, a2, a3);
    goto LABEL_7;
  }
  v5 = sub_3CA3C(a1, v4, a2, 0);
  if ( v4 )
  {
LABEL_7:
    v6 = sub_3B850(v4);
    operator delete(v6);
  }
  return set_qerrno(v5);
}
