/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_454680
// Address: 0x0000000000454680

//----- (0000000000454680) ----------------------------------------------------
__int64 __fastcall sub_454680(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbp
  __int64 result; // rax
  const void *v4; // r14
  void *v5; // rax

  *(_DWORD *)a2 = *(_DWORD *)(a1 + 272);
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(a1 + 276);
  if ( a2 + 8 != a1 + 280 )
  {
    v2 = *(_QWORD *)(a1 + 288);
    if ( v2 > 1 )
    {
      v4 = *(const void **)(a1 + 280);
      v5 = *(void **)(a2 + 8);
      if ( *(_QWORD *)(a2 + 24) < v2 )
      {
        v5 = sub_481540(a2 + 8, *(void **)(a2 + 8), *(_QWORD *)(a1 + 288), 1u);
        *(_QWORD *)(a2 + 8) = v5;
      }
      *(_QWORD *)(a2 + 16) = v2;
      memmove(v5, v4, v2 - 1);
      *(_BYTE *)(*(_QWORD *)(a2 + 8) + v2 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(a2 + 16) = 0;
    }
  }
  result = *(unsigned int *)(a1 + 304);
  *(_DWORD *)(a2 + 32) = result;
  return result;
}
