/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4920C0
// Address: 0x00000000004920C0

//----- (00000000004920C0) ----------------------------------------------------
__int64 __fastcall sub_4920C0(__int64 a1)
{
  void *v2; // x0
  __int64 v3; // x1
  void (__fastcall *v4)(_BOOL8); // x19
  _BOOL8 v5; // x0
  void *v6; // x19
  int v7; // w0

  while ( 1 )
  {
    v6 = (void *)qword_524500;
    if ( !qword_524500 )
      break;
    v2 = *(void **)qword_524500;
    v3 = *(_QWORD *)(qword_524500 + 8);
    if ( !v3 )
    {
      if ( v2 )
        j__free(v2);
      j__free(v6);
      break;
    }
    v4 = *((void (__fastcall **)(_BOOL8))v2 + v3 - 1);
    v5 = sub_492038((__int64)v4);
    v4(v5);
  }
  v7 = *(unsigned __int8 *)(a1 + 28);
  qword_524500 = 0;
  if ( v7 )
    exit(*(_DWORD *)(a1 + 24));
  return 0;
}
// 523500: using guessed type __int64 qword_523500[512];
// 524500: using guessed type __int64 qword_524500;
