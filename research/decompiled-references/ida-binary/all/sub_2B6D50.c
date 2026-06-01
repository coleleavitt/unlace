__int64 __fastcall sub_2B6D50(
        __int64 a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        __int64 a12)
{
  unsigned int (*v12)(void); // rax
  __int64 v13; // rax
  int v14; // r13d
  __int64 v15; // r12
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __m128 v20; // xmm4
  __m128 v21; // xmm5
  __int64 (__fastcall *v22)(__int64); // rdx
  __int16 v23; // r12
  __int64 result; // rax
  unsigned __int16 *v25; // rax
  int v26; // edx
  char v27; // [rsp+0h] [rbp-28h]

  v12 = *(unsigned int (**)(void))(*(_QWORD *)a1 + 504LL);
  if ( (char *)v12 == (char *)sub_2B36E0 )
  {
    v13 = sub_1EA6A0(*(_QWORD *)(a1 + 16) + 384LL, a2, (__int64)sub_2B36E0, a12, *(double *)a3.m128_u64);
    v14 = *(_DWORD *)(v13 + 32);
    v15 = v13;
    if ( v14 != (unsigned int)sub_1EB540(*(_QWORD **)(a1 + 16), a1) )
      sub_169700(
        (int)"Coherency check failed: rinfo.rtype == cim->get_renderer_type(this)\n",
        a1,
        v16,
        v17,
        v18,
        v19,
        a3,
        a4,
        a5,
        a6,
        v20,
        v21,
        a9,
        a10,
        v27);
    v22 = (__int64 (__fastcall *)(__int64))*(unsigned int *)(v15 + 24);
  }
  else
  {
    v22 = (__int64 (__fastcall *)(__int64))v12();
  }
  *(_DWORD *)a2 = (_DWORD)v22;
  v23 = 0;
  result = 0;
  if ( (int)v22 >= 0 )
  {
    v25 = (unsigned __int16 *)sub_2B5900(*(double *)a3.m128_u64, a1, *(_QWORD **)(a1 + 440), v22, v17);
    v26 = *((_DWORD *)v25 + 1);
    result = *v25;
    if ( v26 )
      v23 = v26 - 1;
  }
  *(_WORD *)(a2 + 4) = result;
  *(_WORD *)(a2 + 6) = v23;
  return result;
}
