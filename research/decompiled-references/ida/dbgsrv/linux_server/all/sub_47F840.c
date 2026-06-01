/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47F840
// Address: 0x000000000047F840

//----- (000000000047F840) ----------------------------------------------------
void __fastcall sub_47F840(__int64 a1)
{
  int v1; // eax

  *(_QWORD *)a1 = &off_4C4CD8;
  v1 = *(_DWORD *)(a1 + 20);
  if ( v1 == 1 )
  {
    sub_47F660(*(void **)(a1 + 24));
  }
  else if ( v1 != 2 )
  {
    if ( v1 )
      sub_47F250();
    sub_47F680(*(void **)(a1 + 24));
  }
}
// 4C4CD8: using guessed type _UNKNOWN *off_4C4CD8;
