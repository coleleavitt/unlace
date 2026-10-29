__int64 __fastcall sub_B40830(_QWORD *a1, unsigned int a2)
{
  char **exception; // rbx
  __int64 v5; // r10
  int v6; // edx
  __int64 result; // rax
  _DWORD *v8; // r9
  unsigned int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rdi
  unsigned int *v12; // rdx
  unsigned int *v13; // rsi
  __int64 v14; // r12
  unsigned int v15; // ebp
  __int64 *v16; // rdx
  __int64 v17; // r11
  double v18; // xmm0_8
  unsigned int *v19; // r8
  __int64 v20; // rdx
  unsigned int v21; // ebp
  size_t v22; // rsi
  unsigned int *v23; // rax
  __int64 v24; // rax
  __int64 v25; // r10
  __int64 v26[9]; // [rsp+10h] [rbp-48h] BYREF

  v5 = a1[5];
  if ( v5 )
    v6 = *(_DWORD *)(v5 - 4);
  else
    v6 = 0;
  result = v5 + 4LL * a2;
  if ( (int)a2 >= v6 || !*(_DWORD *)result )
  {
    v8 = (_DWORD *)a1[4];
    if ( v8 )
    {
      v9 = *(v8 - 1);
      *(_DWORD *)result = v9;
      v10 = (unsigned int)*(v8 - 1);
      if ( (_DWORD)v10 == *(v8 - 2) )
      {
        v21 = (unsigned int)(3 * v10 + 1) >> 1;
        v22 = 4 * v21 + 8;
        if ( 4 * (int)v10 + 8 >= (unsigned int)v22 || (unsigned int)v10 >= v21 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v26, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v26);
          sub_233E40((__int64)v26);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v23 = (unsigned int *)sub_186B300(v8 - 2, v22);
        v11 = v9;
        v5 = a1[5];
        v8 = v23 + 2;
        *v23 = v21;
        v24 = v23[1];
        a1[4] = v8;
        v13 = &v8[v9];
        v12 = &v8[v24];
        result = (unsigned int)((int)v9 >> 1);
      }
      else
      {
        v11 = v9;
        v12 = &v8[v10];
        v13 = &v8[v9];
        result = (unsigned int)((int)v9 >> 1);
      }
      *v12 = a2;
      ++*(v8 - 1);
      v14 = *v13;
      v15 = *v13;
      if ( (_DWORD)result )
      {
        v16 = (__int64 *)a1[3];
        v17 = *v16;
        v18 = *(double *)(*v16 + 8 * v14);
        while ( 1 )
        {
          v13 = &v8[v11];
          v19 = &v8[(unsigned int)result];
          v20 = *v19;
          if ( v18 <= *(double *)(v17 + 8 * v20) )
            break;
          *v13 = v20;
          *(_DWORD *)(v5 + 4 * v20) = v9;
          v9 = result;
          result = (unsigned int)((int)result >> 1);
          if ( !(_DWORD)result )
          {
            *v19 = v15;
            *(_DWORD *)(v5 + 4 * v14) = 1;
            return result;
          }
          v11 = v9;
        }
      }
      *v13 = v15;
      *(_DWORD *)(v5 + 4 * v14) = v9;
    }
    else
    {
      *(_DWORD *)result = 0;
      result = sub_186B270(0x10u);
      v25 = a1[5];
      *(_DWORD *)(result + 8) = a2;
      *(_QWORD *)result = 2;
      a1[4] = result + 8;
      ++*(_DWORD *)(result + 4);
      *(_DWORD *)(result + 8) = a2;
      *(_DWORD *)(v25 + 4LL * a2) = 0;
    }
  }
  return result;
}

