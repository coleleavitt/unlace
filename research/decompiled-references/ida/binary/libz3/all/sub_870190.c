__int64 __fastcall sub_870190(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rax
  unsigned int v9; // eax
  __int64 v10; // r12
  __int64 *v11; // rbp
  int *v12; // rax
  int v13; // eax
  int v14; // edx
  bool v15; // zf
  __int64 result; // rax
  __int64 *v17; // rbx
  unsigned __int64 v18; // r13
  __int64 v19; // rsi
  __int64 *v20; // rbx
  unsigned __int64 v21; // r13
  __int64 v22; // rsi
  int v23; // [rsp+10h] [rbp-68h] BYREF
  int v24; // [rsp+14h] [rbp-64h] BYREF
  __int64 *v25; // [rsp+18h] [rbp-60h] BYREF
  __int64 v26; // [rsp+20h] [rbp-58h] BYREF
  __int64 *v27; // [rsp+28h] [rbp-50h]
  __int64 v28; // [rsp+30h] [rbp-48h] BYREF
  __int64 *v29; // [rsp+38h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 80);
  v6 = *(_QWORD *)(a1 + 72);
  v29 = nullptr;
  v7 = *(_QWORD *)(v5 + 1720);
  v28 = v6;
  if ( v7 )
  {
    v8 = **(unsigned int **)(a2 + 32);
    if ( (unsigned int)v8 >= *(_DWORD *)(v7 - 4) )
      v7 = 0;
    else
      v7 = *(_QWORD *)(v7 + 8 * v8);
  }
  v9 = sub_86BFC0((unsigned int *)a1, v7);
  v26 = v6;
  v27 = nullptr;
  sub_86BC60(a1, v9, (__int64)&v26);
  v10 = v26;
  v11 = v27;
  v12 = *(int **)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 24LL) + 8LL);
  if ( *((_BYTE *)v12 + 8) )
    sub_DBF6E(0);
  v13 = *v12;
  if ( v27 )
    v14 = *((_DWORD *)v27 - 1);
  else
    v14 = 0;
  v15 = *(_QWORD *)(a3 + 16) == 0;
  v23 = v14;
  v25 = v27;
  v24 = v13;
  if ( v15 )
    std::__throw_bad_function_call();
  (*(void (__fastcall **)(__int64, int *, __int64 **, int *, __int64 *))(a3 + 24))(a3, &v23, &v25, &v24, &v28);
  result = sub_86FBB0((_QWORD *)a1, (unsigned int *)a2, (__int64)&v28);
  v17 = v29;
  if ( v29 )
  {
    result = *((unsigned int *)v29 - 1);
    v18 = (unsigned __int64)&v29[result];
    if ( (unsigned __int64)v29 >= v18 )
      goto LABEL_16;
    do
    {
      while ( 1 )
      {
        v19 = *v17;
        if ( *v17 )
        {
          v15 = (*(_DWORD *)(v19 + 8))-- == 1;
          if ( v15 )
            break;
        }
        if ( (unsigned __int64)++v17 >= v18 )
          goto LABEL_15;
      }
      result = sub_15D7BC0(v28, v19);
      ++v17;
    }
    while ( (unsigned __int64)v17 < v18 );
LABEL_15:
    v17 = v29;
    if ( v29 )
LABEL_16:
      result = sub_186B220(v17 - 1);
  }
  if ( v11 )
  {
    v20 = v11;
    v21 = (unsigned __int64)&v11[*((unsigned int *)v11 - 1)];
    if ( (unsigned __int64)v11 < v21 )
    {
      do
      {
        while ( 1 )
        {
          v22 = *v20;
          if ( *v20 )
          {
            v15 = (*(_DWORD *)(v22 + 8))-- == 1;
            if ( v15 )
              break;
          }
          if ( (unsigned __int64)++v20 >= v21 )
            return sub_186B220(v11 - 1);
        }
        ++v20;
        sub_15D7BC0(v10, v22);
      }
      while ( (unsigned __int64)v20 < v21 );
    }
    return sub_186B220(v11 - 1);
  }
  return result;
}

