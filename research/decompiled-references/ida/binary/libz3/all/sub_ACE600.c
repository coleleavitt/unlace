__int64 __fastcall sub_ACE600(__int64 a1, void *a2)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // r13
  unsigned int v6; // eax
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rdi
  __int64 result; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rdx
  unsigned int v13; // r13d
  size_t v14; // rsi
  unsigned int *v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rbx
  char **exception; // rbp
  char **v19; // r12
  const char *v20; // rax
  __int64 v21[11]; // [rsp+10h] [rbp-58h] BYREF

  v4 = *(_QWORD **)(a1 + 112);
  if ( v4 )
  {
    v5 = &v4[*((unsigned int *)v4 - 1)];
    v6 = *((_DWORD *)v4 - 1);
    if ( v5 == v4 )
    {
LABEL_11:
      if ( *((_DWORD *)v4 - 2) == v6 )
      {
        v13 = (3 * v6 + 1) >> 1;
        v14 = 8 * v13 + 8;
        if ( 8 * v6 + 8 >= (unsigned int)v14 || v6 >= v13 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v21, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v21);
          sub_233E40((__int64)v21);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v15 = (unsigned int *)sub_186B300(v4 - 1, v14);
        v16 = v15[1];
        v4 = v15 + 2;
        *v15 = v13;
        *(_QWORD *)(a1 + 112) = v15 + 2;
        LODWORD(v15) = v16;
        v12 = &v4[v16];
        result = (unsigned int)((_DWORD)v15 + 1);
      }
      else
      {
        v11 = v6;
        result = v6 + 1;
        v12 = &v4[v11];
      }
      goto LABEL_13;
    }
    do
    {
      v7 = *(_QWORD *)(a1 + 88);
      v8 = *v4;
      v9 = *(_QWORD *)(v7 + 16);
      if ( v9 && (unsigned __int8)sub_8E6FA0(v9) )
      {
        v19 = (char **)__cxa_allocate_exception(0x28u);
        v20 = (const char *)sub_1829130(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 104LL));
        sub_24ABB0(v21, v20);
        *v19 = (char *)off_1C63670;
        sub_2333C0(v19 + 1, v21);
        sub_233E40((__int64)v21);
        __cxa_throw(v19, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
      }
      if ( (*(unsigned __int8 (__fastcall **)(void *, __int64))(*(_QWORD *)a2 + 24LL))(a2, v8) )
      {
        (**(void (__fastcall ***)(void *))a2)(a2);
        return sub_186B220(a2);
      }
      ++v4;
    }
    while ( v5 != v4 );
    v4 = *(_QWORD **)(a1 + 112);
    if ( v4 )
    {
      v6 = *((_DWORD *)v4 - 1);
      goto LABEL_11;
    }
  }
  v17 = (_QWORD *)sub_186B270(0x18u);
  *v17 = 2;
  result = 1;
  v4 = v17 + 1;
  *(_QWORD *)(a1 + 112) = v4;
  v12 = v4;
LABEL_13:
  *v12 = a2;
  *((_DWORD *)v4 - 1) = result;
  return result;
}

