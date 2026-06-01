__int64 __fastcall sub_B1B990(__int64 a1, unsigned int a2, unsigned int a3, _DWORD *a4, unsigned int **a5)
{
  unsigned int v7; // ebx
  int v8; // r9d
  unsigned int v9; // ebx
  unsigned int v10; // r13d
  unsigned int *v12; // rdx
  unsigned int v13; // eax
  __int64 v14; // rcx
  unsigned int *v15; // rdx
  _QWORD *v16; // rax
  unsigned int v17; // ecx
  unsigned int *v18; // rax
  __int64 v19; // rcx
  unsigned int v20; // r14d
  size_t v21; // rsi
  unsigned int *v22; // rax
  __int64 v23; // rax
  char **exception; // rbx
  unsigned int v25; // [rsp+0h] [rbp-78h]
  unsigned int v26; // [rsp+4h] [rbp-74h]
  int v27; // [rsp+8h] [rbp-70h]
  __int64 v28; // [rsp+10h] [rbp-68h] BYREF
  __int64 v29; // [rsp+18h] [rbp-60h] BYREF
  unsigned __int64 v30; // [rsp+20h] [rbp-58h] BYREF
  int v31; // [rsp+28h] [rbp-50h]

  v7 = a3;
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      LODWORD(v30) = *a4;
      sub_B0E5E0(a5, (unsigned int *)&v30);
      v10 = dword_1C7ED20;
      if ( a2 > 1 )
      {
        v12 = *a5;
        if ( *a5 )
          goto LABEL_12;
LABEL_10:
        sub_692C60(a5);
        v12 = *a5;
        v13 = v10;
        v10 = dword_1C7ED20;
        v14 = *(*a5 - 1);
        while ( 1 )
        {
          ++v7;
          v12[v14] = v13;
          ++*(v12 - 1);
          if ( a2 == v7 )
            break;
LABEL_12:
          v14 = *(v12 - 1);
          v13 = v10;
          if ( (_DWORD)v14 == *(v12 - 2) )
            goto LABEL_10;
        }
      }
    }
    else
    {
      v27 = (int)a4;
      v28 = 0;
      v26 = a3 >> 1;
      v29 = 0;
      v25 = sub_B1B990(a1, a2, v26, (_DWORD)a4, (unsigned int)&v28, v26);
      v9 = sub_B1B990(a1, a2, v7 - v26, v27 + 4 * v26, (unsigned int)&v29, v8);
      v31 = sub_B1B2B0(a1, &v28, &v29, a5);
      v30 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v25), _mm_cvtsi32_si128(v9)).m128i_u64[0];
      v10 = sub_B0BBE0(a1, &v30);
      if ( v29 )
        sub_186B220((void *)(v29 - 8));
      if ( v28 )
        sub_186B220((void *)(v28 - 8));
    }
  }
  else
  {
    v10 = dword_1C7ED20;
    if ( a2 )
    {
      v15 = *a5;
      if ( *a5 )
        goto LABEL_19;
      v16 = (_QWORD *)sub_186B270(0x10u);
      v17 = v10;
      v10 = dword_1C7ED20;
      v15 = (unsigned int *)(v16 + 1);
      *v16 = 2;
      *a5 = (unsigned int *)(v16 + 1);
      v18 = (unsigned int *)(v16 + 1);
      while ( 1 )
      {
        ++v7;
        *v18 = v17;
        ++*(v15 - 1);
        if ( a2 == v7 )
          break;
LABEL_19:
        v19 = *(v15 - 1);
        if ( (_DWORD)v19 == *(v15 - 2) )
        {
          v20 = (unsigned int)(3 * v19 + 1) >> 1;
          v21 = 4 * v20 + 8;
          if ( 4 * (int)v19 + 8 >= (unsigned int)v21 || (unsigned int)v19 >= v20 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_B035D0((__int64 *)&v30, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v30);
            sub_233E40((__int64)&v30);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v22 = (unsigned int *)sub_186B300(v15 - 2, v21);
          v17 = v10;
          v10 = dword_1C7ED20;
          v15 = v22 + 2;
          *v22 = v20;
          v23 = v22[1];
          *a5 = v15;
          v18 = &v15[v23];
        }
        else
        {
          v18 = &v15[v19];
          v17 = v10;
        }
      }
    }
  }
  return v10;
}

