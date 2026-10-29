/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100073348
// Address: 0x0000000100073348

//----- (0000000100073348) ----------------------------------------------------
void __fastcall sub_100073348(__int64 a1)
{
  void *v2; // [xsp+0h] [xbp-30h] BYREF
  __int64 v3; // [xsp+8h] [xbp-28h]
  __int64 v4; // [xsp+10h] [xbp-20h]

  if ( *(_BYTE *)(a1 + 28) == 1 && *(_QWORD *)(a1 + 8) )
  {
    v2 = nullptr;
    v3 = 0;
    v4 = 0;
    sub_1000736D0((__int64 *)a1, (_QWORD **)&v2);
    add_undo_record();
    *(_QWORD *)(a1 + 8) = 0;
    if ( v2 )
    {
      v3 = 0;
      qfree(v2);
    }
  }
}
