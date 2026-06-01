void *__fastcall sub_40D7C0(void *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  char **exception; // r12
  __int64 v8; // rax
  char v9; // r8
  __int64 v10; // rsi
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  _QWORD *v14; // r9
  const __m128i *v15; // r15
  _DWORD *v16; // rax
  unsigned int v17; // ebx
  _QWORD *v18; // rax
  __m128i v19; // xmm1
  __m128i *v20; // rbx
  const __m128i *i; // rbp
  __m128i v22; // xmm0
  __int64 v23; // rax
  __int64 v24; // rsi
  _QWORD *v25; // rdi
  unsigned int v26; // r12d
  __int64 v27; // r13
  unsigned int v28; // eax
  __int64 v29; // r9
  int v30; // eax
  __m128i v31; // xmm0
  __int64 v32; // rdx
  __int64 v33; // rdx
  void (__fastcall ***v34)(_QWORD); // rbx
  unsigned int v37; // r14d
  size_t v38; // rsi
  unsigned int *v39; // rax
  __int64 v40; // rsi
  _QWORD *v41; // rax
  void *v43; // [rsp+0h] [rbp-B8h]
  unsigned int v44; // [rsp+18h] [rbp-A0h]
  const __m128i *v45; // [rsp+28h] [rbp-90h] BYREF
  __int64 v46[2]; // [rsp+30h] [rbp-88h] BYREF
  int v47[2]; // [rsp+40h] [rbp-78h] BYREF
  void *ptr; // [rsp+48h] [rbp-70h]
  _QWORD *v49; // [rsp+50h] [rbp-68h] BYREF
  __int64 v50[11]; // [rsp+60h] [rbp-58h] BYREF

  v8 = *(_QWORD *)(a2 + 152);
  v9 = *(_BYTE *)(a2 + 668);
  v10 = *(unsigned int *)(a2 + 364);
  v46[0] = v8;
  v46[1] = 0;
  v45 = nullptr;
  sub_40C0C0(a2, v10, (__int64)v46, &v45, v9, a6);
  v15 = v45;
  *(_QWORD *)v47 = *(_QWORD *)(a2 + 152);
  v16 = *(_DWORD **)(a2 + 624);
  ptr = v16;
  if ( v16 )
    ++v16[2];
  v49 = nullptr;
  if ( v15 )
  {
    v17 = v15[-1].m128i_u32[3];
    v44 = v15[-1].m128i_u32[2];
    v18 = (_QWORD *)sub_186B270(48LL * v44 + 8);
    v19 = _mm_cvtsi32_si128(v17);
    v20 = (__m128i *)(v18 + 1);
    v49 = v18 + 1;
    *v18 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v44), v19).m128i_u64[0];
    for ( i = &v15[3 * v15[-1].m128i_u32[3]]; i != v15; v20 += 3 )
    {
      v22 = _mm_loadu_si128(v15);
      *v20 = v22;
      if ( v22.m128i_i64[0] )
        ++*(_DWORD *)(v22.m128i_i64[0] + 8);
      v23 = v15[1].m128i_i64[0];
      v20[1].m128i_i64[1] = 0;
      v24 = v15[1].m128i_i64[1];
      v20[1].m128i_i64[0] = v23;
      if ( v24 )
      {
        v25 = nullptr;
        v26 = 0;
        do
        {
          if ( v26 >= *(_DWORD *)(v24 - 4) )
            break;
          v27 = *(_QWORD *)(v24 + 8LL * v26);
          if ( v27 )
            ++*(_DWORD *)(v27 + 8);
          if ( v25 )
          {
            v28 = *((_DWORD *)v25 - 1);
            if ( v28 == *((_DWORD *)v25 - 2) )
            {
              v37 = (3 * v28 + 1) >> 1;
              v38 = 8 * v37 + 8;
              if ( 8 * v28 + 8 >= (unsigned int)v38 || v28 >= v37 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_3FCFD0(v50, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v50);
                sub_233E40((__int64)v50);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v39 = (unsigned int *)sub_186B300(v25 - 1, v38);
              v40 = v39[1];
              v25 = v39 + 2;
              *v39 = v37;
              v20[1].m128i_i64[1] = (__int64)(v39 + 2);
              LODWORD(v39) = v40;
              v14 = &v25[v40];
              v24 = v15[1].m128i_i64[1];
              v30 = (_DWORD)v39 + 1;
            }
            else
            {
              v29 = v28;
              v30 = v28 + 1;
              v14 = &v25[v29];
            }
          }
          else
          {
            v41 = (_QWORD *)sub_186B270(0x18u);
            v11 = 2;
            v25 = v41 + 1;
            v20[1].m128i_i64[1] = (__int64)(v41 + 1);
            v14 = v41 + 1;
            v24 = v15[1].m128i_i64[1];
            *v41 = 2;
            v30 = 1;
          }
          *v14 = v27;
          ++v26;
          *((_DWORD *)v25 - 1) = v30;
        }
        while ( v24 );
      }
      v31 = _mm_loadu_si128(v15 + 2);
      v20[2] = v31;
      if ( v31.m128i_i64[0] )
        ++*(_DWORD *)(v31.m128i_i64[0] + 8);
      v15 += 3;
    }
  }
  sub_421980((int)a1, (int)v47, v11, v12, v13, (int)v14, a1);
  sub_41E3C0(&v49, v47, v32);
  v34 = (void (__fastcall ***)(_QWORD))ptr;
  if ( ptr )
  {
    if ( (*((_DWORD *)ptr + 2))-- == 1 )
    {
      (**v34)(v34);
      sub_186B220(v34);
    }
  }
  sub_41E3C0(&v45, v47, v33);
  sub_2334C0(v46);
  return v43;
}

