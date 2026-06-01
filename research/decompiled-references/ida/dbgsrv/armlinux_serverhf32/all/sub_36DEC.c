/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_36DEC
// Address: 0x00036DEC

//----- (00036DEC) --------------------------------------------------------
int __fastcall sub_36DEC(int a1, int a2)
{
  unsigned int v3; // r1
  FILE *v4; // r1
  int v5; // r0
  _BYTE *v6; // r1
  int v8; // r7
  int v9; // r9
  unsigned int v10; // r8
  unsigned int v11; // r2
  __int64 v12; // r0
  __int64 ptr; // [sp+0h] [bp-14h] BYREF
  unsigned int v14; // [sp+8h] [bp-Ch]

  v3 = *(_DWORD *)(a1 + 8);
  if ( v3 < dword_D39D0 && (v4 = *(FILE **)(dword_D39CC + 4 * v3)) != nullptr )
  {
    ptr = 0;
    v14 = 0;
    v5 = sub_77C2C((int *)&ptr, v4);
    v6 = (_BYTE *)ptr;
    if ( v5 >= 0 )
    {
      v8 = HIDWORD(ptr);
      v9 = HIDWORD(ptr) - 1;
      v10 = HIDWORD(ptr) + 1;
      if ( !HIDWORD(ptr) )
      {
        v10 = 2;
        v8 = 1;
        v9 = 0;
      }
      if ( v10 > v14 )
      {
        v6 = sub_77EB0((int)&ptr, (void *)ptr, v10, 1u);
        LODWORD(ptr) = v6;
      }
      HIDWORD(ptr) = v10;
      v6[v8] = 0;
      *(_BYTE *)(ptr + v9) = 10;
      v11 = v14;
      v12 = ptr;
      *(_BYTE *)a2 = 7;
      *(_DWORD *)(a2 + 16) = v11;
      *(_QWORD *)(a2 + 8) = v12;
    }
    else
    {
      *(_DWORD *)(a2 + 8) = -1;
      if ( v6 )
      {
        HIDWORD(ptr) = 0;
        sub_77E08(v6);
      }
    }
  }
  else
  {
    *(_DWORD *)(a2 + 8) = -1;
  }
  return 0;
}
// D39CC: using guessed type int dword_D39CC;
// D39D0: using guessed type int dword_D39D0;
