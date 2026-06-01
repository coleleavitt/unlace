__int64 __fastcall sub_79B170(__int64 a1, int a2, unsigned int *a3)
{
  char **exception; // rbx
  char **v4; // r12
  char **v5; // rbx
  __int64 v6; // r13
  unsigned int *v8; // rbp
  unsigned int *v9; // r14
  _QWORD *v10; // rax
  unsigned int *v11; // rax
  unsigned int *v12; // rbx
  unsigned int v13; // edx
  int v14; // ecx
  __int64 v15; // rax
  unsigned int v16; // edx
  unsigned int v17; // r15d
  size_t v18; // rsi
  unsigned int *v19; // rax
  unsigned __int64 v20; // r15
  unsigned int v21; // eax
  __int64 v22; // rdx
  int v23; // eax
  _QWORD *v24; // rcx
  _QWORD *v25; // rax
  _QWORD *v26; // rdi
  _QWORD *v27; // rbx
  unsigned int v28; // eax
  __int64 v29; // rdx
  __int64 result; // rax
  _QWORD *v31; // rdx
  unsigned int v32; // r14d
  size_t v33; // rdi
  __int64 v34; // rax
  __int64 *v35; // rbp
  __int64 *v36; // r14
  __int64 v37; // rdi
  __int64 v38; // rax
  __int64 *v39; // r8
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rcx
  __m128i v43; // xmm0
  unsigned __int64 v44; // rcx
  __int64 *v45; // rax
  __int64 v46; // r8
  __int64 *v47; // rax
  void *v48; // rdi
  unsigned int v49; // ebp
  size_t v50; // rsi
  unsigned int *v51; // rax
  __int64 v52; // rdx
  __int64 *v53; // rax
  unsigned __int64 v54; // rcx
  __int64 v55; // r9
  _QWORD *v56; // rax
  _QWORD *v57; // rax
  __int64 *v58; // [rsp+0h] [rbp-78h]
  unsigned int v59; // [rsp+Ch] [rbp-6Ch]
  __int64 v60[11]; // [rsp+20h] [rbp-58h] BYREF

  v6 = a1 + 8336;
  if ( a2 )
  {
    v8 = a3;
    v9 = &a3[a2];
    v10 = (_QWORD *)sub_186B270(0x10u);
    *v10 = 2;
    v11 = (unsigned int *)(v10 + 1);
    v12 = v11;
    while ( 1 )
    {
      v13 = *v8++;
      *v11 = v13;
      v14 = *(v12 - 1);
      v15 = (unsigned int)(v14 + 1);
      *(v12 - 1) = v15;
      if ( v8 == v9 )
        break;
      v16 = *(v12 - 2);
      if ( v16 == (_DWORD)v15 )
      {
        v17 = (3 * v16 + 1) >> 1;
        v18 = 4 * v17 + 8;
        if ( 4 * v14 + 12 >= (unsigned int)v18 || v16 >= v17 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v60, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v60);
          sub_233E40((__int64)v60);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v19 = (unsigned int *)sub_186B300(v12 - 2, v18);
        v12 = v19 + 2;
        *v19 = v17;
        v11 = &v19[v19[1] + 2];
      }
      else
      {
        v11 = &v12[v15];
      }
    }
  }
  else
  {
    v12 = nullptr;
  }
  v20 = *(_QWORD *)(a1 + 8336);
  if ( v20 )
  {
    v21 = *(_DWORD *)(v20 - 4);
    if ( v21 == *(_DWORD *)(v20 - 8) )
    {
      v32 = (3 * v21 + 1) >> 1;
      v33 = 8 * v32 + 8;
      v59 = v32;
      if ( 8 * v21 + 8 >= (unsigned int)v33 || v21 >= v32 )
      {
        v4 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v60, "Overflow encountered when expanding vector");
        *v4 = (char *)off_1C63128;
        sub_2333C0(v4 + 1, v60);
        sub_233E40((__int64)v60);
        __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v34 = sub_186B270(v33);
      v35 = *(__int64 **)(a1 + 8336);
      v36 = (__int64 *)v34;
      v20 = v34 + 8;
      if ( v35 )
      {
        v37 = *((unsigned int *)v35 - 1);
        *(_DWORD *)(v34 + 4) = v37;
        v38 = 8 * v37;
        v39 = &v35[v37];
        if ( v39 != v35 )
        {
          v40 = v38 - 8;
          if ( (unsigned __int64)(v38 - 8) <= 8 || v20 < (unsigned __int64)(v35 + 2) && v35 < v36 + 3 )
          {
            v53 = v35;
            v54 = v20;
            do
            {
              v55 = *v53;
              *v53++ = 0;
              v54 += 8LL;
              *(_QWORD *)(v54 - 8) = v55;
            }
            while ( v53 != v39 );
          }
          else
          {
            v41 = 0;
            v42 = (v40 >> 3) + 1;
            do
            {
              v43 = _mm_loadu_si128((const __m128i *)&v35[v41]);
              *(_OWORD *)&v35[v41] = 0;
              *(__m128i *)&v36[v41 + 1] = v43;
              v41 += 2LL;
            }
            while ( 2 * (v42 >> 1) != v41 );
            if ( (v42 & 1) != 0 )
            {
              v44 = v42 & 0xFFFFFFFFFFFFFFFELL;
              v45 = &v35[v44];
              v46 = *v45;
              *v45 = 0;
              *(_QWORD *)(v20 + 8 * v44) = v46;
            }
          }
        }
        v47 = &v35[v37];
        if ( (_DWORD)v37 )
        {
          do
          {
            while ( *v35 )
            {
              v48 = (void *)(*v35 - 8);
              v58 = v47;
              ++v35;
              sub_186B220(v48);
              v47 = v58;
              if ( v35 == v58 )
                goto LABEL_31;
            }
            ++v35;
          }
          while ( v35 != v47 );
LABEL_31:
          v35 = *(__int64 **)(a1 + 8336);
        }
        sub_186B220(v35 - 1);
        v24 = (_QWORD *)(v20 + 8LL * *((unsigned int *)v36 + 1));
        v23 = *((_DWORD *)v36 + 1) + 1;
      }
      else
      {
        *(_DWORD *)(v34 + 4) = 0;
        v24 = (_QWORD *)(v34 + 8);
        v23 = 1;
      }
      *(_QWORD *)(a1 + 8336) = v20;
      *(_DWORD *)v36 = v59;
    }
    else
    {
      v22 = v21;
      v23 = v21 + 1;
      v24 = (_QWORD *)(v20 + 8 * v22);
    }
  }
  else
  {
    v57 = (_QWORD *)sub_186B270(0x18u);
    v20 = (unsigned __int64)(v57 + 1);
    *v57 = 2;
    v23 = 1;
    *(_QWORD *)(a1 + 8336) = v20;
    v24 = (_QWORD *)v20;
  }
  *v24 = v12;
  *(_DWORD *)(v20 - 4) = v23;
  v25 = (_QWORD *)sub_180C100(a1 + 2144, 16);
  v26 = *(_QWORD **)(a1 + 2128);
  v27 = v25;
  *v25 = off_1C547B8;
  v25[1] = v6;
  if ( v26 )
  {
    v28 = *((_DWORD *)v26 - 1);
    if ( v28 == *((_DWORD *)v26 - 2) )
    {
      v49 = (3 * v28 + 1) >> 1;
      v50 = 8 * v49 + 8;
      if ( 8 * v28 + 8 >= (unsigned int)v50 || v28 >= v49 )
      {
        v5 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v60, "Overflow encountered when expanding vector");
        *v5 = (char *)off_1C63128;
        sub_2333C0(v5 + 1, v60);
        sub_233E40((__int64)v60);
        __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v51 = (unsigned int *)sub_186B300(v26 - 1, v50);
      v52 = v51[1];
      v26 = v51 + 2;
      *v51 = v49;
      *(_QWORD *)(a1 + 2128) = v51 + 2;
      LODWORD(v51) = v52;
      v31 = &v26[v52];
      result = (unsigned int)((_DWORD)v51 + 1);
    }
    else
    {
      v29 = v28;
      result = v28 + 1;
      v31 = &v26[v29];
    }
  }
  else
  {
    v56 = (_QWORD *)sub_186B270(0x18u);
    v26 = v56 + 1;
    *v56 = 2;
    result = 1;
    *(_QWORD *)(a1 + 2128) = v26;
    v31 = v26;
  }
  *v31 = v27;
  *((_DWORD *)v26 - 1) = result;
  return result;
}

