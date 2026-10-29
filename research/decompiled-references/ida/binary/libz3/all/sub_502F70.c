_QWORD *__fastcall sub_502F70(__int64 a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  char **exception; // rbx
  _QWORD *v5; // rbx
  _QWORD *v10; // rax
  unsigned int *v11; // r14
  _QWORD *v12; // rax
  _DWORD *v13; // rax
  _DWORD *v14; // rdx
  int v15; // ecx
  int v16; // edi
  __int64 v17; // rax
  unsigned int v18; // ecx
  unsigned int v19; // r8d
  size_t v20; // rsi
  unsigned int *v21; // rax
  __int64 v22; // rax
  _DWORD *v23; // rcx
  unsigned int v24; // r14d
  _QWORD *v25; // rax
  _QWORD *v26; // rsi
  size_t v27; // rdx
  __int64 v28; // r8
  unsigned int *v29; // rax
  __int64 v30; // rdx
  unsigned int v31; // [rsp+Ch] [rbp-6Ch]
  unsigned int v32; // [rsp+Ch] [rbp-6Ch]
  __int64 v33[11]; // [rsp+20h] [rbp-58h] BYREF

  v5 = nullptr;
  if ( *(_QWORD *)(a2 + 8) == a1 )
  {
    v10 = (_QWORD *)sub_186B270(0x18u);
    v10[1] = 0;
    v5 = v10;
    *v10 = qword_1C66768;
    v10[2] = 0;
    if ( a3 )
    {
      v11 = a4;
      v12 = (_QWORD *)sub_186B270(0x10u);
      *v12 = 2;
      v13 = v12 + 1;
      v5[2] = v13;
      v14 = v13;
      while ( 1 )
      {
        v15 = *v11++;
        *v13 = v15;
        v16 = *(v14 - 1);
        v17 = (unsigned int)(v16 + 1);
        *(v14 - 1) = v17;
        if ( &a4[a3] == v11 )
          break;
        v18 = *(v14 - 2);
        if ( v18 == (_DWORD)v17 )
        {
          v19 = (3 * v18 + 1) >> 1;
          v20 = 4 * v19 + 8;
          if ( 4 * v16 + 12 >= (unsigned int)v20 || v18 >= v19 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v33, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v33);
            sub_233E40((__int64)v33);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v31 = (3 * v18 + 1) >> 1;
          v21 = (unsigned int *)sub_186B300(v14 - 2, v20);
          v14 = v21 + 2;
          *v21 = v31;
          v22 = v21[1];
          v5[2] = v14;
          v13 = &v14[v22];
        }
        else
        {
          v13 = &v14[v17];
        }
      }
      if ( v5 + 1 == (_QWORD *)(a2 + 16) )
      {
        v23 = nullptr;
      }
      else
      {
        v23 = *(_DWORD **)(a2 + 16);
        if ( v23 )
        {
LABEL_13:
          v24 = *(v23 - 1);
          v32 = *(v23 - 2);
          v25 = (_QWORD *)sub_186B270(8LL * v32 + 8);
          v26 = *(_QWORD **)(a2 + 16);
          v23 = v25 + 1;
          v5[1] = v25 + 1;
          *v25 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v32), _mm_cvtsi32_si128(v24)).m128i_u64[0];
          if ( v26 )
          {
            v27 = 8LL * *((unsigned int *)v26 - 1);
            if ( v27 <= 8 )
            {
              if ( v27 == 8 )
                v25[1] = *v26;
            }
            else
            {
              v23 = memmove(v25 + 1, v26, v27);
            }
          }
        }
      }
      if ( a3 > 1 )
      {
        v28 = *(_QWORD *)&v23[2 * *a4];
        v29 = a4;
        do
        {
          v30 = v29[1];
          *(_QWORD *)&v23[2 * *v29++] = *(_QWORD *)&v23[2 * v30];
        }
        while ( v29 != &a4[a3 - 1] );
        *(_QWORD *)&v23[2 * a4[a3 - 1]] = v28;
      }
      goto LABEL_20;
    }
    if ( (_QWORD *)(a2 + 16) == v10 + 1 || (v23 = *(_DWORD **)(a2 + 16)) == nullptr )
    {
LABEL_20:
      *v5 = &off_1C502E8;
      return v5;
    }
    goto LABEL_13;
  }
  return v5;
}

