/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_436DC0
// Address: 0x0000000000436DC0

//----- (0000000000436DC0) ----------------------------------------------------
__int64 __fastcall sub_436DC0(__int64 a1)
{
  __int64 v2; // x2
  char *v3; // x1
  size_t v4; // x2
  __int64 v5; // x20
  __int64 v6; // x1
  _BYTE *v7; // x0

  v2 = *(_QWORD *)(a1 + 48);
  if ( v2 )
  {
    v3 = *(char **)(a1 + 40);
    v4 = v2 - 1;
  }
  else
  {
    v4 = 0;
    v3 = (char *)&qword_4B2D48;
  }
  sub_436CF8(a1, v3, v4);
  v5 = *(_QWORD *)(a1 + 200);
  *(_BYTE *)(a1 + 212) = -80;
  v6 = *(_QWORD *)(v5 + 8);
  if ( (unsigned __int64)(v6 + 1) > *(_QWORD *)(v5 + 16) )
  {
    v7 = sub_491288(v5, *(void **)v5, v6 + 1, 1u);
    *(_QWORD *)v5 = v7;
    v6 = *(_QWORD *)(v5 + 8);
  }
  else
  {
    v7 = *(_BYTE **)v5;
  }
  v7[v6] = -80;
  ++*(_QWORD *)(v5 + 8);
  ++*(_DWORD *)(a1 + 208);
  return 0;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
