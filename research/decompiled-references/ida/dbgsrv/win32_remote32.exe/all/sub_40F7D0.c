/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40F7D0
// Address: 0x0040F7D0

//----- (0040F7D0) --------------------------------------------------------
int __thiscall sub_40F7D0(int **this, int a2)
{
  int *v3; // edx
  int v4; // eax
  int *v6; // [esp+4h] [ebp-4h] BYREF

  v3 = *(this + 151);
  v4 = *v3;
  v6 = (int *)v4;
  if ( (int *)v4 != v3 )
  {
    do
    {
      if ( *(_DWORD *)(v4 + 16) != a2 )
        ResumeThread(*(HANDLE *)(v4 + 20));
      sub_40B5E0((int *)&v6);
      v4 = (int)v6;
    }
    while ( v6 != *(this + 151) );
  }
  return 1;
}
