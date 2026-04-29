__int64 __fastcall sub_17080(__int64 a1, __int64 *a2, __int64 a3, unsigned int a4, unsigned int a5, __int64 a6)
{
  _QWORD *v9; // rdi
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 (__fastcall *v14)(__int64, __int64); // r10
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdi
  __m128i v18; // xmm1
  __int64 v19; // r14
  char v20; // al
  __int64 v21; // rdi
  __m128i v22; // xmm1
  char v24; // al
  __int64 v25; // rdx
  __int64 v26; // [rsp+0h] [rbp-60h]
  unsigned int v27; // [rsp+Ch] [rbp-54h]
  __m128i v28; // [rsp+10h] [rbp-50h] BYREF
  __int64 v29; // [rsp+20h] [rbp-40h] BYREF
  __m128i v30; // [rsp+28h] [rbp-38h] BYREF
  char v31; // [rsp+38h] [rbp-28h]
  unsigned __int64 v32; // [rsp+48h] [rbp-18h]

  v32 = __readfsqword(0x28u);
  if ( a4 == 3 )
    return 0;
  v9 = *(_QWORD **)(a1 + 192);
  if ( !v9 )
    return 0;
  v11 = 0x10000;
  v12 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) - 1);
  if ( (unsigned int)v12 <= 7 )
  {
    v11 = dword_25C40[v12];
    if ( (_DWORD)v11 != 0x10000 )
    {
      v11 = a4 | (unsigned int)v11;
      if ( a4 >= 0x10000 )
        v11 = 0x10000;
    }
  }
  v31 = 0;
  v13 = -1;
  v30 = 0;
  v29 = 0;
  v14 = *(__int64 (__fastcall **)(__int64, __int64))(*v9 + 16LL);
  v15 = *(_QWORD *)(*(_QWORD *)(v9[1] + 32LL) + 16LL) & a3;
  if ( v14 != sub_162E0 )
  {
    v26 = a6;
    v27 = v11;
    v28.m128i_i64[0] = (__int64)v9;
    v15 = ((__int64 (__fastcall *)(_QWORD *, __int64, _QWORD, __int64))v14)(v9, v15, 0, -1);
    a6 = v26;
    v11 = v27;
    v13 = v25;
  }
  reg_finder_find(v9, &v29, v15, v13, v11, a5, a6);
  v16 = v29;
  v17 = *a2;
  v18 = _mm_loadu_si128(&v30);
  v19 = v29;
  v29 = 0;
  v30 = 0;
  if ( v17 )
  {
    a2[1] = 0;
    v28 = v18;
    qfree(v17);
    v20 = v31;
    v21 = v29;
    *a2 = v19;
    v22 = _mm_load_si128(&v28);
    *((_BYTE *)a2 + 24) = v20;
    *(__m128i *)(a2 + 1) = v22;
    if ( v21 )
    {
      v30.m128i_i64[0] = 0;
      qfree(v21);
    }
  }
  else
  {
    *a2 = v16;
    v24 = v31;
    *(__m128i *)(a2 + 1) = v18;
    *((_BYTE *)a2 + 24) = v24;
  }
  return 1;
}
