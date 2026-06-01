// write access to const memory has been detected, the output may be wrong!
unsigned __int64 __fastcall sub_1B116A0(__int64 *a1, int a2, int a3, int a4, unsigned __int64 a5, __m128 a6, __m128 a7)
{
  unsigned __int64 v9; // rbp
  int v10; // r15d
  __int64 v11; // rax
  unsigned __int64 result; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rsi
  __m128 *v19; // rsi
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int64 v22[8]; // [rsp+8h] [rbp-40h] BYREF

  if ( !a5 || !a4 )
    goto LABEL_3;
  v20 = sub_1B11600(a1, a5, 0x4Du, 1, 0, a6, a7);
  if ( v20 == 1 )
    return 0;
  v9 = v20 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v20 & 0xFFFFFFFFFFFFFFFELL) != 0 )
  {
    v10 = 0;
    v21 = sub_1AE5FF0(a1[1]);
    if ( v21 )
      v10 = *(_DWORD *)(v21 + 1084);
  }
  else
  {
LABEL_3:
    v9 = 0;
    v10 = 0;
  }
  v11 = sub_168B6C0((__int64)a1);
  result = sub_EBD8D0(v11, v9, v10, a2, a4, a3);
  v13 = a1[1];
  v14 = *(unsigned int *)(v13 + 344);
  if ( !(_DWORD)v14
    || (v15 = *(_QWORD *)(v13 + 336) + 6776 * v14 - 6776, *(_QWORD *)(v15 + 6768) != *(_QWORD *)(v13 + 328))
    || (v16 = *(unsigned int *)(v15 + 8), v17 = *(unsigned int *)(v13 + 27504), (unsigned int)v16 <= (unsigned int)v17)
    || (v18 = v16 - v17) == 0 )
  {
    elf_gnu_hash_indexes[47] = v9;
    BUG();
  }
  v22[0] = result;
  v19 = (__m128 *)(*(_QWORD *)v15 + 1688 * (v18 - 1));
  v19[67].m128_i8[0] = 1;
  v19[66] = _mm_loadh_ps((const double *)v22);
  return result;
}
