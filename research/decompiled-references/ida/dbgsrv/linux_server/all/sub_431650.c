/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_431650
// Address: 0x0000000000431650

//----- (0000000000431650) ----------------------------------------------------
__int64 __fastcall sub_431650(__int64 a1)
{
  void **v1; // rbp
  _BYTE *v2; // rax
  void *v3; // rsi
  unsigned __int16 v4; // bp
  void **v6; // r12
  _BYTE *v7; // rax
  void *v8; // rsi
  void *v9; // rax
  void *v10; // rax

  if ( SHIDWORD(qword_4C5728[1]) <= 0 )
    return 1612;
  v1 = *(void ***)(a1 + 200);
  *(_BYTE *)(a1 + 212) = -44;
  v2 = v1[1];
  v3 = *v1;
  if ( v1[2] < v2 + 1 )
  {
    v9 = sub_481540((__int64)v1, v3, (unsigned __int64)(v2 + 1), 1u);
    *v1 = v9;
    v3 = v9;
    v2 = v1[1];
  }
  v2[(_QWORD)v3] = -44;
  v1[1] = (char *)v1[1] + 1;
  v4 = WORD2(qword_4C5728[1]);
  ++*(_DWORD *)(a1 + 208);
  if ( v4 <= 0xFu )
  {
    v6 = *(void ***)(a1 + 200);
    *(_BYTE *)(a1 + 212) = v4;
    v7 = v6[1];
    v8 = *v6;
    if ( v6[2] < v7 + 1 )
    {
      v10 = sub_481540((__int64)v6, v8, (unsigned __int64)(v7 + 1), 1u);
      *v6 = v10;
      v8 = v10;
      v7 = v6[1];
    }
    v7[(_QWORD)v8] = v4;
    v6[1] = (char *)v6[1] + 1;
    ++*(_DWORD *)(a1 + 208);
  }
  else
  {
    sub_431490(a1, 0, v4);
  }
  return 0;
}
// 4C5728: using guessed type __int64 qword_4C5728[3];
