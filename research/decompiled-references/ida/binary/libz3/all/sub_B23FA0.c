__int64 __fastcall sub_B23FA0(__int64 a1, __int64 a2, __int64 a3)
{
  char **exception; // r15
  int v5; // r14d
  __int64 v6; // rax
  __int64 *v7; // r12
  int v8; // ecx
  __int64 *v9; // r15
  unsigned int v10; // r14d
  unsigned int v11; // eax
  unsigned int *v12; // rdx
  unsigned int v13; // ebx
  int v14; // r13d
  __int64 v15; // rax
  unsigned int *v16; // rax
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rdi
  int v21; // esi
  int v22; // edx
  __int64 result; // rax
  unsigned int v24; // ecx
  size_t v25; // rsi
  unsigned int *v26; // rax
  __int64 v27; // rax
  __int64 v28; // [rsp-10h] [rbp-90h]
  unsigned int v29; // [rsp+14h] [rbp-6Ch]
  unsigned int *v31; // [rsp+28h] [rbp-58h] BYREF
  unsigned int *v32[10]; // [rsp+30h] [rbp-50h] BYREF

  v31 = nullptr;
  v5 = sub_B232F0(a1, a2);
  v6 = sub_186B270(0x10u);
  v7 = *(__int64 **)(a3 + 8);
  v8 = v6 + 8;
  *(_DWORD *)(v6 + 8) = v5;
  v31 = (unsigned int *)(v6 + 8);
  *(_QWORD *)v6 = 0x100000002LL;
  if ( !v7 || (v9 = &v7[*((unsigned int *)v7 - 1)], v9 == v7) )
  {
    v19 = *(_QWORD *)(a1 + 24);
    if ( !*(_QWORD *)(v19 + 912) )
    {
      v20 = *(_QWORD *)(a1 + 16);
      v21 = *(_DWORD *)(a1 + 8);
      v22 = 1;
      goto LABEL_16;
    }
  }
  else
  {
    v10 = v5 ^ 1;
    do
    {
      while ( 1 )
      {
        v11 = sub_B232F0(a1, *v7);
        v12 = v31;
        v13 = v11;
        v14 = v11 ^ 1;
        if ( v31 )
        {
          v15 = *(v31 - 1);
          if ( (_DWORD)v15 == *(v31 - 2) )
          {
            v24 = (unsigned int)(3 * v15 + 1) >> 1;
            v25 = 4 * v24 + 8;
            if ( 4 * (int)v15 + 8 >= (unsigned int)v25 || (unsigned int)v15 >= v24 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0((__int64 *)v32, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v32);
              sub_233E40((__int64)v32);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v29 = (unsigned int)(3 * v15 + 1) >> 1;
            v26 = (unsigned int *)sub_186B300(v31 - 2, v25);
            v12 = v26 + 2;
            v31 = v26 + 2;
            *v26 = v29;
            v16 = &v26[v26[1] + 2];
          }
          else
          {
            v16 = &v31[v15];
          }
        }
        else
        {
          v27 = sub_186B270(0x10u);
          v12 = (unsigned int *)(v27 + 8);
          *(_QWORD *)v27 = 2;
          v31 = (unsigned int *)(v27 + 8);
          v16 = (unsigned int *)(v27 + 8);
        }
        *v16 = v14;
        ++*(v12 - 1);
        v17 = *(_QWORD *)(a1 + 24);
        if ( *(_QWORD *)(v17 + 912) )
        {
          v32[0] = nullptr;
          v18 = sub_186B270(0x10u);
          v32[0] = (unsigned int *)(v18 + 8);
          *(_QWORD *)v18 = 0x200000002LL;
          *(_QWORD *)(v18 + 8) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v10), _mm_cvtsi32_si128(v13)).m128i_u64[0];
          sub_966E60(a1, v32);
          if ( v32[0] )
            sub_186B220(v32[0] - 2);
        }
        sub_B6A470(*(_QWORD *)(a1 + 16), *(unsigned int *)(a1 + 8), v10, v13, 0, 0);
        if ( !*(_QWORD *)(v17 + 912) )
          break;
        ++v7;
        std::__ostream_insert<char,std::char_traits<char>>();
        if ( v9 == v7 )
          goto LABEL_12;
      }
      ++v7;
    }
    while ( v9 != v7 );
LABEL_12:
    v19 = *(_QWORD *)(a1 + 24);
    if ( !*(_QWORD *)(v19 + 912) )
      goto LABEL_14;
  }
  sub_966E60(a1, &v31);
LABEL_14:
  v8 = (int)v31;
  v20 = *(_QWORD *)(a1 + 16);
  v21 = *(_DWORD *)(a1 + 8);
  if ( v31 )
    v22 = *(v31 - 1);
  else
    v22 = 0;
LABEL_16:
  sub_B69FE0(v20, v21, v22, v8, 0, 0, 1);
  result = v28;
  if ( *(_QWORD *)(v19 + 912) )
    result = std::__ostream_insert<char,std::char_traits<char>>();
  if ( v31 )
    return sub_186B220(v31 - 2);
  return result;
}

