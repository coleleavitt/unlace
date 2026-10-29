_QWORD *__fastcall sub_4EE0F0(__int64 a1, _QWORD *a2, unsigned int a3, int *a4)
{
  char **exception; // r12
  _QWORD *v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // r13
  _QWORD *v10; // rax
  _DWORD *v11; // rax
  int *v12; // r14
  int *v13; // r15
  _DWORD *v14; // rdx
  int v15; // ecx
  int v16; // edi
  __int64 v17; // rax
  unsigned int v18; // ecx
  unsigned int v19; // r8d
  size_t v20; // rsi
  unsigned int v21; // r12d
  unsigned int *v22; // rax
  __int64 v23; // rax
  _QWORD *v25; // r14
  __int64 v26; // rdi
  __int64 v27; // rax
  unsigned int v28; // r15d
  __int64 v29; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rsi
  size_t v32; // rdx
  __int64 v33; // rsi
  __int64 v34; // rdi
  unsigned int v35; // edx
  __int64 v36; // rax
  unsigned int v38; // [rsp+Ch] [rbp-6Ch]
  __int64 v39[11]; // [rsp+20h] [rbp-58h] BYREF

  if ( a2[1] != a1 )
    return nullptr;
  v7 = (_QWORD *)sub_186B270(0x28u);
  v8 = sub_4EC5D0(a2);
  v7[1] = 0;
  v9 = (__int64)v8;
  v7[2] = 0;
  *v7 = qword_1C66740;
  if ( a3 )
  {
    v10 = (_QWORD *)sub_186B270(0x10u);
    *v10 = 2;
    v11 = v10 + 1;
    v12 = a4;
    v7[2] = v11;
    v13 = &a4[a3];
    v14 = v11;
    while ( 1 )
    {
      v15 = *v12++;
      *v11 = v15;
      v16 = *(v14 - 1);
      v17 = (unsigned int)(v16 + 1);
      *(v14 - 1) = v17;
      if ( v13 == v12 )
        break;
      v18 = *(v14 - 2);
      if ( v18 == (_DWORD)v17 )
      {
        v19 = (3 * v18 + 1) >> 1;
        v20 = 4 * v19 + 8;
        v21 = v19;
        if ( 4 * v16 + 12 >= (unsigned int)v20 || v18 >= v19 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v39, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v39);
          sub_233E40((__int64)v39);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v22 = (unsigned int *)sub_186B300(v14 - 2, v20);
        v14 = v22 + 2;
        *v22 = v21;
        v23 = v22[1];
        v7[2] = v14;
        v11 = &v14[v23];
      }
      else
      {
        v11 = &v14[v17];
      }
    }
    v25 = v7 + 1;
    if ( v7 + 1 != (_QWORD *)(v9 + 16) )
    {
      v26 = v7[1];
      if ( v26 )
        sub_186B220((void *)(v26 - 8));
      v27 = *(_QWORD *)(v9 + 16);
      if ( v27 )
      {
LABEL_16:
        v28 = *(_DWORD *)(v27 - 4);
        v29 = *(unsigned int *)(v27 - 8);
        v38 = v29;
        v30 = (_QWORD *)sub_186B270(8 * v29 + 8);
        v7[1] = v30 + 1;
        v31 = *(_QWORD **)(v9 + 16);
        *v30 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v38), _mm_cvtsi32_si128(v28)).m128i_u64[0];
        if ( v31 )
        {
          v32 = 8LL * *((unsigned int *)v31 - 1);
          if ( v32 <= 8 )
          {
            if ( v32 == 8 )
              v30[1] = *v31;
          }
          else
          {
            memmove(v30 + 1, v31, v32);
          }
        }
        if ( !a3 )
          goto LABEL_20;
        goto LABEL_26;
      }
      v7[1] = 0;
    }
LABEL_26:
    sub_4EDF60(v25, a3, a4);
    goto LABEL_20;
  }
  v25 = v7 + 1;
  if ( v7 + 1 != v8 + 2 )
  {
    v27 = v8[2];
    if ( v27 )
      goto LABEL_16;
  }
LABEL_20:
  *v7 = &off_1C4FE10;
  v7[3] = 0;
  v7[4] = 0;
  sub_4EDDC0(v9, v7 + 2, 0);
  sub_186B510(v7 + 3, *(_DWORD *)(*(_QWORD *)(v9 + 32) + 520LL) >> 1, 0);
  v33 = v7[2];
  if ( v33 && *(_DWORD *)(v33 - 4) )
  {
    v34 = v7[4];
    v35 = 0;
    do
    {
      v36 = v35++;
      *(_DWORD *)(v34 + 4LL * (*(_DWORD *)(v33 + 4 * v36) >> 5)) |= 1 << *(_DWORD *)(v33 + 4 * v36);
    }
    while ( v35 < *(_DWORD *)(v33 - 4) );
  }
  return v7;
}

