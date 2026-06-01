/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41E540
// Address: 0x000000000041E540

//----- (000000000041E540) ----------------------------------------------------
__int64 __fastcall sub_41E540(
        __int64 a1,
        int a2,
        __int64 a3,
        char *a4,
        __int64 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13)
{
  char *v14; // rdx
  __int64 (__fastcall *v15)(__int64, __int64, char *, unsigned int, __m128, __m128, __m128, __m128, __m128, __m128, __m128, __m128); // rcx
  __int64 v16; // rbp
  __int64 (__fastcall *v17)(__int64, __int64, char *, unsigned int, __m128, __m128, __m128, __m128, __m128, __m128, __m128, __m128); // rax
  __int64 v18; // rax
  unsigned __int64 v20[6]; // [rsp+8h] [rbp-30h] BYREF

  v20[0] = a3;
  if ( !a4 )
    return (unsigned __int8)sub_46D3C0((__int64 *)a1, a3, a2);
  v14 = a4;
  v15 = sub_41E440;
  v16 = (int)a5;
  v17 = *(__int64 (__fastcall **)(__int64, __int64, char *, unsigned int, __m128, __m128, __m128, __m128, __m128, __m128, __m128, __m128))(*(_QWORD *)a1 + 296LL);
  if ( v17 == sub_41E440 )
    v18 = *(_BYTE *)(a1 + 1349) || *(_DWORD *)(a1 + 1340) == -1
        ? 0LL
        : (int)sub_41E0D0(a1, 0xFFFFFFFF, a3, v14, (unsigned int)a5, 1, a6, a7, a8, a9, a10, a11, a12, a13);
  else
    v18 = ((__int64 (__fastcall *)(__int64, __int64, char *, _QWORD, _QWORD))v17)(a1, a3, v14, (int)a5, 0);
  if ( v16 != v18 )
    return (unsigned __int8)sub_46D3C0((__int64 *)a1, a3, a2);
  sub_41A580((_QWORD *)(a1 + 1352), v20, (__int64)v14, (__int64)v15, a5);
  return 1;
}
// 41E5E4: variable 'v14' is possibly undefined
// 41E5E4: variable 'v15' is possibly undefined
// 41E5E4: variable 'a5' is possibly undefined
