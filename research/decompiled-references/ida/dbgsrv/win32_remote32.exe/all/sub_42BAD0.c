/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42BAD0
// Address: 0x0042BAD0

//----- (0042BAD0) --------------------------------------------------------
int __stdcall sub_42BAD0(int a1)
{
  int v1; // edx
  void ***v2; // esi
  int v4; // edi

  v1 = *(_DWORD *)(a1 + 188);
  v2 = *(void ****)(*(_DWORD *)(a1 + 184) + 4 * v1 - 4);
  if ( v1 )
    *(_DWORD *)(a1 + 188) = v1 - 1;
  if ( *v2 == (void **)1 || *v2 == (void **)5 )
  {
    v4 = sub_42D890(a1, v2, 0, -1);
    sub_42C5A0(v2, 1);
    return sub_45CC20(v4);
  }
  else
  {
    sub_42C5A0(v2, 1);
    return sub_45CC20(58);
  }
}
