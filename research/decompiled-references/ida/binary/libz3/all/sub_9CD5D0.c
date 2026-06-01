__int64 __fastcall sub_9CD5D0(__int64 *a1, __int64 a2)
{
  _QWORD *v4; // rdi
  unsigned int v5; // eax
  __int64 v6; // rdx
  int v7; // eax
  __int64 *v8; // rdx
  __int64 v9; // r13
  _QWORD *v10; // rax
  _QWORD *v11; // rdx
  _QWORD *v12; // r12
  unsigned int v13; // eax
  __int64 v14; // rcx
  __int64 result; // rax
  _QWORD *v16; // rcx
  unsigned int v17; // r14d
  size_t v18; // rsi
  unsigned int *v19; // rax
  __int64 v20; // rcx
  unsigned int v21; // r12d
  size_t v22; // rsi
  unsigned int *v23; // rax
  __int64 v24; // rdx
  _DWORD *v25; // r12
  unsigned int v26; // ebp
  __int64 v27; // rdi
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  char **exception; // rbp
  __int64 v31[9]; // [rsp+0h] [rbp-48h] BYREF

  v4 = (_QWORD *)a1[61];
  if ( v4 )
  {
    v5 = *((_DWORD *)v4 - 1);
    if ( v5 == *((_DWORD *)v4 - 2) )
    {
      v21 = (3 * v5 + 1) >> 1;
      v22 = 8 * v21 + 8;
      if ( 8 * v5 + 8 >= (unsigned int)v22 || v5 >= v21 )
        goto LABEL_31;
      v23 = (unsigned int *)sub_186B300(v4 - 1, v22);
      v24 = v23[1];
      v4 = v23 + 2;
      *v23 = v21;
      a1[61] = (__int64)(v23 + 2);
      LODWORD(v23) = v24;
      v8 = &v4[v24];
      v7 = (_DWORD)v23 + 1;
    }
    else
    {
      v6 = v5;
      v7 = v5 + 1;
      v8 = &v4[v6];
    }
  }
  else
  {
    v28 = (_QWORD *)sub_186B270(0x18u);
    v4 = v28 + 1;
    *v28 = 2;
    v7 = 1;
    a1[61] = (__int64)v4;
    v8 = v4;
  }
  *v8 = a2;
  v9 = a1[2];
  *((_DWORD *)v4 - 1) = v7;
  v10 = (_QWORD *)sub_180C100(v9 + 8400, 16);
  v11 = *(_QWORD **)(v9 + 9456);
  v12 = v10;
  *v10 = off_1C54DF0;
  v10[1] = a1 + 61;
  if ( !v11 )
  {
    v29 = (_QWORD *)sub_186B270(0x18u);
    v11 = v29 + 1;
    *v29 = 2;
    result = 1;
    *(_QWORD *)(v9 + 9456) = v11;
    v16 = v11;
    goto LABEL_7;
  }
  v13 = *((_DWORD *)v11 - 1);
  if ( v13 == *((_DWORD *)v11 - 2) )
  {
    v17 = (3 * v13 + 1) >> 1;
    v18 = 8 * v17 + 8;
    if ( 8 * v13 + 8 < (unsigned int)v18 && v13 < v17 )
    {
      v19 = (unsigned int *)sub_186B300(v11 - 1, v18);
      v20 = v19[1];
      v11 = v19 + 2;
      *(_QWORD *)(v9 + 9456) = v19 + 2;
      *v19 = v17;
      LODWORD(v19) = v20;
      v16 = &v11[v20];
      result = (unsigned int)((_DWORD)v19 + 1);
      goto LABEL_7;
    }
LABEL_31:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_98B3B0(v31, "Overflow encountered when expanding vector");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v31);
    sub_233E40((__int64)v31);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v14 = v13;
  result = v13 + 1;
  v16 = &v11[v14];
LABEL_7:
  *v16 = v12;
  *((_DWORD *)v11 - 1) = result;
  if ( !*(_WORD *)(a2 + 4) )
  {
    result = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( result )
    {
      if ( *(_DWORD *)result == 5 )
      {
        result = *(unsigned int *)(result + 4);
        if ( (_DWORD)result != 10 && (_DWORD)result != 11 )
        {
          if ( (_DWORD)result == 15 || (_DWORD)result == 16 )
          {
            sub_993400((__int64)(a1 + 43), 0);
            v25 = (_DWORD *)sub_15E1B70(a1[43]);
            result = sub_15E1B70(a1[43]);
            a2 = result;
LABEL_23:
            if ( v25 )
            {
              v26 = sub_966380((__int64)a1, v25, (_DWORD *)a2);
              sub_9936C0(a1[2], v26 >> 1);
              v27 = a1[2];
              v31[0] = 2;
              return (__int64)sub_993680(v27, v26, v31, 0);
            }
            return result;
          }
          if ( (_DWORD)result != 22 )
            return result;
        }
        result = sub_15E1B70(a1[43]);
        v25 = (_DWORD *)result;
        goto LABEL_23;
      }
    }
  }
  return result;
}

