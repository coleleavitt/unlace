/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_431490
// Address: 0x0000000000431490

//----- (0000000000431490) ----------------------------------------------------
_BYTE *__fastcall sub_431490(__int64 a1, unsigned __int8 a2, unsigned __int16 a3)
{
  char v4; // si
  void **v5; // r12
  char v6; // bp
  _BYTE *v7; // rax
  void *v8; // rsi
  _BYTE *result; // rax
  void *v10; // rax
  char v11; // bp
  char v12; // r13
  _BYTE *v13; // rax
  void *v14; // rsi
  void **v15; // rbp
  void *v16; // rsi
  void *v17; // rax
  void *v18; // rax

  v4 = a2 >> 3;
  v5 = *(void ***)(a1 + 200);
  if ( (unsigned __int8)a3 == a3 )
  {
    v11 = v4 + 0x80;
    v12 = a3;
    *(_BYTE *)(a1 + 212) = v4 + 0x80;
    v13 = v5[1];
    v14 = *v5;
    if ( v5[2] < v13 + 1 )
    {
      v17 = sub_481540((__int64)v5, v14, (unsigned __int64)(v13 + 1), 1u);
      *v5 = v17;
      v14 = v17;
      v13 = v5[1];
    }
    v13[(_QWORD)v14] = v11;
    v5[1] = (char *)v5[1] + 1;
    v15 = *(void ***)(a1 + 200);
    ++*(_DWORD *)(a1 + 208);
    result = v15[1];
    v16 = *v15;
    if ( v15[2] < result + 1 )
    {
      v18 = sub_481540((__int64)v15, v16, (unsigned __int64)(result + 1), 1u);
      *v15 = v18;
      v16 = v18;
      result = v15[1];
    }
    result[(_QWORD)v16] = v12;
    v15[1] = (char *)v15[1] + 1;
    ++*(_DWORD *)(a1 + 208);
  }
  else
  {
    v6 = v4 - 127;
    *(_BYTE *)(a1 + 212) = v4 - 127;
    v7 = v5[1];
    v8 = *v5;
    if ( v5[2] < v7 + 1 )
    {
      v10 = sub_481540((__int64)v5, v8, (unsigned __int64)(v7 + 1), 1u);
      *v5 = v10;
      v8 = v10;
      v7 = v5[1];
    }
    v7[(_QWORD)v8] = v6;
    v5[1] = (char *)v5[1] + 1;
    ++*(_DWORD *)(a1 + 208);
    return sub_4313E0(a1, a3);
  }
  return result;
}
