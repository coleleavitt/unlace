__int64 __fastcall sub_6E45A0(__int64 a1, __int64 a2, __int64 *a3, int a4, int a5, int a6)
{
  __int64 *v7; // r12
  __int64 v8; // rax
  __int64 v10; // rbx
  unsigned int v11; // r15d
  __int64 v12; // rax
  __int64 v13; // r14
  unsigned int v14; // eax
  __int64 v15; // rdx
  int v16; // eax
  _QWORD *v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rbp
  __int64 result; // rax
  unsigned int v21; // edx
  size_t v22; // rsi
  unsigned int *v23; // rax
  _QWORD *v24; // rax
  char **exception; // r12
  unsigned int v26; // [rsp+Ch] [rbp-7Ch]
  __int64 v27[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v28[11]; // [rsp+30h] [rbp-58h] BYREF

  v7 = *(__int64 **)(a1 + 8);
  v27[0] = *v7;
  v8 = *(_QWORD *)(a2 + 8);
  if ( v8 )
  {
    v10 = 0;
    v11 = 0;
    while ( v11 < *(_DWORD *)(v8 - 4) )
    {
      v12 = sub_6E15B0((_DWORD)v7, *(_QWORD *)(v8 + 8LL * v11), v11, a4, a5, a6);
      v13 = v12;
      if ( v12 )
        ++*(_DWORD *)(v12 + 8);
      if ( v10 )
      {
        v14 = *(_DWORD *)(v10 - 4);
        if ( v14 == *(_DWORD *)(v10 - 8) )
        {
          v21 = (3 * v14 + 1) >> 1;
          v22 = 8 * v21 + 8;
          if ( 8 * v14 + 8 >= (unsigned int)v22 || v14 >= v21 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v28, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v28);
            sub_233E40((__int64)v28);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v26 = (3 * v14 + 1) >> 1;
          v23 = (unsigned int *)sub_186B300((void *)(v10 - 8), v22);
          v10 = (__int64)(v23 + 2);
          *v23 = v26;
          LODWORD(v23) = v23[1];
          v17 = (_QWORD *)(v10 + 8LL * (unsigned int)v23);
          v16 = (_DWORD)v23 + 1;
        }
        else
        {
          v15 = v14;
          v16 = v14 + 1;
          v17 = (_QWORD *)(v10 + 8 * v15);
        }
      }
      else
      {
        v24 = (_QWORD *)sub_186B270(0x18u);
        v10 = (__int64)(v24 + 1);
        *v24 = 2;
        v16 = 1;
        v17 = (_QWORD *)v10;
      }
      *v17 = v13;
      ++v11;
      *(_DWORD *)(v10 - 4) = v16;
      v8 = *(_QWORD *)(a2 + 8);
      if ( !v8 )
        goto LABEL_10;
    }
    if ( v10 )
    {
LABEL_10:
      v18 = *(unsigned int *)(v10 - 4);
      goto LABEL_11;
    }
  }
  v10 = 0;
  v18 = 0;
LABEL_11:
  v19 = sub_6E3580(v7, v18, v10);
  v27[1] = v10;
  sub_2B4F40(v27);
  if ( v19 )
    ++*(_DWORD *)(v19 + 8);
  result = sub_6DE2A0(*a3, a3[1]);
  *a3 = v19;
  return result;
}

