/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4248E0
// Address: 0x004248E0

//----- (004248E0) --------------------------------------------------------
int __stdcall sub_4248E0(int a1, int a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // eax

  if ( !a1 )
    return sub_45CC20(1532);
  sub_423B70(a1);
  *(_BYTE *)a1 = 5;
  v3 = sub_4627C2(0x10u);
  if ( v3 )
  {
    if ( a2 )
      v4 = sub_426170(v3, *(_DWORD *)(a2 + 12));
    else
      v4 = sub_426170(v3, 0);
  }
  else
  {
    v4 = nullptr;
  }
  *(_DWORD *)(a1 + 8) = v4;
  return 0;
}
