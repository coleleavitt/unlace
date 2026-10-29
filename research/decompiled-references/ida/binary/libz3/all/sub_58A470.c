_QWORD *__fastcall sub_58A470(__int64 a1, _QWORD *a2, unsigned int a3, unsigned int *a4)
{
  char **exception; // rbx
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, _QWORD, _QWORD, unsigned int *); // r14
  _QWORD *v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // rbx
  _QWORD *v12; // rax
  unsigned int *v13; // r15
  _QWORD *v14; // rax
  _DWORD *v15; // rax
  _DWORD *v16; // rdx
  int v17; // ecx
  int v18; // edi
  __int64 v19; // rax
  unsigned int v20; // ecx
  unsigned int v21; // r9d
  size_t v22; // rsi
  unsigned int v23; // r13d
  unsigned int *v24; // rax
  __int64 v25; // rax
  _DWORD *v26; // rcx
  unsigned int v27; // r15d
  _QWORD *v28; // rax
  _QWORD *v29; // rsi
  size_t v30; // rdx
  __int64 v31; // r8
  unsigned int *v32; // rax
  __int64 v33; // rdx
  __int64 v36; // [rsp+10h] [rbp-78h]
  unsigned int v37; // [rsp+1Ch] [rbp-6Ch]
  __int64 v38[11]; // [rsp+30h] [rbp-58h] BYREF

  v7 = *(_QWORD *)(a1 + 48);
  v8 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, unsigned int *))(*(_QWORD *)v7 + 104LL);
  v9 = __dynamic_cast(
         a2,
         (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::check_relation,
         0);
  if ( !v9 )
    __cxa_bad_cast();
  v10 = v8(v7, v9[5], a3, a4);
  v11 = nullptr;
  v36 = v10;
  if ( v10 )
  {
    v12 = (_QWORD *)sub_186B270(0x20u);
    v12[1] = 0;
    v11 = v12;
    *v12 = qword_1C66768;
    v12[2] = 0;
    if ( a3 )
    {
      v13 = a4;
      v14 = (_QWORD *)sub_186B270(0x10u);
      *v14 = 2;
      v15 = v14 + 1;
      v11[2] = v15;
      v16 = v15;
      while ( 1 )
      {
        v17 = *v13++;
        *v15 = v17;
        v18 = *(v16 - 1);
        v19 = (unsigned int)(v18 + 1);
        *(v16 - 1) = v19;
        if ( &a4[a3] == v13 )
          break;
        v20 = *(v16 - 2);
        if ( v20 == (_DWORD)v19 )
        {
          v21 = (3 * v20 + 1) >> 1;
          v22 = 4 * v21 + 8;
          v23 = v21;
          if ( 4 * v18 + 12 >= (unsigned int)v22 || v20 >= v21 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v38, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v38);
            sub_233E40((__int64)v38);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v24 = (unsigned int *)sub_186B300(v16 - 2, v22);
          v16 = v24 + 2;
          *v24 = v23;
          v25 = v24[1];
          v11[2] = v16;
          v15 = &v16[v25];
        }
        else
        {
          v15 = &v16[v19];
        }
      }
      if ( v11 + 1 == a2 + 2 )
      {
        v26 = nullptr;
      }
      else
      {
        v26 = (_DWORD *)a2[2];
        if ( v26 )
        {
LABEL_13:
          v27 = *(v26 - 1);
          v37 = *(v26 - 2);
          v28 = (_QWORD *)sub_186B270(8LL * v37 + 8);
          v26 = v28 + 1;
          v11[1] = v28 + 1;
          v29 = (_QWORD *)a2[2];
          *v28 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v37), _mm_cvtsi32_si128(v27)).m128i_u64[0];
          if ( v29 )
          {
            v30 = 8LL * *((unsigned int *)v29 - 1);
            if ( v30 <= 8 )
            {
              if ( v30 == 8 )
                v28[1] = *v29;
            }
            else
            {
              v26 = memmove(v28 + 1, v29, v30);
            }
          }
        }
      }
      if ( a3 > 1 )
      {
        v31 = *(_QWORD *)&v26[2 * *a4];
        v32 = a4;
        do
        {
          v33 = v32[1];
          *(_QWORD *)&v26[2 * *v32++] = *(_QWORD *)&v26[2 * v33];
        }
        while ( v32 != &a4[a3 - 1] );
        *(_QWORD *)&v26[2 * a4[a3 - 1]] = v31;
      }
      goto LABEL_20;
    }
    if ( a2 + 2 == v12 + 1 || (v26 = (_DWORD *)a2[2]) == nullptr )
    {
LABEL_20:
      *v11 = &off_1C519D8;
      v11[3] = v36;
      return v11;
    }
    goto LABEL_13;
  }
  return v11;
}

