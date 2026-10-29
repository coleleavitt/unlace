void __fastcall sub_24F730(__int64 a1, void (__fastcall ***a2)(void *, unsigned __int64, __int64, __int64))
{
  char **exception; // rbp
  char **v3; // rbp
  _QWORD *v6; // rdi
  int v7; // r13d
  __int64 v8; // rax
  _DWORD *v9; // rax
  _DWORD *v10; // r8
  __int64 v11; // rax
  unsigned __int64 v12; // rsi
  int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // rdx
  _DWORD *v16; // rdi
  _DWORD *v17; // rax
  bool v18; // zf
  int v19; // eax
  _QWORD *v20; // rdx
  unsigned int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  void (__fastcall ****v24)(void *, unsigned __int64, __int64, __int64); // rcx
  unsigned int v25; // r12d
  size_t v26; // rsi
  unsigned int *v27; // rax
  __int64 v28; // rax
  unsigned int v29; // r14d
  size_t v30; // rsi
  unsigned int *v31; // rax
  __int64 v32; // rcx
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  int v35; // eax
  unsigned int v36; // eax
  unsigned int v37; // r12d
  __m128i *v38; // rax
  __m128i *v39; // r13
  __m128i *v40; // rax
  __int64 v41; // rax
  __m128i *v42; // rdi
  const __m128i *v43; // r12
  unsigned int v44; // r15d
  __int64 v45; // r14
  __m128i *v46; // r8
  __int64 v47; // rax
  __m128i *v48; // rdx
  __m128i *v49; // rax
  __int64 v50[11]; // [rsp+20h] [rbp-58h] BYREF

  if ( !a2 )
    return;
  if ( *(_BYTE *)(a1 + 225) )
  {
    if ( &_pthread_key_create )
    {
      v19 = pthread_mutex_lock((pthread_mutex_t *)(a1 + 256));
      if ( v19 )
        std::__throw_system_error(v19);
    }
    v20 = *(_QWORD **)(a1 + 1368);
    if ( v20 )
    {
      v21 = *((_DWORD *)v20 - 1);
      if ( v21 == *((_DWORD *)v20 - 2) )
      {
        v29 = (3 * v21 + 1) >> 1;
        v30 = 8 * v29 + 8;
        if ( 8 * v21 + 8 >= (unsigned int)v30 || v21 >= v29 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v50, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v50);
          sub_233E40((__int64)v50);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v31 = (unsigned int *)sub_186B300(v20 - 1, v30);
        v32 = v31[1];
        v20 = v31 + 2;
        *v31 = v29;
        *(_QWORD *)(a1 + 1368) = v31 + 2;
        LODWORD(v31) = v32;
        v24 = (void (__fastcall ****)(void *, unsigned __int64, __int64, __int64))&v20[v32];
        v23 = (_DWORD)v31 + 1;
      }
      else
      {
        v22 = v21;
        v23 = v21 + 1;
        v24 = (void (__fastcall ****)(void *, unsigned __int64, __int64, __int64))&v20[v22];
      }
    }
    else
    {
      v33 = (_QWORD *)sub_186B270(0x18u);
      v20 = v33 + 1;
      *v33 = 2;
      v23 = 1;
      *(_QWORD *)(a1 + 1368) = v20;
      v24 = (void (__fastcall ****)(void *, unsigned __int64, __int64, __int64))v20;
    }
    *v24 = a2;
    *((_DWORD *)v20 - 1) = v23;
    if ( &_pthread_key_create )
      pthread_mutex_unlock((pthread_mutex_t *)(a1 + 256));
    return;
  }
  v6 = *(_QWORD **)(a1 + 1432);
  v7 = *((_DWORD *)a2 + 3);
  if ( v6 )
  {
    v8 = *((unsigned int *)v6 - 1);
    if ( (_DWORD)v8 == *((_DWORD *)v6 - 2) )
    {
      v25 = (unsigned int)(3 * v8 + 1) >> 1;
      v26 = 4 * v25 + 8;
      if ( 4 * (int)v8 + 8 >= (unsigned int)v26 || (unsigned int)v8 >= v25 )
      {
        v3 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v50, "Overflow encountered when expanding vector");
        *v3 = (char *)off_1C63128;
        sub_2333C0(v3 + 1, v50);
        sub_233E40((__int64)v50);
        __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v27 = (unsigned int *)sub_186B300(v6 - 1, v26);
      v6 = v27 + 2;
      *v27 = v25;
      v28 = v27[1];
      *(_QWORD *)(a1 + 1432) = v6;
      v9 = (_DWORD *)v6 + v28;
    }
    else
    {
      v9 = (_DWORD *)v6 + v8;
    }
  }
  else
  {
    v34 = (_QWORD *)sub_186B270(0x10u);
    v6 = v34 + 1;
    *v34 = 2;
    *(_QWORD *)(a1 + 1432) = v34 + 1;
    v9 = v34 + 1;
  }
  *v9 = v7;
  v10 = *(_DWORD **)(a1 + 1408);
  ++*((_DWORD *)v6 - 1);
  v11 = *(unsigned int *)(a1 + 1416);
  v12 = *((unsigned int *)a2 + 3);
  v13 = v11 - 1;
  v11 *= 24;
  v14 = (__int64)v10 + v11;
  v15 = 24LL * ((unsigned int)v12 & v13);
  v16 = (_DWORD *)((char *)v10 + v15);
  if ( v15 == v11 )
  {
LABEL_26:
    if ( v10 != v16 )
    {
      v17 = v10;
      while ( 1 )
      {
        v15 = (unsigned int)v17[1];
        if ( (_DWORD)v15 == 2 )
        {
          if ( (_DWORD)v12 == *v17 && (_DWORD)v12 == v17[2] )
            goto LABEL_13;
        }
        else if ( !(_DWORD)v15 )
        {
          goto LABEL_17;
        }
        v17 += 6;
        if ( v16 == v17 )
          goto LABEL_17;
      }
    }
    goto LABEL_17;
  }
  v17 = (_DWORD *)((char *)v10 + v15);
  while ( 1 )
  {
    v15 = (unsigned int)v17[1];
    if ( (_DWORD)v15 != 2 )
    {
      if ( !(_DWORD)v15 )
        goto LABEL_17;
      goto LABEL_9;
    }
    if ( (_DWORD)v12 == *v17 && (_DWORD)v12 == v17[2] )
      break;
LABEL_9:
    v17 += 6;
    if ( (_DWORD *)v14 == v17 )
      goto LABEL_26;
  }
LABEL_13:
  v12 = (unsigned __int64)(v17 + 6);
  v18 = v14 == (_QWORD)(v17 + 6);
  v14 = *(unsigned int *)(a1 + 1420);
  if ( v18 )
    v12 = (unsigned __int64)v10;
  v15 = (unsigned int)(v14 - 1);
  if ( !*(_DWORD *)(v12 + 4) )
  {
    v17[1] = 0;
    *(_DWORD *)(a1 + 1420) = v15;
    goto LABEL_17;
  }
  v17[1] = 1;
  v35 = *(_DWORD *)(a1 + 1424);
  v14 = 64;
  *(_DWORD *)(a1 + 1420) = v15;
  v36 = v35 + 1;
  if ( (unsigned int)v15 < 0x40 )
    v15 = 64;
  *(_DWORD *)(a1 + 1424) = v36;
  if ( (unsigned int)v15 < v36 && !(unsigned __int8)sub_186AF10(v16) )
  {
    v37 = *(_DWORD *)(a1 + 1416);
    v38 = (__m128i *)sub_186B270(24LL * v37);
    v39 = v38;
    if ( v37 )
    {
      if ( v37 == 1 )
        goto LABEL_53;
      v15 = (__int64)v38;
      v40 = &v38[3 * (v37 >> 1)];
      do
      {
        *(_QWORD *)v15 = 0;
        v15 += 48;
        *(_QWORD *)(v15 - 24) = 0;
      }
      while ( (__m128i *)v15 != v40 );
      if ( (v37 & 1) != 0 )
      {
        v38 = (__m128i *)((char *)v39 + 24 * (v37 & 0xFFFFFFFE));
LABEL_53:
        v38->m128i_i64[0] = 0;
      }
    }
    v41 = *(unsigned int *)(a1 + 1416);
    v42 = *(__m128i **)(a1 + 1408);
    v43 = v42;
    v44 = v41 - 1;
    v45 = 24 * v41;
    v14 = (__int64)&v42->m128i_i64[3 * v41];
    v46 = (__m128i *)((char *)v39 + 24 * v41);
    if ( v42 != (__m128i *)v14 )
    {
      do
      {
        if ( v43->m128i_i32[1] == 2 )
        {
          v47 = 24LL * (v43->m128i_i32[0] & v44);
          v48 = (__m128i *)((char *)v39 + v47);
          if ( v45 == v47 )
          {
LABEL_67:
            if ( v39 == v48 )
            {
LABEL_72:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v49 = v39;
            while ( 1 )
            {
              v12 = v49->m128i_u32[1];
              if ( !(_DWORD)v12 )
                break;
              v49 = (__m128i *)((char *)v49 + 24);
              if ( v48 == v49 )
                goto LABEL_72;
            }
          }
          else
          {
            v49 = (__m128i *)((char *)v39 + v47);
            while ( v49->m128i_i32[1] )
            {
              v49 = (__m128i *)((char *)v49 + 24);
              if ( v46 == v49 )
                goto LABEL_67;
            }
          }
          *v49 = _mm_loadu_si128(v43);
          v15 = v43[1].m128i_i64[0];
          v49[1].m128i_i64[0] = v15;
        }
        v43 = (const __m128i *)((char *)v43 + 24);
      }
      while ( (const __m128i *)v14 != v43 );
      v42 = *(__m128i **)(a1 + 1408);
    }
    if ( v42 )
      sub_186B220(v42);
    *(_QWORD *)(a1 + 1408) = v39;
    *(_DWORD *)(a1 + 1424) = 0;
  }
LABEL_17:
  (**a2)(a2, v12, v15, v14);
  sub_186B220(a2);
}

