__int64 __fastcall sub_4D7550(_QWORD *a1, _QWORD *a2)
{
  char **exception; // rbx
  _QWORD *v4; // rdx
  __int64 result; // rax
  __int64 v6; // rbp
  __int64 v7; // r14
  __int64 v8; // rsi
  __int64 *v9; // rsi
  __int64 (__fastcall *v10)(_QWORD *, unsigned int); // rax
  __int64 v11; // rax
  __int64 v12; // r13
  unsigned int v13; // eax
  unsigned int v14; // r8d
  size_t v15; // rsi
  unsigned int *v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rax
  _QWORD *v19; // rax
  unsigned int v20; // [rsp+4h] [rbp-74h]
  __int64 v21[11]; // [rsp+20h] [rbp-58h] BYREF

  v4 = (_QWORD *)*a2;
  if ( *a2 )
    *((_DWORD *)v4 - 1) = 0;
  result = *(_QWORD *)(a1[1] + 16LL);
  if ( result )
  {
    v6 = *(unsigned int *)(result - 4);
    if ( (_DWORD)v6 )
    {
      v7 = 0;
      while ( 1 )
      {
        v10 = *(__int64 (__fastcall **)(_QWORD *, unsigned int))(*a1 + 16LL);
        if ( v10 == sub_4C98C0 )
        {
          v11 = a1[2];
          if ( !v11 || !*(_DWORD *)(v11 - 4) )
          {
            (*(void (__fastcall **)(_QWORD *, _QWORD *))(*a1 + 24LL))(a1, a1 + 2);
            v11 = a1[2];
            v4 = (_QWORD *)*a2;
          }
          v12 = *(_QWORD *)(v11 + 8 * v7);
          if ( !v4 )
          {
LABEL_19:
            v19 = (_QWORD *)sub_186B270(0x18u);
            v4 = v19 + 1;
            *v19 = 2;
            result = 1;
            *a2 = v4;
            v9 = v4;
            goto LABEL_7;
          }
        }
        else
        {
          v18 = v10(a1, v7);
          v4 = (_QWORD *)*a2;
          v12 = v18;
          if ( !*a2 )
            goto LABEL_19;
        }
        v13 = *((_DWORD *)v4 - 1);
        if ( v13 == *((_DWORD *)v4 - 2) )
        {
          v14 = (3 * v13 + 1) >> 1;
          v15 = 8 * v14 + 8;
          if ( 8 * v13 + 8 >= (unsigned int)v15 || v13 >= v14 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v21, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v21);
            sub_233E40((__int64)v21);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v20 = (3 * v13 + 1) >> 1;
          ++v7;
          v16 = (unsigned int *)sub_186B300(v4 - 1, v15);
          v17 = v16[1];
          v4 = v16 + 2;
          *v16 = v20;
          *a2 = v16 + 2;
          result = (unsigned int)(v17 + 1);
          v4[v17] = v12;
          *((_DWORD *)v4 - 1) = result;
          if ( v7 == v6 )
            return result;
        }
        else
        {
          v8 = v13;
          result = v13 + 1;
          v9 = &v4[v8];
LABEL_7:
          ++v7;
          *v9 = v12;
          *((_DWORD *)v4 - 1) = result;
          if ( v7 == v6 )
            return result;
        }
      }
    }
  }
  return result;
}

