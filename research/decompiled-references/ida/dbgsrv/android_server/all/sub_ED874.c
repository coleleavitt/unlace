/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_ED874
// Address: 0x00000000000ED874

//----- (00000000000ED874) ----------------------------------------------------
__int64 __fastcall sub_ED874(__int64 a1, __int64 a2)
{
  _BYTE *v3; // x0
  __int64 v5; // x8
  unsigned __int64 v6; // x10
  _BYTE *v7; // x0
  _BYTE *v8; // x0
  size_t v9; // x1

  v3 = *(_BYTE **)(a1 + 16);
  if ( v3[10] )
  {
    if ( v3[10] != 2 )
    {
LABEL_5:
      if ( v3[11]
        && (v3[11] != 2 || ((*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v3 + 16LL))(v3, a2) & 1) == 0) )
      {
        return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 16) + 32LL))(*(_QWORD *)(a1 + 16), a2);
      }
      goto LABEL_8;
    }
    if ( ((*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v3 + 8LL))(v3, a2) & 1) == 0 )
    {
      v3 = *(_BYTE **)(a1 + 16);
      goto LABEL_5;
    }
  }
LABEL_8:
  v5 = *(_QWORD *)(a2 + 8);
  v6 = *(_QWORD *)(a2 + 16);
  if ( v5 + 1 >= v6 )
  {
    v8 = *(_BYTE **)a2;
    if ( 2 * v6 >= v5 + 1 )
      v9 = 2 * v6;
    else
      v9 = v5 + 1;
    *(_QWORD *)(a2 + 16) = v9;
    v7 = realloc(v8, v9);
    v5 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)a2 = v7;
  }
  else
  {
    v7 = *(_BYTE **)a2;
  }
  v7[v5] = 41;
  ++*(_QWORD *)(a2 + 8);
  return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 16) + 32LL))(*(_QWORD *)(a1 + 16), a2);
}
