/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_481910
// Address: 0x0000000000481910

//----- (0000000000481910) ----------------------------------------------------
__int64 __fastcall sub_481910(__int64 a1)
{
  __int64 v1; // rax
  void (*v2)(void); // rbx
  void *v3; // rbx

  while ( 1 )
  {
    v3 = qword_4C94F8;
    if ( !qword_4C94F8 )
      break;
    v1 = *((_QWORD *)qword_4C94F8 + 1);
    if ( !v1 )
    {
      if ( *(_QWORD *)qword_4C94F8 )
        j__free(*(void **)qword_4C94F8);
      j__free(v3);
      break;
    }
    v2 = *(void (**)(void))(*(_QWORD *)qword_4C94F8 + 8 * v1 - 8);
    sub_481890((__int64)v2);
    v2();
  }
  qword_4C94F8 = nullptr;
  if ( *(_BYTE *)(a1 + 28) )
    exit(*(_DWORD *)(a1 + 24));
  return 0;
}
