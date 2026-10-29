/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4161F0
// Address: 0x004161F0

//----- (004161F0) --------------------------------------------------------
int *__thiscall sub_4161F0(int **this, char a2)
{
  int *result; // eax
  int v4; // esi
  void *v5; // edi
  int *v6; // [esp+8h] [ebp-4h] BYREF

  result = *(this + 151);
  v4 = *result;
  v6 = (int *)v4;
  if ( (int *)v4 != result )
  {
    do
    {
      v5 = *(void **)(v4 + 20);
      if ( a2 )
      {
        ResumeThread(*(HANDLE *)(v4 + 20));
      }
      else
      {
        for ( ; *(int *)(v4 + 40) > 0; --*(_DWORD *)(v4 + 40) )
          ResumeThread(v5);
      }
      result = sub_40B5E0((int *)&v6);
      v4 = (int)v6;
    }
    while ( v6 != *(this + 151) );
  }
  return result;
}
