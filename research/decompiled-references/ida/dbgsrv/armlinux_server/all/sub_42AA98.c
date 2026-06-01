/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42AA98
// Address: 0x000000000042AA98

//----- (000000000042AA98) ----------------------------------------------------
__int64 __fastcall sub_42AA98(__int64 a1, __int64 a2, __int64 *a3, unsigned int a4)
{
  unsigned __int64 v5; // x5
  __int64 v6; // x2
  unsigned __int64 v8; // x0
  void *v9; // x1

  if ( *a3 > 0 && (v5 = a3[2]) != 0 )
  {
    v6 = a4 + *a3;
    if ( a4 >= v5 )
    {
      sub_40CD68(a2, "bad offset %08x", v6);
      return 0;
    }
    else
    {
      return sub_42A838(a1, (void **)a2, v6);
    }
  }
  else
  {
    v8 = *(_QWORD *)(a2 + 16);
    v9 = *(void **)a2;
    if ( v8 <= 0x11 )
    {
      v9 = sub_491288(a2, v9, 0x12u, 1u);
      *(_QWORD *)a2 = v9;
    }
    *(_QWORD *)(a2 + 8) = 18;
    qmemcpy(v9, "{no string table}", 17);
    *(_BYTE *)(*(_QWORD *)a2 + 17LL) = 0;
    return 0;
  }
}
