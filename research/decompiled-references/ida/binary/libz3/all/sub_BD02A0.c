__int64 __fastcall sub_BD02A0(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  _QWORD *v7; // rdx
  unsigned int v8; // r13d
  __int64 v9; // r12
  unsigned int v10; // eax
  __int64 v11; // rsi
  int v12; // eax
  _QWORD *v13; // rsi
  __int64 result; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rdx
  unsigned int v17; // r13d
  __int64 v18; // r12
  unsigned int v19; // eax
  __int64 v20; // rsi
  _QWORD *v21; // rsi
  unsigned int v22; // r14d
  size_t v23; // rsi
  unsigned int *v24; // rax
  __int64 v25; // rcx
  unsigned int v26; // r15d
  size_t v27; // rsi
  unsigned int *v28; // rax
  __int64 v29; // rcx
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  char **v32; // r12
  __int64 v33; // rdx
  char **exception; // r12
  __int64 v35; // rdx
  __int64 v36[11]; // [rsp+0h] [rbp-58h] BYREF

  v4 = *a2;
  a1[1] = 0;
  v5 = a2[1];
  *a1 = v4;
  if ( v5 )
  {
    v7 = nullptr;
    v8 = 0;
    do
    {
      if ( v8 >= *(_DWORD *)(v5 - 4) )
        break;
      v9 = *(_QWORD *)(v5 + 8LL * v8);
      if ( v9 )
        ++*(_DWORD *)(v9 + 8);
      if ( v7 )
      {
        v10 = *((_DWORD *)v7 - 1);
        if ( v10 == *((_DWORD *)v7 - 2) )
        {
          v26 = (3 * v10 + 1) >> 1;
          v27 = 8 * v26 + 8;
          if ( 8 * v10 + 8 >= (unsigned int)v27 || v10 >= v26 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_154526(v36, "Overflow encountered when expanding vector", v35);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v36);
            sub_233E40((__int64)v36);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v28 = (unsigned int *)sub_186B300(v7 - 1, v27);
          v29 = v28[1];
          v7 = v28 + 2;
          *v28 = v26;
          a1[1] = v28 + 2;
          LODWORD(v28) = v29;
          v13 = &v7[v29];
          v5 = a2[1];
          v12 = (_DWORD)v28 + 1;
        }
        else
        {
          v11 = v10;
          v12 = v10 + 1;
          v13 = &v7[v11];
        }
      }
      else
      {
        v30 = (_QWORD *)sub_186B270(0x18u);
        v7 = v30 + 1;
        *v30 = 2;
        v5 = a2[1];
        v12 = 1;
        a1[1] = v7;
        v13 = v7;
      }
      *v13 = v9;
      ++v8;
      *((_DWORD *)v7 - 1) = v12;
    }
    while ( v5 );
  }
  result = *a3;
  a1[3] = 0;
  v15 = a3[1];
  a1[2] = result;
  if ( v15 )
  {
    v16 = nullptr;
    v17 = 0;
    do
    {
      if ( v17 >= *(_DWORD *)(v15 - 4) )
        break;
      v18 = *(_QWORD *)(v15 + 8LL * v17);
      if ( v18 )
        ++*(_DWORD *)(v18 + 8);
      if ( v16 )
      {
        v19 = *((_DWORD *)v16 - 1);
        if ( v19 == *((_DWORD *)v16 - 2) )
        {
          v22 = (3 * v19 + 1) >> 1;
          v23 = 8 * v22 + 8;
          if ( 8 * v19 + 8 >= (unsigned int)v23 || v19 >= v22 )
          {
            v32 = (char **)__cxa_allocate_exception(0x28u);
            sub_154526(v36, "Overflow encountered when expanding vector", v33);
            *v32 = (char *)off_1C63128;
            sub_2333C0(v32 + 1, v36);
            sub_233E40((__int64)v36);
            __cxa_throw(v32, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v24 = (unsigned int *)sub_186B300(v16 - 1, v23);
          v25 = v24[1];
          v16 = v24 + 2;
          *v24 = v22;
          a1[3] = v24 + 2;
          LODWORD(v24) = v25;
          v21 = &v16[v25];
          v15 = a3[1];
          result = (unsigned int)((_DWORD)v24 + 1);
        }
        else
        {
          v20 = v19;
          result = v19 + 1;
          v21 = &v16[v20];
        }
      }
      else
      {
        v31 = (_QWORD *)sub_186B270(0x18u);
        v16 = v31 + 1;
        *v31 = 2;
        v15 = a3[1];
        result = 1;
        a1[3] = v16;
        v21 = v16;
      }
      *v21 = v18;
      ++v17;
      *((_DWORD *)v16 - 1) = result;
    }
    while ( v15 );
  }
  return result;
}

