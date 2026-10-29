__int64 __fastcall sub_66B0E0(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rdx
  unsigned int v5; // ebx
  __int64 result; // rax
  unsigned int v7; // ecx
  __int64 v8; // r14
  _DWORD *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rbp
  __int64 v12; // r15
  __int64 v13; // r13
  unsigned int v14; // eax
  unsigned int v15; // ecx
  size_t v16; // rsi
  unsigned int *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 *v20; // r14
  __int64 v21; // rbp
  __int64 v22; // rsi
  bool v23; // zf
  int v24; // eax
  __int64 v25; // rsi
  unsigned int v26; // r13d
  size_t v27; // rsi
  __int64 v28; // rsi
  char **exception; // rbp
  __int64 v30; // rdx
  unsigned int v31; // [rsp+Ch] [rbp-5Ch]
  __int64 v32[11]; // [rsp+10h] [rbp-58h] BYREF

  v4 = *(_DWORD **)(a1 + 176);
  if ( v4 )
  {
    v5 = *(v4 - 1);
    result = v5;
    if ( a2 )
    {
      ++*(_DWORD *)(a2 + 8);
      result = (unsigned int)*(v4 - 1);
    }
    if ( *(v4 - 2) == (_DWORD)result )
    {
      v26 = (unsigned int)(3 * result + 1) >> 1;
      v27 = 8 * v26 + 8;
      if ( 8 * (int)result + 8 >= (unsigned int)v27 || (unsigned int)result >= v26 )
        goto LABEL_38;
      result = sub_186B300(v4 - 2, v27);
      v28 = *(unsigned int *)(result + 4);
      v4 = (_DWORD *)(result + 8);
      *(_DWORD *)result = v26;
      *(_QWORD *)(a1 + 176) = result + 8;
      v7 = v28 + 1;
      *(_QWORD *)(result + 8 + 8 * v28) = a2;
      *(_DWORD *)(result + 4) = v28 + 1;
    }
    else
    {
      v7 = result + 1;
      *(_QWORD *)&v4[2 * result] = a2;
      *(v4 - 1) = result + 1;
    }
  }
  else
  {
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    v5 = 0;
    result = sub_186B270(0x18u);
    v7 = 1;
    v4 = (_DWORD *)(result + 8);
    *(_QWORD *)(result + 8) = a2;
    *(_QWORD *)(a1 + 176) = result + 8;
    *(_QWORD *)result = 0x100000002LL;
  }
  if ( v5 < v7 )
  {
    do
    {
      v8 = 2LL * v5;
      result = *(_QWORD *)&v4[v8];
      if ( *(_WORD *)(result + 4)
        || (v9 = *(_DWORD **)(*(_QWORD *)(result + 16) + 24LL)) == nullptr
        || *v9
        || v9[1] != 5 )
      {
        ++v5;
      }
      else
      {
        v10 = *(unsigned int *)(result + 24);
        if ( (_DWORD)v10 )
        {
          v11 = *(_QWORD *)&v4[2 * v5];
          v12 = result + 8 * v10;
          while ( 1 )
          {
            while ( 1 )
            {
              v13 = *(_QWORD *)(v11 + 32);
              if ( v13 )
                ++*(_DWORD *)(v13 + 8);
              v14 = *(v4 - 1);
              if ( v14 == *(v4 - 2) )
                break;
              v11 += 8;
              *(_QWORD *)&v4[2 * v14] = v13;
              *(v4 - 1) = v14 + 1;
              if ( v11 == v12 )
                goto LABEL_23;
            }
            v15 = (3 * v14 + 1) >> 1;
            v16 = 8 * v15 + 8;
            if ( 8 * v14 + 8 >= (unsigned int)v16 || v14 >= v15 )
              break;
            v31 = (3 * v14 + 1) >> 1;
            v11 += 8;
            v17 = (unsigned int *)sub_186B300(v4 - 2, v16);
            v4 = v17 + 2;
            *v17 = v31;
            v18 = v17[1];
            *(_QWORD *)(a1 + 176) = v17 + 2;
            *(_QWORD *)&v17[2 * v18 + 2] = v13;
            v17[1] = v18 + 1;
            if ( v11 == v12 )
              goto LABEL_23;
          }
LABEL_38:
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_107D5E(v32, "Overflow encountered when expanding vector", v30);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v32);
          sub_233E40((__int64)v32);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
LABEL_23:
        v19 = *(_QWORD *)(a1 + 168);
        v20 = (__int64 *)&v4[v8];
        v21 = *(_QWORD *)&v4[2 * (*(v4 - 1) - 1)];
        if ( v21 )
          ++*(_DWORD *)(v21 + 8);
        v22 = *v20;
        if ( *v20 )
        {
          v23 = (*(_DWORD *)(v22 + 8))-- == 1;
          if ( v23 )
          {
            sub_15D7BC0(v19, v22);
            v4 = *(_DWORD **)(a1 + 176);
            v19 = *(_QWORD *)(a1 + 168);
          }
        }
        v24 = *(v4 - 1);
        *v20 = v21;
        result = (unsigned int)(v24 - 1);
        v25 = *(_QWORD *)&v4[2 * (unsigned int)result];
        *(v4 - 1) = result;
        if ( v25 )
        {
          v23 = (*(_DWORD *)(v25 + 8))-- == 1;
          if ( v23 )
          {
            result = sub_15D7BC0(v19, v25);
            v4 = *(_DWORD **)(a1 + 176);
            if ( !v4 )
              return result;
          }
        }
      }
    }
    while ( v5 < *(v4 - 1) );
  }
  return result;
}

