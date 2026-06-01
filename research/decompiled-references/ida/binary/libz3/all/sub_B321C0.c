__int64 __fastcall sub_B321C0(__int64 a1, unsigned int a2, __int64 a3)
{
  char **v3; // rbp
  char **exception; // rbp
  __int64 result; // rax
  __int64 v7; // rax
  unsigned int v8; // edx
  __int64 v9; // r13
  _QWORD *v10; // rdx
  unsigned int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  _QWORD *v14; // rcx
  _QWORD *v15; // rax
  _QWORD *v16; // rdx
  _QWORD *v17; // r14
  unsigned int v18; // eax
  __int64 v19; // rcx
  _QWORD *v20; // rcx
  bool v21; // zf
  __int64 *v22; // r12
  __int64 *v23; // r13
  __int64 v24; // rdx
  unsigned int v25; // r14d
  size_t v26; // rsi
  unsigned int *v27; // rax
  __int64 v28; // rcx
  unsigned int v29; // r12d
  size_t v30; // rsi
  unsigned int *v31; // rax
  __int64 v32; // rcx
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  __int64 v35[9]; // [rsp+10h] [rbp-48h] BYREF

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
    v10 = *(_QWORD **)(v9 + 16);
    if ( v10 )
    {
      v11 = *((_DWORD *)v10 - 1);
      if ( v11 == *((_DWORD *)v10 - 2) )
      {
        v25 = (3 * v11 + 1) >> 1;
        v26 = 8 * v25 + 8;
        if ( 8 * v11 + 8 >= (unsigned int)v26 || v11 >= v25 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v35, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v35);
          sub_233E40((__int64)v35);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v27 = (unsigned int *)sub_186B300(v10 - 1, v26);
        v28 = v27[1];
        v10 = v27 + 2;
        *(_QWORD *)(v9 + 16) = v27 + 2;
        *v27 = v25;
        LODWORD(v27) = v28;
        v14 = &v10[v28];
        v13 = (_DWORD)v27 + 1;
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
      v34 = (_QWORD *)sub_186B270(0x18u);
      v10 = v34 + 1;
      *v34 = 2;
      v13 = 1;
      *(_QWORD *)(v9 + 16) = v10;
      v14 = v10;
    }
    *v14 = a3;
    *((_DWORD *)v10 - 1) = v13;
    v15 = (_QWORD *)sub_180C100(a1 + 400, 16);
    v16 = *(_QWORD **)(a1 + 384);
    v17 = v15;
    *v15 = off_1C56E28;
    v15[1] = v9 + 16;
    if ( v16 )
    {
      v18 = *((_DWORD *)v16 - 1);
      if ( v18 == *((_DWORD *)v16 - 2) )
      {
        v29 = (3 * v18 + 1) >> 1;
        v30 = 8 * v29 + 8;
        if ( 8 * v18 + 8 >= (unsigned int)v30 || v18 >= v29 )
        {
          v3 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v35, "Overflow encountered when expanding vector");
          *v3 = (char *)off_1C63128;
          sub_2333C0(v3 + 1, v35);
          sub_233E40((__int64)v35);
          __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v31 = (unsigned int *)sub_186B300(v16 - 1, v30);
        v32 = v31[1];
        v16 = v31 + 2;
        *v31 = v29;
        *(_QWORD *)(a1 + 384) = v31 + 2;
        LODWORD(v31) = v32;
        v20 = &v16[v32];
        result = (unsigned int)((_DWORD)v31 + 1);
      }
      else
      {
        v19 = v18;
        result = v18 + 1;
        v20 = &v16[v19];
      }
    }
    else
    {
      v33 = (_QWORD *)sub_186B270(0x18u);
      v16 = v33 + 1;
      *v33 = 2;
      result = 1;
      *(_QWORD *)(a1 + 384) = v16;
      v20 = v16;
    }
    v21 = *(_BYTE *)(v9 + 24) == 0;
    *v20 = v17;
    *((_DWORD *)v16 - 1) = result;
    if ( !v21 )
    {
      result = *(_QWORD *)(a1 + 264);
      if ( !*(_BYTE *)(result + 16) )
      {
        v22 = *(__int64 **)(v9 + 8);
        if ( v22 )
        {
          v23 = &v22[*((unsigned int *)v22 - 1)];
          if ( v23 != v22 )
          {
            while ( 1 )
            {
              v24 = *v22;
              if ( !*(_BYTE *)(result + 17) || v24 == *(_QWORD *)(v24 + 24) )
              {
                result = sub_BE3B20(a1, a3, v24);
                if ( (_BYTE)result )
                  ++*(_DWORD *)(a1 + 280);
              }
              if ( v23 == ++v22 )
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

