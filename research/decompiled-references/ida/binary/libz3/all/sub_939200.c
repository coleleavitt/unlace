_DWORD *__fastcall sub_939200(__int64 a1, unsigned int a2, unsigned int a3, int *a4, unsigned int a5)
{
  __int64 v5; // rax
  __int64 v11; // rcx
  int v12; // r14d
  _DWORD *v13; // rdx
  _DWORD *result; // rax
  _QWORD *v15; // rdx
  __int64 v16; // rax
  unsigned int *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rbp
  __int64 v21; // rdx
  int v22; // r12d
  unsigned int v23; // r15d
  size_t v24; // rsi
  unsigned int *v25; // rax
  __int64 v26; // rax
  _QWORD *v27; // rax
  char **exception; // rbp
  unsigned int v29[3]; // [rsp+Ch] [rbp-7Ch] BYREF
  __int64 v30; // [rsp+18h] [rbp-70h] BYREF
  __int64 v31[3]; // [rsp+20h] [rbp-68h] BYREF
  int v32; // [rsp+38h] [rbp-50h]
  __int64 v33[9]; // [rsp+40h] [rbp-48h] BYREF

  v5 = a3;
  v11 = *(_QWORD *)(a1 + 192);
  v12 = *a4;
  v29[0] = a5;
  v13 = (_DWORD *)(*(_QWORD *)(v11 + 8LL * a3) + 16LL * a2);
  if ( *v13 != -1 && -v13[1] > v12 )
  {
    v18 = *(_QWORD *)(a1 + 256);
    if ( v18 )
      *(_DWORD *)(v18 - 4) = 0;
    sub_928A60((_QWORD *)a1, a3, a2, (_QWORD *)(a1 + 256));
    if ( a5 == -2 )
    {
      v19 = *(_QWORD *)(a1 + 256);
      v20 = *(_QWORD *)(a1 + 16);
      if ( v19 )
      {
LABEL_14:
        v21 = *(unsigned int *)(v19 - 4);
LABEL_15:
        v22 = *(_DWORD *)(a1 + 8);
        sub_B727F0(v31, v20, v21);
        v32 = v22;
        v33[0] = 0;
        v31[0] = (__int64)&off_1C578E0;
        sub_B72D20(v31, v20);
        v30 = sub_9382C0(v20, (__int64)v31) | 3;
        sub_8E8670(v20, &v30, -2);
        v31[0] = (__int64)qword_1C6F870;
        return (_DWORD *)sub_4EB210(v33);
      }
    }
    else
    {
      sub_91D6F0((_QWORD *)(a1 + 256), v29);
      v19 = *(_QWORD *)(a1 + 256);
      v20 = *(_QWORD *)(a1 + 16);
      if ( v19 )
        goto LABEL_14;
    }
    v21 = 0;
    goto LABEL_15;
  }
  result = (_DWORD *)(*(_QWORD *)(v11 + 8LL * a2) + 16 * v5);
  if ( *result == -1 || result[1] > v12 )
  {
    v15 = *(_QWORD **)(a1 + 184);
    if ( v15 )
    {
      v16 = *((unsigned int *)v15 - 1);
      if ( (_DWORD)v16 == *((_DWORD *)v15 - 2) )
      {
        v23 = (unsigned int)(3 * v16 + 1) >> 1;
        v24 = 16 * v23 + 8;
        if ( 16 * (int)v16 + 8 >= (unsigned int)v24 || (unsigned int)v16 >= v23 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_91CD50(v31, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v31);
          sub_233E40((__int64)v31);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v25 = (unsigned int *)sub_186B300(v15 - 1, v24);
        v15 = v25 + 2;
        *v25 = v23;
        v26 = v25[1];
        *(_QWORD *)(a1 + 184) = v15;
        v17 = (unsigned int *)&v15[2 * v26];
      }
      else
      {
        v17 = (unsigned int *)&v15[2 * v16];
      }
    }
    else
    {
      v27 = (_QWORD *)sub_186B270(0x28u);
      v15 = v27 + 1;
      *v27 = 2;
      *(_QWORD *)(a1 + 184) = v27 + 1;
      v17 = (unsigned int *)(v27 + 1);
    }
    *v17 = a2;
    v17[1] = a3;
    v17[2] = v12;
    v17[3] = a5;
    ++*((_DWORD *)v15 - 1);
    return (_DWORD *)sub_934E40((_QWORD *)a1);
  }
  return result;
}

