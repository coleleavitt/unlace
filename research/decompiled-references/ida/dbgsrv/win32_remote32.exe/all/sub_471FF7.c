/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_471FF7
// Address: 0x00471FF7

//----- (00471FF7) --------------------------------------------------------
bool __cdecl sub_471FF7(LPCCH lpMultiByteStr, LPCCH a2)
{
  int v2; // edi
  int v3; // eax
  WCHAR *v4; // eax
  __m128i *v5; // esi
  int v6; // eax
  bool v7; // bl
  __m128i *v9; // eax
  WCHAR *v10; // [esp-8h] [ebp-14h]

  v2 = sub_47B3EB(0, 0, lpMultiByteStr, -1, nullptr, 0);
  if ( !v2 )
    goto LABEL_2;
  if ( a2 )
  {
    v3 = sub_47B3EB(0, 0, a2, -1, nullptr, 0);
    if ( !v3 )
    {
LABEL_2:
      v2 = 0;
      *sub_46B984() = 42;
      goto LABEL_6;
    }
    v2 += v3;
  }
LABEL_6:
  v4 = (WCHAR *)sub_4791B9(v2, 2u);
  v5 = (__m128i *)v4;
  if ( v4 )
  {
    v6 = sub_47B3EB(0, 0, lpMultiByteStr, -1, v4, v2);
    if ( v6 )
    {
      if ( !a2 || (v10 = (WCHAR *)v5 + v6, *(v10 - 1) = 61, sub_47B3EB(0, 0, a2, -1, v10, v2 - v6)) )
      {
        v9 = v5;
        v5 = nullptr;
        v7 = sub_47BF01(v9, 0) == 0;
        goto LABEL_10;
      }
    }
    *sub_46B984() = 42;
  }
  v7 = 0;
LABEL_10:
  sub_479216(v5);
  return v7;
}
