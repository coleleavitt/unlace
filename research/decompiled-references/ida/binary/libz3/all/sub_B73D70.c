__int64 __fastcall sub_B73D70(__int64 a1, __int64 a2)
{
  char **v2; // rbp
  char **exception; // rbp
  __int64 v5; // rbx
  char v6; // al
  __int64 result; // rax
  __int64 v8; // rbx
  _QWORD *v9; // r12
  _QWORD *v10; // rdx
  int v11; // r14d
  __int64 v12; // rax
  unsigned int v13; // r13d
  size_t v14; // rsi
  unsigned int *v15; // rax
  _DWORD *v16; // rdx
  _QWORD *v17; // rax
  _QWORD *v18; // rdx
  unsigned int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  _QWORD *v22; // rcx
  unsigned int v23; // r12d
  unsigned int v24; // ecx
  unsigned int *v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rdx
  __int64 v28[11]; // [rsp+10h] [rbp-58h] BYREF

  v5 = *(_QWORD *)(a1 + 16);
  if ( v5 )
  {
    v6 = *(_BYTE *)(v5 + 8);
    if ( (v6 & 1) == 0 )
    {
      v18 = *(_QWORD **)(a2 + 88);
      *(_BYTE *)(v5 + 8) = v6 | 1;
      if ( v18 )
      {
        v19 = *((_DWORD *)v18 - 1);
        if ( v19 == *((_DWORD *)v18 - 2) )
        {
          v23 = (3 * v19 + 1) >> 1;
          v24 = 8 * v23 + 8;
          if ( 8 * v19 + 8 >= v24 || v19 >= v23 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v28, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v28);
            sub_233E40((__int64)v28);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v25 = (unsigned int *)sub_186B300(v18 - 1, v24);
          v26 = v25[1];
          v18 = v25 + 2;
          *v25 = v23;
          *(_QWORD *)(a2 + 88) = v25 + 2;
          LODWORD(v25) = v26;
          v22 = &v18[v26];
          v21 = (_DWORD)v25 + 1;
        }
        else
        {
          v20 = v19;
          v21 = v19 + 1;
          v22 = &v18[v20];
        }
      }
      else
      {
        v27 = (_QWORD *)sub_186B270(0x18u);
        *v27 = 2;
        v21 = 1;
        v18 = v27 + 1;
        *(_QWORD *)(a2 + 88) = v18;
        v22 = v18;
      }
      *v22 = v5;
      *((_DWORD *)v18 - 1) = v21;
    }
  }
  result = *(unsigned int *)(a1 + 24);
  v8 = 0;
  if ( (_DWORD)result )
  {
    while ( 1 )
    {
      v9 = *(_QWORD **)(a2 + 176);
      v10 = (_QWORD *)*v9;
      v11 = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 4 * v8);
      if ( !*v9 )
        break;
      v12 = *((unsigned int *)v10 - 1);
      if ( (_DWORD)v12 == *((_DWORD *)v10 - 2) )
      {
        v13 = (unsigned int)(3 * v12 + 1) >> 1;
        v14 = 4 * v13 + 8;
        if ( 4 * (int)v12 + 8 >= (unsigned int)v14 || (unsigned int)v12 >= v13 )
        {
          v2 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v28, "Overflow encountered when expanding vector");
          *v2 = (char *)off_1C63128;
          sub_2333C0(v2 + 1, v28);
          sub_233E40((__int64)v28);
          __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        ++v8;
        v15 = (unsigned int *)sub_186B300(v10 - 1, v14);
        v16 = v15 + 2;
        *v9 = v15 + 2;
        *v15 = v13;
        result = (__int64)&v15[v15[1] + 2];
        *(_DWORD *)result = v11;
        ++*(v16 - 1);
        if ( (unsigned int)v8 >= *(_DWORD *)(a1 + 24) )
          return result;
      }
      else
      {
        result = (__int64)v10 + 4 * v12;
LABEL_6:
        *(_DWORD *)result = v11;
        ++v8;
        ++*((_DWORD *)v10 - 1);
        if ( (unsigned int)v8 >= *(_DWORD *)(a1 + 24) )
          return result;
      }
    }
    v17 = (_QWORD *)sub_186B270(0x10u);
    v10 = v17 + 1;
    *v17 = 2;
    *v9 = v17 + 1;
    result = (__int64)(v17 + 1);
    goto LABEL_6;
  }
  return result;
}

