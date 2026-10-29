/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E24F0
// Address: 0x00000000000E24F0

//----- (00000000000E24F0) ----------------------------------------------------
__int64 __fastcall sub_E24F0(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  unsigned __int64 v4; // rsi
  _BYTE *v5; // rax
  size_t v6; // rsi
  _BYTE *v7; // rbx
  __int64 result; // rax

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(_QWORD *)(a2 + 16);
  if ( v3 + 9 >= v4 )
  {
    v6 = 2 * v4;
    if ( v6 < v3 + 9 )
      v6 = v3 + 9;
    *(_QWORD *)(a2 + 16) = v6;
    v5 = realloc(*(void **)a2, v6);
    *(_QWORD *)a2 = v5;
    v3 = *(_QWORD *)(a2 + 8);
  }
  else
  {
    v5 = *(_BYTE **)a2;
  }
  *(_QWORD *)&v5[v3] = 0x726F74617265706FLL;
  v5[v3 + 8] = 32;
  *(_QWORD *)(a2 + 8) += 9LL;
  v7 = *(_BYTE **)(a1 + 16);
  result = (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v7 + 24LL))(v7, a2);
  if ( v7[9] != 1 )
    return (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v7 + 32LL))(v7, a2);
  return result;
}
