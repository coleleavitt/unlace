__int64 __fastcall sub_1D6A120(__int64 a1, unsigned __int64 a2, const __m128i *a3, __m128 *a4, __m128 a5, __m128 a6)
{
  _QWORD *v9; // rax
  int v10; // ecx
  __int64 v11; // rbp
  int v12; // eax
  __int64 v13; // rsi
  __int64 v14; // rdx
  int v15; // esi
  unsigned int v16; // r13d
  __int64 v18; // [rsp+0h] [rbp-168h]
  int v19; // [rsp+8h] [rbp-160h]
  __int64 v20; // [rsp+28h] [rbp-140h]
  void *v21; // [rsp+40h] [rbp-128h] BYREF
  __int64 v22; // [rsp+48h] [rbp-120h]
  _BYTE v23[96]; // [rsp+50h] [rbp-118h] BYREF
  void *ptr; // [rsp+B0h] [rbp-B8h]
  __int64 v25; // [rsp+B8h] [rbp-B0h]
  _WORD v26[49]; // [rsp+C0h] [rbp-A8h] BYREF
  char v27; // [rsp+122h] [rbp-46h]

  sub_18C74E0(a1, 0, 0, 4);
  if ( !sub_B8E0B0(a2) || (v9 = (_QWORD *)sub_B8D340(a2)) == nullptr )
  {
    v9 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
      v9 = (_QWORD *)*v9;
  }
  v10 = *(_DWORD *)(a1 + 80);
  v11 = *(_QWORD *)(a1 + 544);
  *(_QWORD *)(a1 + 544) = v9;
  v12 = *(_DWORD *)(a1 + 40);
  v13 = *(_QWORD *)(a1 + 512);
  v19 = v10;
  v14 = *(_QWORD *)(a1 + 9944);
  v26[48] = 0;
  *(_DWORD *)(a1 + 80) = v12;
  v18 = v13;
  v15 = *(_DWORD *)(a1 + 2632);
  *(_DWORD *)(a1 + 2632) = *(_DWORD *)(a1 + 3688);
  v20 = v14;
  v21 = v23;
  ptr = v26;
  v22 = 0x400000000LL;
  v25 = 0x400000000LL;
  v27 = 0;
  *(_QWORD *)(a1 + 512) = 0;
  *(_QWORD *)(a1 + 9944) = 0;
  v16 = sub_1D67A60(a1, a2, *(_QWORD *)(a2 + 56), 0, a3, a4, a5, a6, (__int64)&v21, 0, 0, nullptr);
  if ( !v16 )
    v16 = sub_1D37D10(
            a1,
            a2,
            (const __m128i *)v21,
            (unsigned int)v22,
            (const __m128i *)ptr,
            (unsigned int)v25,
            *(double *)a5.m128_u64,
            a4);
  if ( ptr != v26 )
    free(ptr);
  if ( v21 != v23 )
    free(v21);
  if ( v11 )
  {
    *(_QWORD *)(a1 + 544) = v11;
    *(_QWORD *)(a1 + 512) = v18;
    *(_QWORD *)(a1 + 9944) = v20;
    *(_DWORD *)(a1 + 80) = v19;
    *(_DWORD *)(a1 + 2632) = v15;
  }
  sub_190D5E0(a1, a5);
  return v16;
}
