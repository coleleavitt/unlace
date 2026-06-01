__int64 __fastcall sub_B664E0(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  char **v4; // rbp
  __int64 v5; // rdx
  char **exception; // rbp
  __int64 v7; // rdx
  unsigned __int64 v9; // rbp
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // ebx
  size_t v14; // rdi
  unsigned int *v15; // rax
  __int64 *v16; // r15
  unsigned int *v17; // r14
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 *v20; // r10
  unsigned __int64 v21; // rsi
  __int64 *v22; // r9
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rsi
  __m128i v25; // xmm0
  unsigned __int64 v26; // rsi
  __int64 v27; // r9
  __int64 *v28; // r13
  void *v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // rax
  _QWORD *v32; // rbx
  _QWORD *v33; // rdx
  unsigned int v34; // eax
  __int64 v35; // rcx
  __int64 result; // rax
  _QWORD *v37; // rcx
  _DWORD *v38; // rdx
  __int64 v39; // rsi
  unsigned int v40; // ebp
  unsigned int v41; // ecx
  unsigned int *v42; // rax
  __int64 v43; // rcx
  _QWORD *v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 *v47; // rbx
  __int64 *v48; // r13
  __int64 v49; // rdx
  _QWORD *v50; // rdx
  unsigned int v51; // [rsp+Ch] [rbp-6Ch]
  unsigned int v54; // [rsp+1Ch] [rbp-5Ch]
  __int64 v55[11]; // [rsp+20h] [rbp-58h] BYREF

  v9 = *(_QWORD *)(a1 + 8904);
  *(_BYTE *)(a2 + 7) = *(_BYTE *)(a2 + 7) & 0xF3 | (8 * a4 + 4) & 0xC;
  if ( !v9 )
  {
    v51 = a3 + 1;
    if ( a3 == -1 )
      goto LABEL_23;
    v54 = 0;
    v44 = (_QWORD *)sub_186B270(0x18u);
    v9 = (unsigned __int64)(v44 + 1);
    *v44 = 2;
    *(_QWORD *)(a1 + 8904) = v44 + 1;
    goto LABEL_4;
  }
  v10 = *(_DWORD *)(v9 - 4);
  v54 = v10;
  if ( a3 < v10 )
    goto LABEL_23;
  v51 = a3 + 1;
  if ( v10 < a3 + 1 )
  {
LABEL_4:
    while ( 1 )
    {
      v11 = *(_DWORD *)(v9 - 8);
      v12 = v51;
      if ( v11 >= v51 )
        break;
      while ( 1 )
      {
        v13 = (3 * v11 + 1) >> 1;
        v14 = 8 * v13 + 8;
        if ( 8 * v11 + 8 >= (unsigned int)v14 || v11 >= v13 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_14E142(v55, "Overflow encountered when expanding vector", v7);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v55);
          sub_233E40((__int64)v55);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v15 = (unsigned int *)sub_186B270(v14);
        v16 = *(__int64 **)(a1 + 8904);
        v17 = v15;
        v9 = (unsigned __int64)(v15 + 2);
        if ( !v16 )
          break;
        v18 = *((unsigned int *)v16 - 1);
        v19 = 8 * v18;
        v15[1] = v18;
        v20 = &v16[v18];
        if ( v16 != v20 )
        {
          v21 = v19 - 8;
          v22 = v16;
          if ( (unsigned __int64)(v19 - 8) <= 8 || v16 < (__int64 *)v15 + 3 && v9 < (unsigned __int64)(v16 + 2) )
          {
            v38 = v15 + 2;
            do
            {
              v39 = *v22;
              *v22++ = 0;
              v38 += 2;
              *((_QWORD *)v38 - 1) = v39;
            }
            while ( v22 != v20 );
          }
          else
          {
            v23 = 0;
            v24 = (v21 >> 3) + 1;
            do
            {
              v25 = _mm_loadu_si128((const __m128i *)&v16[v23 / 2]);
              *(_OWORD *)&v16[v23 / 2] = 0;
              *(__m128i *)&v15[v23 + 2] = v25;
              v23 += 4LL;
            }
            while ( v23 != 4 * (v24 >> 1) );
            if ( (v24 & 1) != 0 )
            {
              v26 = 2 * (v24 & 0xFFFFFFFFFFFFFFFELL);
              v27 = v16[v26 / 2];
              v16[v26 / 2] = 0;
              *(_QWORD *)&v15[v26 + 2] = v27;
            }
          }
        }
        v28 = &v16[v18];
        if ( (_DWORD)v18 )
        {
          do
          {
            while ( *v16 )
            {
              v29 = (void *)(*v16++ - 8);
              sub_186B220(v29);
              if ( v28 == v16 )
                goto LABEL_19;
            }
            ++v16;
          }
          while ( v16 != v28 );
LABEL_19:
          v16 = *(__int64 **)(a1 + 8904);
        }
        sub_186B220(v16 - 1);
        *v17 = v13;
        v11 = *(_DWORD *)(v9 - 8);
        v12 = v51;
        *(_QWORD *)(a1 + 8904) = v9;
        if ( v11 >= v51 )
          goto LABEL_21;
      }
      v15[1] = 0;
      *(_QWORD *)(a1 + 8904) = v9;
      *v15 = v13;
    }
LABEL_21:
    *(_DWORD *)(v9 - 4) = v12;
    v30 = 8LL * v12;
    v31 = 8LL * v54;
    if ( v31 != v30 )
      memset((void *)(v9 + v31), 0, v30 - v31);
    goto LABEL_23;
  }
  v45 = 8LL * v51;
  v46 = 8LL * v10;
  v47 = (__int64 *)(v9 + v45);
  v48 = (__int64 *)(v9 + v46);
  if ( v45 != v46 )
  {
    do
    {
      while ( 1 )
      {
        v49 = *v47;
        if ( !*v47 )
          break;
        ++v47;
        sub_186B220((void *)(v49 - 8));
        if ( v47 == v48 )
          goto LABEL_41;
      }
      ++v47;
    }
    while ( v48 != v47 );
LABEL_41:
    v9 = *(_QWORD *)(a1 + 8904);
  }
  *(_DWORD *)(v9 - 4) = v51;
LABEL_23:
  v32 = (_QWORD *)(v9 + 8LL * a3);
  v33 = (_QWORD *)*v32;
  if ( *v32 )
  {
    v34 = *((_DWORD *)v33 - 1);
    if ( v34 == *((_DWORD *)v33 - 2) )
    {
      v40 = (3 * v34 + 1) >> 1;
      v41 = 8 * v40 + 8;
      if ( 8 * v34 + 8 >= v41 || v34 >= v40 )
      {
        v4 = (char **)__cxa_allocate_exception(0x28u);
        sub_14E142(v55, "Overflow encountered when expanding vector", v5);
        *v4 = (char *)off_1C63128;
        sub_2333C0(v4 + 1, v55);
        sub_233E40((__int64)v55);
        __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v42 = (unsigned int *)sub_186B300(v33 - 1, v41);
      v43 = v42[1];
      v33 = v42 + 2;
      *v32 = v42 + 2;
      *v42 = v40;
      LODWORD(v42) = v43;
      v37 = &v33[v43];
      result = (unsigned int)((_DWORD)v42 + 1);
    }
    else
    {
      v35 = v34;
      result = v34 + 1;
      v37 = &v33[v35];
    }
  }
  else
  {
    v50 = (_QWORD *)sub_186B270(0x18u);
    *v50 = 2;
    result = 1;
    v33 = v50 + 1;
    *v32 = v33;
    v37 = v33;
  }
  *v37 = a2;
  *((_DWORD *)v33 - 1) = result;
  return result;
}

