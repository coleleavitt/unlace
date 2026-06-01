__int64 __fastcall sub_DF0A40(__int64 a1, __int64 a2)
{
  char **exception; // rax
  char *v3; // r12
  char **v4; // rbx
  __int64 v5; // rdx
  unsigned int v8; // eax
  unsigned int v9; // r12d
  unsigned int v10; // ebx
  _QWORD *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdi
  _DWORD *v14; // rax
  __int64 v15; // rax
  __int64 v16; // r15
  unsigned int v17; // edi
  __int64 v18; // rbp
  char *v19; // rax
  char *v20; // rcx
  unsigned __int64 v21; // rax
  __int64 v22; // r8
  void **v23; // rbx
  __int64 v24; // r13
  void **v25; // r12
  void (__fastcall ***v26)(void *); // rbp
  unsigned __int64 v29; // rax
  __int64 v30; // r9
  _DWORD *v31; // rax
  void *ptr; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v33; // [rsp+18h] [rbp-C0h]
  _BYTE v34[184]; // [rsp+20h] [rbp-B8h] BYREF

  v8 = sub_17F7190(a2);
  if ( v8 <= 1 )
  {
    exception = (char **)__cxa_allocate_exception(0x30u);
    v3 = *(char **)(a2 + 8);
    v4 = exception;
    sub_17BA1E((__int64 *)&ptr, "invalid par-or combinator, at least one argument expected", v5);
    *v4 = (char *)off_1C63128;
    sub_2333C0(v4 + 1, &ptr);
    v4[5] = v3;
    *v4 = (char *)off_1C64218;
    sub_233E40((__int64)&ptr);
    __cxa_throw(v4, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  v9 = v8;
  if ( v8 == 2 )
  {
    v31 = (_DWORD *)sub_17F71A0(a2, 1);
    return sub_DEF440(a1, v31);
  }
  else
  {
    v10 = 1;
    ptr = v34;
    v33 = 0x1000000000LL;
    do
    {
      v14 = (_DWORD *)sub_17F71A0(a2, v10);
      v15 = sub_DEF440(a1, v14);
      v16 = v15;
      if ( v15 )
        ++*(_DWORD *)(v15 + 8);
      v17 = v33;
      if ( (unsigned int)v33 < HIDWORD(v33) )
      {
        v11 = ptr;
      }
      else
      {
        v18 = (unsigned int)(2 * HIDWORD(v33));
        v19 = (char *)sub_186B270(8 * v18);
        v17 = v33;
        v20 = (char *)ptr;
        v11 = v19;
        if ( (_DWORD)v33 )
        {
          if ( (unsigned int)(v33 - 1) <= 2 || v19 == (char *)ptr + 8 )
          {
            v29 = 0;
            v30 = 8LL * (unsigned int)v33;
            do
            {
              v11[v29 / 8] = *(_QWORD *)&v20[v29];
              v29 += 8LL;
            }
            while ( v29 != v30 );
          }
          else
          {
            v21 = 0;
            v22 = 16LL * ((unsigned int)v33 >> 1);
            do
            {
              *(__m128i *)&v11[v21 / 8] = _mm_loadu_si128((const __m128i *)&v20[v21]);
              v21 += 16LL;
            }
            while ( v21 != v22 );
            if ( (v17 & 1) != 0 )
              v11[v17 & 0xFFFFFFFE] = *(_QWORD *)&v20[8 * (v17 & 0xFFFFFFFE)];
          }
        }
        if ( v20 != v34 && v20 )
        {
          sub_186B220(v20);
          v17 = v33;
        }
        ptr = v11;
        HIDWORD(v33) = v18;
      }
      v12 = v17;
      ++v10;
      v13 = v17 + 1;
      v11[v12] = v16;
      LODWORD(v33) = v13;
    }
    while ( v9 != v10 );
    v23 = (void **)ptr;
    v24 = sub_EEA340(v13, v11);
    v25 = (void **)((char *)ptr + 8 * (unsigned int)v33);
    if ( ptr < v25 )
    {
      do
      {
        while ( 1 )
        {
          v26 = (void (__fastcall ***)(void *))*v23;
          if ( *v23 )
          {
            if ( (*((_DWORD *)v26 + 2))-- == 1 )
              break;
          }
          if ( ++v23 >= v25 )
            goto LABEL_26;
        }
        ++v23;
        (**v26)(v26);
        sub_186B220(v26);
      }
      while ( v23 < v25 );
LABEL_26:
      v23 = (void **)ptr;
    }
    if ( v23 != (void **)v34 )
    {
      if ( v23 )
        sub_186B220(v23);
    }
    return v24;
  }
}

