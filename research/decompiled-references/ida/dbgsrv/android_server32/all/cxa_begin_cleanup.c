/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_begin_cleanup
// Address: 0x00090048

//----- (00090048) --------------------------------------------------------
int __fastcall _cxa_begin_cleanup(_QWORD *a1)
{
  int v2; // r0
  _QWORD *v3; // r1
  int v4; // r2

  v2 = ((int (*)(void))_cxa_get_globals)();
  v3 = a1 - 5;
  if ( *a1 >> 8 == 0x434C4E47432B2BLL )
  {
    v4 = *((_DWORD *)a1 - 2);
    if ( !v4 )
    {
      *((_DWORD *)a1 - 3) = *(_DWORD *)(v2 + 8);
      *(_DWORD *)(v2 + 8) = v3;
    }
    *((_DWORD *)a1 - 2) = v4 + 1;
  }
  else
  {
    if ( *(_DWORD *)(v2 + 8) )
      std::terminate();
    *(_DWORD *)(v2 + 8) = v3;
  }
  return 1;
}
