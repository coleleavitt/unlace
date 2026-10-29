/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_431DE0
// Address: 0x0000000000431DE0

//----- (0000000000431DE0) ----------------------------------------------------
__int64 __fastcall sub_431DE0(__int64 a1, __int64 a2)
{
  __int64 *v3; // x0
  __int64 *v4; // x22
  size_t v5; // x21
  void *v6; // x0

  v3 = sub_444100(a1);
  if ( v3 )
  {
    v4 = v3;
    v5 = strlen((const char *)v3);
    *(_BYTE *)a2 = 7;
    *(_QWORD *)(a2 + 8) = 0;
    *(_QWORD *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 24) = 0;
    if ( v5 )
    {
      v6 = sub_491288(a2 + 8, nullptr, v5 + 1, 1u);
      *(_QWORD *)(a2 + 8) = v6;
      *(_QWORD *)(a2 + 16) = v5 + 1;
      memmove(v6, v4, v5);
      *(_BYTE *)(*(_QWORD *)(a2 + 8) + v5) = 0;
    }
    return 0;
  }
  else
  {
    *(_BYTE *)a2 = 7;
    *(_QWORD *)(a2 + 8) = 0;
    *(_QWORD *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 24) = 0;
    return 0;
  }
}
