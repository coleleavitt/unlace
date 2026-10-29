/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4324A0
// Address: 0x00000000004324A0

//----- (00000000004324A0) ----------------------------------------------------
_BYTE *__fastcall sub_4324A0(__int64 a1, char a2, unsigned __int16 a3)
{
  void **v5; // rbp
  char v6; // r12
  _BYTE *v7; // rax
  void *v8; // rsi
  _BYTE *result; // rax
  void *v10; // rax
  _BYTE *v11; // rax
  char v12; // r13
  void *v13; // rsi
  void **v14; // rbp
  void *v15; // rsi
  void *v16; // rax
  void *v17; // rax

  v5 = *(void ***)(a1 + 200);
  if ( (unsigned __int8)a3 == a3 )
  {
    *(_BYTE *)(a1 + 212) = a2;
    v11 = v5[1];
    v12 = a3;
    v13 = *v5;
    if ( v5[2] < v11 + 1 )
    {
      v16 = sub_481540((__int64)v5, v13, (unsigned __int64)(v11 + 1), 1u);
      *v5 = v16;
      v13 = v16;
      v11 = v5[1];
    }
    v11[(_QWORD)v13] = a2;
    v5[1] = (char *)v5[1] + 1;
    v14 = *(void ***)(a1 + 200);
    ++*(_DWORD *)(a1 + 208);
    result = v14[1];
    v15 = *v14;
    if ( v14[2] < result + 1 )
    {
      v17 = sub_481540((__int64)v14, v15, (unsigned __int64)(result + 1), 1u);
      *v14 = v17;
      v15 = v17;
      result = v14[1];
    }
    result[(_QWORD)v15] = v12;
    v14[1] = (char *)v14[1] + 1;
    ++*(_DWORD *)(a1 + 208);
  }
  else
  {
    v6 = a2 + 1;
    *(_BYTE *)(a1 + 212) = a2 + 1;
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
