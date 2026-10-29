__int64 __fastcall sub_E01160(__int64 a1, unsigned int a2)
{
  char **exception; // rbx
  __int64 v4; // rdx
  __int64 result; // rax
  __int64 *v6; // rbx
  __int64 v7; // rcx
  __int64 *v8; // r13
  __int64 v9; // r15
  __int64 v10; // rbp
  _QWORD *v12; // rdx
  unsigned int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  _QWORD *v16; // rcx
  unsigned int v17; // ecx
  size_t v18; // rsi
  unsigned int *v19; // rax
  _QWORD *v20; // rax
  unsigned int v21; // [rsp+Ch] [rbp-5Ch]
  __int64 v22[11]; // [rsp+10h] [rbp-58h] BYREF

  v4 = 8LL * a2;
  result = *(_QWORD *)(a1 + 752);
  v6 = (__int64 *)(result + v4);
  if ( result )
  {
    v7 = 8LL * *(unsigned int *)(result - 4);
    v8 = (__int64 *)(result + v7);
    if ( v4 == v7 )
    {
LABEL_15:
      *(_DWORD *)(result - 4) = a2;
      return result;
    }
  }
  else
  {
    v8 = nullptr;
    if ( !v4 )
      return result;
  }
  do
  {
    v9 = *(_QWORD *)(a1 + 312);
    if ( !v9 )
    {
      sub_DFBCB0(a1);
      v9 = *(_QWORD *)(a1 + 312);
    }
    v10 = *v6;
    if ( *v6 )
    {
      if ( (*(_DWORD *)(v10 + 16))-- == 1 )
      {
        v12 = *(_QWORD **)(v9 + 80);
        if ( v12 )
        {
          v13 = *((_DWORD *)v12 - 1);
          if ( v13 == *((_DWORD *)v12 - 2) )
          {
            v17 = (3 * v13 + 1) >> 1;
            v18 = 8 * v17 + 8;
            if ( 8 * v13 + 8 >= (unsigned int)v18 || v13 >= v17 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_DF63A0(v22, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v22);
              sub_233E40((__int64)v22);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v21 = (3 * v13 + 1) >> 1;
            v19 = (unsigned int *)sub_186B300(v12 - 1, v18);
            v12 = v19 + 2;
            *(_QWORD *)(v9 + 80) = v19 + 2;
            *v19 = v21;
            LODWORD(v19) = v19[1];
            v16 = &v12[(unsigned int)v19];
            v15 = (_DWORD)v19 + 1;
          }
          else
          {
            v14 = v13;
            v15 = v13 + 1;
            v16 = &v12[v14];
          }
        }
        else
        {
          v20 = (_QWORD *)sub_186B270(0x18u);
          v12 = v20 + 1;
          *v20 = 2;
          v15 = 1;
          *(_QWORD *)(v9 + 80) = v12;
          v16 = v12;
        }
        *v16 = v10;
        *((_DWORD *)v12 - 1) = v15;
      }
      sub_DE3700(v9);
    }
    ++v6;
  }
  while ( v6 != v8 );
  result = *(_QWORD *)(a1 + 752);
  if ( result )
    goto LABEL_15;
  return result;
}

