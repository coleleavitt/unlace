__int64 __fastcall sub_7B5990(__int64 a1, unsigned int a2, __int64 a3)
{
  char **exception; // rbx
  __int64 v4; // rdx
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 result; // rax
  _QWORD *v11; // rdx
  __int64 v12; // rax
  _DWORD *v13; // rcx
  unsigned int v14; // r14d
  size_t v15; // rsi
  unsigned int *v16; // rax
  __int64 v17; // rax
  unsigned int *v18; // rax
  int v19; // edx
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rdi
  __int64 v27; // rsi
  _QWORD *v28; // rax
  unsigned int v29; // [rsp+Ch] [rbp-6Ch]
  unsigned int v30; // [rsp+1Ch] [rbp-5Ch] BYREF
  __int64 v31; // [rsp+20h] [rbp-58h] BYREF
  __int64 v32; // [rsp+28h] [rbp-50h]

  v8 = *(_QWORD *)(a1 + 16);
  if ( v8 )
    *(_DWORD *)(v8 - 4) = 0;
  if ( !a2 )
    return *(unsigned int *)(a1 + 8);
  v9 = 0;
  while ( 1 )
  {
    result = *(unsigned int *)(a3 + 4 * v9);
    if ( (_DWORD)result == (*(_DWORD *)(a1 + 8) ^ 1) )
      break;
    if ( (_DWORD)result != *(_DWORD *)(a1 + 8) )
    {
      v11 = *(_QWORD **)(a1 + 16);
      if ( v11 )
      {
        v12 = *((unsigned int *)v11 - 1);
        v13 = (_DWORD *)v11 + v12;
        if ( (_DWORD)v12 == *((_DWORD *)v11 - 2) )
        {
          v14 = (unsigned int)(3 * v12 + 1) >> 1;
          v15 = 4 * v14 + 8;
          if ( 4 * (int)v12 + 8 >= (unsigned int)v15 || (unsigned int)v12 >= v14 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_113C8C(&v31, "Overflow encountered when expanding vector", v4);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v31);
            sub_233E40((__int64)&v31);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v16 = (unsigned int *)sub_186B300(v11 - 1, v15);
          v11 = v16 + 2;
          *v16 = v14;
          v17 = v16[1];
          *(_QWORD *)(a1 + 16) = v11;
          v13 = (_DWORD *)v11 + v17;
        }
      }
      else
      {
        v28 = (_QWORD *)sub_186B270(0x10u);
        v11 = v28 + 1;
        *v28 = 2;
        *(_QWORD *)(a1 + 16) = v28 + 1;
        v13 = v28 + 1;
      }
      *v13 = *(_DWORD *)(a3 + 4 * v9);
      ++*((_DWORD *)v11 - 1);
    }
    if ( (unsigned int)++v9 >= a2 )
    {
      v18 = *(unsigned int **)(a1 + 16);
      if ( v18 )
      {
        v19 = *(v18 - 1);
        if ( v19 )
        {
          if ( v19 == 1 )
            return *v18;
          v20 = 0;
          v29 = 2 * sub_11CA540(*(_QWORD *)(*(_QWORD *)a1 + 24LL), 0, 1);
          v21 = *(_QWORD *)(a1 + 16);
          do
          {
            v22 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
            v31 = 0xFFFFFFFF00000001LL;
            v32 = 0;
            sub_11C4C70(v22, v29 ^ 1, *(unsigned int *)(v21 + v20), &v31);
            v21 = *(_QWORD *)(a1 + 16);
            *(_DWORD *)(v21 + v20) ^= 1u;
            v20 += 4;
          }
          while ( v20 != 4LL * a2 );
          v30 = v29;
          sub_7B4F60((_QWORD *)(a1 + 16), &v30);
          v25 = *(_QWORD *)(a1 + 16);
          v26 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
          v31 = 0xFFFFFFFF00000001LL;
          v32 = 0;
          if ( v25 )
            v27 = *(unsigned int *)(v25 - 4);
          else
            v27 = 0;
          sub_11C4C20(v26, v27, v25, &v31, v23, v24);
          return v29;
        }
      }
      return *(unsigned int *)(a1 + 8);
    }
  }
  return result;
}

