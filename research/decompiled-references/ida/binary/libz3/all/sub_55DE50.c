__int64 __fastcall sub_55DE50(__int64 a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  __m128i *exception; // r12
  char *v5; // rax
  __int64 v8; // rbx
  _QWORD *v9; // rax
  _DWORD *v10; // rax
  unsigned int *v11; // r14
  _DWORD *v12; // rdx
  int v13; // ecx
  int v14; // edi
  __int64 v15; // rax
  unsigned int v16; // ecx
  unsigned int v18; // r8d
  size_t v19; // rsi
  unsigned int v20; // ebp
  unsigned int *v21; // rax
  __int64 v22; // rax
  __int64 *v23; // [rsp+8h] [rbp-60h]
  _QWORD v24[2]; // [rsp+10h] [rbp-58h] BYREF
  __int64 v25; // [rsp+20h] [rbp-48h] BYREF

  if ( *(_QWORD *)(a2 + 8) != a1 )
    return 0;
  v8 = sub_186B270(0x20u);
  v23 = (__int64 *)(a2 + 16);
  *(_QWORD *)(v8 + 8) = 0;
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)v8 = qword_1C65E20;
  *(_QWORD *)(v8 + 24) = 0;
  if ( a3 )
  {
    v9 = (_QWORD *)sub_186B270(0x10u);
    *v9 = 2;
    v10 = v9 + 1;
    v11 = a4;
    *(_QWORD *)(v8 + 24) = v10;
    v12 = v10;
    while ( 1 )
    {
      v13 = *v11++;
      *v10 = v13;
      v14 = *(v12 - 1);
      v15 = (unsigned int)(v14 + 1);
      *(v12 - 1) = v15;
      if ( &a4[a3] == v11 )
        break;
      v16 = *(v12 - 2);
      if ( v16 == (_DWORD)v15 )
      {
        v18 = (3 * v16 + 1) >> 1;
        v19 = 4 * v18 + 8;
        v20 = v18;
        if ( 4 * v14 + 12 >= (unsigned int)v19 || v16 >= v18 )
        {
          exception = (__m128i *)__cxa_allocate_exception(0x28u);
          v5 = (char *)operator new(0x2Bu);
          strcpy(v5, "Overflow encountered when expanding vector");
          exception->m128i_i64[1] = (__int64)v5;
          exception->m128i_i64[0] = (__int64)off_1C63128;
          v24[0] = &v25;
          exception[1] = _mm_unpacklo_epi64((__m128i)0x2AuLL, (__m128i)0x2AuLL);
          v24[1] = 0;
          v25 = 0;
          sub_233E40((__int64)v24);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v21 = (unsigned int *)sub_186B300(v12 - 2, v19);
        v12 = v21 + 2;
        *v21 = v20;
        v22 = v21[1];
        *(_QWORD *)(v8 + 24) = v12;
        v10 = &v12[v22];
      }
      else
      {
        v10 = &v12[v15];
      }
    }
  }
  sub_4D76C0(v23, a3, a4, v8 + 8);
  *(_QWORD *)v8 = &off_1C50D08;
  return v8;
}

