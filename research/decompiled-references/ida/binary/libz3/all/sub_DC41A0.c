__int64 __fastcall sub_DC41A0(__int64 a1)
{
  bool v2; // zf
  int v3; // eax
  int v4; // eax
  unsigned int v5; // edx
  int v6; // r15d
  _DWORD *v7; // r14
  int v8; // eax
  _QWORD *v9; // r12
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rax
  unsigned int v13; // r14d
  __int64 v14; // rax
  int v15; // r13d
  int v16; // r13d
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r15
  __int64 *v20; // rax
  __int64 v21; // r12
  __int64 *v22; // rax
  __int64 v23; // rdx
  __int64 *v24; // r15
  __int64 *v25; // r12
  unsigned __int64 v26; // r13
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v30; // r13
  __int64 v31; // rax
  char *v32; // rdi
  unsigned __int64 v33; // rax
  __int64 v34; // rcx
  unsigned int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rax
  unsigned __int64 v38; // rax
  __int64 v39; // rsi
  void *v40; // rax
  __int64 v41; // rdi
  _QWORD *exception; // r12
  _QWORD *v43; // r12
  int v44; // [rsp+0h] [rbp-A0h]
  __int64 v45; // [rsp+0h] [rbp-A0h]
  __int64 v46; // [rsp+0h] [rbp-A0h]
  char *v47; // [rsp+8h] [rbp-98h]
  int v48; // [rsp+10h] [rbp-90h]
  __int64 v49; // [rsp+18h] [rbp-88h] BYREF
  void *ptr; // [rsp+20h] [rbp-80h] BYREF
  __int64 v51; // [rsp+28h] [rbp-78h]
  _BYTE v52[112]; // [rsp+30h] [rbp-70h] BYREF

  if ( *(_DWORD *)(a1 + 1424) == 4 )
  {
    v40 = *(void **)(a1 + 48);
    v41 = *(_QWORD *)a1;
    ptr = v40;
    v46 = sub_DFC0A0(v41, &ptr);
    if ( *(_DWORD *)(a1 + 1424) != 9 )
      sub_DC0980(a1);
  }
  else
  {
    sub_DBF660(a1, "invalid function declaration reference, symbol or '(' expected");
    v2 = *(_DWORD *)(a1 + 1424) == 4;
    v49 = 0;
    v47 = v52;
    ptr = v52;
    v51 = 0x1000000000LL;
    if ( v2 )
    {
      v49 = *(_QWORD *)(a1 + 48);
      sub_DC0980(a1);
    }
    else
    {
      sub_DBF660(a1, "invalid function declaration reference, symbol or '(' expected");
      if ( *(_DWORD *)(a1 + 1424) != 4 || *(_QWORD *)(a1 + 2032) != *(_QWORD *)(a1 + 48) )
      {
        exception = __cxa_allocate_exception(0x30u);
        sub_305660(exception, "invalid indexed function declaration reference, '_' expected");
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
      }
      sub_DC0980(a1);
      sub_DBF580(
        *(unsigned int *)(a1 + 1424),
        (__int64)"invalid indexed function declaration reference, symbol expected");
      v49 = *(_QWORD *)(a1 + 48);
      v3 = *(_DWORD *)(a1 + 1424);
      if ( v3 != 9 )
      {
        sub_DC0980(a1);
        v3 = *(_DWORD *)(a1 + 1424);
      }
      for ( ; v3 != 2; *(_DWORD *)(a1 + 1424) = v3 )
      {
        if ( v3 != 6 )
          goto LABEL_12;
        v4 = sub_DC09F0(a1);
        v5 = v51;
        v6 = v4;
        if ( (unsigned int)v51 >= HIDWORD(v51) )
        {
          v30 = (unsigned int)(2 * HIDWORD(v51));
          v31 = sub_186B270(4 * v30);
          v5 = v51;
          v32 = (char *)ptr;
          v7 = (_DWORD *)v31;
          if ( (_DWORD)v51 )
          {
            if ( (unsigned int)(v51 - 1) <= 2 || (unsigned __int64)(v31 - ((_QWORD)ptr + 4)) <= 8 )
            {
              v38 = 0;
              v39 = 4LL * (unsigned int)v51;
              do
              {
                v7[v38 / 4] = *(_DWORD *)&v32[v38];
                v38 += 4LL;
              }
              while ( v38 != v39 );
            }
            else
            {
              v33 = 0;
              v34 = 16LL * ((unsigned int)v51 >> 2);
              do
              {
                *(__m128i *)&v7[v33 / 4] = _mm_loadu_si128((const __m128i *)&v32[v33]);
                v33 += 16LL;
              }
              while ( v33 != v34 );
              v35 = v5 & 0xFFFFFFFC;
              if ( (v5 & 3) != 0 )
              {
                v7[v35] = *(_DWORD *)&v32[4 * v35];
                v36 = v35 + 1;
                if ( (unsigned int)v36 < v5 )
                {
                  v37 = v35 + 2;
                  v7[v36] = *(_DWORD *)&v32[4 * v36];
                  if ( (unsigned int)v37 < v5 )
                    v7[v37] = *(_DWORD *)&v32[4 * v37];
                }
              }
            }
          }
          if ( v32 && v32 != v47 )
          {
            sub_186B220(v32);
            v5 = v51;
          }
          ptr = v7;
          HIDWORD(v51) = v30;
        }
        else
        {
          v7 = ptr;
        }
        v8 = *(_DWORD *)(a1 + 1424);
        v7[v5] = v6;
        LODWORD(v51) = v51 + 1;
        if ( v8 == 9 )
        {
LABEL_12:
          v9 = __cxa_allocate_exception(0x30u);
          sub_305660(v9, "invalid indexed function declaration reference, integer or ')' expected");
          __cxa_throw(v9, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
        }
        if ( v8 == 1 )
        {
          v10 = *(_QWORD *)(a1 + 1408);
          ++*(_DWORD *)(a1 + 2096);
          if ( !v10 )
            goto LABEL_57;
        }
        else
        {
          if ( v8 == 2 )
            --*(_DWORD *)(a1 + 2096);
          v10 = *(_QWORD *)(a1 + 1408);
          if ( !v10 )
          {
LABEL_57:
            v11 = 0;
            goto LABEL_18;
          }
        }
        v11 = *(_DWORD *)(v10 - 4);
LABEL_18:
        *(_DWORD *)(a1 + 2068) = v11;
        v3 = sub_DDB0A0((int)a1 + 16, v44, (int)v47, v48, v49);
      }
      if ( !(_DWORD)v51 )
      {
        v43 = __cxa_allocate_exception(0x30u);
        sub_305660(v43, "invalid indexed function declaration reference, index expected");
        __cxa_throw(v43, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
      }
      sub_DC0980(a1);
    }
    v12 = sub_DC07A0((_QWORD *)a1)[1];
    if ( v12 )
      v13 = *(_DWORD *)(v12 - 4);
    else
      v13 = 0;
    sub_DBF660(a1, "Invalid function name. Expecting sort list starting with '(' to disambiguate function name");
    while ( *(_DWORD *)(a1 + 1424) != 2 )
      sub_DC3500(
        (_QWORD *)a1,
        "Invalid function name. Expecting sort list starting with '(' to disambiguate function name");
    sub_DC0980(a1);
    v14 = sub_DC07A0((_QWORD *)a1)[1];
    if ( v14 )
      v15 = *(_DWORD *)(v14 - 4);
    else
      v15 = 0;
    v16 = v15 - v13;
    sub_DC3500((_QWORD *)a1, "Invalid function name");
    v45 = *(_QWORD *)a1;
    v17 = sub_DC07A0((_QWORD *)a1)[1];
    v18 = 0x7FFFFFFF8LL;
    if ( v17 )
      v18 = 8LL * (unsigned int)(*(_DWORD *)(v17 - 4) - 1);
    v19 = *(_QWORD *)(v17 + v18);
    v20 = sub_DC07A0((_QWORD *)a1);
    v21 = 8LL * v13;
    v46 = sub_E0D810(v45, (unsigned int)&v49, v51, (_DWORD)ptr, v16, (unsigned int)v21 + (unsigned int)v20[1], v19);
    v22 = sub_DC07A0((_QWORD *)a1);
    v23 = v22[1];
    v24 = v22;
    if ( v23 )
    {
      v25 = (__int64 *)(v23 + v21);
      v26 = v23 + 8LL * *(unsigned int *)(v23 - 4);
      if ( (unsigned __int64)v25 >= v26 )
        goto LABEL_38;
      do
      {
        while ( 1 )
        {
          v27 = *v25;
          if ( *v25 )
          {
            v28 = *v24;
            v2 = (*(_DWORD *)(v27 + 8))-- == 1;
            if ( v2 )
              break;
          }
          if ( (unsigned __int64)++v25 >= v26 )
            goto LABEL_37;
        }
        sub_15D7BC0(v28, v27);
        ++v25;
      }
      while ( (unsigned __int64)v25 < v26 );
LABEL_37:
      v23 = v24[1];
      if ( v23 )
LABEL_38:
        *(_DWORD *)(v23 - 4) = v13;
    }
    sub_DBF8C0(a1, "invalid function declaration reference, ')' expected");
    if ( ptr && ptr != v47 )
      sub_186B220(ptr);
  }
  return v46;
}

