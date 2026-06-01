__int64 __fastcall sub_BF9320(__int64 a1, __int32 a2, __int32 a3)
{
  char **exception; // rbx
  __int64 v7; // rbp
  __m128i *v8; // rbx
  unsigned int v9; // r9d
  __int64 v10; // rcx
  __m128i *v11; // rbp
  __int64 v12; // rax
  __m128i *v13; // rsi
  __m128i *v14; // rax
  __m128i *v15; // rcx
  __int32 v16; // edx
  __int32 v17; // eax
  __int64 v18; // rax
  _QWORD *v19; // rdi
  __int64 v20; // rbx
  unsigned int v21; // eax
  __int64 v22; // rdx
  __int64 result; // rax
  __int64 *v24; // rdx
  unsigned int v25; // ebp
  size_t v26; // rsi
  unsigned int *v27; // rax
  __int64 v28; // rdx
  __m128i *v29; // rax
  int v30; // r8d
  __m128i *v31; // rdx
  const __m128i *v32; // r15
  __m128i *v33; // r10
  __int64 v34; // rax
  __m128i *v35; // rdx
  __m128i *v36; // rax
  __m128i v37; // xmm0
  _QWORD *v38; // rax
  size_t v39; // [rsp+0h] [rbp-88h]
  unsigned int v40; // [rsp+0h] [rbp-88h]
  size_t v41; // [rsp+8h] [rbp-80h]
  int v42; // [rsp+10h] [rbp-78h]
  __int64 v43[11]; // [rsp+30h] [rbp-58h] BYREF

  v7 = *(unsigned int *)(a1 + 4272);
  if ( 3 * (int)v7 < (unsigned int)(4 * (*(_DWORD *)(a1 + 4276) + *(_DWORD *)(a1 + 4280))) )
  {
    v39 = 16LL * (unsigned int)(2 * v7);
    v29 = (__m128i *)sub_186B270(v39);
    v30 = 2 * v7;
    v10 = v39;
    v8 = v29;
    if ( 2 * (_DWORD)v7 )
    {
      v31 = &v29[2 * (v7 & 0x7FFFFFFF)];
      do
      {
        v29->m128i_i64[0] = 0;
        v29 += 2;
        v29[-1].m128i_i64[0] = 0;
      }
      while ( v29 != v31 );
    }
    v32 = *(const __m128i **)(a1 + 4264);
    v9 = v30 - 1;
    v11 = &v8[v39 / 0x10];
    v33 = (__m128i *)&v32[*(unsigned int *)(a1 + 4272)];
    if ( v32 != v33 )
    {
      do
      {
        while ( v32->m128i_i32[1] != 2 )
        {
          if ( v33 == ++v32 )
            goto LABEL_42;
        }
        v34 = 16LL * (v32->m128i_i32[0] & v9);
        v35 = &v8[(unsigned __int64)v34 / 0x10];
        if ( v39 == v34 )
        {
LABEL_47:
          if ( v8 == v35 )
          {
LABEL_54:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v36 = v8;
          while ( v36->m128i_i32[1] )
          {
            if ( v35 == ++v36 )
              goto LABEL_54;
          }
        }
        else
        {
          v36 = &v8[(unsigned __int64)v34 / 0x10];
          while ( v36->m128i_i32[1] )
          {
            if ( v11 == ++v36 )
              goto LABEL_47;
          }
        }
        v37 = _mm_loadu_si128(v32++);
        *v36 = v37;
      }
      while ( v33 != v32 );
LABEL_42:
      v33 = *(__m128i **)(a1 + 4264);
    }
    if ( v33 )
    {
      v42 = v30;
      v41 = v39;
      v40 = v30 - 1;
      sub_186B220(v33);
      v30 = v42;
      v10 = v41;
      v9 = v40;
    }
    *(_QWORD *)(a1 + 4264) = v8;
    *(_DWORD *)(a1 + 4272) = v30;
    *(_DWORD *)(a1 + 4280) = 0;
  }
  else
  {
    v8 = *(__m128i **)(a1 + 4264);
    v9 = v7 - 1;
    v10 = 16 * v7;
    v11 = &v8[v7];
  }
  v12 = 16LL * (a2 & v9);
  v13 = &v8[(unsigned __int64)v12 / 0x10];
  if ( v12 != v10 )
  {
    v14 = &v8[(unsigned __int64)v12 / 0x10];
    v15 = nullptr;
    while ( 1 )
    {
      v16 = v14->m128i_i32[1];
      if ( v16 == 2 )
      {
        if ( a2 == v14->m128i_i32[0] && a2 == v14->m128i_i32[2] )
        {
          v14->m128i_i32[2] = a2;
          v14->m128i_i32[3] = a3;
          v14->m128i_i32[1] = 2;
          goto LABEL_23;
        }
      }
      else
      {
        if ( !v16 )
        {
          if ( v15 )
            goto LABEL_21;
          v15 = v14;
          goto LABEL_22;
        }
        v15 = v14;
      }
      if ( ++v14 == v11 )
        goto LABEL_15;
    }
  }
  v15 = nullptr;
  while ( 1 )
  {
LABEL_15:
    if ( v13 == v8 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v17 = v8->m128i_i32[1];
    if ( v17 != 2 )
      break;
    if ( a2 == v8->m128i_i32[0] && a2 == v8->m128i_i32[2] )
    {
      v8->m128i_i32[2] = a2;
      v8->m128i_i32[3] = a3;
      v8->m128i_i32[1] = 2;
      goto LABEL_23;
    }
LABEL_14:
    ++v8;
  }
  if ( v17 )
  {
    v15 = v8;
    goto LABEL_14;
  }
  if ( v15 )
LABEL_21:
    --*(_DWORD *)(a1 + 4280);
  else
    v15 = v8;
LABEL_22:
  v15->m128i_i32[2] = a2;
  v15->m128i_i32[3] = a3;
  v15->m128i_i32[1] = 2;
  v15->m128i_i32[0] = a2;
  ++*(_DWORD *)(a1 + 4276);
LABEL_23:
  v18 = sub_180C100(a1 + 3960, 24);
  v19 = *(_QWORD **)(a1 + 3944);
  v20 = v18;
  *(_QWORD *)v18 = off_1C57FA8;
  *(_QWORD *)(v18 + 8) = a1;
  *(_DWORD *)(v18 + 16) = a2;
  if ( v19 )
  {
    v21 = *((_DWORD *)v19 - 1);
    if ( v21 == *((_DWORD *)v19 - 2) )
    {
      v25 = (3 * v21 + 1) >> 1;
      v26 = 8 * v25 + 8;
      if ( 8 * v21 + 8 >= (unsigned int)v26 || v21 >= v25 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v43, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v43);
        sub_233E40((__int64)v43);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v27 = (unsigned int *)sub_186B300(v19 - 1, v26);
      v28 = v27[1];
      v19 = v27 + 2;
      *v27 = v25;
      *(_QWORD *)(a1 + 3944) = v27 + 2;
      LODWORD(v27) = v28;
      v24 = &v19[v28];
      result = (unsigned int)((_DWORD)v27 + 1);
    }
    else
    {
      v22 = v21;
      result = v21 + 1;
      v24 = &v19[v22];
    }
  }
  else
  {
    v38 = (_QWORD *)sub_186B270(0x18u);
    v19 = v38 + 1;
    *v38 = 2;
    result = 1;
    *(_QWORD *)(a1 + 3944) = v19;
    v24 = v19;
  }
  *v24 = v20;
  *((_DWORD *)v19 - 1) = result;
  return result;
}

