__int64 __fastcall sub_8F6650(_QWORD *a1, int *a2, __int64 *a3, _QWORD *a4)
{
  char **exception; // rbp
  char **v5; // rbp
  unsigned int v9; // eax
  char *v10; // r13
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 result; // rax
  unsigned int v15; // r14d
  unsigned int v16; // r13d
  char v17; // al
  __int64 v18; // rbx
  _QWORD *v19; // rdx
  __int64 v20; // rax
  unsigned int *v21; // rax
  __int64 v22; // rbx
  unsigned int v23; // ebx
  unsigned int v24; // ecx
  unsigned int *v25; // rax
  _QWORD *v26; // rax
  __int64 v27[9]; // [rsp+0h] [rbp-48h] BYREF

  v9 = sub_15D2CB0(a1[13], *(_QWORD *)a2);
  if ( (_BYTE)v9 )
  {
    v15 = v9;
    v16 = sub_B645B0(a1, *(_QWORD *)a2);
    v17 = *(_BYTE *)(a1[1106] + v16);
    if ( v17 == -1 )
    {
      v22 = *(_QWORD *)(a1[13] + 864LL);
      if ( v22 )
        ++*(_DWORD *)(v22 + 8);
      v16 ^= 1u;
      sub_8E4E90(*a3, a3[1]);
      v19 = (_QWORD *)*a4;
      *a3 = v22;
      if ( v19 )
      {
        v20 = *((unsigned int *)v19 - 1);
        if ( (_DWORD)v20 != *((_DWORD *)v19 - 2) )
          goto LABEL_17;
        v23 = (unsigned int)(3 * v20 + 1) >> 1;
        v24 = 4 * v23 + 8;
        if ( 4 * (int)v20 + 8 >= v24 || (unsigned int)v20 >= v23 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_8E4EB0(v27, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v27);
          sub_233E40((__int64)v27);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        goto LABEL_25;
      }
    }
    else
    {
      if ( v17 != 1 )
        return 0;
      v18 = *(_QWORD *)(a1[13] + 856LL);
      if ( v18 )
        ++*(_DWORD *)(v18 + 8);
      sub_8E4E90(*a3, a3[1]);
      v19 = (_QWORD *)*a4;
      *a3 = v18;
      if ( v19 )
      {
        v20 = *((unsigned int *)v19 - 1);
        if ( (_DWORD)v20 != *((_DWORD *)v19 - 2) )
        {
LABEL_17:
          v21 = (unsigned int *)v19 + v20;
LABEL_18:
          *v21 = v16;
          ++*((_DWORD *)v19 - 1);
          return v15;
        }
        v23 = (unsigned int)(3 * v20 + 1) >> 1;
        v24 = 4 * v23 + 8;
        if ( 4 * (int)v20 + 8 >= v24 || (unsigned int)v20 >= v23 )
        {
          v5 = (char **)__cxa_allocate_exception(0x28u);
          sub_8E4EB0(v27, "Overflow encountered when expanding vector");
          *v5 = (char *)off_1C63128;
          sub_2333C0(v5 + 1, v27);
          sub_233E40((__int64)v27);
          __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
LABEL_25:
        v25 = (unsigned int *)sub_186B300(v19 - 1, v24);
        v19 = v25 + 2;
        *a4 = v25 + 2;
        *v25 = v23;
        v21 = &v25[v25[1] + 2];
        goto LABEL_18;
      }
    }
    v26 = (_QWORD *)sub_186B270(0x10u);
    *v26 = 2;
    v19 = v26 + 1;
    *a4 = v26 + 1;
    v21 = (unsigned int *)(v26 + 1);
    goto LABEL_18;
  }
  v10 = (char *)(a2 + 16);
  if ( a2[16] >> 8 == -1 )
    return 0;
  while ( 1 )
  {
    v11 = *v10;
    if ( *v10 != -1 )
    {
      v12 = a1[1084];
      if ( v12 )
      {
        if ( v11 < *(_DWORD *)(v12 - 4) )
        {
          v13 = *(_QWORD *)(v12 + 8LL * v11);
          if ( v13 )
          {
            result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *, _QWORD *))(*(_QWORD *)v13 + 384LL))(
                       v13,
                       (unsigned int)(*(int *)v10 >> 8),
                       a3,
                       a4);
            if ( (_BYTE)result )
              break;
          }
        }
      }
    }
    v10 = *((char **)v10 + 1);
    if ( !v10 )
      return 0;
  }
  return result;
}

