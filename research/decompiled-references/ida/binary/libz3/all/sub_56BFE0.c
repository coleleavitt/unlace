__int64 __fastcall sub_56BFE0(__int64 a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  char **exception; // r12
  __int64 v7; // rbx
  _QWORD *v8; // rax
  _DWORD *v9; // rax
  unsigned int *v10; // r15
  _DWORD *v11; // rdx
  int v12; // ecx
  int v13; // edi
  __int64 v14; // rax
  unsigned int v15; // ecx
  unsigned int v16; // r9d
  size_t v17; // rsi
  unsigned int v18; // r13d
  unsigned int *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // eax
  __int64 *v25; // [rsp+8h] [rbp-70h]
  __int64 v26[11]; // [rsp+20h] [rbp-58h] BYREF

  v7 = *(_QWORD *)(a2 + 16);
  if ( v7 )
  {
    if ( a3 == *(_DWORD *)(v7 - 4) )
      return 0;
    v7 = sub_186B270(0x30u);
    v25 = (__int64 *)(a2 + 16);
    *(_QWORD *)(v7 + 8) = 0;
    *(_DWORD *)(v7 + 16) = 0;
    *(_QWORD *)v7 = qword_1C65E20;
    *(_QWORD *)(v7 + 24) = 0;
    if ( !a3 )
      goto LABEL_11;
  }
  else
  {
    if ( !a3 )
      return v7;
    v7 = sub_186B270(0x30u);
    v25 = (__int64 *)(a2 + 16);
    *(_QWORD *)(v7 + 8) = 0;
    *(_DWORD *)(v7 + 16) = 0;
    *(_QWORD *)v7 = qword_1C65E20;
    *(_QWORD *)(v7 + 24) = 0;
  }
  v8 = (_QWORD *)sub_186B270(0x10u);
  *v8 = 2;
  v9 = v8 + 1;
  *(_QWORD *)(v7 + 24) = v9;
  v10 = a4;
  v11 = v9;
  while ( 1 )
  {
    v12 = *v10++;
    *v9 = v12;
    v13 = *(v11 - 1);
    v14 = (unsigned int)(v13 + 1);
    *(v11 - 1) = v14;
    if ( v10 == &a4[a3] )
      break;
    v15 = *(v11 - 2);
    if ( v15 == (_DWORD)v14 )
    {
      v16 = (3 * v15 + 1) >> 1;
      v17 = 4 * v16 + 8;
      v18 = v16;
      if ( 4 * v13 + 12 >= (unsigned int)v17 || v15 >= v16 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v26, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v26);
        sub_233E40((__int64)v26);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v19 = (unsigned int *)sub_186B300(v11 - 2, v17);
      v11 = v19 + 2;
      *v19 = v18;
      v20 = v19[1];
      *(_QWORD *)(v7 + 24) = v11;
      v9 = &v11[v20];
    }
    else
    {
      v9 = &v11[v14];
    }
  }
LABEL_11:
  sub_4D76C0(v25, a3, a4, v7 + 8);
  *(_QWORD *)v7 = &off_1C51450;
  v21 = *(_QWORD *)(a2 + 16);
  if ( v21 )
  {
    *(_QWORD *)(v7 + 32) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(v21 - 4)), _mm_cvtsi32_si128(a3)).m128i_u64[0];
    v22 = *(_DWORD *)(v21 - 4);
  }
  else
  {
    *(_DWORD *)(v7 + 32) = 0;
    v22 = 0;
    *(_DWORD *)(v7 + 36) = a3;
  }
  *(_DWORD *)(v7 + 40) = v22 - a3;
  return v7;
}

