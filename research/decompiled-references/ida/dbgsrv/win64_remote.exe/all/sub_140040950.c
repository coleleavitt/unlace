/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140040950
// Address: 0x0000000140040950

//----- (0000000140040950) ----------------------------------------------------
__int64 __fastcall sub_140040950(__int64 a1, __int64 a2)
{
  size_t v4; // rsi
  void *v5; // rax

  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  v4 = *(_QWORD *)(a2 + 16);
  if ( v4 )
  {
    v5 = sub_14005AAA0(*(_QWORD *)(a2 + 16));
    *(_QWORD *)(a1 + 8) = v5;
    *(_QWORD *)(a1 + 24) = v4;
    memcpy(v5, *(const void **)(a2 + 8), v4);
    *(_QWORD *)(a1 + 16) = v4;
  }
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(a2 + 36);
  *(_BYTE *)(a1 + 40) = *(_BYTE *)(a2 + 40);
  *(_DWORD *)(a1 + 44) = *(_DWORD *)(a2 + 44);
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 48);
  return a1;
}
