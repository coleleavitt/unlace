/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140037230
// Address: 0x0000000140037230

//----- (0000000140037230) ----------------------------------------------------
void __fastcall sub_140037230(__int64 a1)
{
  unsigned __int64 v2; // rdx
  _QWORD *v3; // rcx

  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 > 0xF )
  {
    v3 = *(_QWORD **)a1;
    if ( v2 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)v3 - *(v3 - 1) - 8 > 0x1F )
        invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      v3 = (_QWORD *)*(v3 - 1);
    }
    j_j_free(v3);
  }
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 15;
  *(_BYTE *)a1 = 0;
}
