__int64 __fastcall sub_DCFC50(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rax
  _QWORD *v5; // rdi
  int v6; // r13d
  __int64 v7; // rax
  _DWORD *v8; // rax
  __int64 v9; // rax
  int v10; // r12d
  int v11; // r12d
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rax
  int v15; // r13d
  int v16; // r13d
  __int64 *v17; // r12
  __int64 result; // rax
  __int64 *v19; // rbx
  __int64 *v20; // r13
  __int64 v21; // rax
  __int64 v22; // rsi
  unsigned int v23; // r12d
  size_t v24; // rsi
  unsigned int *v25; // rax
  __int64 v26; // rax
  __int64 v27; // r12
  __int64 v28; // r13
  __int64 v29; // rax
  unsigned int v30; // edx
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // r12
  __int64 *v34; // rax
  __int64 v35; // rax
  __int64 *v36; // rax
  __int64 *v37; // rax
  _QWORD *v38; // rax
  _QWORD *v39; // rbx
  char **v40; // rbx
  _QWORD *exception; // rbp
  __m128i v42[4]; // [rsp+0h] [rbp-48h] BYREF

  if ( !*(_BYTE *)(a2 + 4) )
  {
    v27 = *a1;
    sub_DFBCB0(*a1);
    v28 = *(_QWORD *)(v27 + 296);
    v29 = sub_DC2710(a1)[1];
    if ( v29 )
      v30 = *(_DWORD *)(v29 - 4);
    else
      v30 = 0;
    if ( v30 < *(_DWORD *)(a2 + 12) + 1 )
    {
      exception = __cxa_allocate_exception(0x30u);
      sub_305660(exception, "invalid let expression");
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
    }
    v31 = sub_DC2710(a1)[1];
    v32 = 0x7FFFFFFF8LL;
    if ( v31 )
      v32 = 8LL * (unsigned int)(*(_DWORD *)(v31 - 4) - 1);
    v33 = *(_QWORD *)(v31 + v32);
    if ( v33 )
      ++*(_DWORD *)(v33 + 8);
    v34 = sub_DC2710(a1);
    sub_39BF70(v34);
    v35 = a1[206];
    if ( v35 )
      *(_DWORD *)(v35 - 4) = *(_DWORD *)(a2 + 8);
    v36 = sub_DC2710(a1);
    sub_39BEE0(v36, *(_DWORD *)(a2 + 12));
    sub_DCF8B0((__int64)(a1 + 184));
    v37 = sub_DC2710(a1);
    v42[0].m128i_i64[0] = v33;
    if ( v33 )
      ++*(_DWORD *)(v33 + 8);
    sub_DBF5A0(v37 + 1, v42);
    sub_1875B10(a1 + 180);
    --*((_DWORD *)a1 + 406);
    return sub_DBF390(v33, v28);
  }
  v4 = a1[187];
  if ( v4 )
  {
    v5 = (_QWORD *)a1[188];
    v6 = *(_DWORD *)(v4 - 4);
    if ( v5 )
      goto LABEL_4;
  }
  else
  {
    v5 = (_QWORD *)a1[188];
    v6 = 0;
    if ( v5 )
    {
LABEL_4:
      v7 = *((unsigned int *)v5 - 1);
      if ( (_DWORD)v7 == *((_DWORD *)v5 - 2) )
      {
        v23 = (unsigned int)(3 * v7 + 1) >> 1;
        v24 = 4 * v23 + 8;
        if ( 4 * (int)v7 + 8 >= (unsigned int)v24 || (unsigned int)v7 >= v23 )
        {
          v40 = (char **)__cxa_allocate_exception(0x28u);
          sub_DBF430(v42[0].m128i_i64, "Overflow encountered when expanding vector");
          *v40 = (char *)off_1C63128;
          sub_2333C0(v40 + 1, v42);
          sub_233E40((__int64)v42);
          __cxa_throw(v40, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v25 = (unsigned int *)sub_186B300(v5 - 1, v24);
        v5 = v25 + 2;
        *v25 = v23;
        v26 = v25[1];
        a1[188] = v5;
        v8 = (_DWORD *)v5 + v26;
      }
      else
      {
        v8 = (_DWORD *)v5 + v7;
      }
      goto LABEL_6;
    }
  }
  v38 = (_QWORD *)sub_186B270(0x10u);
  v5 = v38 + 1;
  *v38 = 2;
  a1[188] = v38 + 1;
  v8 = v38 + 1;
LABEL_6:
  *v8 = v6;
  v9 = a1[206];
  ++*((_DWORD *)v5 - 1);
  *(_BYTE *)(a2 + 4) = 0;
  if ( v9 )
    v10 = *(_DWORD *)(v9 - 4);
  else
    v10 = 0;
  v11 = v10 - *(_DWORD *)(a2 + 8);
  v12 = sub_DC2710(a1)[1];
  if ( v12 )
    v13 = *(_DWORD *)(v12 - 4);
  else
    v13 = 0;
  if ( v11 != v13 - *(_DWORD *)(a2 + 12) )
  {
    v39 = __cxa_allocate_exception(0x30u);
    sub_305660(v39, "malformed let expression");
    goto LABEL_39;
  }
  v14 = sub_DC2710(a1)[1];
  if ( v14 )
    v15 = *(_DWORD *)(v14 - 4);
  else
    v15 = 0;
  v16 = v15 - *(_DWORD *)(a2 + 12);
  v17 = (__int64 *)(a1[206] + 8LL * *(unsigned int *)(a2 + 8));
  result = sub_DC2710(a1)[1];
  v19 = (__int64 *)(result + 8LL * *(unsigned int *)(a2 + 12));
  v20 = &v19[v16];
  if ( v19 != v20 )
  {
    while ( 1 )
    {
      v21 = *v19;
      if ( !*v19 )
        break;
      v22 = *v17;
      ++v19;
      v42[0].m128i_i64[0] = v21;
      ++v17;
      v42[0].m128i_i32[2] = *((_DWORD *)a1 + 378);
      result = sub_DCE310((__int64)(a1 + 184), v22, v42);
      if ( v20 == v19 )
        return result;
    }
    v39 = __cxa_allocate_exception(0x30u);
    sub_305660(v39, "invalid let expression");
LABEL_39:
    __cxa_throw(v39, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  return result;
}

