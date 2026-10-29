/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000408E0
// Address: 0x00000001000408E0

//----- (00000001000408E0) ----------------------------------------------------
int __fastcall sub_1000408E0(__int64 a1, __int64 a2)
{
  int v4; // ecx
  int result; // eax
  __int64 v6; // rcx
  bool v7; // sf
  bool v8; // of
  const void *v9; // rdi
  __int64 v10; // r14
  bool v11; // cf
  size_t v12; // r14
  const void *v13; // rsi
  __int64 v14; // rbx
  size_t v15; // rbx
  size_t v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  int v19; // ecx

  v4 = sub_1000406E0(a1, a2);
  result = 1;
  switch ( v4 )
  {
    case 2:
    case 9:
      v6 = *(_QWORD *)(a2 + 8);
      v8 = __OFSUB__(*(_QWORD *)(a1 + 8), v6);
      v7 = *(_QWORD *)(a1 + 8) - v6 < 0;
      if ( *(_QWORD *)(a1 + 8) <= v6 )
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
      v8 = __OFSUB__(*(_DWORD *)(a1 + 8), v19);
      v7 = *(_DWORD *)(a1 + 8) - v19 < 0;
      if ( *(_DWORD *)(a1 + 8) <= v19 )
LABEL_18:
        result = -(v7 ^ v8);
      break;
    case 7:
      v9 = *(const void **)(a1 + 8);
      v10 = *(_QWORD *)(a1 + 16);
      v11 = v10 == 0;
      v12 = v10 - 1;
      if ( v11 )
        v12 = 0;
      v13 = *(const void **)(a2 + 8);
      v14 = *(_QWORD *)(a2 + 16);
      v11 = v14 == 0;
      v15 = v14 - 1;
      if ( v11 )
        v15 = 0;
      v16 = v15;
      if ( v12 < v15 )
        v16 = v12;
      result = memcmp(v9, v13, v16);
      if ( !result )
      {
        result = -1;
        if ( v12 >= v15 )
          result = v12 > v15;
      }
      break;
    case 8:
      v17 = *(_QWORD *)(a1 + 8);
      v18 = *(_QWORD *)(a2 + 8);
      if ( v17 <= v18 )
        result = -(v17 < v18);
      break;
    default:
      return result;
  }
  return result;
}
