/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C4980
// Address: 0x00000000000C4980

//----- (00000000000C4980) ----------------------------------------------------
__int64 __fastcall sub_C4980(__int64 a1)
{
  _QWORD *v2; // rbx
  void *v3; // rdi
  __int64 v4; // rax
  void (__fastcall *v5)(_QWORD); // rbx

  while ( 1 )
  {
    v2 = qword_158B48;
    if ( !qword_158B48 )
      break;
    v3 = *(void **)qword_158B48;
    v4 = *((_QWORD *)qword_158B48 + 1);
    if ( !v4 )
    {
      if ( v3 )
      {
        *((_QWORD *)qword_158B48 + 1) = 0;
        qfree(v3);
        *v2 = 0;
        v2[2] = 0;
      }
      qfree(v2);
      break;
    }
    v5 = *((void (__fastcall **)(_QWORD))v3 + v4 - 1);
    del_qatexit((__int64)v5);
    v5(v5);
  }
  qword_158B48 = nullptr;
  if ( *(_BYTE *)(a1 + 28) )
    exit(*(_DWORD *)(a1 + 24));
  return 0;
}
