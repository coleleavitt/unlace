/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_409C78
// Address: 0x0000000000409C78

//----- (0000000000409C78) ----------------------------------------------------
__int64 __fastcall sub_409C78(__int64 a1, char *s)
{
  size_t v4; // x0
  size_t v5; // x21
  unsigned __int64 v7; // x23
  void *v8; // x0

  if ( s && (v4 = strlen(s), (v5 = v4) != 0) )
  {
    v7 = v4 + 1;
    v8 = *(void **)(a1 + 16);
    if ( v7 > *(_QWORD *)(a1 + 32) )
    {
      v8 = sub_491288(a1 + 16, *(void **)(a1 + 16), v7, 1u);
      *(_QWORD *)(a1 + 16) = v8;
    }
    *(_QWORD *)(a1 + 24) = v7;
    memmove(v8, s, v5);
    *(_BYTE *)(*(_QWORD *)(a1 + 16) + v5) = 0;
    return 2;
  }
  else
  {
    *(_QWORD *)(a1 + 24) = 0;
    return 2;
  }
}
