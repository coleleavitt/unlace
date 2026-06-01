/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_415B70
// Address: 0x00415B70

//----- (00415B70) --------------------------------------------------------
char __thiscall sub_415B70(int **this)
{
  int *v2; // edx
  int v3; // eax
  int *v5; // [esp+4h] [ebp-4h] BYREF

  v2 = *(this + 151);
  v3 = *v2;
  v5 = (int *)v3;
  if ( (int *)v3 != v2 )
  {
    do
    {
      ((void (__thiscall *)(int **, _DWORD))(*this)[77])(this, *(_DWORD *)(v3 + 20));
      sub_40B5E0((int *)&v5);
      v3 = (int)v5;
    }
    while ( v5 != *(this + 151) );
  }
  return 1;
}
