__int64 __fastcall sub_633E60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v9; // edx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rcx
  __m128i *v14; // rdi
  __int64 result; // rax
  __int64 *v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rax
  __m128i *v21; // rdi
  unsigned __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int64 v25; // rcx
  _BYTE *v26; // rdx
  int v27; // eax
  char v28; // cl
  char v29; // al
  __int64 v30; // rax
  __m128i v31; // xmm0
  __int64 *v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // rsi
  __int64 v36; // rax
  unsigned __int8 v37; // [rsp+Fh] [rbp-59h]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v39; // [rsp+18h] [rbp-50h]
  __m128i v40; // [rsp+30h] [rbp-38h] BYREF
  __int64 v41; // [rsp+40h] [rbp-28h]
  unsigned __int64 v42; // [rsp+48h] [rbp-20h]

  v42 = __readfsqword(0x28u);
  v9 = *(_DWORD *)(a2 + 56);
  if ( (v9 & 0x4000) != 0 )
  {
    ptr = nullptr;
    v40.m128i_i64[0] = 0;
    v40.m128i_i64[1] = -1;
    v39 = 0;
    if ( (v9 & 0x1000) != 0 )
    {
      v30 = *(_QWORD *)(a1 + 56);
      v31 = _mm_loadu_si128((const __m128i *)(a1 + 40));
      v33 = *(__int64 **)(a1 + 64);
      v34 = *(unsigned int *)(a1 + 12);
      v41 = v30;
      v35 = *(_QWORD *)(a1 + 32);
      v36 = *v33;
      v40 = v31;
      v41 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, __int64))(v36 + 32))(v33, v35, v34, a2);
      v21 = &v40;
    }
    else
    {
      v41 = 0;
      v21 = (__m128i *)(a1 + 40);
    }
    v22 = sub_631050(v21->m128i_i64, a2, &ptr, a4, a5);
    v25 = *(_QWORD *)(a2 + 24);
    if ( v25 >> 3 >= v22 )
    {
      if ( !under_debugger )
        interr(2066);
      BUG();
    }
    v26 = (char *)ptr + (v25 >> 3);
    v27 = 1 << (v25 & 7);
    v28 = v27 | *v26;
    v29 = *v26 & ~(_BYTE)v27;
    if ( a3 )
      v29 = v28;
    *v26 = v29;
    result = sub_633D90(a1, a2, (const char *)ptr, v39, v23, v24);
    if ( ptr )
    {
      v37 = result;
      *(_QWORD *)&v39 = 0;
      qfree(ptr);
      return v37;
    }
  }
  else
  {
    if ( *(_QWORD *)(a2 + 24) )
    {
      v10 = sub_633C30(a1, a2, 0, a4, a5, a6);
      v9 = *(_DWORD *)(a2 + 56);
      v11 = *(_QWORD *)(a2 + 24);
      if ( (v9 & 0x4000) != 0 || v11 && (v11 & (v11 - 1)) == 0 )
      {
        v12 = v11 | v10;
        v13 = v10 & ~v11;
        if ( !a3 )
          v12 = v13;
        a3 = v12;
      }
      else
      {
        a3 |= v10 & ~v11;
      }
    }
    v40.m128i_i64[0] = 0;
    v40.m128i_i64[1] = -1;
    if ( (v9 & 0x1000) != 0 )
    {
      v16 = *(__int64 **)(a1 + 64);
      v17 = *(unsigned int *)(a1 + 12);
      v41 = *(_QWORD *)(a1 + 56);
      v18 = *v16;
      v19 = *(_QWORD *)(a1 + 32);
      v40 = _mm_loadu_si128((const __m128i *)(a1 + 40));
      v20 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, __int64))(v18 + 32))(v16, v19, v17, a2);
      v14 = &v40;
      v41 = v20;
    }
    else
    {
      v41 = 0;
      v14 = (__m128i *)(a1 + 40);
    }
    return sub_632390((__int64)v14, a2, a3, 100, 0);
  }
  return result;
}
