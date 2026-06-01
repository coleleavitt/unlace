__int64 __fastcall sub_148EA30(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5,
        _BYTE *a6,
        __m128i a7,
        __m128 a8,
        __int64 *a9)
{
  __int64 v12; // rbp
  char v14; // al
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 result; // rax
  __int64 *v18; // rdi
  unsigned int v19; // [rsp+8h] [rbp-50h]
  __int64 v20; // [rsp+8h] [rbp-50h]
  __int64 v21; // [rsp+8h] [rbp-50h]
  char v22[57]; // [rsp+1Fh] [rbp-39h] BYREF

  v12 = a4;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) & 8) != 0 )
  {
    v14 = sub_15612F0(a1, 0, v22);
  }
  else
  {
    v22[0] = 0;
    v14 = sub_147F000(a1);
  }
  if ( v14 )
  {
    v19 = *(_DWORD *)(a1 + 16);
    v15 = sub_148B630(a1, nullptr, a7, a8);
    v16 = v19;
    v20 = v15;
    if ( (unsigned __int8)sub_18EDCE0(
                            *(_QWORD *)(a1 + 96),
                            a2,
                            a3,
                            v15,
                            v16,
                            v12 | ((unsigned __int64)*(unsigned int *)(a1 + 16) << 32)) )
      return 1;
    *a9 = v20;
    result = 0;
    *a6 = 1;
  }
  else
  {
    result = sub_14C4CD0(a1);
    *a6 = 0;
  }
  v18 = *(__int64 **)(a1 + 8);
  if ( (*(_BYTE *)(v18[7] + 1) & 0x10) != 0 && *(_WORD *)(a1 + 32) == 27 )
  {
    v21 = result;
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v18, (int *)(a1 + 16));
    *a5 = *(_DWORD *)(a1 + 40);
    return v21;
  }
  return result;
}
