void __fastcall sub_7A97C0(__int64 a1, unsigned int a2)
{
  char **exception; // rbp
  __int64 v4; // rsi
  char *v5; // rdx
  __int64 v6; // rax
  unsigned int v7; // r12d
  __int64 v8; // rax
  bool v9; // zf
  unsigned __int64 v10; // rbx
  unsigned int v11; // eax
  _QWORD *v12; // rbx
  __int64 v13; // rbp
  _QWORD *v14; // rax
  void *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  unsigned int v21; // eax
  unsigned int v22; // ecx
  unsigned int v23; // ebp
  size_t v24; // rdi
  unsigned int *v25; // rax
  __int64 *v26; // r15
  unsigned int *v27; // r12
  __int64 v28; // r10
  __int64 *v29; // r11
  unsigned __int64 v30; // rdi
  __int64 *v31; // rdx
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rdi
  __m128i v34; // xmm0
  unsigned __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 *v37; // r14
  void *v38; // rdi
  __int64 v39; // rdx
  __int64 v40; // rax
  _DWORD *v41; // rsi
  __int64 v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rdx
  _QWORD *v46; // r12
  _QWORD *v47; // rbp
  void *v48; // rdi
  unsigned int v49; // [rsp+8h] [rbp-90h]
  unsigned int v50; // [rsp+Ch] [rbp-8Ch]
  unsigned int *ptr; // [rsp+10h] [rbp-88h]
  unsigned int v53; // [rsp+1Ch] [rbp-7Ch]
  __int64 v54; // [rsp+28h] [rbp-70h] BYREF
  __int64 v55; // [rsp+30h] [rbp-68h] BYREF
  __int64 v56; // [rsp+38h] [rbp-60h] BYREF
  __int64 v57[11]; // [rsp+40h] [rbp-58h] BYREF

  if ( !*(_QWORD *)(a1 + 272) )
    return;
  v4 = sub_7E4F60(a1, a2 >> 1);
  if ( !v4 )
    BUG();
  v5 = (char *)(sub_7E4F00(a1) + 88);
  if ( *(int *)v5 >> 8 == -1 )
  {
LABEL_46:
    v50 = -1;
    goto LABEL_11;
  }
  while ( *v5 != *(_DWORD *)(a1 + 12) )
  {
    v5 = *((char **)v5 + 1);
    if ( !v5 )
      goto LABEL_46;
  }
  v6 = *(_QWORD *)(a1 + 448);
  v7 = *(int *)v5 >> 8;
  v50 = v7;
  if ( !v6 || v7 >= *(_DWORD *)(v6 - 4) || (v8 = *(_QWORD *)(v6 + 8LL * v7)) == 0 || !*(_DWORD *)(v8 - 4) )
  {
LABEL_11:
    if ( *(_DWORD *)(a1 + 104) )
    {
      do
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 512LL))(a1, v4);
        v9 = (*(_DWORD *)(a1 + 104))-- == 1;
      }
      while ( !v9 );
    }
    ptr = (unsigned int *)sub_186B270(0x10u);
    ptr[2] = a2;
    *(_QWORD *)ptr = 0x100000002LL;
    v10 = *(_QWORD *)(a1 + 448);
    if ( v10 )
    {
      v11 = *(_DWORD *)(v10 - 4);
      v53 = v11;
      if ( v50 < v11 )
      {
LABEL_15:
        v12 = (_QWORD *)(v10 + 8LL * v50);
        if ( *v12 )
          sub_186B220((void *)(*v12 - 8LL));
        v13 = *(_QWORD *)ptr;
        v14 = (_QWORD *)sub_186B270(4LL * *ptr + 8);
        *v14 = v13;
        v15 = v14 + 1;
        v16 = ptr[1];
        *v12 = v15;
        v17 = (__int64)&ptr[v16 + 2];
        if ( ptr + 2 != (unsigned int *)v17 )
          memcpy(v15, ptr + 2, v17 - (_QWORD)ptr - 8);
        v18 = *(_QWORD *)(a1 + 72);
        v19 = *(_QWORD *)(v18 + 864);
        if ( (a2 & 1) == 0 )
          v19 = *(_QWORD *)(v18 + 856);
        v9 = *(_QWORD *)(a1 + 272) == 0;
        v20 = **(_QWORD **)(*(_QWORD *)(a1 + 88) + 8LL * v50);
        v54 = *(_QWORD *)(a1 + 120);
        v55 = a1 + 112;
        v56 = v20;
        v57[0] = v19;
        if ( v9 )
          std::__throw_bad_function_call();
        (*(void (__fastcall **)(__int64, __int64 *, __int64 *, __int64 *, __int64 *))(a1 + 280))(
          a1 + 256,
          &v54,
          &v55,
          &v56,
          v57);
        sub_186B220(ptr);
        return;
      }
      v49 = v50 + 1;
      if ( v11 >= v50 + 1 )
      {
        v44 = 8LL * v49;
        v45 = 8LL * v11;
        v46 = (_QWORD *)(v10 + v44);
        v47 = (_QWORD *)(v10 + v45);
        if ( v44 != v45 )
        {
          do
          {
            while ( *v46 )
            {
              v48 = (void *)(*v46++ - 8LL);
              sub_186B220(v48);
              if ( v46 == v47 )
                goto LABEL_56;
            }
            ++v46;
          }
          while ( v47 != v46 );
LABEL_56:
          v10 = *(_QWORD *)(a1 + 448);
        }
        *(_DWORD *)(v10 - 4) = v49;
        goto LABEL_15;
      }
    }
    else
    {
      v49 = v50 + 1;
      if ( v50 == -1 )
        goto LABEL_15;
      v53 = 0;
      v43 = (_QWORD *)sub_186B270(0x18u);
      v10 = (unsigned __int64)(v43 + 1);
      *v43 = 2;
      *(_QWORD *)(a1 + 448) = v43 + 1;
    }
    while ( 1 )
    {
      v21 = *(_DWORD *)(v10 - 8);
      v22 = v49;
      if ( v21 >= v49 )
        break;
      while ( 1 )
      {
        v23 = (3 * v21 + 1) >> 1;
        v24 = 8 * v23 + 8;
        if ( 8 * v21 + 8 >= (unsigned int)v24 || v21 >= v23 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v57, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v57);
          sub_233E40((__int64)v57);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v25 = (unsigned int *)sub_186B270(v24);
        v26 = *(__int64 **)(a1 + 448);
        v27 = v25;
        v10 = (unsigned __int64)(v25 + 2);
        if ( !v26 )
          break;
        v28 = *((unsigned int *)v26 - 1);
        v25[1] = v28;
        v29 = &v26[v28];
        if ( v29 != v26 )
        {
          v30 = 8 * v28 - 8;
          v31 = v26;
          if ( v30 <= 8 || v10 < (unsigned __int64)(v26 + 2) && v26 < (__int64 *)v25 + 3 )
          {
            v41 = v25 + 2;
            do
            {
              v42 = *v31;
              *v31++ = 0;
              v41 += 2;
              *((_QWORD *)v41 - 1) = v42;
            }
            while ( v29 != v31 );
          }
          else
          {
            v32 = 0;
            v33 = (v30 >> 3) + 1;
            do
            {
              v34 = _mm_loadu_si128((const __m128i *)&v26[v32 / 2]);
              *(_OWORD *)&v26[v32 / 2] = 0;
              *(__m128i *)&v25[v32 + 2] = v34;
              v32 += 4LL;
            }
            while ( v32 != 4 * (v33 >> 1) );
            if ( (v33 & 1) != 0 )
            {
              v35 = 2 * (v33 & 0xFFFFFFFFFFFFFFFELL);
              v36 = v26[v35 / 2];
              v26[v35 / 2] = 0;
              *(_QWORD *)&v25[v35 + 2] = v36;
            }
          }
        }
        v37 = &v26[v28];
        if ( (_DWORD)v28 )
        {
          do
          {
            while ( *v26 )
            {
              v38 = (void *)(*v26++ - 8);
              sub_186B220(v38);
              if ( v26 == v37 )
                goto LABEL_40;
            }
            ++v26;
          }
          while ( v26 != v37 );
LABEL_40:
          v26 = *(__int64 **)(a1 + 448);
        }
        sub_186B220(v26 - 1);
        *v27 = v23;
        v22 = v49;
        v21 = *(_DWORD *)(v10 - 8);
        *(_QWORD *)(a1 + 448) = v10;
        if ( v21 >= v49 )
          goto LABEL_42;
      }
      v25[1] = 0;
      *(_QWORD *)(a1 + 448) = v10;
      *v25 = v23;
    }
LABEL_42:
    *(_DWORD *)(v10 - 4) = v22;
    v39 = 8LL * v22;
    v40 = 8LL * v53;
    if ( v40 != v39 )
      memset((void *)(v10 + v40), 0, v39 - v40);
    goto LABEL_15;
  }
}

