/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000A670
// Address: 0x000000014000A670

//----- (000000014000A670) ----------------------------------------------------
void __fastcall sub_14000A670(__int64 a1)
{
  _QWORD *v2; // rcx

  v2 = *(_QWORD **)a1;
  if ( v2 )
  {
    if ( ((*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL) >= 0x1000 )
    {
      if ( (unsigned __int64)v2 - *(v2 - 1) - 8 > 0x1F )
        invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      v2 = (_QWORD *)*(v2 - 1);
    }
    j_j_free(v2);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
}
