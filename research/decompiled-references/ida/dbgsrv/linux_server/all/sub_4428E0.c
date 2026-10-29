/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4428E0
// Address: 0x00000000004428E0

//----- (00000000004428E0) ----------------------------------------------------
int __fastcall sub_4428E0(
        __int64 a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // rcx
  int result; // eax
  bool v12; // sf
  bool v13; // of
  int v14; // ecx
  size_t v15; // r13
  size_t v16; // r12
  const void *v17; // rsi
  const void *v18; // rdi
  size_t v19; // rdx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rdx

  switch ( sub_442760((unsigned __int8 *)a1, (unsigned __int8 *)a2, a3, a4, a5, a6, a7, a8, a9, a10) )
  {
    case 2uLL:
    case 9uLL:
      v10 = *(_QWORD *)(a2 + 8);
      result = 1;
      v13 = __OFSUB__(*(_QWORD *)(a1 + 8), v10);
      v12 = *(_QWORD *)(a1 + 8) - v10 < 0;
      if ( *(_QWORD *)(a1 + 8) <= v10 )
        return -(v12 ^ v13);
      return result;
    case 3uLL:
      return sub_47B940(a1 + 8, a2 + 8);
    case 5uLL:
      return *(_QWORD *)(a1 + 8) != *(_QWORD *)(a2 + 8);
    case 6uLL:
      v14 = *(_DWORD *)(a2 + 8);
      result = 1;
      v13 = __OFSUB__(*(_DWORD *)(a1 + 8), v14);
      v12 = *(_DWORD *)(a1 + 8) - v14 < 0;
      if ( *(_DWORD *)(a1 + 8) <= v14 )
        return -(v12 ^ v13);
      return result;
    case 7uLL:
      v15 = *(_QWORD *)(a1 + 16);
      if ( !v15 )
      {
        v16 = *(_QWORD *)(a2 + 16);
        if ( v16 )
        {
          --v16;
          goto LABEL_14;
        }
        return v16 < v15;
      }
      v16 = *(_QWORD *)(a2 + 16);
      --v15;
      if ( !v16 )
        return v16 < v15;
      --v16;
      v17 = *(const void **)(a2 + 8);
      v18 = *(const void **)(a1 + 8);
      v19 = v16;
      if ( v15 <= v16 )
        v19 = v15;
      result = memcmp(v18, v17, v19);
      if ( !result )
      {
LABEL_14:
        if ( v15 < v16 )
          return -1;
        return v16 < v15;
      }
      return result;
    case 8uLL:
      v20 = *(_QWORD *)(a1 + 8);
      v21 = *(_QWORD *)(a2 + 8);
      result = 1;
      if ( v21 >= v20 )
        return -(v20 < v21);
      return result;
    default:
      return 1;
  }
}
