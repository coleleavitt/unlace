__int64 __fastcall sub_8214F0(__int64 a1, __int64 a2, _QWORD *a3)
{
  char **exception; // rbx
  _QWORD *v4; // r12
  __int64 result; // rax
  int **v7; // r10
  __int64 v8; // rax
  char *v9; // rcx
  int v10; // r8d
  unsigned int v11; // edx
  char *v12; // rsi
  __int64 v13; // rdx
  char *v14; // r9
  char *v15; // rax
  int **v16; // rdx
  int **v17; // rax
  __int64 v18; // r13
  _QWORD *v19; // r12
  unsigned int v20; // eax
  __int64 v21; // rdx
  __int64 *v22; // rdx
  unsigned int v23; // r14d
  unsigned int v24; // edx
  __int64 v25; // rax
  __int64 v26; // rcx
  _DWORD *v27; // r15
  __int64 v28; // rdx
  unsigned __int64 v29; // rax
  __int64 v30; // rdx
  _QWORD *v31; // r12
  __int64 v32[11]; // [rsp+10h] [rbp-58h] BYREF

  v4 = (_QWORD *)a2;
  result = sub_820AB0(a1, a2, a3);
  v7 = *(int ***)(a2 + 64);
  if ( (int **)a3[8] == v7 )
  {
    v18 = a2;
  }
  else
  {
    while ( 1 )
    {
      v8 = *(unsigned int *)(a1 + 424);
      v9 = *(char **)(a1 + 416);
      v10 = **v7;
      v11 = v8 - 1;
      v8 *= 16;
      v12 = &v9[v8];
      v13 = 16LL * (v10 & v11);
      v14 = &v9[v13];
      if ( v13 == v8 )
      {
LABEL_10:
        while ( v14 != v9 )
        {
          v17 = *(int ***)v9;
          if ( *(_QWORD *)v9 > 1u )
          {
            if ( **v17 == v10 && v17 == v7 )
            {
              v15 = v9;
              goto LABEL_19;
            }
          }
          else if ( !v17 )
          {
            break;
          }
          v9 += 16;
        }
LABEL_39:
        BUG();
      }
      v15 = &v9[v13];
      while ( 1 )
      {
        while ( 1 )
        {
          v16 = *(int ***)v15;
          if ( *(_QWORD *)v15 > 1u )
            break;
          if ( !v16 )
            goto LABEL_39;
          v15 += 16;
          if ( v12 == v15 )
            goto LABEL_10;
        }
        if ( **v16 == v10 && v16 == v7 )
          break;
        v15 += 16;
        if ( v12 == v15 )
          goto LABEL_10;
      }
LABEL_19:
      v18 = *((_QWORD *)v15 + 1);
      result = sub_820AB0(a1, v18, v4);
      v7 = *(int ***)(v18 + 64);
      if ( (int **)a3[8] == v7 )
        break;
      v4 = (_QWORD *)v18;
    }
  }
  if ( a3 != (_QWORD *)v18 )
  {
    v19 = *(_QWORD **)(a1 + 408);
    if ( v19 )
    {
      v20 = *((_DWORD *)v19 - 1);
      if ( v20 == *((_DWORD *)v19 - 2) )
      {
        v23 = (3 * v20 + 1) >> 1;
        v24 = 16 * v23 + 8;
        if ( 16 * v20 + 8 >= v24 || v20 >= v23 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v32, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v32);
          sub_233E40((__int64)v32);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v25 = sub_186B270(v24);
        v26 = *(_QWORD *)(a1 + 408);
        v27 = (_DWORD *)v25;
        v19 = (_QWORD *)(v25 + 8);
        if ( v26 )
        {
          v28 = *(unsigned int *)(v26 - 4);
          *(_DWORD *)(v25 + 4) = v28;
          v29 = 0;
          v30 = 16 * v28;
          if ( v30 )
          {
            do
            {
              *(__m128i *)&v27[v29 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v26 + v29));
              v29 += 16LL;
            }
            while ( v30 != v29 );
          }
          sub_186B220((void *)(v26 - 8));
          v22 = &v19[2 * (unsigned int)v27[1]];
          result = (unsigned int)(v27[1] + 1);
        }
        else
        {
          *(_DWORD *)(v25 + 4) = 0;
          v22 = (__int64 *)(v25 + 8);
          result = 1;
        }
        *(_QWORD *)(a1 + 408) = v19;
        *v27 = v23;
      }
      else
      {
        v21 = v20;
        result = v20 + 1;
        v22 = &v19[2 * v21];
      }
    }
    else
    {
      v31 = (_QWORD *)sub_186B270(0x28u);
      *v31 = 2;
      result = 1;
      v19 = v31 + 1;
      *(_QWORD *)(a1 + 408) = v19;
      v22 = v19;
    }
    *v22 = v18;
    v22[1] = (__int64)a3;
    *((_DWORD *)v19 - 1) = result;
  }
  return result;
}

