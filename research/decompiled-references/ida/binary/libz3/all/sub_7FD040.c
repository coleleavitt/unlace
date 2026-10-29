__int64 __fastcall sub_7FD040(__int64 a1, unsigned int *a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  int *v5; // rax
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v9; // rax
  unsigned int **v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned int v16; // r13d
  __int64 v17; // rax
  __int64 v18; // r14
  unsigned int v19; // r12d
  __int64 v20; // r14
  _QWORD *v21; // rdi
  __int64 v22; // r12
  __int64 v23; // r12
  _OWORD *v24; // rcx
  unsigned __int64 v25; // rsi
  __int64 v26; // r9
  _OWORD *v27; // r8
  _QWORD *v28; // r12
  __int64 v29; // r14
  unsigned int v30; // r13d
  unsigned int v31; // r15d
  size_t v32; // rsi
  unsigned int *v33; // rax
  unsigned int v34; // eax
  __int64 v35; // r14
  __int64 v36; // rdx
  _QWORD *v37; // rax
  char **exception; // rbx
  unsigned __int64 v40; // [rsp+8h] [rbp-70h]
  __int64 v41[11]; // [rsp+20h] [rbp-58h] BYREF

  v3 = *(_QWORD *)(a1 + 72);
  if ( v3 && (v4 = *a2, (unsigned int)v4 < *(_DWORD *)(v3 - 4)) )
  {
    v5 = (int *)(v3 + 8 * v4);
    v6 = v5[1];
    v7 = *v5;
  }
  else
  {
    v7 = 0;
    v6 = 0;
  }
  if ( *(_DWORD *)(a1 + 96) != v7 )
  {
    v9 = *(_QWORD *)(a1 + 48);
    v10 = (unsigned int **)(a1 + 48);
    v6 = 0;
    if ( v9 )
    {
      v6 = *(_DWORD *)(v9 - 4);
      v11 = v6;
      if ( v6 != *(_DWORD *)(v9 - 8) )
      {
LABEL_8:
        *(_DWORD *)(v9 + 4 * v11) = v6;
        ++*(_DWORD *)(v9 - 4);
        v12 = *(_QWORD *)(a1 + 56);
        if ( !v12 || (v13 = *(unsigned int *)(v12 - 4), (_DWORD)v13 == *(_DWORD *)(v12 - 8)) )
        {
          sub_2FD3F0((unsigned int **)(a1 + 56));
          v12 = *(_QWORD *)(a1 + 56);
          v13 = *(unsigned int *)(v12 - 4);
        }
        *(_DWORD *)(v12 + 4 * v13) = 1;
        ++*(_DWORD *)(v12 - 4);
        v14 = *(_QWORD *)(a1 + 64);
        if ( !v14 || (v15 = *(unsigned int *)(v14 - 4), (_DWORD)v15 == *(_DWORD *)(v14 - 8)) )
        {
          sub_2FD3F0((unsigned int **)(a1 + 64));
          v14 = *(_QWORD *)(a1 + 64);
          v15 = *(unsigned int *)(v14 - 4);
        }
        *(_DWORD *)(v14 + 4 * v15) = v6;
        ++*(_DWORD *)(v14 - 4);
        v16 = *a2;
        v17 = *(_QWORD *)(a1 + 72);
        v40 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(a1 + 96)), _mm_cvtsi32_si128(v6)).m128i_u64[0];
        if ( v17 )
        {
          v18 = *(unsigned int *)(v17 - 4);
          if ( v16 < (unsigned int)v18 )
            goto LABEL_28;
          v19 = v16 + 1;
          if ( (unsigned int)v18 >= v16 + 1 )
          {
            *(_DWORD *)(v17 - 4) = v19;
            goto LABEL_28;
          }
          v20 = 8 * v18;
        }
        else
        {
          v19 = v16 + 1;
          if ( v16 == -1 )
            goto LABEL_28;
          v20 = 0;
        }
        while ( !v17 || *(_DWORD *)(v17 - 8) < v19 )
        {
          sub_7FCEE0((__int64 *)(a1 + 72));
          v17 = *(_QWORD *)(a1 + 72);
        }
        *(_DWORD *)(v17 - 4) = v19;
        v21 = (_QWORD *)(v17 + v20);
        v22 = 8LL * v19;
        if ( v22 != v20 )
        {
          v23 = v22 - v20;
          v24 = (_OWORD *)(v17 + v20);
          v25 = ((unsigned __int64)(v23 - 8) >> 3) + 1;
          if ( v23 == 8 )
          {
LABEL_27:
            *v21 = 0;
            goto LABEL_28;
          }
          v26 = 2 * (v25 >> 1);
          v27 = &v21[v26];
          if ( ((v26 * 8) & 0x10) == 0 || (v24 = v21 + 2, *(_OWORD *)v21 = 0, v21 + 2 != (_QWORD *)v27) )
          {
            do
            {
              *v24 = 0;
              v24 += 2;
              *(v24 - 1) = 0;
            }
            while ( v24 != v27 );
          }
          if ( (v25 & 1) != 0 )
          {
            v21 += v25 & 0xFFFFFFFFFFFFFFFELL;
            goto LABEL_27;
          }
        }
LABEL_28:
        v28 = *(_QWORD **)(a1 + 80);
        *(_QWORD *)(v17 + 8LL * v16) = v40;
        if ( v28 )
        {
          v29 = *((unsigned int *)v28 - 1);
          if ( v6 < (unsigned int)v29 )
          {
LABEL_32:
            v28[v6] = a2;
            return v6;
          }
          v30 = v6 + 1;
          if ( (unsigned int)v29 >= v6 + 1 )
          {
            *((_DWORD *)v28 - 1) = v30;
            goto LABEL_32;
          }
        }
        else
        {
          v30 = v6 + 1;
          if ( v6 == -1 )
            goto LABEL_32;
          v29 = 0;
          v37 = (_QWORD *)sub_186B270(0x18u);
          v28 = v37 + 1;
          *v37 = 2;
          *(_QWORD *)(a1 + 80) = v37 + 1;
        }
        while ( 1 )
        {
          v34 = *((_DWORD *)v28 - 2);
          if ( v34 >= v30 )
            break;
          v31 = (3 * v34 + 1) >> 1;
          v32 = 8 * v31 + 8;
          if ( 8 * v34 + 8 >= (unsigned int)v32 || v34 >= v31 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v41, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v41);
            sub_233E40((__int64)v41);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v33 = (unsigned int *)sub_186B300(v28 - 1, v32);
          v28 = v33 + 2;
          *v33 = v31;
          *(_QWORD *)(a1 + 80) = v33 + 2;
        }
        v35 = 8 * v29;
        *((_DWORD *)v28 - 1) = v30;
        v36 = 8LL * v30;
        if ( v35 != v36 )
        {
          memset(&v28[(unsigned __int64)v35 / 8], 0, v36 - v35);
          v28[v6] = a2;
          return v6;
        }
        goto LABEL_32;
      }
      v10 = (unsigned int **)(a1 + 48);
    }
    sub_2FD3F0(v10);
    v9 = *(_QWORD *)(a1 + 48);
    v11 = *(unsigned int *)(v9 - 4);
    goto LABEL_8;
  }
  return v6;
}

