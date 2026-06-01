__int64 __fastcall find_reg_value_info(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v6; // rax
  _QWORD *v7; // r14
  Elf64_Sym *v9; // r8
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 (__fastcall *v13)(__int64, __int64); // rax
  unsigned __int64 v14; // rsi
  void *v15; // rax
  void *v16; // rdi
  __m128i v17; // xmm0
  void *v18; // r14
  char v19; // al
  void *v20; // rdi
  __m128i v21; // xmm0
  char v23; // al
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  int v26; // [rsp+Ch] [rbp-54h]
  __m128i v27; // [rsp+10h] [rbp-50h] BYREF
  void *ptr; // [rsp+20h] [rbp-40h] BYREF
  __m128i v29; // [rsp+28h] [rbp-38h] BYREF
  char v30; // [rsp+38h] [rbp-28h]
  unsigned __int64 v31; // [rsp+48h] [rbp-18h]

  v31 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(qword_2CCB598 + 320);
  if ( !v6 )
    return 0;
  v7 = *(_QWORD **)(qword_2CCB598 + 320);
  v9 = &stru_10000;
  v10 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) + 32LL) + 24LL) - 1);
  if ( (unsigned int)v10 <= 7 )
  {
    LODWORD(v9) = dword_23AE1C0[v10];
    if ( (_DWORD)v9 != (_DWORD)&stru_10000 )
    {
      LODWORD(v9) = a3 | (unsigned int)v9;
      if ( a3 >= (unsigned int)&stru_10000 )
        v9 = &stru_10000;
    }
  }
  v30 = 0;
  v11 = -1;
  v29 = 0;
  v12 = v7[1];
  ptr = nullptr;
  v13 = *(__int64 (__fastcall **)(__int64, __int64))(*v7 + 16LL);
  v14 = *(_QWORD *)(*(_QWORD *)(v12 + 32) + 16LL) & a2;
  if ( v13 != sub_4F3C60 )
  {
    v26 = a4;
    v27.m128i_i32[0] = (int)v9;
    v24 = ((__int64 (__fastcall *)(_QWORD *, unsigned __int64, _QWORD, __int64))v13)(v7, v14, 0, -1);
    a4 = v26;
    LODWORD(v9) = v27.m128i_i32[0];
    v14 = v24;
    v11 = v25;
  }
  reg_finder_find((__int64)v7, (__int64)&ptr, v14, v11, (unsigned __int32)v9, a4, 0);
  v15 = ptr;
  v16 = *(void **)a1;
  v17 = _mm_loadu_si128(&v29);
  v18 = ptr;
  ptr = nullptr;
  v29 = 0;
  if ( v16 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    v27 = v17;
    qfree(v16);
    v19 = v30;
    v20 = ptr;
    *(_QWORD *)a1 = v18;
    v21 = _mm_load_si128(&v27);
    *(_BYTE *)(a1 + 24) = v19;
    *(__m128i *)(a1 + 8) = v21;
    if ( v20 )
    {
      v29.m128i_i64[0] = 0;
      qfree(v20);
    }
  }
  else
  {
    *(_QWORD *)a1 = v15;
    v23 = v30;
    *(__m128i *)(a1 + 8) = v17;
    *(_BYTE *)(a1 + 24) = v23;
  }
  return 1;
}
