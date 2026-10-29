/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_416D20
// Address: 0x00416D20

//----- (00416D20) --------------------------------------------------------
int *__thiscall sub_416D20(int **this, char a2)
{
  int *result; // eax
  int v4; // esi
  void *v5; // edi
  DWORD v6; // eax
  int *v7; // [esp+8h] [ebp-4h] BYREF

  result = *(this + 151);
  v4 = *result;
  v7 = (int *)v4;
  if ( (int *)v4 != result )
  {
    do
    {
      v5 = *(void **)(v4 + 20);
      v6 = SuspendThread(v5);
      if ( !a2 )
      {
        if ( v6 != -1 )
          ++*(_DWORD *)(v4 + 40);
        if ( SuspendThread(v5) != -1 )
          ++*(_DWORD *)(v4 + 40);
      }
      result = sub_40B5E0((int *)&v7);
      v4 = (int)v7;
    }
    while ( v7 != *(this + 151) );
  }
  return result;
}
