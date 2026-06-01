__int64 __fastcall sub_8115C0(__int64 a1)
{
  char **exception; // rbp
  __int64 *v4; // rbp
  __int64 v5; // rcx
  __int64 *v6; // r15
  unsigned __int64 v7; // rbx
  _QWORD *v8; // rax
  int v9; // r8d
  unsigned int v10; // edx
  unsigned __int64 *v11; // rsi
  _QWORD *v12; // r12
  __int64 *v13; // rax
  unsigned int v14; // eax
  unsigned int v15; // r14d
  size_t v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rsi
  unsigned __int64 v19; // rdx
  int v20; // r8d
  __int64 v21; // rsi
  __int64 v22; // rsi
  int v23; // eax
  _QWORD *v24; // r14
  char v25; // bp
  int v26; // r15d
  __int64 v27; // rax
  _QWORD *v28; // rbx
  __int64 v29; // r15
  _QWORD *v30; // rbx
  int v31; // r14d
  _QWORD *v32; // r15
  unsigned int v33; // r14d
  int v35; // [rsp+0h] [rbp-88h]
  int v36; // [rsp+8h] [rbp-80h]
  _DWORD *v37; // [rsp+8h] [rbp-80h]
  __int64 v38; // [rsp+10h] [rbp-78h]
  int v39; // [rsp+1Ch] [rbp-6Ch]
  __int64 v40[11]; // [rsp+30h] [rbp-58h] BYREF

  if ( *(_DWORD *)(a1 + 104) )
  {
    do
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 512LL))(a1);
    while ( (*(_DWORD *)(a1 + 104))-- != 1 );
  }
  v4 = *(__int64 **)(a1 + 736);
  v5 = 2LL * *(unsigned int *)(a1 + 744);
  v6 = &v4[v5];
  if ( v4 == &v4[v5] )
    goto LABEL_30;
  while ( (unsigned __int64)*v4 <= 1 )
  {
    v4 += 2;
    if ( v6 == v4 )
      goto LABEL_30;
  }
  if ( v6 == v4 )
  {
LABEL_30:
    v33 = 0;
    *(_BYTE *)(a1 + 760) = *(_BYTE *)(a1 + 760);
  }
  else
  {
    v7 = *v4;
    v35 = *((_DWORD *)v4 + 2);
    v8 = (_QWORD *)sub_186B270(0x28u);
    v9 = v35;
    v10 = 1;
    *v8 = 2;
    v11 = v8 + 1;
    v12 = v8 + 1;
    while ( 1 )
    {
      v13 = v4 + 2;
      *v11 = v7;
      *((_DWORD *)v11 + 2) = v9;
      *((_DWORD *)v12 - 1) = v10;
      if ( v6 == v4 + 2 )
        break;
      while ( 1 )
      {
        v7 = *v13;
        v4 = v13;
        if ( (unsigned __int64)*v13 > 1 )
          break;
        v13 += 2;
        if ( v6 == v13 )
          goto LABEL_21;
      }
      if ( v6 == v13 )
        break;
      v9 = *((_DWORD *)v13 + 2);
      v14 = *((_DWORD *)v12 - 1);
      if ( v14 == *((_DWORD *)v12 - 2) )
      {
        v15 = (3 * v14 + 1) >> 1;
        v16 = 16 * v15 + 8;
        if ( 16 * v14 + 8 >= (unsigned int)v16 || v14 >= v15 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v40, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v40);
          sub_233E40((__int64)v40);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v36 = v9;
        v17 = sub_186B270(v16);
        v18 = *((unsigned int *)v12 - 1);
        v19 = 0;
        v20 = v36;
        *(_DWORD *)(v17 + 4) = v18;
        v21 = 16 * v18;
        if ( v21 )
        {
          do
          {
            *(__m128i *)(v17 + v19 + 8) = _mm_loadu_si128((const __m128i *)&v12[v19 / 8]);
            v19 += 16LL;
          }
          while ( v21 != v19 );
        }
        v37 = (_DWORD *)v17;
        v39 = v20;
        v38 = v17 + 8;
        sub_186B220(v12 - 1);
        v9 = v39;
        v22 = (unsigned int)v37[1];
        *v37 = v15;
        v12 = (_QWORD *)v38;
        v23 = v22;
        v11 = (unsigned __int64 *)(v38 + 16 * v22);
        v10 = v23 + 1;
      }
      else
      {
        v10 = v14 + 1;
        v11 = &v12[2 * v14];
      }
    }
LABEL_21:
    v24 = v12;
    v25 = *(_BYTE *)(a1 + 760);
    v26 = 1;
    *(_BYTE *)(a1 + 760) = 1;
    v27 = 2LL * v10;
    v28 = &v12[v27];
    if ( v12 == &v12[v27] )
      goto LABEL_24;
    do
    {
      v24 += 2;
      v26 &= sub_87CDC0(a1);
    }
    while ( v28 != v24 );
    if ( (_BYTE)v26 )
    {
LABEL_24:
      v29 = *((unsigned int *)v12 - 1);
      v30 = v12;
      *(_BYTE *)(a1 + 760) = 0;
      v31 = 1;
      v32 = &v12[2 * v29];
      if ( v12 == v32 )
      {
        v33 = 0;
      }
      else
      {
        do
        {
          v30 += 2;
          v31 &= sub_87CDC0(a1);
        }
        while ( v32 != v30 );
        v33 = (unsigned __int8)v31 ^ 1;
      }
    }
    else
    {
      v33 = 1;
    }
    *(_BYTE *)(a1 + 760) = v25;
    sub_186B220(v12 - 1);
  }
  return v33;
}

