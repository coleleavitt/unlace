/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100064070
// Address: 0x0000000100064070

//----- (0000000100064070) ----------------------------------------------------
__int64 __fastcall sub_100064070(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  size_t v3; // r14
  bool v4; // cf
  size_t v5; // rax
  const void *v6; // r15
  void *v7; // rax
  __int64 result; // rax

  *(_QWORD *)a2 = *(_QWORD *)(a1 + 240);
  if ( a1 + 240 != a2 )
  {
    v2 = *(_QWORD *)(a1 + 256);
    v3 = 0;
    v4 = v2 == 0;
    v5 = v2 - 1;
    if ( !v4 )
      v3 = v5;
    if ( v4 || v5 == 0 )
    {
      *(_QWORD *)(a2 + 16) = 0;
    }
    else
    {
      v6 = *(const void **)(a1 + 248);
      v7 = *(void **)(a2 + 8);
      if ( *(_QWORD *)(a2 + 24) <= v3 )
      {
        v7 = qvector_reserve(a2 + 8, *(void **)(a2 + 8), v3 + 1, 1u);
        *(_QWORD *)(a2 + 8) = v7;
      }
      *(_QWORD *)(a2 + 16) = v3 + 1;
      memmove(v7, v6, v3);
      *(_BYTE *)(*(_QWORD *)(a2 + 8) + v3) = 0;
    }
  }
  result = *(unsigned int *)(a1 + 272);
  *(_DWORD *)(a2 + 32) = result;
  return result;
}
