void __fastcall sub_ACF220(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // r12
  int v7; // edi
  __int64 v8; // rax
  __int64 *v9; // rcx
  unsigned int v10; // edx
  __int64 *v11; // rsi
  __int64 v12; // rdx
  __int64 *v13; // r8
  __int64 *i; // rax
  __int64 v15; // rdx
  _QWORD *v16; // r15
  unsigned int v17; // eax
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rax
  unsigned int v22; // r14d
  unsigned int v23; // edx
  __int64 v24; // rax
  __int64 v25; // rsi
  _DWORD *v26; // rcx
  __int64 v27; // rdx
  unsigned __int64 v28; // rax
  __int64 v29; // rdx
  _QWORD *v30; // r15
  char **exception; // rbx
  _DWORD *v32; // [rsp+8h] [rbp-70h]
  __int64 *v33[11]; // [rsp+20h] [rbp-58h] BYREF

  if ( !*(_WORD *)(a2 + 4) && (*(_BYTE *)(a2 + 30) & 1) != 0 )
    return;
  v6 = a1 + 424;
  v7 = *(_DWORD *)(a2 + 12);
  if ( !a3 )
    v6 = a1 + 400;
  v8 = *(unsigned int *)(v6 + 8);
  v9 = *(__int64 **)v6;
  v10 = v8 - 1;
  v8 *= 8;
  v11 = (__int64 *)(*(_QWORD *)v6 + v8);
  v12 = 8LL * (v7 & v10);
  v13 = (__int64 *)(*(_QWORD *)v6 + v12);
  if ( v12 != v8 )
  {
    for ( i = (__int64 *)(*(_QWORD *)v6 + v12); v11 != i; ++i )
    {
      v15 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v15 + 12) == v7 && v15 == a2 )
          return;
      }
      else if ( !v15 )
      {
        goto LABEL_12;
      }
    }
  }
  if ( v9 == v13 )
    goto LABEL_12;
  v21 = *v9;
  if ( (unsigned __int64)*v9 <= 1 )
    goto LABEL_23;
LABEL_19:
  if ( *(_DWORD *)(v21 + 12) != v7 || v21 != a2 )
  {
    do
    {
      if ( v13 == ++v9 )
        break;
      v21 = *v9;
      if ( (unsigned __int64)*v9 > 1 )
        goto LABEL_19;
LABEL_23:
      ;
    }
    while ( v21 );
LABEL_12:
    v16 = *(_QWORD **)(a1 + 448);
    if ( v16 )
    {
      v17 = *((_DWORD *)v16 - 1);
      if ( v17 == *((_DWORD *)v16 - 2) )
      {
        v22 = (3 * v17 + 1) >> 1;
        v23 = 16 * v22 + 8;
        if ( 16 * v17 + 8 >= v23 || v17 >= v22 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)v33, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v33);
          sub_233E40((__int64)v33);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v24 = sub_186B270(v23);
        v25 = *(_QWORD *)(a1 + 448);
        v26 = (_DWORD *)v24;
        v16 = (_QWORD *)(v24 + 8);
        if ( v25 )
        {
          v27 = *(unsigned int *)(v25 - 4);
          *(_DWORD *)(v24 + 4) = v27;
          v28 = 0;
          v29 = 16 * v27;
          if ( v29 )
          {
            do
            {
              *(__m128i *)&v26[v28 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v25 + v28));
              v28 += 16LL;
            }
            while ( v29 != v28 );
          }
          v32 = v26;
          sub_186B220((void *)(v25 - 8));
          v26 = v32;
          v20 = (__int64)&v16[2 * (unsigned int)v32[1]];
          v19 = v32[1] + 1;
        }
        else
        {
          *(_DWORD *)(v24 + 4) = 0;
          v20 = v24 + 8;
          v19 = 1;
        }
        *(_QWORD *)(a1 + 448) = v16;
        *v26 = v22;
      }
      else
      {
        v18 = v17;
        v19 = v17 + 1;
        v20 = (__int64)&v16[2 * v18];
      }
    }
    else
    {
      v30 = (_QWORD *)sub_186B270(0x28u);
      *v30 = 2;
      v19 = 1;
      v16 = v30 + 1;
      *(_QWORD *)(a1 + 448) = v16;
      v20 = (__int64)v16;
    }
    *(_QWORD *)v20 = a2;
    *(_DWORD *)(v20 + 8) = a3;
    *((_DWORD *)v16 - 1) = v19;
    v33[0] = (__int64 *)a2;
    sub_4A3CA0(v6, v33);
  }
}

