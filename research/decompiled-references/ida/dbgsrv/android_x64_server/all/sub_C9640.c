/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C9640
// Address: 0x00000000000C9640

//----- (00000000000C9640) ----------------------------------------------------
unsigned __int64 __fastcall sub_C9640(__int64 a1)
{
  void *ptr[2]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v3; // [rsp+10h] [rbp-18h]
  unsigned __int64 v4; // [rsp+18h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 28) )
  {
    if ( *(_QWORD *)(a1 + 8) )
    {
      *(_OWORD *)ptr = 0;
      v3 = 0;
      sub_CB3A0((_QWORD *)a1, (char **)ptr);
      add_undo_record();
      *(_QWORD *)(a1 + 8) = 0;
      if ( ptr[0] )
      {
        ptr[1] = nullptr;
        qfree(ptr[0]);
        ptr[0] = nullptr;
        v3 = 0;
      }
    }
  }
  return __readfsqword(0x28u);
}
