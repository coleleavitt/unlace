/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100080980
// Address: 0x0000000100080980

//----- (0000000100080980) ----------------------------------------------------
__int64 __fastcall sub_100080980(__int64 a1)
{
  __int128 v2; // [rsp+0h] [rbp-30h] BYREF
  __int64 v3; // [rsp+10h] [rbp-20h]

  if ( *(_BYTE *)(a1 + 28) == 1 )
  {
    if ( *(_QWORD *)(a1 + 8) )
    {
      v2 = 0;
      v3 = 0;
      sub_100080E40((_QWORD *)a1, (void **)&v2);
      add_undo_record();
      *(_QWORD *)(a1 + 8) = 0;
      if ( (_QWORD)v2 )
      {
        *((_QWORD *)&v2 + 1) = 0;
        qfree((void *)v2);
      }
    }
  }
  return __stack_chk_guard;
}
