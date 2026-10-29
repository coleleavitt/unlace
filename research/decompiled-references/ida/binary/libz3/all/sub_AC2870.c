__int64 __fastcall sub_AC2870(_QWORD *a1, unsigned int a2)
{
  char **exception; // rbx
  __int64 v3; // rdx
  _QWORD *v5; // rbp
  __int64 result; // rax
  _QWORD *v7; // rbx
  int *v8; // r14
  int v9; // r8d
  int v10; // r13d
  __int64 v11; // rax
  _DWORD *v12; // rdx
  unsigned int v13; // r15d
  size_t v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdi
  _DWORD *v17; // rbp
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rbp
  __int64 v24; // rbx
  unsigned int *v25; // rax
  int v26; // [rsp+8h] [rbp-60h]
  int v27; // [rsp+8h] [rbp-60h]
  __int64 v28[11]; // [rsp+10h] [rbp-58h] BYREF

  v5 = (_QWORD *)a1[67];
  if ( v5 )
  {
    if ( a2 >= *((_DWORD *)v5 - 1) )
      v5 = nullptr;
    else
      v5 = (_QWORD *)v5[a2];
  }
  result = (*(__int64 (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
  if ( (_BYTE)result )
  {
    v7 = (_QWORD *)a1[144];
    if ( v7 )
    {
      v8 = (int *)v5[1];
      for ( *((_DWORD *)v7 - 1) = 0; v8; ++*((_DWORD *)v7 - 1) )
      {
        v9 = *v8;
        v10 = v8[1];
        v11 = *((unsigned int *)v7 - 1);
        v12 = &v7[v11];
        if ( (_DWORD)v11 == *((_DWORD *)v7 - 2) )
        {
          v13 = (unsigned int)(3 * v11 + 1) >> 1;
          v14 = 8 * v13 + 8;
          if ( 8 * (int)v11 + 8 >= (unsigned int)v14 || (unsigned int)v11 >= v13 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_139F3A(v28, "Overflow encountered when expanding vector", v3);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v28);
            sub_233E40((__int64)v28);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v26 = *v8;
          v15 = sub_186B270(v14);
          v16 = a1[144];
          v9 = v26;
          v17 = (_DWORD *)v15;
          v7 = (_QWORD *)(v15 + 8);
          if ( v16 )
          {
            v18 = *(unsigned int *)(v16 - 4);
            *(_DWORD *)(v15 + 4) = v18;
            v19 = 0;
            v20 = 8 * v18;
            if ( v20 )
            {
              do
              {
                *(_QWORD *)&v17[v19 / 4 + 2] = *(_QWORD *)(v16 + v19);
                v19 += 8LL;
              }
              while ( v20 != v19 );
            }
            sub_186B220((void *)(v16 - 8));
            v9 = v26;
            v12 = &v7[v17[1]];
          }
          else
          {
            *(_DWORD *)(v15 + 4) = 0;
            v12 = (_DWORD *)(v15 + 8);
          }
          a1[144] = v7;
          *v17 = v13;
        }
LABEL_8:
        v8 = *((int **)v8 + 1);
        *v12 = v9;
        v12[1] = v10;
      }
    }
    else
    {
      v8 = (int *)v5[1];
      if ( v8 )
      {
        v10 = v8[1];
        v27 = *v8;
        v21 = (_QWORD *)sub_186B270(0x18u);
        v9 = v27;
        v7 = v21 + 1;
        *v21 = 2;
        a1[144] = v21 + 1;
        v12 = v21 + 1;
        goto LABEL_8;
      }
    }
    sub_AC25F0(a1);
    result = a1[2];
    if ( *(_BYTE *)(*(_QWORD *)(result + 112) + 437LL) )
    {
      if ( *(_QWORD *)(result + 8984) == qword_1C7ECE8 && !*(_BYTE *)(result + 2416) )
      {
        result = a1[108];
        if ( result )
        {
          if ( a2 < *(_DWORD *)(result - 4) )
          {
            result = *(_QWORD *)(result + 8LL * a2);
            if ( result )
            {
              v22 = *(unsigned int *)(result - 4);
              if ( !(_DWORD)v22 )
                goto LABEL_32;
              v23 = 8 * v22;
              v24 = 0;
              do
              {
                v25 = (unsigned int *)(v24 + result);
                v24 += 8;
                (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a1 + 392LL))(a1, *v25, v25[1]);
                result = *(_QWORD *)(a1[108] + 8LL * a2);
              }
              while ( v24 != v23 );
              if ( result )
LABEL_32:
                *(_DWORD *)(result - 4) = 0;
            }
          }
        }
      }
    }
  }
  return result;
}

