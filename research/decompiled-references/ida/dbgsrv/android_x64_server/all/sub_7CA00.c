/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7CA00
// Address: 0x000000000007CA00

//----- (000000000007CA00) ----------------------------------------------------
__int64 __fastcall sub_7CA00(__int64 a1, __int64 a2, double a3, __m128 a4)
{
  int v5; // ecx
  __int64 result; // rax
  __int64 v7; // rcx
  bool v8; // sf
  bool v9; // of
  const void *v10; // rdi
  __int64 v11; // rax
  size_t v12; // r15
  __int64 v13; // rax
  size_t v14; // rbx
  const void *v15; // rsi
  size_t v16; // rdx
  int v17; // ecx
  unsigned __int64 v18; // rcx
  int v19; // ecx

  v5 = sub_7C890(a1, a2, a3, a4);
  result = 1;
  switch ( v5 )
  {
    case 2:
    case 9:
      v7 = *(_QWORD *)(a2 + 8);
      v9 = __OFSUB__(*(_QWORD *)(a1 + 8), v7);
      v8 = *(_QWORD *)(a1 + 8) - v7 < 0;
      if ( *(_QWORD *)(a1 + 8) <= v7 )
        goto LABEL_18;
      break;
    case 3:
      result = ecmp((unsigned __int16 *)(a1 + 8), (unsigned __int16 *)(a2 + 8));
      break;
    case 5:
      result = *(_QWORD *)(a1 + 8) != *(_QWORD *)(a2 + 8);
      break;
    case 6:
      v19 = *(_DWORD *)(a2 + 8);
      v9 = __OFSUB__(*(_DWORD *)(a1 + 8), v19);
      v8 = *(_DWORD *)(a1 + 8) - v19 < 0;
      if ( *(_DWORD *)(a1 + 8) <= v19 )
LABEL_18:
        result = (unsigned int)-(v8 ^ v9);
      break;
    case 7:
      v10 = *(const void **)(a1 + 8);
      v11 = *(_QWORD *)(a1 + 16);
      v12 = v11 - 1;
      if ( !v11 )
        v12 = 0;
      v13 = *(_QWORD *)(a2 + 16);
      v14 = v13 - 1;
      if ( !v13 )
        v14 = 0;
      v15 = *(const void **)(a2 + 8);
      v16 = v14;
      if ( v12 < v14 )
        v16 = v12;
      v17 = memcmp(v10, v15, v16);
      result = v17 | (unsigned int)-(v17 == 0);
      if ( v12 >= v14 && !v17 )
        result = v12 > v14;
      break;
    case 8:
      v18 = *(_QWORD *)(a2 + 8);
      if ( *(_QWORD *)(a1 + 8) <= v18 )
        result = (unsigned int)-(*(_QWORD *)(a1 + 8) < v18);
      break;
    default:
      return result;
  }
  return result;
}
