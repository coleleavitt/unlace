/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43C228
// Address: 0x000000000043C228

//----- (000000000043C228) ----------------------------------------------------
bool __fastcall sub_43C228(const char *a1, __int64 a2, const char *a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // x20
  void *v8; // x22
  _BOOL4 v9; // w20
  __int64 v11; // x23
  void *v12; // x0
  void *v13; // [xsp+30h] [xbp-20h] BYREF
  unsigned __int64 v14; // [xsp+38h] [xbp-18h]

  sub_43BEF0(a1, a3, a4, a5, a6, &v13);
  if ( a2 )
  {
    v8 = v13;
    v7 = v14;
    if ( v14 && (v11 = v14 - 1, v14 != 1) )
    {
      v12 = *(void **)a2;
      if ( v14 > *(_QWORD *)(a2 + 16) )
      {
        v12 = sub_491288(a2, *(void **)a2, v14, 1u);
        *(_QWORD *)a2 = v12;
      }
      *(_QWORD *)(a2 + 8) = v7;
      memmove(v12, v8, v7 - 1);
      *(_BYTE *)(*(_QWORD *)a2 + v11) = 0;
      v8 = v13;
      v7 = v14;
    }
    else
    {
      *(_QWORD *)(a2 + 8) = 0;
    }
  }
  else
  {
    v8 = v13;
    v7 = v14;
  }
  v9 = v7 <= 1;
  if ( v8 )
  {
    v14 = 0;
    j__free(v8);
  }
  return v9;
}
