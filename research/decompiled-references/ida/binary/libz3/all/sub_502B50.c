_QWORD *__fastcall sub_502B50(__int64 a1, __int64 a2, unsigned int a3, int *a4)
{
  char **v4; // r12
  char **exception; // rbx
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  int *v10; // r15
  _DWORD *v11; // rax
  _DWORD *v12; // rdx
  int v13; // ecx
  int v14; // edi
  __int64 v15; // rax
  unsigned int v16; // ecx
  unsigned int v17; // r9d
  size_t v18; // rsi
  unsigned int v19; // r13d
  unsigned int *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned int v23; // r14d
  __int64 v24; // rax
  _QWORD *v25; // rax
  _DWORD *v26; // rcx
  _QWORD *v27; // r15
  _QWORD *v28; // rsi
  size_t v29; // rdx
  unsigned int v30; // eax
  unsigned int v31; // r13d
  _QWORD *v32; // rsi
  unsigned int v33; // edx
  unsigned int v34; // edi
  _QWORD *v35; // rax
  unsigned int v36; // ebp
  size_t v37; // rsi
  unsigned int *v38; // rax
  unsigned int v39; // eax
  __int64 v40; // r14
  __int64 v41; // rdx
  unsigned int v43; // edx
  __int64 v44; // rsi
  __int64 v45; // rdi
  __int64 v46; // rsi
  unsigned int v48; // [rsp+Ch] [rbp-6Ch]
  __int64 v49[11]; // [rsp+20h] [rbp-58h] BYREF

  v8 = (_QWORD *)sub_186B270(0x18u);
  v8[1] = 0;
  v9 = v8;
  *v8 = qword_1C66740;
  v8[2] = 0;
  if ( a3 )
  {
    v10 = a4;
    v11 = (_DWORD *)(sub_186B270(0x10u) + 8);
    *((_QWORD *)v11 - 1) = 2;
    v12 = v11;
    v9[2] = v11;
    while ( 1 )
    {
      v13 = *v10++;
      *v11 = v13;
      v14 = *(v12 - 1);
      v15 = (unsigned int)(v14 + 1);
      *(v12 - 1) = v15;
      if ( v10 == &a4[a3] )
        break;
      v16 = *(v12 - 2);
      if ( v16 == (_DWORD)v15 )
      {
        v17 = (3 * v16 + 1) >> 1;
        v18 = 4 * v17 + 8;
        v19 = v17;
        if ( 4 * v14 + 12 >= (unsigned int)v18 || v16 >= v17 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v49, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v49);
          sub_233E40((__int64)v49);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v20 = (unsigned int *)sub_186B300(v12 - 2, v18);
        v12 = v20 + 2;
        *v20 = v19;
        v21 = v20[1];
        v9[2] = v12;
        v11 = &v12[v21];
      }
      else
      {
        v11 = &v12[v15];
      }
    }
    if ( v9 + 1 == (_QWORD *)(a2 + 16) || (v22 = *(_QWORD *)(a2 + 16)) == 0 )
    {
      v31 = -a3;
      v35 = (_QWORD *)sub_186B270(0x18u);
      v26 = v35 + 1;
      v23 = 0;
      v9[1] = v35 + 1;
      *v35 = 2;
LABEL_29:
      while ( 1 )
      {
        v39 = *(v26 - 2);
        if ( v39 >= v31 )
          break;
        v36 = (3 * v39 + 1) >> 1;
        v37 = 8 * v36 + 8;
        if ( 8 * v39 + 8 >= (unsigned int)v37 || v39 >= v36 )
        {
          v4 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v49, "Overflow encountered when expanding vector");
          *v4 = (char *)off_1C63128;
          sub_2333C0(v4 + 1, v49);
          sub_233E40((__int64)v49);
          __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v38 = (unsigned int *)sub_186B300(v26 - 2, v37);
        v26 = v38 + 2;
        *v38 = v36;
        v9[1] = v38 + 2;
      }
      *(v26 - 1) = v31;
      v40 = 8LL * v23;
      v41 = 8LL * v31;
      if ( v40 != v41 )
        memset(&v26[(unsigned __int64)v40 / 4], 0, v41 - v40);
      goto LABEL_32;
    }
  }
  else
  {
    if ( (_QWORD *)(a2 + 16) == v8 + 1 )
      goto LABEL_32;
    v22 = *(_QWORD *)(a2 + 16);
    if ( !v22 )
      goto LABEL_32;
  }
  v23 = *(_DWORD *)(v22 - 4);
  v24 = *(unsigned int *)(v22 - 8);
  v48 = v24;
  v25 = (_QWORD *)sub_186B270(8 * v24 + 8);
  v26 = v25 + 1;
  v27 = v25;
  v9[1] = v25 + 1;
  *v25 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v48), _mm_cvtsi32_si128(v23)).m128i_u64[0];
  v28 = *(_QWORD **)(a2 + 16);
  if ( v28 )
  {
    v29 = 8LL * *((unsigned int *)v28 - 1);
    if ( v29 <= 8 )
    {
      if ( v29 == 8 )
        v25[1] = *v28;
    }
    else
    {
      v26 = memmove(v26, v28, v29);
    }
  }
  if ( a3 )
  {
    v30 = *a4 + 1;
    v31 = v23 - a3;
    if ( v30 < v23 )
    {
      v32 = &v27[v30 + 1];
      v33 = 1;
      if ( a3 != 1 && v30 == a4[1] )
        goto LABEL_22;
      while ( 1 )
      {
        v34 = v30++;
        *(_QWORD *)&v26[2 * (v34 - v33)] = *v32;
        if ( v30 >= v23 )
          break;
        if ( a3 == v33 )
        {
          v43 = v30 - a3;
          do
          {
            v44 = v30++;
            v45 = *(_QWORD *)&v26[2 * v44];
            v46 = v43++;
            *(_QWORD *)&v26[2 * v46] = v45;
          }
          while ( v30 < v23 );
          if ( v23 < a3 )
            goto LABEL_29;
          goto LABEL_24;
        }
        while ( 1 )
        {
          ++v32;
          if ( a3 == v33 || v30 != a4[v33] )
            break;
LABEL_22:
          ++v30;
          ++v33;
          if ( v30 >= v23 )
            goto LABEL_23;
        }
      }
    }
LABEL_23:
    if ( v23 >= a3 )
    {
LABEL_24:
      *((_DWORD *)v27 + 1) = v23 - a3;
      goto LABEL_32;
    }
    goto LABEL_29;
  }
LABEL_32:
  *v9 = &off_1C502C0;
  return v9;
}

