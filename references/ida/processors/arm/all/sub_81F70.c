bool __fastcall sub_81F70(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  _QWORD *v4; // r12
  bool result; // al
  Elf64_Rela *v8; // r8
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 (__fastcall *v11)(__int64, __int64); // rax
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdi
  __m128i v15; // xmm1
  __int64 v16; // r14
  char v17; // al
  __int64 v18; // rdi
  __m128i v19; // xmm1
  __m128i v20; // [rsp+10h] [rbp-60h] BYREF
  __int64 v21; // [rsp+20h] [rbp-50h]
  __m128i v22; // [rsp+28h] [rbp-48h] BYREF
  char v23; // [rsp+38h] [rbp-38h]
  unsigned __int64 v24; // [rsp+48h] [rbp-28h]

  v24 = __readfsqword(0x28u);
  v4 = *(_QWORD **)(a1 + 616);
  if ( !v4 )
    return 0;
  result = a4 <= 0xF || a4 - 129 <= 0x20;
  if ( !result )
    return result;
  if ( a4 == 13 || a4 == 161 )
    return 0;
  v8 = &stru_10000;
  v9 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) - 1);
  if ( (unsigned int)v9 <= 7 )
  {
    LODWORD(v8) = dword_90400[v9];
    if ( (_DWORD)v8 != (_DWORD)&stru_10000 )
      LODWORD(v8) = (unsigned int)v8 | a4;
  }
  v23 = 0;
  v22 = 0;
  v10 = v4[1];
  v21 = 0;
  v11 = *(__int64 (__fastcall **)(__int64, __int64))(*v4 + 16LL);
  v12 = *(_QWORD *)(*(_QWORD *)(v10 + 32) + 16LL) & a3;
  if ( v11 != sub_80020 )
  {
    v20.m128i_i32[0] = (int)v8;
    ((void (__fastcall *)(_QWORD *, __int64, _QWORD, __int64))v11)(v4, v12, 0, -1);
  }
  reg_finder_find();
  v13 = v21;
  v14 = *(_QWORD *)a2;
  v15 = _mm_loadu_si128(&v22);
  v16 = v21;
  v21 = 0;
  v22 = 0;
  if ( v14 )
  {
    *(_QWORD *)(a2 + 8) = 0;
    v20 = v15;
    qfree(v14);
    v17 = v23;
    v18 = v21;
    *(_QWORD *)a2 = v16;
    v19 = _mm_load_si128(&v20);
    *(_BYTE *)(a2 + 24) = v17;
    *(__m128i *)(a2 + 8) = v19;
    if ( v18 )
    {
      v22.m128i_i64[0] = 0;
      qfree(v18);
      v17 = *(_BYTE *)(a2 + 24);
    }
  }
  else
  {
    *(_QWORD *)a2 = v13;
    v17 = v23;
    *(__m128i *)(a2 + 8) = v15;
    *(_BYTE *)(a2 + 24) = v17;
  }
  return (unsigned __int8)(v17 - 10) <= 1u;
}
