/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_432CC0
// Address: 0x0000000000432CC0

//----- (0000000000432CC0) ----------------------------------------------------
__int64 __fastcall sub_432CC0(__int64 a1, const char *a2)
{
  void **v2; // rbp
  _BYTE *v4; // rax
  void *v5; // rsi
  char v6; // bp
  void **v8; // r12
  _BYTE *v9; // rax
  void *v10; // rsi
  void *v11; // rax
  void *v12; // rax

  if ( SLODWORD(qword_4C5728[0]) <= 0 )
    return 1610;
  v2 = *(void ***)(a1 + 200);
  *(_BYTE *)(a1 + 212) = -86;
  v4 = v2[1];
  v5 = *v2;
  if ( v2[2] < v4 + 1 )
  {
    v11 = sub_481540((__int64)v2, v5, (unsigned __int64)(v4 + 1), 1u);
    *v2 = v11;
    v5 = v11;
    v4 = v2[1];
  }
  v4[(_QWORD)v5] = -86;
  v2[1] = (char *)v2[1] + 1;
  ++*(_DWORD *)(a1 + 208);
  sub_432270(a1, a2, 0);
  v6 = qword_4C5728[0];
  if ( LOWORD(qword_4C5728[0]) <= 0xFu )
  {
    v8 = *(void ***)(a1 + 200);
    *(_BYTE *)(a1 + 212) = qword_4C5728[0];
    v9 = v8[1];
    v10 = *v8;
    if ( v8[2] < v9 + 1 )
    {
      v12 = sub_481540((__int64)v8, v10, (unsigned __int64)(v9 + 1), 1u);
      *v8 = v12;
      v10 = v12;
      v9 = v8[1];
    }
    v9[(_QWORD)v10] = v6;
    v8[1] = (char *)v8[1] + 1;
    ++*(_DWORD *)(a1 + 208);
  }
  else
  {
    sub_431490(a1, 0, qword_4C5728[0]);
  }
  return 0;
}
// 4C5728: using guessed type __int64 qword_4C5728[3];
