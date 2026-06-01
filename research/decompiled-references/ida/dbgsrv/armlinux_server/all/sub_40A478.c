/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40A478
// Address: 0x000000000040A478

//----- (000000000040A478) ----------------------------------------------------
__int64 __fastcall sub_40A478(__int64 a1, __int64 a2, char *s)
{
  __int64 v4; // x20
  size_t v6; // x0
  size_t v7; // x21
  unsigned __int64 v8; // x22
  void *v9; // x0

  if ( a2 != 14 )
    return 0;
  v4 = *(_QWORD *)(a1 + 16);
  if ( s && (v6 = strlen(s), (v7 = v6) != 0) )
  {
    v8 = v6 + 1;
    v9 = *(void **)v4;
    if ( v8 > *(_QWORD *)(v4 + 16) )
    {
      v9 = sub_491288(v4, *(void **)v4, v8, 1u);
      *(_QWORD *)v4 = v9;
    }
    *(_QWORD *)(v4 + 8) = v8;
    memmove(v9, s, v7);
    *(_BYTE *)(*(_QWORD *)v4 + v7) = 0;
    return 1;
  }
  else
  {
    *(_QWORD *)(v4 + 8) = 0;
    return 1;
  }
}
