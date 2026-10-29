_QWORD *__fastcall sub_1BA5980(__int64 a1, unsigned int a2, unsigned int a3, __m128 a4, __m128 a5)
{
  __int64 **v7; // r13
  __int64 v8; // rdi
  unsigned __int8 v9; // r14
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 *v15; // r14
  __int64 *v16; // rdi
  unsigned __int8 v17; // r15
  unsigned __int64 v18; // r13
  int v19; // eax
  _QWORD *result; // rax
  __int64 v21; // rbx
  unsigned __int16 *v22; // rbp
  __int64 v23; // rcx
  unsigned __int16 **v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // rax
  _QWORD *v27; // [rsp+8h] [rbp-50h]
  unsigned __int16 *v28; // [rsp+18h] [rbp-40h] BYREF

  v7 = *(__int64 ***)a1;
  v8 = **(_QWORD **)(a1 + 8);
  v9 = ((*(_BYTE *)(v8 + 96) >> 5) & 3) == 1;
  v10 = sub_B73640(v8);
  v14 = sub_1BA55C0((__int64 *)v7, v10, v9, a4, a5, v11, v12, v13);
  if ( v14 == 1 )
  {
    v25 = *(_QWORD *)(a1 + 24);
    v26 = *(unsigned int *)(v25 + 16);
    if ( v26 + 1 > (unsigned __int64)*(unsigned int *)(v25 + 20) )
    {
      sub_2237220(v25 + 8, v25 + 24, v26 + 1, 16);
      v26 = *(unsigned int *)(v25 + 16);
    }
    result = (_QWORD *)(*(_QWORD *)(v25 + 8) + 16 * v26);
    *result = 1;
    result[1] = 0;
    ++*(_DWORD *)(v25 + 16);
  }
  else
  {
    v28 = (unsigned __int16 *)(v14 & 0xFFFFFFFFFFFFFFFELL);
    v15 = **(__int64 ***)a1;
    v16 = **(__int64 ***)(a1 + 16);
    v17 = (*(_BYTE *)((*v16 & 0xFFFFFFFFFFFFFFF8LL) + 96) & 0x60) != 0;
    v18 = *(_QWORD *)(**(_QWORD **)(a1 + 8) + 40LL) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(**(_QWORD **)(a1 + 8) + 40LL) & 7) != 0 )
      v18 = 0;
    v19 = sub_C94E40(v16);
    result = (_QWORD *)sub_1A2D1F0(
                         v15,
                         *(_DWORD *)(**(_QWORD **)(a1 + 16) + 8LL),
                         v19 == 3,
                         a2,
                         a3,
                         v18,
                         *(double *)a4.m128_u64,
                         a5,
                         v17,
                         &v28);
    v21 = *(_QWORD *)(a1 + 24);
    v22 = v28;
    v23 = *(unsigned int *)(v21 + 16);
    if ( v23 + 1 > (unsigned __int64)*(unsigned int *)(v21 + 20) )
    {
      v27 = result;
      sub_2237220(v21 + 8, v21 + 24, v23 + 1, 16);
      v23 = *(unsigned int *)(v21 + 16);
      result = v27;
    }
    v24 = (unsigned __int16 **)(*(_QWORD *)(v21 + 8) + 16 * v23);
    *v24 = v22;
    v24[1] = (unsigned __int16 *)result;
    ++*(_DWORD *)(v21 + 16);
  }
  return result;
}
