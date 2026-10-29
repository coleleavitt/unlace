/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005C6A8
// Address: 0x000000010005C6A8

//----- (000000010005C6A8) ----------------------------------------------------
__int64 __fastcall sub_10005C6A8(__int64 result, __int64 a2)
{
  _QWORD *v3; // x21
  unsigned __int64 v4; // x8
  size_t v5; // x20
  __int64 v6; // x24
  const void *v7; // x22
  size_t v8; // x8
  _QWORD *v9; // x1

  *(_QWORD *)a2 = *(_QWORD *)(result + 240);
  v3 = (_QWORD *)(a2 + 8);
  if ( result + 240 != a2 )
  {
    v4 = *(_QWORD *)(result + 256);
    if ( v4 )
      v5 = v4 - 1;
    else
      v5 = 0;
    if ( v4 >= 2 )
    {
      v6 = result;
      v7 = *(const void **)(result + 248);
      v8 = *(_QWORD *)(a2 + 24);
      v9 = *(_QWORD **)(a2 + 8);
      if ( v8 <= v5 )
      {
        v9 = qvector_reserve(v3, v9, v5 + 1, 1u);
        *v3 = v9;
      }
      *(_QWORD *)(a2 + 16) = v5 + 1;
      memmove(v9, v7, v5);
      *(_BYTE *)(*(_QWORD *)(a2 + 8) + v5) = 0;
      result = v6;
    }
    else
    {
      *(_QWORD *)(a2 + 16) = 0;
    }
  }
  *(_DWORD *)(a2 + 32) = *(_DWORD *)(result + 272);
  return result;
}
