__int64 __fastcall sub_4B5720(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 (__fastcall *v5)(__int64); // rax
  unsigned __int64 *v6; // rax
  __int64 v8; // rax
  void (__fastcall ***v9)(_QWORD, void **, __int64); // rbp
  void (__fastcall *v10)(_QWORD, void **, __int64); // r12
  __int64 v11; // rax
  void *v12; // rdi
  void *v13; // rbp
  __m128i v14; // xmm0
  __m128i v15; // xmm0
  void *v16; // rdi
  __m128i v17; // [rsp+0h] [rbp-48h] BYREF
  void *ptr; // [rsp+10h] [rbp-38h] BYREF
  __m128i v19; // [rsp+18h] [rbp-30h] BYREF
  unsigned __int64 v20; // [rsp+28h] [rbp-20h]

  v20 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v5 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL);
  if ( v5 == sub_3DB7B0 )
    v6 = (unsigned __int64 *)(a2 + 16);
  else
    v6 = (unsigned __int64 *)v5(a2);
  if ( a3 >= *v6
    && a3 < v6[1]
    && a3 == (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, a3, 0) )
  {
    switch_dbctx(*(int *)(a2 + 8));
    v8 = **(_QWORD **)(a2 + 40) + 96 * a3;
    if ( *(_DWORD *)(v8 + 80) )
    {
      v9 = *(void (__fastcall ****)(_QWORD, void **, __int64))(v8 + 40);
      ptr = nullptr;
      v19 = 0;
      v10 = **v9;
      v11 = sub_55C400(qword_2CCB598);
      v10(v9, &ptr, v11);
      v12 = *(void **)a1;
      v13 = ptr;
      ptr = nullptr;
      v14 = _mm_loadu_si128(&v19);
      v19 = 0;
      if ( v12 )
      {
        *(_QWORD *)(a1 + 8) = 0;
        v17 = v14;
        qfree(v12);
        v15 = _mm_load_si128(&v17);
        v16 = ptr;
        *(_QWORD *)a1 = v13;
        *(__m128i *)(a1 + 8) = v15;
        if ( v16 )
        {
          v19.m128i_i64[0] = 0;
          qfree(v16);
        }
      }
      else
      {
        *(_QWORD *)a1 = v13;
        *(__m128i *)(a1 + 8) = v14;
      }
    }
  }
  return a1;
}
