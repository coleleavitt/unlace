/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3B2A4
// Address: 0x0003B2A4

//----- (0003B2A4) --------------------------------------------------------
int __fastcall sub_3B2A4(int a1)
{
  int v2; // r7
  __int64 v3; // kr00_8
  int v4; // r2
  int v5; // r3
  int v6; // r6
  int v7; // r4
  size_t v8; // r9
  void *v9; // r8
  int v10; // r3
  void *v11; // r0
  int v12; // r6

  v2 = sub_3B128(a1, 2);
  if ( !v2 )
  {
    v3 = *(_QWORD *)(a1 + 180);
    v4 = *(unsigned __int16 *)(v3 + 2 * (HIDWORD(v3) + 0x7FFFFFFF));
    if ( HIDWORD(v3) )
      *(_DWORD *)(a1 + 184) = HIDWORD(v3) - 1;
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 192) + 4 * (*(_DWORD *)(a1 + 196) + 0x3FFFFFFF)) + 12) = v4;
  }
  v5 = *(_DWORD *)(a1 + 96);
  v6 = *(_DWORD *)(a1 + 92);
  v7 = 12 * v5 - 12;
  v8 = *(_DWORD *)(v6 + v7 + 4);
  if ( !v8 )
  {
    v9 = nullptr;
    if ( !v5 )
      return v2;
    goto LABEL_7;
  }
  v9 = sub_77E84(*(_DWORD *)(v6 + v7 + 4));
  memcpy(v9, *(const void **)(v6 + v7), v8);
  v5 = *(_DWORD *)(a1 + 96);
  if ( v5 )
  {
    v6 = *(_DWORD *)(a1 + 92);
LABEL_7:
    v10 = v5 - 1;
    *(_DWORD *)(a1 + 96) = v10;
    v10 *= 12;
    v11 = *(void **)(v6 + v10);
    v12 = v6 + v10;
    if ( v11 )
    {
      *(_DWORD *)(v12 + 4) = 0;
      sub_77E08(v11);
    }
  }
  if ( v9 )
    sub_77E08(v9);
  return v2;
}
