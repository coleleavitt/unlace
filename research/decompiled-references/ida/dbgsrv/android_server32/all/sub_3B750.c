/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3B750
// Address: 0x0003B750

//----- (0003B750) --------------------------------------------------------
int __fastcall sub_3B750(int a1)
{
  int v1; // r3
  int *v2; // r4
  int v3; // r5
  int *v4; // r0

  v1 = *(_DWORD *)(a1 + 196);
  v2 = *(int **)(*(_DWORD *)(a1 + 192) + 4 * (v1 - 1));
  if ( v1 )
    *(_DWORD *)(a1 + 196) = v1 - 1;
  v3 = sub_3CA3C(a1, v2, 0, 0);
  if ( v2 )
  {
    v4 = sub_3B850(v2);
    operator delete(v4);
  }
  return set_qerrno(v3);
}
