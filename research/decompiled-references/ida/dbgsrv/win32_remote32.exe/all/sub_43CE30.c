/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43CE30
// Address: 0x0043CE30

//----- (0043CE30) --------------------------------------------------------
int __thiscall sub_43CE30(int **this, int a2)
{
  int *v3; // edx
  int result; // eax
  int *v5; // [esp+Ch] [ebp-4h] BYREF

  v3 = *(this + 62);
  result = *v3;
  v5 = (int *)result;
  if ( (int *)result != v3 )
  {
    do
    {
      ((void (__stdcall *)(int **, int, int))(*this)[42])(this, result, a2);
      sub_40B5E0((int *)&v5);
      result = (int)v5;
    }
    while ( v5 != *(this + 62) );
  }
  return result;
}
