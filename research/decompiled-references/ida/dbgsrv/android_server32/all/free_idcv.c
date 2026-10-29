/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: free_idcv
// Address: 0x000449D4

//----- (000449D4) --------------------------------------------------------
int __fastcall free_idcv(unsigned __int8 *a1)
{
  int v2; // r0
  void *v3; // r0
  _DWORD *v4; // r5

  if ( !a1 )
  {
    if ( !under_debugger )
      interr(2656);
    __debugbreak();
  }
  v2 = *a1;
  if ( v2 == 5 )
  {
    sub_448A0(*((_DWORD *)a1 + 2), a1);
    goto LABEL_7;
  }
  if ( v2 != 7 )
  {
LABEL_7:
    v4 = a1 + 8;
    goto LABEL_8;
  }
  v3 = *((void **)a1 + 2);
  v4 = a1 + 8;
  if ( v3 )
  {
    *((_DWORD *)a1 + 3) = 0;
    qfree(v3);
    *((_DWORD *)a1 + 4) = 0;
    *((_DWORD *)a1 + 2) = 0;
  }
LABEL_8:
  *a1 = 2;
  *v4 = 0;
  return 0;
}
// E0550: using guessed type char under_debugger;
