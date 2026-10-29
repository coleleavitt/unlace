__int64 __fastcall sub_7063E0(__int64 *a1)
{
  unsigned int v2; // edx
  unsigned int v3; // r12d
  unsigned int v4; // edi
  unsigned int v5; // r12d
  size_t v6; // rdi
  __int64 result; // rax
  _QWORD *v8; // r14
  _DWORD *v9; // rbp
  __int64 v10; // r13
  __int64 v11; // rdi
  __int64 v12; // rdx
  _QWORD *v13; // rax
  _QWORD *v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  _QWORD *v19; // r15
  __int64 v20; // rsi
  __int64 v21; // rdi
  bool v22; // zf
  __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rdi
  _QWORD *v27; // rax
  char **exception; // rbx
  __int64 v29[11]; // [rsp+0h] [rbp-58h] BYREF

  if ( *a1 )
  {
    v2 = *(_DWORD *)(*a1 - 8);
    v3 = 3 * v2 + 1;
    v4 = v3 & 0xFFFFFFFE;
    v5 = v3 >> 1;
    v6 = 16 * (v5 + v4) + 8;
    if ( 48 * v2 + 8 >= (unsigned int)v6 || v2 >= v5 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_6FFCA0(v29, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v29);
      sub_233E40((__int64)v29);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    result = sub_186B270(v6);
    v8 = (_QWORD *)*a1;
    v9 = (_DWORD *)result;
    v10 = result + 8;
    if ( *a1 )
    {
      v11 = *((unsigned int *)v8 - 1);
      v12 = result + 8;
      *(_DWORD *)(result + 4) = v11;
      v13 = v8;
      v14 = &v8[6 * v11];
      if ( v8 != v14 )
      {
        do
        {
          v15 = v13[1];
          v13 += 6;
          v12 += 48;
          *(_QWORD *)(v12 - 40) = v15;
          v16 = *(v13 - 6);
          *(v13 - 6) = 0;
          *(_QWORD *)(v12 - 48) = v16;
          *(_QWORD *)(v12 - 24) = *(v13 - 3);
          v17 = *(v13 - 4);
          *(v13 - 4) = 0;
          *(_QWORD *)(v12 - 32) = v17;
          *(_QWORD *)(v12 - 8) = *(v13 - 1);
          v18 = *(v13 - 2);
          *(v13 - 2) = 0;
          *(_QWORD *)(v12 - 16) = v18;
        }
        while ( v14 != v13 );
      }
      if ( (_DWORD)v11 )
      {
        v19 = &v8[6 * v11];
        do
        {
          while ( 1 )
          {
            v25 = v8[4];
            if ( v25 )
            {
              v26 = v8[5];
              v22 = (*(_DWORD *)(v25 + 8))-- == 1;
              if ( v22 )
                sub_15D7BC0(v26, v25);
            }
            v20 = v8[2];
            if ( v20 )
            {
              v21 = v8[3];
              v22 = (*(_DWORD *)(v20 + 8))-- == 1;
              if ( v22 )
                sub_15D7BC0(v21, v20);
            }
            v23 = *v8;
            if ( *v8 )
            {
              v24 = v8[1];
              v22 = (*(_DWORD *)(v23 + 8))-- == 1;
              if ( v22 )
                break;
            }
            v8 += 6;
            if ( v19 == v8 )
              goto LABEL_19;
          }
          sub_15D7BC0(v24, v23);
          v8 += 6;
        }
        while ( v19 != v8 );
LABEL_19:
        v8 = (_QWORD *)*a1;
      }
      result = sub_186B220(v8 - 1);
    }
    else
    {
      *(_DWORD *)(result + 4) = 0;
    }
    *a1 = v10;
    *v9 = v5;
  }
  else
  {
    v27 = (_QWORD *)sub_186B270(0x68u);
    *v27 = 2;
    result = (__int64)(v27 + 1);
    *a1 = result;
  }
  return result;
}

