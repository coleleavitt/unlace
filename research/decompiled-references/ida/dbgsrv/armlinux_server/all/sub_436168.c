/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_436168
// Address: 0x0000000000436168

//----- (0000000000436168) ----------------------------------------------------
__int64 __fastcall sub_436168(__int64 a1)
{
  char *v2; // x0
  __int64 v3; // x0
  __int64 v4; // x2
  __int64 v5; // x21
  __int64 v6; // x1
  _BYTE *v7; // x0
  unsigned int v9; // [xsp+24h] [xbp-Ch] BYREF

  v2 = (char *)sub_451480(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 32LL), &v9, nullptr, 0);
  sub_434F90(a1, v2, v9);
  *(_DWORD *)(*(_QWORD *)(a1 + 192) + 24LL) = *(_QWORD *)(a1 + 144);
  v3 = *(_QWORD *)(a1 + 192);
  if ( *(_DWORD *)(a1 + 216) == 2 && *(_DWORD *)(v3 + 24) != 1 )
    return sub_4869C8(1585);
  v4 = *(_QWORD *)(v3 + 72);
  if ( v4 && *(int *)(a1 + 448) + v4 != *(_DWORD *)(v3 + 24) )
    return sub_4869C8(1268);
  *(_BYTE *)(a1 + 212) = -91;
  v5 = *(_QWORD *)(a1 + 200);
  v6 = *(_QWORD *)(v5 + 8);
  if ( (unsigned __int64)(v6 + 1) > *(_QWORD *)(v5 + 16) )
  {
    v7 = sub_491288(*(_QWORD *)(a1 + 200), *(void **)v5, v6 + 1, 1u);
    *(_QWORD *)v5 = v7;
    v6 = *(_QWORD *)(v5 + 8);
  }
  else
  {
    v7 = *(_BYTE **)v5;
  }
  v7[v6] = -91;
  ++*(_QWORD *)(v5 + 8);
  ++*(_DWORD *)(a1 + 208);
  sub_436010(a1, 0);
  return 0;
}
