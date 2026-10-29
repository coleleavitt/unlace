__int64 (__fastcall **__fastcall sub_A09980(
        __int64 a1,
        int a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8,
        int a9))()
{
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // r12
  __int64 v17; // rbx
  _QWORD *v18; // rax
  __int64 *m128i_i64; // rdi
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned int v22; // ecx
  unsigned int v24; // r15d
  size_t v25; // rdi
  __int64 v26; // rax
  const __m128i *v27; // r15
  _DWORD *v28; // r14
  __m128i *v29; // rax
  __int64 v30; // rcx
  __m128i *v31; // rdx
  const __m128i *v32; // rax
  const __m128i *v33; // rcx
  bool v34; // zf
  __int64 v35; // rax
  const __m128i *v36; // r12
  const __m128i *v37; // rdi
  char **exception; // rbx
  __m128i *v40; // [rsp+0h] [rbp-78h]
  __int64 v41; // [rsp+8h] [rbp-70h]
  unsigned int v42; // [rsp+14h] [rbp-64h]
  __int64 v44[11]; // [rsp+20h] [rbp-58h] BYREF

  v12 = sub_A06EF0(*(__int64 **)(a8 + 8), (__int64)"gomory-cut");
  v13 = *(_QWORD *)(a8 + 8);
  v14 = *(_QWORD *)(v13 + 24);
  v15 = *(_QWORD *)(v13 + 16);
  if ( v14 )
  {
    v16 = *(unsigned int *)(v14 - 4);
    if ( (_DWORD)v16 )
    {
      if ( !v15 )
        goto LABEL_5;
      goto LABEL_4;
    }
    if ( v15 && *(_DWORD *)(v15 - 4) )
    {
LABEL_4:
      v16 = (unsigned int)(*(_DWORD *)(v15 - 4) + v16);
      goto LABEL_5;
    }
LABEL_12:
    sub_B72D60(a1, a3, a4, a5, a6, a7);
    *(_DWORD *)(a1 + 40) = a2;
    *(_QWORD *)(a1 + 48) = 0;
    goto LABEL_13;
  }
  if ( !v15 )
    goto LABEL_12;
  v16 = *(unsigned int *)(v15 - 4);
  if ( !(_DWORD)v16 )
    goto LABEL_12;
LABEL_5:
  sub_B72D60(a1, a3, a4, a5, a6, a7);
  *(_DWORD *)(a1 + 40) = a2;
  *(_QWORD *)a1 = qword_1C6E7C8;
  *(_QWORD *)(a1 + 48) = 0;
  if ( (_DWORD)v16 != -1 )
  {
    v17 = v12;
    v41 = v12 + 16 * v16 + 16;
    v18 = (_QWORD *)sub_186B270(0x28u);
    m128i_i64 = v18 + 1;
    *v18 = 2;
    *(_QWORD *)(a1 + 48) = v18 + 1;
    while ( 1 )
    {
      v17 += 16;
      sub_15D0E50(m128i_i64, v12);
      v20 = *(_QWORD *)(a1 + 48);
      v21 = (unsigned int)(*(_DWORD *)(v20 - 4) + 1);
      *(_DWORD *)(v20 - 4) = v21;
      if ( v41 == v17 )
        break;
      v22 = *(_DWORD *)(v20 - 8);
      v12 = v17;
      if ( v22 == (_DWORD)v21 )
      {
        v24 = (3 * v22 + 1) >> 1;
        v42 = v24;
        v25 = 16 * v24 + 8;
        if ( 16 * v22 + 8 >= (unsigned int)v25 || v22 >= v24 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_98B3B0(v44, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v44);
          sub_233E40((__int64)v44);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v26 = sub_186B270(v25);
        v27 = *(const __m128i **)(a1 + 48);
        v28 = (_DWORD *)v26;
        v29 = (__m128i *)(v26 + 8);
        v40 = v29;
        if ( v27 )
        {
          v30 = v27[-1].m128i_u32[3];
          v31 = v29;
          v32 = *(const __m128i **)(a1 + 48);
          v28[1] = v30;
          v33 = &v27[v30];
          if ( v27 != v33 )
          {
            do
            {
              v34 = v32->m128i_i8[8] == 0;
              *v31 = _mm_loadu_si128(v32);
              v32->m128i_i32[0] = 0;
              if ( !v34 )
                v32->m128i_i8[8] = 0;
              ++v32;
              ++v31;
            }
            while ( v33 != v32 );
          }
          v35 = v27[-1].m128i_u32[3];
          v36 = &v27[v35];
          if ( (_DWORD)v35 )
          {
            do
            {
              v37 = v27++;
              sub_15D0DF0(v37);
            }
            while ( v27 != v36 );
            v27 = *(const __m128i **)(a1 + 48);
          }
          sub_186B220(&v27[-1].m128i_u64[1]);
          m128i_i64 = v40[v28[1]].m128i_i64;
          v29 = v40;
        }
        else
        {
          v28[1] = 0;
          m128i_i64 = (__int64 *)v29;
        }
        *(_QWORD *)(a1 + 48) = v29;
        *v28 = v42;
      }
      else
      {
        m128i_i64 = (__int64 *)(v20 + 16 * v21);
      }
    }
  }
LABEL_13:
  *(_QWORD *)a1 = &off_1C57938;
  *(_DWORD *)(a1 + 56) = a9;
  sub_B733F0(a1, a3);
  *(_QWORD *)a1 = &off_1C70BA8;
  return &off_1C70BA8;
}

