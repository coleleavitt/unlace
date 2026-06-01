__int64 __fastcall sub_E5ED50(__int64 a1, __int64 a2)
{
  char **exception; // rbx
  __int64 v3; // rdx
  void (__noreturn *v4)(); // rax
  unsigned int v6; // ebx
  __int64 result; // rax
  int v8; // r13d
  __int64 v9; // rsi
  __int64 *v10; // rsi
  void (__noreturn *v11)(); // rax
  _QWORD *v12; // rdx
  unsigned int v13; // eax
  unsigned int v14; // r8d
  size_t v15; // rsi
  unsigned int *v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // r15
  _QWORD *v20; // rax
  unsigned int v21; // [rsp+Ch] [rbp-5Ch]
  __int64 v22[11]; // [rsp+10h] [rbp-58h] BYREF

  v4 = *(void (__noreturn **)())(*(_QWORD *)a1 + 232LL);
  if ( v4 == sub_E5E550 )
  {
    sub_1872CE0("");
    sub_1873130(114, 33);
  }
  v6 = 0;
  result = ((__int64 (*)(void))v4)();
  v8 = result;
  if ( (_DWORD)result )
  {
    do
    {
      v11 = *(void (__noreturn **)())(*(_QWORD *)a1 + 240LL);
      if ( v11 == sub_E5E580 )
      {
        sub_1872CE0("");
        sub_1873130(114, 38);
      }
      v18 = ((__int64 (__fastcall *)(__int64, _QWORD))v11)(a1, v6);
      v19 = v18;
      if ( v18 )
      {
        v12 = *(_QWORD **)(a2 + 8);
        ++*(_DWORD *)(v18 + 8);
        if ( v12 )
        {
LABEL_10:
          v13 = *((_DWORD *)v12 - 1);
          if ( v13 == *((_DWORD *)v12 - 2) )
          {
            v14 = (3 * v13 + 1) >> 1;
            v15 = 8 * v14 + 8;
            if ( 8 * v13 + 8 >= (unsigned int)v15 || v13 >= v14 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_182962(v22, "Overflow encountered when expanding vector", v3);
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v22);
              sub_233E40((__int64)v22);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v21 = (3 * v13 + 1) >> 1;
            v16 = (unsigned int *)sub_186B300(v12 - 1, v15);
            v17 = v16[1];
            v12 = v16 + 2;
            *v16 = v21;
            LODWORD(v16) = v17;
            *(_QWORD *)(a2 + 8) = v12;
            v10 = &v12[v17];
            result = (unsigned int)((_DWORD)v16 + 1);
          }
          else
          {
            v9 = v13;
            result = v13 + 1;
            v10 = &v12[v9];
          }
          goto LABEL_6;
        }
      }
      else
      {
        v12 = *(_QWORD **)(a2 + 8);
        if ( v12 )
          goto LABEL_10;
      }
      v20 = (_QWORD *)sub_186B270(0x18u);
      v12 = v20 + 1;
      *v20 = 2;
      v10 = v12;
      result = 1;
      *(_QWORD *)(a2 + 8) = v12;
LABEL_6:
      ++v6;
      *v10 = v19;
      *((_DWORD *)v12 - 1) = result;
    }
    while ( v6 != v8 );
  }
  return result;
}

