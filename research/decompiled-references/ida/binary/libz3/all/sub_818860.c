__int64 __fastcall sub_818860(_QWORD *a1, unsigned int a2)
{
  char **exception; // rbx
  unsigned int v3; // eax
  __int64 v5; // rdx
  unsigned int v6; // ecx
  __int64 result; // rax
  _BYTE *v8; // r12
  __int64 v9; // r14
  _QWORD *v10; // rax
  _QWORD *v11; // rdx
  _QWORD *v12; // r13
  unsigned int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  _QWORD *v16; // rcx
  unsigned int v17; // r15d
  size_t v18; // rsi
  unsigned int *v19; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rax
  __int64 v22[11]; // [rsp+10h] [rbp-58h] BYREF

  v3 = a2;
  do
  {
    v5 = v3;
    v6 = v3;
    v3 = *(_DWORD *)(a1[43] + 4LL * v3);
  }
  while ( v6 != v3 );
  result = a1[23];
  v8 = *(_BYTE **)(result + 8 * v5);
  if ( !*v8 )
  {
    v9 = a1[10];
    v10 = (_QWORD *)sub_180C100(v9 + 2144, 16);
    v11 = *(_QWORD **)(v9 + 2128);
    v12 = v10;
    *v10 = off_1C54E98;
    v10[1] = v8;
    if ( v11 )
    {
      v13 = *((_DWORD *)v11 - 1);
      if ( v13 == *((_DWORD *)v11 - 2) )
      {
        v17 = (3 * v13 + 1) >> 1;
        v18 = 8 * v17 + 8;
        if ( 8 * v13 + 8 >= (unsigned int)v18 || v13 >= v17 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v22, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v22);
          sub_233E40((__int64)v22);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v19 = (unsigned int *)sub_186B300(v11 - 1, v18);
        v20 = v19[1];
        v11 = v19 + 2;
        *(_QWORD *)(v9 + 2128) = v19 + 2;
        *v19 = v17;
        LODWORD(v19) = v20;
        v16 = &v11[v20];
        v15 = (_DWORD)v19 + 1;
      }
      else
      {
        v14 = v13;
        v15 = v13 + 1;
        v16 = &v11[v14];
      }
    }
    else
    {
      v21 = (_QWORD *)sub_186B270(0x18u);
      v11 = v21 + 1;
      *v21 = 2;
      v15 = 1;
      *(_QWORD *)(v9 + 2128) = v11;
      v16 = v11;
    }
    *v16 = v12;
    *((_DWORD *)v11 - 1) = v15;
    *v8 = 1;
    if ( !*(_BYTE *)(sub_7E4EB0((__int64)a1) + 412) )
    {
      if ( *v8 )
        sub_817F60((__int64)a1, a2);
    }
    return sub_818A40(a1, v8);
  }
  return result;
}

