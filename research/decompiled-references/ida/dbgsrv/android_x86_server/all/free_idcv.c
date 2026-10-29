/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: free_idcv
// Address: 0x00059880

//----- (00059880) --------------------------------------------------------
void __cdecl free_idcv(char *a1)
{
  int v1; // eax
  void *v2; // eax

  if ( !a1 )
  {
    if ( !(_BYTE)under_debugger )
      interr(2656);
    BUG();
  }
  v1 = *a1;
  if ( v1 == 5 )
  {
    sub_59680(*((void **)a1 + 1), a1);
  }
  else if ( v1 == 7 )
  {
    v2 = *((void **)a1 + 1);
    if ( v2 )
    {
      *((_DWORD *)a1 + 2) = 0;
      qfree(v2);
      *((_DWORD *)a1 + 1) = 0;
      *((_DWORD *)a1 + 3) = 0;
    }
  }
  *a1 = 2;
  *((_DWORD *)a1 + 1) = 0;
}
// 13E34C: using guessed type int under_debugger;
