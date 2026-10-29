_QWORD *__fastcall sub_537290(__int64 a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  char **exception; // rbx
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  unsigned int *v10; // r14
  _QWORD *v11; // rax
  _DWORD *v12; // rax
  _DWORD *v13; // rdx
  int v14; // ecx
  int v15; // edi
  __int64 v16; // rax
  unsigned int v17; // ecx
  unsigned int v18; // r8d
  size_t v19; // rsi
  unsigned int *v20; // rax
  __int64 v21; // rax
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

  if ( *(_QWORD *)(a2 + 8) == a1 )
  {
    v8 = (_QWORD *)sub_186B270(0x18u);
    v8[1] = 0;
    v9 = v8;
    *v8 = qword_1C66768;
    v8[2] = 0;
    if ( a3 )
    {
      v10 = a4;
      v11 = (_QWORD *)sub_186B270(0x10u);
      *v11 = 2;
      v12 = v11 + 1;
      v9[2] = v12;
      v13 = v12;
      while ( 1 )
      {
        v14 = *v10++;
        *v12 = v14;
        v15 = *(v13 - 1);
        v16 = (unsigned int)(v15 + 1);
        *(v13 - 1) = v16;
        if ( &a4[a3] == v10 )
          break;
        v17 = *(v13 - 2);
        if ( v17 == (_DWORD)v16 )
        {
          v18 = (3 * v17 + 1) >> 1;
          v19 = 4 * v18 + 8;
          if ( 4 * v15 + 12 >= (unsigned int)v19 || v17 >= v18 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v33, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v33);
            sub_233E40((__int64)v33);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v31 = (3 * v17 + 1) >> 1;
          v20 = (unsigned int *)sub_186B300(v13 - 2, v19);
          v13 = v20 + 2;
          *v20 = v31;
          v21 = v20[1];
          v9[2] = v13;
          v12 = &v13[v21];
        }
        else
        {
          v12 = &v13[v16];
        }
      }
      if ( v9 + 1 == (_QWORD *)(a2 + 16) )
      {
        v23 = nullptr;
      }
      else
      {
        v23 = *(_DWORD **)(a2 + 16);
        if ( v23 )
        {
LABEL_14:
          v24 = *(v23 - 1);
          v32 = *(v23 - 2);
          v25 = (_QWORD *)sub_186B270(8LL * v32 + 8);
          v26 = *(_QWORD **)(a2 + 16);
          v23 = v25 + 1;
          v9[1] = v25 + 1;
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
      goto LABEL_21;
    }
    if ( (_QWORD *)(a2 + 16) == v8 + 1 || (v23 = *(_DWORD **)(a2 + 16)) == nullptr )
    {
LABEL_21:
      *v9 = &off_1C50790;
      return v9;
    }
    goto LABEL_14;
  }
  return nullptr;
}

