unsigned int *__fastcall sub_57CD70(__int64 a1, unsigned int **a2)
{
  char **exception; // r12
  char *v4; // rax
  unsigned int *result; // rax
  __int64 v6; // rcx
  unsigned int *v7; // rax
  __int64 v8; // rdx
  int v9; // r14d
  __int64 v10; // r12
  unsigned __int64 v11; // r13
  unsigned int v12; // esi
  _QWORD *v13; // rbx
  __int64 *v14; // rax
  __int64 *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned int v24; // r12d
  _QWORD *v25; // rax
  __int64 v26; // rdx
  size_t v27; // rdx
  __int64 v28; // rax
  unsigned int v29; // r12d
  __int64 v30; // rax
  unsigned int *v31; // rsi
  size_t v32; // rdx
  unsigned int v33; // ecx
  size_t v34; // rsi
  unsigned int *v35; // rax
  __int64 v36; // rax
  unsigned int v37; // [rsp+8h] [rbp-90h]
  unsigned int v38; // [rsp+8h] [rbp-90h]
  __int64 v39; // [rsp+10h] [rbp-88h]
  __int64 v40; // [rsp+10h] [rbp-88h]
  __int64 *v41; // [rsp+18h] [rbp-80h]
  unsigned int v42; // [rsp+28h] [rbp-70h]
  int v43; // [rsp+2Ch] [rbp-6Ch]
  __int64 v44[11]; // [rsp+40h] [rbp-58h] BYREF

  v41 = (__int64 *)(a1 + 16);
  v4 = (char *)__dynamic_cast(
                 *(const void **)(a1 + 8),
                 (const struct __class_type_info *)&`typeinfo for'datalog::relation_plugin,
                 (const struct __class_type_info *)&`typeinfo for'datalog::product_relation_plugin,
                 0);
  if ( !v4 )
    __cxa_bad_cast();
  result = (unsigned int *)sub_5840E0(v4 + 40);
  v43 = (int)result;
  if ( *(_DWORD *)(a1 + 24) != (_DWORD)result )
  {
    v6 = *(_QWORD *)(a1 + 32);
    v7 = *a2;
    if ( v6 )
    {
      if ( v7 )
      {
        v8 = *(v7 - 1);
        if ( (_DWORD)v8 )
        {
          v9 = *(_DWORD *)(v6 - 4);
          goto LABEL_7;
        }
      }
      sub_186B220((void *)(v6 - 8));
    }
    else if ( v7 )
    {
      v8 = *(v7 - 1);
      if ( (_DWORD)v8 )
      {
        v9 = 0;
LABEL_7:
        v10 = 4 * v8;
        v11 = 0;
        v12 = *v7;
        v13 = nullptr;
        if ( !v9 )
          goto LABEL_18;
LABEL_8:
        v14 = *(__int64 **)(a1 + 32);
        v15 = &v14[v9];
        while ( 1 )
        {
          v16 = *v14;
          if ( *v14 )
          {
            if ( v12 == *(_DWORD *)(v16 + 24) )
              break;
          }
          if ( v15 == ++v14 )
          {
LABEL_12:
            v17 = sub_4C6C30(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL), (__int64)v41, 0, v12);
            goto LABEL_13;
          }
        }
        *v14 = 0;
        if ( v13 )
        {
          while ( 1 )
          {
            v18 = *((_DWORD *)v13 - 1);
            if ( v18 == *((_DWORD *)v13 - 2) )
            {
              v33 = (3 * v18 + 1) >> 1;
              v34 = 8 * v33 + 8;
              if ( 8 * v18 + 8 >= (unsigned int)v34 || v18 >= v33 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v44, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v44);
                sub_233E40((__int64)v44);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v42 = (3 * v18 + 1) >> 1;
              v40 = v16;
              v35 = (unsigned int *)sub_186B300(v13 - 1, v34);
              v13 = v35 + 2;
              v16 = v40;
              *v35 = v42;
              LODWORD(v35) = v35[1];
              v21 = &v13[(unsigned int)v35];
              v20 = (_DWORD)v35 + 1;
            }
            else
            {
              v19 = v18;
              v20 = v18 + 1;
              v21 = &v13[v19];
            }
            v11 += 4LL;
            *v21 = v16;
            *((_DWORD *)v13 - 1) = v20;
            if ( v11 == v10 )
              break;
LABEL_17:
            v12 = (*a2)[v11 / 4];
            if ( v9 )
              goto LABEL_8;
LABEL_18:
            if ( !*(_BYTE *)(a1 + 28) )
              goto LABEL_12;
            v17 = sub_4C6F80(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL), v41, v12);
LABEL_13:
            v16 = v17;
            if ( !v13 )
              goto LABEL_21;
          }
        }
        else
        {
LABEL_21:
          v39 = v16;
          v11 += 4LL;
          v22 = sub_186B270(0x18u);
          *(_QWORD *)v22 = 2;
          v13 = (_QWORD *)(v22 + 8);
          *(_QWORD *)(v22 + 8) = v39;
          *(_DWORD *)(v22 + 4) = 1;
          if ( v11 != v10 )
            goto LABEL_17;
        }
        v23 = *(_QWORD *)(a1 + 32);
        if ( v23 )
          sub_186B220((void *)(v23 - 8));
        v24 = *((_DWORD *)v13 - 1);
        v37 = *((_DWORD *)v13 - 2);
        v25 = (_QWORD *)sub_186B270(8LL * v37 + 8);
        v26 = *((unsigned int *)v13 - 1);
        *(_QWORD *)(a1 + 32) = v25 + 1;
        v27 = 8 * v26;
        *v25 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v37), _mm_cvtsi32_si128(v24)).m128i_u64[0];
        if ( v27 > 8 )
        {
          memcpy(v25 + 1, v13, v27);
          goto LABEL_26;
        }
        if ( v27 == 8 )
        {
          v25[1] = *v13;
LABEL_26:
          *(_DWORD *)(a1 + 24) = v43;
          if ( a2 == (unsigned int **)(a1 + 40) )
            return (unsigned int *)sub_186B220(v13 - 1);
          v28 = *(_QWORD *)(a1 + 40);
          if ( v28 )
          {
            sub_186B220((void *)(v28 - 8));
            result = *a2;
            if ( !*a2 )
            {
              *(_QWORD *)(a1 + 40) = 0;
              return (unsigned int *)sub_186B220(v13 - 1);
            }
            goto LABEL_29;
          }
          goto LABEL_42;
        }
        *(_DWORD *)(a1 + 24) = v43;
        if ( a2 == (unsigned int **)(a1 + 40) )
          return (unsigned int *)sub_186B220(v13 - 1);
        v36 = *(_QWORD *)(a1 + 40);
        if ( !v36 )
        {
LABEL_42:
          result = *a2;
          if ( !*a2 )
            return (unsigned int *)sub_186B220(v13 - 1);
          goto LABEL_29;
        }
        goto LABEL_50;
      }
    }
    *(_QWORD *)(a1 + 32) = 0;
    *(_DWORD *)(a1 + 24) = v43;
    result = (unsigned int *)(a1 + 40);
    if ( a2 != (unsigned int **)(a1 + 40) )
    {
      v36 = *(_QWORD *)(a1 + 40);
      v13 = nullptr;
      if ( v36 )
      {
LABEL_50:
        sub_186B220((void *)(v36 - 8));
        result = *a2;
        if ( !*a2 )
        {
          *(_QWORD *)(a1 + 40) = 0;
          goto LABEL_32;
        }
LABEL_29:
        v29 = *(result - 1);
        v30 = *(result - 2);
        v38 = v30;
        result = (unsigned int *)sub_186B270(4 * v30 + 8);
        *(_QWORD *)(a1 + 40) = result + 2;
        v31 = *a2;
        *(_QWORD *)result = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v38), _mm_cvtsi32_si128(v29)).m128i_u64[0];
        if ( v31 )
        {
          v32 = 4LL * *(v31 - 1);
          if ( v32 <= 4 )
          {
            if ( v32 == 4 )
              result[2] = *v31;
          }
          else
          {
            result = (unsigned int *)memmove(result + 2, v31, v32);
          }
        }
LABEL_32:
        if ( !v13 )
          return result;
        return (unsigned int *)sub_186B220(v13 - 1);
      }
      result = *a2;
      if ( *a2 )
        goto LABEL_29;
    }
  }
  return result;
}

