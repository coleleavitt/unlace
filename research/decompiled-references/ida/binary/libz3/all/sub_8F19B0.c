__int64 __fastcall sub_8F19B0(__int64 a1, __int64 a2, __int64 a3)
{
  char **v3; // rbx
  char **exception; // r14
  __int64 v5; // r14
  __m128 *v7; // r13
  unsigned int v8; // eax
  __int64 v9; // rdx
  int v10; // eax
  __m128 *v11; // rdx
  _QWORD *v12; // rax
  _QWORD *v13; // rdi
  _QWORD *v14; // rbx
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 result; // rax
  _QWORD *v18; // rdx
  unsigned int v19; // r13d
  size_t v20; // rdi
  __int64 v21; // rax
  _QWORD *v22; // r15
  _DWORD *v23; // r9
  __int64 v24; // r10
  __int64 v25; // rdx
  int v26; // r11d
  _QWORD *v27; // rax
  _QWORD *v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rsi
  __int64 v31; // rsi
  _QWORD *v32; // r10
  __int64 v33; // rsi
  __int64 v34; // rdi
  bool v35; // zf
  __int64 v36; // rsi
  __int64 v37; // rdi
  unsigned int v38; // ebp
  size_t v39; // rsi
  unsigned int *v40; // rax
  __int64 v41; // rdx
  unsigned int v42; // ecx
  _QWORD *v43; // rax
  _QWORD *v44; // rax
  double v45; // [rsp+0h] [rbp-78h] BYREF
  unsigned int v46; // [rsp+Ch] [rbp-6Ch]
  _DWORD *v47; // [rsp+10h] [rbp-68h]
  _QWORD *v48; // [rsp+18h] [rbp-60h]
  __int64 v49[11]; // [rsp+20h] [rbp-58h] BYREF

  v5 = a1 + 9440;
  v45 = *(double *)(a1 + 104);
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  v7 = *(__m128 **)(a1 + 9440);
  if ( v7 )
  {
    v8 = v7[-1].m128_u32[3];
    if ( v8 == v7[-1].m128_i32[2] )
    {
      v19 = (3 * v8 + 1) >> 1;
      v46 = v19;
      v20 = 32 * v19 + 8;
      if ( 32 * v8 + 8 >= (unsigned int)v20 || v8 >= v19 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_8E4EB0(v49, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v49);
        sub_233E40((__int64)v49);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v21 = sub_186B270(v20);
      v22 = *(_QWORD **)(a1 + 9440);
      v23 = (_DWORD *)v21;
      v7 = (__m128 *)(v21 + 8);
      if ( v22 )
      {
        v24 = *((unsigned int *)v22 - 1);
        v25 = v21 + 8;
        *(_DWORD *)(v21 + 4) = v24;
        v26 = v24;
        v27 = v22;
        v28 = &v22[4 * v24];
        if ( v28 != v22 )
        {
          do
          {
            v29 = v27[1];
            v27 += 4;
            v25 += 32;
            *(_QWORD *)(v25 - 24) = v29;
            v30 = *(v27 - 4);
            *(v27 - 4) = 0;
            *(_QWORD *)(v25 - 32) = v30;
            *(_QWORD *)(v25 - 8) = *(v27 - 1);
            v31 = *(v27 - 2);
            *(v27 - 2) = 0;
            *(_QWORD *)(v25 - 16) = v31;
          }
          while ( v27 != v28 );
        }
        v32 = &v22[4 * v24];
        if ( v26 )
        {
          do
          {
            while ( 1 )
            {
              v36 = v22[2];
              if ( v36 )
              {
                v37 = v22[3];
                v35 = (*(_DWORD *)(v36 + 8))-- == 1;
                if ( v35 )
                {
                  v48 = v32;
                  v47 = v23;
                  sub_15D7BC0(v37, v36);
                  v32 = v48;
                  v23 = v47;
                }
              }
              v33 = *v22;
              if ( *v22 )
              {
                v34 = v22[1];
                v35 = (*(_DWORD *)(v33 + 8))-- == 1;
                if ( v35 )
                  break;
              }
              v22 += 4;
              if ( v22 == v32 )
                goto LABEL_29;
            }
            v48 = v32;
            v22 += 4;
            v47 = v23;
            sub_15D7BC0(v34, v33);
            v32 = v48;
            v23 = v47;
          }
          while ( v22 != v48 );
LABEL_29:
          v22 = *(_QWORD **)(a1 + 9440);
        }
        v47 = v23;
        sub_186B220(v22 - 1);
        v23 = v47;
        v11 = &v7[2 * (unsigned int)v47[1]];
        v10 = v47[1] + 1;
      }
      else
      {
        *(_DWORD *)(v21 + 4) = 0;
        v11 = (__m128 *)(v21 + 8);
        v10 = 1;
      }
      v42 = v46;
      *(_QWORD *)(a1 + 9440) = v7;
      *v23 = v42;
    }
    else
    {
      v9 = v8;
      v10 = v8 + 1;
      v11 = &v7[2 * v9];
    }
  }
  else
  {
    v44 = (_QWORD *)sub_186B270(0x48u);
    v7 = (__m128 *)(v44 + 1);
    *v44 = 2;
    v10 = 1;
    *(_QWORD *)(a1 + 9440) = v7;
    v11 = v7;
  }
  *v11 = _mm_loadh_ps(&v45);
  v11[1] = _mm_loadh_ps(&v45);
  v7[-1].m128_i32[3] = v10;
  v12 = (_QWORD *)sub_180C100(a1 + 8400, 16);
  v13 = *(_QWORD **)(a1 + 9456);
  v14 = v12;
  *v12 = off_1C548F8;
  v12[1] = v5;
  if ( v13 )
  {
    v15 = *((_DWORD *)v13 - 1);
    if ( v15 == *((_DWORD *)v13 - 2) )
    {
      v38 = (3 * v15 + 1) >> 1;
      v39 = 8 * v38 + 8;
      if ( 8 * v15 + 8 >= (unsigned int)v39 || v15 >= v38 )
      {
        v3 = (char **)__cxa_allocate_exception(0x28u);
        sub_8E4EB0(v49, "Overflow encountered when expanding vector");
        *v3 = (char *)off_1C63128;
        sub_2333C0(v3 + 1, v49);
        sub_233E40((__int64)v49);
        __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v40 = (unsigned int *)sub_186B300(v13 - 1, v39);
      v41 = v40[1];
      v13 = v40 + 2;
      *v40 = v38;
      *(_QWORD *)(a1 + 9456) = v40 + 2;
      LODWORD(v40) = v41;
      v18 = &v13[v41];
      result = (unsigned int)((_DWORD)v40 + 1);
    }
    else
    {
      v16 = v15;
      result = v15 + 1;
      v18 = &v13[v16];
    }
  }
  else
  {
    v43 = (_QWORD *)sub_186B270(0x18u);
    v13 = v43 + 1;
    *v43 = 2;
    result = 1;
    *(_QWORD *)(a1 + 9456) = v13;
    v18 = v13;
  }
  *v18 = v14;
  *((_DWORD *)v13 - 1) = result;
  return result;
}

