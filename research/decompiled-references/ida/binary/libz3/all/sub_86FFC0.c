__int64 __fastcall sub_86FFC0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rax
  unsigned int v9; // eax
  __int64 *v10; // rbp
  __int64 v11; // r12
  int v12; // eax
  bool v13; // zf
  __int64 result; // rax
  __int64 *v15; // rbx
  unsigned __int64 v16; // r13
  __int64 v17; // rsi
  __int64 *v18; // rbx
  unsigned __int64 v19; // r13
  __int64 v20; // rsi
  int v21; // [rsp+14h] [rbp-64h] BYREF
  __int64 *v22; // [rsp+18h] [rbp-60h] BYREF
  __int64 v23; // [rsp+20h] [rbp-58h] BYREF
  __int64 *v24; // [rsp+28h] [rbp-50h]
  __int64 v25; // [rsp+30h] [rbp-48h] BYREF
  __int64 *v26; // [rsp+38h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 80);
  v6 = *(_QWORD *)(a1 + 72);
  v26 = nullptr;
  v7 = *(_QWORD *)(v5 + 1720);
  v25 = v6;
  if ( v7 )
  {
    v8 = **(unsigned int **)(a2 + 32);
    if ( (unsigned int)v8 >= *(_DWORD *)(v7 - 4) )
      v7 = 0;
    else
      v7 = *(_QWORD *)(v7 + 8 * v8);
  }
  v9 = sub_86BFC0((unsigned int *)a1, v7);
  v23 = v6;
  v24 = nullptr;
  sub_86BC60(a1, v9, (__int64)&v23);
  v10 = v24;
  v11 = v23;
  if ( v24 )
    v12 = *((_DWORD *)v24 - 1);
  else
    v12 = 0;
  v13 = *(_QWORD *)(a3 + 16) == 0;
  v21 = v12;
  v22 = v24;
  if ( v13 )
    std::__throw_bad_function_call();
  (*(void (__fastcall **)(__int64, int *, __int64 **, __int64 *))(a3 + 24))(a3, &v21, &v22, &v25);
  result = sub_86FBB0((_QWORD *)a1, (unsigned int *)a2, (__int64)&v25);
  v15 = v26;
  if ( v26 )
  {
    result = *((unsigned int *)v26 - 1);
    v16 = (unsigned __int64)&v26[result];
    if ( (unsigned __int64)v26 >= v16 )
      goto LABEL_15;
    do
    {
      while ( 1 )
      {
        v17 = *v15;
        if ( *v15 )
        {
          v13 = (*(_DWORD *)(v17 + 8))-- == 1;
          if ( v13 )
            break;
        }
        if ( (unsigned __int64)++v15 >= v16 )
          goto LABEL_14;
      }
      result = sub_15D7BC0(v25, v17);
      ++v15;
    }
    while ( (unsigned __int64)v15 < v16 );
LABEL_14:
    v15 = v26;
    if ( v26 )
LABEL_15:
      result = sub_186B220(v15 - 1);
  }
  if ( v10 )
  {
    v18 = v10;
    v19 = (unsigned __int64)&v10[*((unsigned int *)v10 - 1)];
    if ( (unsigned __int64)v10 < v19 )
    {
      do
      {
        while ( 1 )
        {
          v20 = *v18;
          if ( *v18 )
          {
            v13 = (*(_DWORD *)(v20 + 8))-- == 1;
            if ( v13 )
              break;
          }
          if ( (unsigned __int64)++v18 >= v19 )
            return sub_186B220(v10 - 1);
        }
        ++v18;
        sub_15D7BC0(v11, v20);
      }
      while ( (unsigned __int64)v18 < v19 );
    }
    return sub_186B220(v10 - 1);
  }
  return result;
}

