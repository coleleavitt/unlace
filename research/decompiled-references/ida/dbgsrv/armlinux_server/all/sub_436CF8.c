/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_436CF8
// Address: 0x0000000000436CF8

//----- (0000000000436CF8) ----------------------------------------------------
__int64 __fastcall sub_436CF8(__int64 a1, char *s, size_t a3)
{
  __int64 v6; // x20
  __int64 v7; // x1
  _BYTE *v8; // x0
  __int64 result; // x0

  *(_BYTE *)(a1 + 212) = -88;
  v6 = *(_QWORD *)(a1 + 200);
  v7 = *(_QWORD *)(v6 + 8);
  if ( (unsigned __int64)(v7 + 1) > *(_QWORD *)(v6 + 16) )
  {
    v8 = sub_491288(v6, *(void **)v6, v7 + 1, 1u);
    *(_QWORD *)v6 = v8;
    v7 = *(_QWORD *)(v6 + 8);
  }
  else
  {
    v8 = *(_BYTE **)v6;
  }
  v8[v7] = -88;
  ++*(_QWORD *)(v6 + 8);
  ++*(_DWORD *)(a1 + 208);
  if ( !a3 )
    a3 = strlen(s);
  sub_436010(a1, a3);
  sub_436010(a1, WORD1(a3));
  sub_43D128(*(void ***)(a1 + 200), s, a3);
  result = *(unsigned int *)(a1 + 208);
  *(_DWORD *)(a1 + 208) = result + a3;
  return result;
}
