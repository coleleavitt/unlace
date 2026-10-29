__int64 __fastcall find_reg_value_info(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  _QWORD *v5; // rdi
  int v7; // r8d
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 (__fastcall *v10)(__int64, int); // rax
  void *v11; // rax
  void *v12; // rdi
  __m128i v13; // xmm0
  void *v14; // r14
  char v15; // al
  void *v16; // rdi
  __m128i v17; // xmm0
  char v19; // al
  unsigned __int64 v20; // rax
  int v21; // [rsp+8h] [rbp-58h]
  int v22; // [rsp+Ch] [rbp-54h]
  __m128i v23; // [rsp+10h] [rbp-50h] BYREF
  void *ptr; // [rsp+20h] [rbp-40h] BYREF
  __m128i v25; // [rsp+28h] [rbp-38h] BYREF
  char v26; // [rsp+38h] [rbp-28h]
  unsigned __int64 v27; // [rsp+48h] [rbp-18h]

  v27 = __readfsqword(0x28u);
  v5 = *(_QWORD **)(qword_2CA1698 + 320);
  if ( !v5 )
    return 0;
  v7 = 0x10000;
  v8 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(v5[1] + 32LL) + 8LL) - 1);
  if ( (unsigned int)v8 <= 7 )
  {
    v7 = dword_238A060[v8];
    if ( v7 != 0x10000 )
    {
      v7 |= a3;
      if ( a3 >= 0x10000 )
        v7 = 0x10000;
    }
  }
  v26 = 0;
  LODWORD(v9) = -1;
  v25 = 0;
  ptr = nullptr;
  v10 = *(unsigned __int64 (__fastcall **)(__int64, int))(*v5 + 16LL);
  if ( v10 != sub_4DC6B0 )
  {
    v21 = a4;
    v22 = v7;
    v23.m128i_i64[0] = (__int64)v5;
    v20 = ((__int64 (__fastcall *)(_QWORD *, __int64, _QWORD, __int64))v10)(v5, a2, 0, 0xFFFFFFFFLL);
    a4 = v21;
    v7 = v22;
    LODWORD(a2) = v20;
    v9 = HIDWORD(v20);
  }
  reg_finder_find((int)v5, (int)&ptr, a2, v9, v7, a4, 0);
  v11 = ptr;
  v12 = *(void **)a1;
  v13 = _mm_loadu_si128(&v25);
  v14 = ptr;
  ptr = nullptr;
  v25 = 0;
  if ( v12 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    v23 = v13;
    qfree(v12);
    v15 = v26;
    v16 = ptr;
    *(_QWORD *)a1 = v14;
    v17 = _mm_load_si128(&v23);
    *(_BYTE *)(a1 + 24) = v15;
    *(__m128i *)(a1 + 8) = v17;
    if ( v16 )
    {
      v25.m128i_i64[0] = 0;
      qfree(v16);
    }
  }
  else
  {
    *(_QWORD *)a1 = v11;
    v19 = v26;
    *(__m128i *)(a1 + 8) = v13;
    *(_BYTE *)(a1 + 24) = v19;
  }
  return 1;
}

