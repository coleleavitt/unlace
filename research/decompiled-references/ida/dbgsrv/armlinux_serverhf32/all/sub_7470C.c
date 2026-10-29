/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7470C
// Address: 0x0007470C

//----- (0007470C) --------------------------------------------------------
void __fastcall sub_7470C(int a1)
{
  _DWORD *v1; // r3
  signed int v2; // r8
  __int64 v3; // r6
  unsigned int v4; // r2
  bool v5; // zf
  unsigned int v7; // r6
  void *v8; // r0
  void *v9; // r2
  _BOOL4 v10; // r1

  v1 = *(_DWORD **)(a1 + 8);
  *(_QWORD *)(a1 + 24) = 0;
  v2 = v1[2];
  HIDWORD(v3) = v1[3];
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  LODWORD(v3) = v2;
  *(_QWORD *)(a1 + 16) = v3;
  v4 = v1[4];
  *(_DWORD *)(a1 + 40) = v4;
  if ( v4 )
  {
    if ( v3 < 1 )
      goto LABEL_6;
    v5 = HIDWORD(v3) == 0;
    if ( !HIDWORD(v3) )
      v5 = 1;
    if ( v5 )
    {
      v7 = ((unsigned int)((__int64)(__PAIR64__(HIDWORD(v3), v2) + v4 - 1) / v4) + 7) >> 3;
      *(_DWORD *)(a1 + 36) = sub_77D94(v2);
      v8 = sub_77D94(v7);
      v9 = *(void **)(a1 + 36);
      *(_DWORD *)(a1 + 32) = v8;
      v10 = v9 == nullptr;
      if ( !v8 )
        v10 = 1;
      if ( v10 )
      {
        sub_77E08(v9);
        *(_DWORD *)(a1 + 36) = 0;
        sub_77E08(*(void **)(a1 + 32));
        *(_DWORD *)(a1 + 32) = 0;
        *(_DWORD *)(a1 + 40) = 0;
      }
      else
      {
        j_memset(v8, 0, v7);
      }
    }
    else
    {
LABEL_6:
      *(_DWORD *)(a1 + 40) = 0;
    }
  }
}
