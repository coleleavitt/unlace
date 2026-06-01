__int64 __fastcall sub_DC3180(_QWORD *a1)
{
  __int64 v2; // rdi
  void *v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rbx
  int v6; // eax
  int v7; // eax
  unsigned int v8; // edx
  int v9; // ebp
  _DWORD *v10; // r15
  int v11; // eax
  _QWORD *exception; // rbp
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rbp
  void *v16; // rcx
  unsigned int v17; // r15d
  __int64 v18; // rsi
  __int64 (*v19)(); // r13
  _QWORD *v20; // rbp
  __int64 v21; // r13
  __int64 v22; // rax
  char *v23; // rdi
  unsigned __int64 v24; // rax
  __int64 v25; // rsi
  unsigned int v26; // eax
  __int64 v27; // rsi
  __int64 v28; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // rbx
  int v33; // [rsp+0h] [rbp-A8h]
  int i; // [rsp+8h] [rbp-A0h]
  void *v35; // [rsp+8h] [rbp-A0h]
  int v36; // [rsp+10h] [rbp-98h]
  void *v37; // [rsp+18h] [rbp-90h] BYREF
  void *ptr; // [rsp+20h] [rbp-88h]
  __int64 v39; // [rsp+28h] [rbp-80h]
  _BYTE v40[120]; // [rsp+30h] [rbp-78h] BYREF

  v2 = *((unsigned int *)a1 + 356);
  if ( (_DWORD)v2 != 9 )
  {
    sub_DC0980(a1);
    v2 = *((unsigned int *)a1 + 356);
  }
  sub_DBF580(v2, (__int64)"invalid indexed sort, symbol expected");
  v3 = (void *)a1[6];
  if ( *((_DWORD *)a1 + 356) != 9 )
    sub_DC0980(a1);
  v4 = *a1;
  v37 = v3;
  v5 = sub_DF89E0(v4, &v37);
  if ( !v5 )
    sub_DBFCB0(v37);
  ptr = v40;
  v39 = 0x1000000000LL;
  v6 = *((_DWORD *)a1 + 356);
  for ( i = (_DWORD)a1 + 16; v6 != 2; *((_DWORD *)a1 + 356) = v6 )
  {
    if ( v6 != 6 )
      goto LABEL_11;
    v7 = sub_DC09F0((__int64)a1);
    v8 = v39;
    v9 = v7;
    if ( (unsigned int)v39 >= HIDWORD(v39) )
    {
      v21 = (unsigned int)(2 * HIDWORD(v39));
      v22 = sub_186B270(4 * v21);
      v8 = v39;
      v23 = (char *)ptr;
      v10 = (_DWORD *)v22;
      if ( (_DWORD)v39 )
      {
        if ( (unsigned int)(v39 - 1) <= 2 || (unsigned __int64)(v22 - ((_QWORD)ptr + 4)) <= 8 )
        {
          v29 = 0;
          v30 = 4LL * (unsigned int)v39;
          do
          {
            v10[v29 / 4] = *(_DWORD *)&v23[v29];
            v29 += 4LL;
          }
          while ( v30 != v29 );
        }
        else
        {
          v24 = 0;
          v25 = 16LL * ((unsigned int)v39 >> 2);
          do
          {
            *(__m128i *)&v10[v24 / 4] = _mm_loadu_si128((const __m128i *)&v23[v24]);
            v24 += 16LL;
          }
          while ( v24 != v25 );
          v26 = v8 & 0xFFFFFFFC;
          if ( (v8 & 3) != 0 )
          {
            v10[v26] = *(_DWORD *)&v23[4 * v26];
            v27 = v26 + 1;
            if ( (unsigned int)v27 < v8 )
            {
              v28 = v26 + 2;
              v10[v27] = *(_DWORD *)&v23[4 * v27];
              if ( (unsigned int)v28 < v8 )
                v10[v28] = *(_DWORD *)&v23[4 * v28];
            }
          }
        }
      }
      if ( v23 && v23 != v40 )
      {
        sub_186B220(v23);
        v8 = v39;
      }
      ptr = v10;
      HIDWORD(v39) = v21;
    }
    else
    {
      v10 = ptr;
    }
    v11 = *((_DWORD *)a1 + 356);
    v10[v8] = v9;
    LODWORD(v39) = v39 + 1;
    if ( v11 == 9 )
    {
LABEL_11:
      exception = __cxa_allocate_exception(0x30u);
      sub_305660(exception, "invalid indexed sort, integer or ')' expected");
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
    }
    if ( v11 == 1 )
    {
      v13 = a1[176];
      ++*((_DWORD *)a1 + 524);
      if ( !v13 )
        goto LABEL_36;
    }
    else
    {
      if ( v11 == 2 )
        --*((_DWORD *)a1 + 524);
      v13 = a1[176];
      if ( !v13 )
      {
LABEL_36:
        v14 = 0;
        goto LABEL_17;
      }
    }
    v14 = *(_DWORD *)(v13 - 4);
LABEL_17:
    *((_DWORD *)a1 + 517) = v14;
    v6 = sub_DDB0A0(i, v33, i, v36, (__int64)v37);
  }
  v15 = *a1;
  v16 = ptr;
  v17 = v39;
  v18 = *(_QWORD *)(*a1 + 312LL);
  v19 = *(__int64 (**)())(*(_QWORD *)v5 + 72LL);
  if ( !v18 )
  {
    v35 = ptr;
    sub_DFBCB0(*a1);
    v18 = *(_QWORD *)(v15 + 312);
    v16 = v35;
  }
  if ( v19 == sub_DC0720
    || (v31 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, void *))v19)(v5, v18, v17, v16)) == 0 )
  {
    v20 = __cxa_allocate_exception(0x30u);
    sub_305660(v20, "invalid sort application");
    __cxa_throw(v20, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  if ( *((_DWORD *)a1 + 356) != 9 )
    sub_DC0980(a1);
  if ( ptr && ptr != v40 )
    sub_186B220(ptr);
  return v31;
}

