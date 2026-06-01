__int64 __fastcall sub_B32840(__int64 a1, unsigned int a2, __int64 a3)
{
  char **v3; // rbp
  char **exception; // rbp
  __int64 result; // rax
  __int64 v7; // rax
  unsigned int v8; // edx
  __int64 v9; // r14
  _QWORD *v10; // rdx
  unsigned int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  _QWORD *v14; // rcx
  _QWORD *v15; // rax
  _QWORD *v16; // rdx
  _QWORD *v17; // r13
  unsigned int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  _QWORD *v21; // rcx
  _QWORD *v22; // rbx
  _QWORD *i; // r13
  __int64 *v24; // rbx
  __int64 *v25; // r13
  __int64 v26; // rsi
  unsigned int v27; // r13d
  size_t v28; // rsi
  unsigned int *v29; // rax
  __int64 v30; // rcx
  unsigned int v31; // ebx
  size_t v32; // rsi
  unsigned int *v33; // rax
  __int64 v34; // rcx
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  __int64 v37[9]; // [rsp+10h] [rbp-48h] BYREF

  result = *(_QWORD *)(a1 + 264);
  if ( !*(_BYTE *)(result + 17) || *(_QWORD *)(a3 + 24) == a3 )
  {
    do
    {
      v7 = a2;
      v8 = a2;
      a2 = *(_DWORD *)(*(_QWORD *)(a1 + 344) + 4LL * a2);
    }
    while ( v8 != a2 );
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 256) + 8 * v7);
    v10 = *(_QWORD **)(v9 + 8);
    if ( v10 )
    {
      v11 = *((_DWORD *)v10 - 1);
      if ( v11 == *((_DWORD *)v10 - 2) )
      {
        v27 = (3 * v11 + 1) >> 1;
        v28 = 8 * v27 + 8;
        if ( 8 * v11 + 8 >= (unsigned int)v28 || v11 >= v27 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v37, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v37);
          sub_233E40((__int64)v37);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v29 = (unsigned int *)sub_186B300(v10 - 1, v28);
        v30 = v29[1];
        v10 = v29 + 2;
        *(_QWORD *)(v9 + 8) = v29 + 2;
        *v29 = v27;
        LODWORD(v29) = v30;
        v14 = &v10[v30];
        v13 = (_DWORD)v29 + 1;
      }
      else
      {
        v12 = v11;
        v13 = v11 + 1;
        v14 = &v10[v12];
      }
    }
    else
    {
      v36 = (_QWORD *)sub_186B270(0x18u);
      v10 = v36 + 1;
      *v36 = 2;
      v13 = 1;
      *(_QWORD *)(v9 + 8) = v10;
      v14 = v10;
    }
    *v14 = a3;
    *((_DWORD *)v10 - 1) = v13;
    v15 = (_QWORD *)sub_180C100(a1 + 400, 16);
    v16 = *(_QWORD **)(a1 + 384);
    v17 = v15;
    *v15 = off_1C56E28;
    v15[1] = v9 + 8;
    if ( v16 )
    {
      v18 = *((_DWORD *)v16 - 1);
      if ( v18 == *((_DWORD *)v16 - 2) )
      {
        v31 = (3 * v18 + 1) >> 1;
        v32 = 8 * v31 + 8;
        if ( 8 * v18 + 8 >= (unsigned int)v32 || v18 >= v31 )
        {
          v3 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v37, "Overflow encountered when expanding vector");
          *v3 = (char *)off_1C63128;
          sub_2333C0(v3 + 1, v37);
          sub_233E40((__int64)v37);
          __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v33 = (unsigned int *)sub_186B300(v16 - 1, v32);
        v34 = v33[1];
        v16 = v33 + 2;
        *v33 = v31;
        *(_QWORD *)(a1 + 384) = v33 + 2;
        LODWORD(v33) = v34;
        v21 = &v16[v34];
        v20 = (_DWORD)v33 + 1;
      }
      else
      {
        v19 = v18;
        v20 = v18 + 1;
        v21 = &v16[v19];
      }
    }
    else
    {
      v35 = (_QWORD *)sub_186B270(0x18u);
      v16 = v35 + 1;
      *v35 = 2;
      v20 = 1;
      *(_QWORD *)(a1 + 384) = v16;
      v21 = v16;
    }
    v22 = *(_QWORD **)v9;
    *v21 = v17;
    *((_DWORD *)v16 - 1) = v20;
    if ( v22 )
    {
      for ( i = &v22[*((unsigned int *)v22 - 1)]; i != v22; ++v22 )
      {
        if ( (unsigned __int8)sub_BE3B20(a1, *v22, a3) )
          ++*(_DWORD *)(a1 + 276);
      }
    }
    result = *(_QWORD *)(a1 + 264);
    if ( !*(_BYTE *)(result + 16) )
    {
      if ( *(_BYTE *)(v9 + 24) )
      {
        v24 = *(__int64 **)(v9 + 16);
        if ( v24 )
        {
          v25 = &v24[*((unsigned int *)v24 - 1)];
          if ( v25 != v24 )
          {
            while ( 1 )
            {
              v26 = *v24;
              if ( !*(_BYTE *)(result + 17) || v26 == *(_QWORD *)(v26 + 24) )
              {
                result = sub_BE3B20(a1, v26, a3);
                if ( (_BYTE)result )
                  ++*(_DWORD *)(a1 + 280);
              }
              if ( v25 == ++v24 )
                break;
              result = *(_QWORD *)(a1 + 264);
            }
          }
        }
      }
    }
  }
  return result;
}

