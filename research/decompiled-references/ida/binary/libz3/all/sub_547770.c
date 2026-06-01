_QWORD *__fastcall sub_547770(__int64 a1, __int64 a2, unsigned int a3, int *a4)
{
  char **v4; // r12
  char **exception; // rbx
  _QWORD *v9; // rax
  _QWORD *v10; // rbx
  int *v11; // r15
  _DWORD *v12; // rax
  _DWORD *v13; // rdx
  int v14; // ecx
  int v15; // edi
  __int64 v16; // rax
  unsigned int v17; // ecx
  unsigned int v18; // r9d
  size_t v19; // rsi
  unsigned int *v20; // rax
  __int64 v21; // rax
  __int64 v23; // rax
  unsigned int v24; // r14d
  __int64 v25; // rax
  _QWORD *v26; // rax
  _QWORD *v27; // rsi
  _QWORD *v28; // rcx
  _QWORD *v29; // r15
  size_t v30; // rdx
  unsigned int v31; // r13d
  _QWORD *v32; // rax
  unsigned int v33; // ebp
  size_t v34; // rsi
  unsigned int *v35; // rax
  unsigned int v36; // eax
  __int64 v37; // r14
  __int64 v38; // rdx
  unsigned int v39; // eax
  _QWORD *v40; // rsi
  unsigned int v41; // edx
  unsigned int v42; // edi
  unsigned int v43; // edx
  __int64 v44; // rsi
  __int64 v45; // rdi
  __int64 v46; // rsi
  unsigned int v47; // [rsp+Ch] [rbp-6Ch]
  unsigned int v48; // [rsp+Ch] [rbp-6Ch]
  __int64 v49[11]; // [rsp+20h] [rbp-58h] BYREF

  if ( *(_QWORD *)(a2 + 8) == a1 )
  {
    v9 = (_QWORD *)sub_186B270(0x18u);
    v9[1] = 0;
    v10 = v9;
    *v9 = qword_1C66740;
    v9[2] = 0;
    if ( a3 )
    {
      v11 = a4;
      v12 = (_DWORD *)(sub_186B270(0x10u) + 8);
      *((_QWORD *)v12 - 1) = 2;
      v13 = v12;
      v10[2] = v12;
      while ( 1 )
      {
        v14 = *v11++;
        *v12 = v14;
        v15 = *(v13 - 1);
        v16 = (unsigned int)(v15 + 1);
        *(v13 - 1) = v16;
        if ( v11 == &a4[a3] )
          break;
        v17 = *(v13 - 2);
        if ( v17 == (_DWORD)v16 )
        {
          v18 = (3 * v17 + 1) >> 1;
          v19 = 4 * v18 + 8;
          if ( 4 * v15 + 12 >= (unsigned int)v19 || v17 >= v18 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v49, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v49);
            sub_233E40((__int64)v49);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v47 = (3 * v17 + 1) >> 1;
          v20 = (unsigned int *)sub_186B300(v13 - 2, v19);
          v13 = v20 + 2;
          *v20 = v47;
          v21 = v20[1];
          v10[2] = v13;
          v12 = &v13[v21];
        }
        else
        {
          v12 = &v13[v16];
        }
      }
      if ( v10 + 1 == (_QWORD *)(a2 + 16) || (v23 = *(_QWORD *)(a2 + 16)) == 0 )
      {
        v31 = -a3;
        v32 = (_QWORD *)sub_186B270(0x18u);
        v28 = v32 + 1;
        v24 = 0;
        v10[1] = v32 + 1;
        *v32 = 2;
        goto LABEL_23;
      }
    }
    else
    {
      if ( (_QWORD *)(a2 + 16) == v9 + 1 )
        goto LABEL_18;
      v23 = *(_QWORD *)(a2 + 16);
      if ( !v23 )
        goto LABEL_18;
    }
    v24 = *(_DWORD *)(v23 - 4);
    v25 = *(unsigned int *)(v23 - 8);
    v48 = v25;
    v26 = (_QWORD *)sub_186B270(8 * v25 + 8);
    v27 = *(_QWORD **)(a2 + 16);
    v28 = v26 + 1;
    v29 = v26;
    v10[1] = v26 + 1;
    *v26 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v48), _mm_cvtsi32_si128(v24)).m128i_u64[0];
    if ( v27 )
    {
      v30 = 8LL * *((unsigned int *)v27 - 1);
      if ( v30 <= 8 )
      {
        if ( v30 == 8 )
          v26[1] = *v27;
      }
      else
      {
        v28 = memmove(v26 + 1, v27, v30);
      }
    }
    if ( !a3 )
      goto LABEL_18;
    v39 = *a4 + 1;
    v31 = v24 - a3;
    if ( v39 < v24 )
    {
      v40 = &v29[v39 + 1];
      v41 = 1;
      if ( a3 != 1 && v39 == a4[1] )
        goto LABEL_33;
      while ( 1 )
      {
        v42 = v39++;
        v28[v42 - v41] = *v40;
        if ( v39 >= v24 )
          break;
        if ( a3 == v41 )
        {
          v43 = v39 - a3;
          do
          {
            v44 = v39++;
            v45 = v28[v44];
            v46 = v43++;
            v28[v46] = v45;
          }
          while ( v39 < v24 );
          if ( v24 < a3 )
            goto LABEL_23;
          goto LABEL_35;
        }
        while ( 1 )
        {
          ++v40;
          if ( a3 == v41 || v39 != a4[v41] )
            break;
LABEL_33:
          ++v39;
          ++v41;
          if ( v39 >= v24 )
            goto LABEL_34;
        }
      }
    }
LABEL_34:
    if ( v24 >= a3 )
    {
LABEL_35:
      *((_DWORD *)v29 + 1) = v24 - a3;
LABEL_18:
      *v10 = &off_1C50A48;
      return v10;
    }
LABEL_23:
    while ( 1 )
    {
      v36 = *((_DWORD *)v28 - 2);
      if ( v36 >= v31 )
        break;
      v33 = (3 * v36 + 1) >> 1;
      v34 = 8 * v33 + 8;
      if ( 8 * v36 + 8 >= (unsigned int)v34 || v36 >= v33 )
      {
        v4 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v49, "Overflow encountered when expanding vector");
        *v4 = (char *)off_1C63128;
        sub_2333C0(v4 + 1, v49);
        sub_233E40((__int64)v49);
        __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v35 = (unsigned int *)sub_186B300(v28 - 1, v34);
      v28 = v35 + 2;
      *v35 = v33;
      v10[1] = v35 + 2;
    }
    *((_DWORD *)v28 - 1) = v31;
    v37 = 8LL * v24;
    v38 = 8LL * v31;
    if ( v37 != v38 )
    {
      memset(&v28[(unsigned __int64)v37 / 8], 0, v38 - v37);
      *v10 = &off_1C50A48;
      return v10;
    }
    goto LABEL_18;
  }
  return nullptr;
}

