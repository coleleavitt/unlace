/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001EC60
// Address: 0x000000014001EC60

//----- (000000014001EC60) ----------------------------------------------------
__int64 __fastcall sub_14001EC60(__int64 a1, __int64 a2)
{
  char *v4; // rdx
  _BOOL8 v5; // rcx

  if ( *(_QWORD *)(a2 + 8) == 3 )
  {
    v4 = (char *)Str1;
    if ( *(_QWORD *)(a1 + 48) )
      v4 = *(char **)(a1 + 40);
    v5 = (unsigned int)sub_14002A890(a1, v4, (char *)(a1 + 64), 0) == 0;
    *(_QWORD *)(a2 + 8) = v5;
    return 0;
  }
  else
  {
    sub_140063F70(0, "setattr");
    return sub_1400640B0(0x38u);
  }
}
