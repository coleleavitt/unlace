__int64 __fastcall sub_4A09E0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 (__fastcall *v5)(__int64); // rax
  unsigned __int64 *v6; // rax
  __int64 v8; // rax
  void (__fastcall ***v9)(_QWORD, void **, _QWORD); // rdi
  void *v10; // rdi
  void *v11; // rbp
  __m128i v12; // xmm0
  __m128i v13; // xmm0
  void *v14; // rdi
  __m128i v15; // [rsp+0h] [rbp-48h] BYREF
  void *ptr; // [rsp+10h] [rbp-38h] BYREF
  __m128i v17; // [rsp+18h] [rbp-30h] BYREF
  unsigned __int64 v18; // [rsp+28h] [rbp-20h]

  v18 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v5 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL);
  if ( v5 == sub_3D58E0 )
    v6 = (unsigned __int64 *)(a2 + 16);
  else
    v6 = (unsigned __int64 *)v5(a2);
  if ( a3 >= *v6
    && a3 < v6[1]
    && a3 == (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, a3, 0) )
  {
    switch_dbctx(*(int *)(a2 + 8));
    v8 = **(_QWORD **)(a2 + 40) + 80 * a3;
    if ( *(_DWORD *)(v8 + 72) != -1 )
    {
      v9 = *(void (__fastcall ****)(_QWORD, void **, _QWORD))(v8 + 40);
      ptr = nullptr;
      v17 = 0;
      (**v9)(v9, &ptr, 0);
      v10 = *(void **)a1;
      v11 = ptr;
      ptr = nullptr;
      v12 = _mm_loadu_si128(&v17);
      v17 = 0;
      if ( v10 )
      {
        *(_QWORD *)(a1 + 8) = 0;
        v15 = v12;
        qfree(v10);
        v13 = _mm_load_si128(&v15);
        v14 = ptr;
        *(_QWORD *)a1 = v11;
        *(__m128i *)(a1 + 8) = v13;
        if ( v14 )
        {
          v17.m128i_i64[0] = 0;
          qfree(v14);
        }
      }
      else
      {
        *(_QWORD *)a1 = v11;
        *(__m128i *)(a1 + 8) = v12;
      }
    }
  }
  return a1;
}

