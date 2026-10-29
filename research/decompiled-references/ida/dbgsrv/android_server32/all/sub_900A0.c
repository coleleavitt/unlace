/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_900A0
// Address: 0x000900A0

//----- (000900A0) --------------------------------------------------------
int sub_900A0()
{
  _DWORD *v0; // r1
  int v1; // r2
  int result; // r0
  int v3; // r3
  _DWORD *v4; // r2
  int v5; // t1

  v0 = (_DWORD *)(((int (*)(void))_cxa_get_globals)() + 8);
  v1 = *v0;
  if ( !*v0 )
    std::terminate();
  result = v1 + 40;
  if ( *(_QWORD *)(v1 + 40) >> 8 == 0x434C4E47432B2BLL )
  {
    v3 = *(_DWORD *)(v1 + 32) - 1;
    *(_DWORD *)(v1 + 32) = v3;
    if ( v3 )
      return result;
    v5 = *(_DWORD *)(v1 + 28);
    v4 = (_DWORD *)(v1 + 28);
    *v0 = v5;
  }
  else
  {
    v4 = v0;
  }
  *v4 = 0;
  return result;
}
