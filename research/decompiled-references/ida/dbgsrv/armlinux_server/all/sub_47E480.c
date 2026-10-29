/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47E480
// Address: 0x000000000047E480

//----- (000000000047E480) ----------------------------------------------------
bool __fastcall sub_47E480(_QWORD *a1, int a2)
{
  _BOOL4 v2; // w3
  __int64 *v3; // x4
  __int64 v4; // x1

  v2 = (unsigned int)(a2 - 1) <= 0x146;
  if ( (unsigned int)(a2 - 1) <= 0x146 )
  {
    v3 = &qword_4DB398[a2];
    v4 = (unsigned int)(*((_DWORD *)v3 + 1) + 1);
    *a1 = *(unsigned int *)v3;
    a1[1] = v4;
  }
  return v2;
}
// 4DB398: using guessed type __int64 qword_4DB398[];
