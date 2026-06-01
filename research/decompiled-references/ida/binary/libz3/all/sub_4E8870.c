__int64 __fastcall sub_4E8870(__int64 a1, __int64 *a2)
{
  char **exception; // r13
  __int64 v3; // rax
  const __m128i *v4; // rbx
  unsigned int v5; // r12d
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // rax
  const __m128i *v10; // rbp
  const __m128i *v11; // r12
  const __m128i *v12; // rdi
  unsigned int v14; // r14d
  size_t v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rcx
  __m128i *v18; // rdx
  _DWORD *v19; // r13
  const __m128i *v20; // rax
  const __m128i *v21; // rcx
  bool v22; // zf
  __int64 v23; // rbp
  const __m128i *v24; // r14
  const __m128i *v25; // rbp
  const __m128i *v26; // rdi
  __int8 v27; // dl
  __m128i *v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // [rsp+8h] [rbp-90h]
  __int64 v31; // [rsp+10h] [rbp-88h]
  unsigned int v32; // [rsp+18h] [rbp-80h]
  unsigned int v33; // [rsp+1Ch] [rbp-7Ch]
  __m128i v34; // [rsp+30h] [rbp-68h] BYREF
  __int64 v35[11]; // [rsp+40h] [rbp-58h] BYREF

  v31 = sub_4D6490(*(_QWORD *)(a1 + 24));
  v33 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 16LL))(*(_QWORD *)(a1 + 40));
  v3 = *a2;
  if ( !*a2 )
    return sub_15D2CD0(v31, v33, 0, 0, 0);
  v4 = nullptr;
  v5 = 0;
  while ( v5 < *(_DWORD *)(v3 - 4) )
  {
    v6 = *(_QWORD *)(v3 + 8LL * v5);
    v34.m128i_i8[8] = 1;
    v34.m128i_i64[0] = v6;
    if ( v4 )
    {
      v7 = v4[-1].m128i_u32[3];
      if ( (_DWORD)v7 != v4[-1].m128i_i32[2] )
      {
        v4[v7] = _mm_load_si128(&v34);
        goto LABEL_7;
      }
      v14 = (unsigned int)(3 * v7 + 1) >> 1;
      v32 = v14;
      v15 = 16 * v14 + 8;
      if ( 16 * (int)v7 + 8 >= (unsigned int)v15 || (unsigned int)v7 >= v14 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v35, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v35);
        sub_233E40((__int64)v35);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v16 = sub_186B270(v15);
      v17 = v4[-1].m128i_u32[3];
      v18 = (__m128i *)(v16 + 8);
      v19 = (_DWORD *)v16;
      v30 = v16 + 8;
      *(_DWORD *)(v16 + 4) = v17;
      v20 = v4;
      v21 = &v4[v17];
      if ( v21 != v4 )
      {
        do
        {
          v22 = v20->m128i_i8[8] == 0;
          *v18 = _mm_loadu_si128(v20);
          v20->m128i_i32[0] = 0;
          if ( !v22 )
            v20->m128i_i8[8] = 0;
          ++v20;
          ++v18;
        }
        while ( v20 != v21 );
      }
      v23 = v4[-1].m128i_u32[3];
      if ( (_DWORD)v23 )
      {
        v24 = v4;
        v25 = &v4[v23];
        do
        {
          v26 = v24++;
          sub_15D0DF0(v26);
        }
        while ( v24 != v25 );
      }
      sub_186B220(&v4[-1].m128i_u64[1]);
      v4 = (const __m128i *)v30;
      v27 = v34.m128i_i8[8];
      *v19 = v32;
      v28 = (__m128i *)(v30 + 16LL * (unsigned int)v19[1]);
    }
    else
    {
      v29 = (_QWORD *)sub_186B270(0x28u);
      v4 = (const __m128i *)(v29 + 1);
      *v29 = 2;
      v27 = v34.m128i_i8[8];
      v28 = (__m128i *)(v29 + 1);
    }
    *v28 = _mm_load_si128(&v34);
    if ( !v27 )
    {
      v34.m128i_i32[0] = 0;
      goto LABEL_8;
    }
LABEL_7:
    v34.m128i_i32[0] = 0;
    v34.m128i_i8[8] = 0;
LABEL_8:
    ++v4[-1].m128i_i32[3];
    ++v5;
    sub_15D0DF0(&v34);
    v3 = *a2;
    if ( !*a2 )
      goto LABEL_9;
  }
  if ( !v4 )
    return sub_15D2CD0(v31, v33, 0, 0, 0);
LABEL_9:
  v8 = sub_15D2CD0(v31, v33, 0, v4[-1].m128i_u32[3], v4);
  v9 = v4[-1].m128i_u32[3];
  if ( (_DWORD)v9 )
  {
    v10 = v4;
    v11 = &v4[v9];
    do
    {
      v12 = v10++;
      sub_15D0DF0(v12);
    }
    while ( v11 != v10 );
  }
  sub_186B220(&v4[-1].m128i_u64[1]);
  return v8;
}

