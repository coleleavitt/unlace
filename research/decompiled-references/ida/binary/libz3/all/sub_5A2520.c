__int64 __fastcall sub_5A2520(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  char **exception; // rbx
  _QWORD *v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rbp
  __int64 v10; // r15
  __int64 v11; // rcx
  int v12; // eax
  unsigned int *v13; // rsi
  __int64 v14; // rax
  unsigned int v15; // eax
  unsigned int v16; // ecx
  size_t v17; // rsi
  unsigned int *v18; // rax
  __int64 v19; // rcx
  unsigned int v20; // eax
  __int64 v21; // rcx
  __int64 result; // rax
  _QWORD *v23; // rax
  __int64 v24; // [rsp+8h] [rbp-80h]
  unsigned int v25; // [rsp+1Ch] [rbp-6Ch]
  __int64 v26; // [rsp+28h] [rbp-60h] BYREF
  __int64 v27[11]; // [rsp+30h] [rbp-58h] BYREF

  v6 = (_QWORD *)*a3;
  v24 = *(_QWORD *)(a1[1] + 24LL);
  if ( v6 )
  {
    v7 = a1[6];
    *((_DWORD *)v6 - 1) = 0;
    if ( !v7 )
      goto LABEL_13;
    v8 = *(unsigned int *)(v7 - 4);
    if ( !(_DWORD)v8 )
      goto LABEL_13;
  }
  else
  {
    v7 = a1[6];
    if ( !v7 )
      goto LABEL_18;
    v8 = *(unsigned int *)(v7 - 4);
    if ( !(_DWORD)v8 )
      goto LABEL_18;
  }
  v9 = 4 * v8;
  v10 = 0;
  while ( 1 )
  {
    v14 = *(unsigned int *)(v7 + v10);
    v27[0] = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8 * v14);
    sub_4C4120(v24, a1[2] + 8 * v14, v27, (__int64)&v26);
    v6 = (_QWORD *)*a3;
    if ( *a3 )
    {
      v15 = *((_DWORD *)v6 - 1);
      if ( v15 == *((_DWORD *)v6 - 2) )
      {
        v16 = (3 * v15 + 1) >> 1;
        v17 = 8 * v16 + 8;
        if ( 8 * v15 + 8 >= (unsigned int)v17 || v15 >= v16 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v27, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v27);
          sub_233E40((__int64)v27);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v25 = (3 * v15 + 1) >> 1;
        v18 = (unsigned int *)sub_186B300(v6 - 1, v17);
        v6 = v18 + 2;
        *v18 = v25;
        v19 = v18[1];
        *a3 = v18 + 2;
        v13 = &v18[2 * v19 + 2];
        v12 = v19 + 1;
      }
      else
      {
        v11 = v15;
        v12 = v15 + 1;
        v13 = (unsigned int *)&v6[v11];
      }
    }
    else
    {
      v23 = (_QWORD *)sub_186B270(0x18u);
      v6 = v23 + 1;
      *v23 = 2;
      v12 = 1;
      *a3 = v6;
      v13 = (unsigned int *)v6;
    }
    v10 += 4;
    *(_QWORD *)v13 = v26;
    *((_DWORD *)v6 - 1) = v12;
    if ( v10 == v9 )
      break;
    v7 = a1[6];
  }
LABEL_13:
  v20 = *((_DWORD *)v6 - 1);
  if ( v20 == *((_DWORD *)v6 - 2) )
  {
LABEL_18:
    sub_5A7FF0(a3);
    v6 = (_QWORD *)*a3;
    v20 = *(_DWORD *)(*a3 - 4LL);
  }
  v21 = v20;
  result = v20 + 1;
  v6[v21] = 0;
  *((_DWORD *)v6 - 1) = result;
  return result;
}

