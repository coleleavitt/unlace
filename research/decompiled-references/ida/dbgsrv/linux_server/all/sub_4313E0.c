/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4313E0
// Address: 0x00000000004313E0

//----- (00000000004313E0) ----------------------------------------------------
_BYTE *__fastcall sub_4313E0(__int64 a1, unsigned __int16 a2)
{
  __int64 v3; // r12
  __int64 v4; // rax
  void *v5; // rsi
  __int16 v6; // bp
  void **v7; // r12
  _BYTE *result; // rax
  void *v9; // rsi
  void *v10; // rax
  void *v11; // rax

  v3 = *(_QWORD *)(a1 + 200);
  v4 = *(_QWORD *)(v3 + 8);
  v5 = *(void **)v3;
  if ( *(_QWORD *)(v3 + 16) < (unsigned __int64)(v4 + 1) )
  {
    v10 = sub_481540(*(_QWORD *)(a1 + 200), v5, v4 + 1, 1u);
    *(_QWORD *)v3 = v10;
    v5 = v10;
    v4 = *(_QWORD *)(v3 + 8);
  }
  *((_BYTE *)v5 + v4) = a2;
  v6 = HIBYTE(a2);
  ++*(_QWORD *)(v3 + 8);
  v7 = *(void ***)(a1 + 200);
  ++*(_DWORD *)(a1 + 208);
  result = v7[1];
  v9 = *v7;
  if ( v7[2] < result + 1 )
  {
    v11 = sub_481540((__int64)v7, v9, (unsigned __int64)(result + 1), 1u);
    *v7 = v11;
    v9 = v11;
    result = v7[1];
  }
  result[(_QWORD)v9] = v6;
  v7[1] = (char *)v7[1] + 1;
  ++*(_DWORD *)(a1 + 208);
  return result;
}
