__int64 __fastcall sub_B34CD0(__int64 a1)
{
  char **v1; // r13
  __int64 v2; // rdx
  char **exception; // r13
  __int64 v4; // rdx
  __int64 result; // rax
  char v7; // bp
  _DWORD *v8; // rax
  __int64 v9; // rax
  _QWORD *v10; // rdi
  int v11; // r13d
  __int64 v12; // rax
  _DWORD *v13; // rax
  __int64 v14; // rax
  bool v15; // zf
  __int64 v16; // rax
  _QWORD *v17; // rdi
  int v18; // r13d
  __int64 v19; // rax
  unsigned int v20; // r12d
  size_t v21; // rsi
  unsigned int *v22; // rax
  __int64 v23; // rax
  unsigned int v24; // r12d
  size_t v25; // rsi
  unsigned int *v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // [rsp+0h] [rbp-50h] BYREF
  __int64 v31[9]; // [rsp+8h] [rbp-48h] BYREF

  result = *(unsigned int *)(a1 + 408);
  if ( (_DWORD)result )
  {
    v7 = *(_BYTE *)(a1 + 464);
    do
    {
      *(_BYTE *)(a1 + 464) = 1;
      sub_966D90(a1);
      v16 = *(_QWORD *)(a1 + 384);
      if ( v16 )
      {
        v17 = *(_QWORD **)(a1 + 392);
        v18 = *(_DWORD *)(v16 - 4);
        if ( !v17 )
          goto LABEL_20;
      }
      else
      {
        v17 = *(_QWORD **)(a1 + 392);
        v18 = 0;
        if ( !v17 )
        {
LABEL_20:
          v28 = (_QWORD *)sub_186B270(0x10u);
          v17 = v28 + 1;
          *v28 = 2;
          *(_QWORD *)(a1 + 392) = v28 + 1;
          v8 = v28 + 1;
          goto LABEL_4;
        }
      }
      v19 = *((unsigned int *)v17 - 1);
      if ( (_DWORD)v19 == *((_DWORD *)v17 - 2) )
      {
        v20 = (unsigned int)(3 * v19 + 1) >> 1;
        v21 = 4 * v20 + 8;
        if ( 4 * (int)v19 + 8 >= (unsigned int)v21 || (unsigned int)v19 >= v20 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_147B96(v31, "Overflow encountered when expanding vector", v4);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v31);
          sub_233E40((__int64)v31);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v22 = (unsigned int *)sub_186B300(v17 - 1, v21);
        v17 = v22 + 2;
        *v22 = v20;
        v23 = v22[1];
        *(_QWORD *)(a1 + 392) = v17;
        v8 = (_DWORD *)v17 + v23;
      }
      else
      {
        v8 = (_DWORD *)v17 + v19;
      }
LABEL_4:
      *v8 = v18;
      v9 = *(_QWORD *)(a1 + 480);
      ++*((_DWORD *)v17 - 1);
      if ( v9 )
      {
        v10 = *(_QWORD **)(a1 + 488);
        v11 = *(_DWORD *)(v9 - 4);
        if ( v10 )
          goto LABEL_6;
      }
      else
      {
        v10 = *(_QWORD **)(a1 + 488);
        v11 = 0;
        if ( v10 )
        {
LABEL_6:
          v12 = *((unsigned int *)v10 - 1);
          if ( (_DWORD)v12 == *((_DWORD *)v10 - 2) )
          {
            v24 = (unsigned int)(3 * v12 + 1) >> 1;
            v25 = 4 * v24 + 8;
            if ( 4 * (int)v12 + 8 >= (unsigned int)v25 || (unsigned int)v12 >= v24 )
            {
              v1 = (char **)__cxa_allocate_exception(0x28u);
              sub_147B96(v31, "Overflow encountered when expanding vector", v2);
              *v1 = (char *)off_1C63128;
              sub_2333C0(v1 + 1, v31);
              sub_233E40((__int64)v31);
              __cxa_throw(v1, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v26 = (unsigned int *)sub_186B300(v10 - 1, v25);
            v10 = v26 + 2;
            *v26 = v24;
            v27 = v26[1];
            *(_QWORD *)(a1 + 488) = v10;
            v13 = (_DWORD *)v10 + v27;
          }
          else
          {
            v13 = (_DWORD *)v10 + v12;
          }
          goto LABEL_8;
        }
      }
      v29 = (_QWORD *)sub_186B270(0x10u);
      v10 = v29 + 1;
      *v29 = 2;
      *(_QWORD *)(a1 + 488) = v29 + 1;
      v13 = v29 + 1;
LABEL_8:
      *v13 = v11;
      v14 = *(_QWORD *)(a1 + 64);
      ++*((_DWORD *)v10 - 1);
      v15 = *(_QWORD *)(a1 + 88) == 0;
      v30 = v14;
      v31[0] = a1 + 56;
      if ( v15 )
        std::__throw_bad_function_call();
      result = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))(a1 + 96))(a1 + 72, &v30, v31);
      v15 = (*(_DWORD *)(a1 + 408))-- == 1;
      *(_BYTE *)(a1 + 464) = v7;
    }
    while ( !v15 );
  }
  return result;
}

