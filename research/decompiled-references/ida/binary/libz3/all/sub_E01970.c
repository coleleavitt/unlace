__int64 __fastcall sub_E01970(_QWORD *a1, __int64 a2)
{
  char **exception; // r13
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // r15
  __m128 *v7; // r14
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 result; // rax
  __m128 *v11; // rdx
  unsigned __int64 v12; // rdi
  __m128 v13; // xmm0
  unsigned int v14; // r13d
  size_t v15; // rdi
  __int64 v16; // rax
  _QWORD *v17; // rbx
  _DWORD *v18; // r12
  __int64 v19; // rdi
  __int64 v20; // rdx
  _QWORD *v21; // rsi
  _QWORD *i; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  _QWORD *v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // rdi
  bool v29; // zf
  __int64 v30; // rsi
  __int64 v31; // rdi
  __int64 v32; // rcx
  __int64 v33; // r13
  __int64 v34; // r12
  __int64 v35; // rax
  __int64 *v36; // rcx
  void (__fastcall ***v37)(void *); // r14
  _QWORD *v38; // rax
  __int64 v39; // rax
  unsigned __int64 v40; // [rsp+0h] [rbp-68h] BYREF
  _QWORD *v41; // [rsp+8h] [rbp-60h]
  __int64 v42[11]; // [rsp+10h] [rbp-58h] BYREF

  v3 = a1[36];
  if ( v3 )
  {
    if ( *(_QWORD *)(v3 + 8LL * (unsigned int)(*(_DWORD *)(v3 - 4) - 1)) )
    {
      v4 = a1[108];
      if ( !v4 || *(_QWORD *)(v4 + 56) )
        goto LABEL_5;
LABEL_30:
      v32 = *(_QWORD *)(v3 + 8LL * (unsigned int)(*(_DWORD *)(v3 - 4) - 1));
      if ( v32 )
      {
        ++*(_DWORD *)(v32 + 8);
        *(_QWORD *)(v4 + 56) = v32;
      }
      goto LABEL_5;
    }
  }
  else if ( MEMORY[0x7FFFFFFF8] )
  {
    v4 = a1[108];
    if ( !v4 || *(_QWORD *)(v4 + 56) )
      goto LABEL_35;
LABEL_47:
    v39 = MEMORY[0x7FFFFFFF8];
    if ( MEMORY[0x7FFFFFFF8] )
    {
      ++*(_DWORD *)(MEMORY[0x7FFFFFFF8] + 8LL);
      *(_QWORD *)(v4 + 56) = v39;
    }
    goto LABEL_35;
  }
  v33 = 0x7FFFFFFF8LL;
  v34 = sub_186B270(0x50u);
  sub_DFBCB0(a1);
  *(_BYTE *)(v34 + 24) = 1;
  v35 = a1[37];
  *(_DWORD *)(v34 + 8) = 0;
  *(_QWORD *)(v34 + 16) = 0;
  *(_QWORD *)(v34 + 32) = v35;
  *(_QWORD *)v34 = &off_1C60CE8;
  sub_DF63A0((__int64 *)(v34 + 40), "cmd_context");
  v3 = a1[36];
  *(_QWORD *)(v34 + 72) = 0;
  if ( v3 )
    v33 = 8LL * (unsigned int)(*(_DWORD *)(v3 - 4) - 1);
  v36 = (__int64 *)(v3 + v33);
  ++*(_DWORD *)(v34 + 8);
  v37 = *(void (__fastcall ****)(void *))(v3 + v33);
  if ( v37 )
  {
    v29 = (*((_DWORD *)v37 + 2))-- == 1;
    if ( v29 )
    {
      (**v37)(v37);
      sub_186B220(v37);
      v3 = a1[36];
      v36 = (__int64 *)(v3 + v33);
    }
  }
  v4 = a1[108];
  *v36 = v34;
  if ( v4 && !*(_QWORD *)(v4 + 56) )
  {
    if ( v3 )
      goto LABEL_30;
    goto LABEL_47;
  }
  if ( v3 )
  {
LABEL_5:
    v5 = 8LL * (unsigned int)(*(_DWORD *)(v3 - 4) - 1);
    goto LABEL_6;
  }
LABEL_35:
  v5 = 0x7FFFFFFF8LL;
  v3 = 0;
LABEL_6:
  v6 = *(_QWORD *)(v3 + v5);
  v40 = *(_QWORD *)(v6 + 32);
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  v7 = *(__m128 **)(v6 + 72);
  if ( v7 )
  {
    v8 = v7[-1].m128_u32[3];
    if ( v8 == v7[-1].m128_i32[2] )
    {
      v14 = (3 * v8 + 1) >> 1;
      v15 = 40 * v14 + 8;
      if ( 40 * v8 + 8 >= (unsigned int)v15 || v8 >= v14 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_DF63A0(v42, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v42);
        sub_233E40((__int64)v42);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v16 = sub_186B270(v15);
      v17 = *(_QWORD **)(v6 + 72);
      v18 = (_DWORD *)v16;
      v7 = (__m128 *)(v16 + 8);
      if ( v17 )
      {
        v19 = *((unsigned int *)v17 - 1);
        v20 = v16 + 8;
        *(_DWORD *)(v16 + 4) = v19;
        v21 = &v17[5 * v19];
        for ( i = v17; v21 != i; *(_DWORD *)(v20 - 8) = *((_DWORD *)i - 2) )
        {
          v23 = i[1];
          i += 5;
          v20 += 40;
          *(_QWORD *)(v20 - 32) = v23;
          v24 = *(i - 5);
          *(i - 5) = 0;
          *(_QWORD *)(v20 - 40) = v24;
          *(_QWORD *)(v20 - 16) = *(i - 2);
          v25 = *(i - 3);
          *(i - 3) = 0;
          *(_QWORD *)(v20 - 24) = v25;
        }
        if ( (_DWORD)v19 )
        {
          v26 = &v17[5 * v19];
          do
          {
            while ( 1 )
            {
              v30 = v17[2];
              if ( v30 )
              {
                v31 = v17[3];
                v29 = (*(_DWORD *)(v30 + 8))-- == 1;
                if ( v29 )
                {
                  v41 = v26;
                  sub_15D7BC0(v31, v30);
                  v26 = v41;
                }
              }
              v27 = *v17;
              if ( *v17 )
              {
                v28 = v17[1];
                v29 = (*(_DWORD *)(v27 + 8))-- == 1;
                if ( v29 )
                  break;
              }
              v17 += 5;
              if ( v17 == v26 )
                goto LABEL_26;
            }
            v41 = v26;
            v17 += 5;
            sub_15D7BC0(v28, v27);
            v26 = v41;
          }
          while ( v17 != v41 );
LABEL_26:
          v17 = *(_QWORD **)(v6 + 72);
        }
        sub_186B220(v17 - 1);
        v11 = (__m128 *)((char *)v7 + 40 * (unsigned int)v18[1]);
        result = (unsigned int)(v18[1] + 1);
      }
      else
      {
        *(_DWORD *)(v16 + 4) = 0;
        v11 = (__m128 *)(v16 + 8);
        result = 1;
      }
      *(_QWORD *)(v6 + 72) = v7;
      *v18 = v14;
    }
    else
    {
      v9 = v8;
      result = v8 + 1;
      v11 = (__m128 *)((char *)v7 + 40 * v9);
    }
  }
  else
  {
    v38 = (_QWORD *)sub_186B270(0x58u);
    v7 = (__m128 *)(v38 + 1);
    *v38 = 2;
    result = 1;
    *(_QWORD *)(v6 + 72) = v7;
    v11 = v7;
  }
  v12 = v40;
  v11[1].m128_u64[0] = 0;
  v13 = _mm_loadh_ps((const double *)&v40);
  v11[2].m128_i32[0] = 0;
  v11[1].m128_u64[1] = v12;
  *v11 = v13;
  v7[-1].m128_i32[3] = result;
  return result;
}

