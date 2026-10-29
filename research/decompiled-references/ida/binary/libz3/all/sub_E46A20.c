__int64 __fastcall sub_E46A20(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdx
  unsigned int v4; // r12d
  unsigned int v5; // r12d
  unsigned int *v6; // rcx
  __int64 result; // rax
  int v8; // r13d
  unsigned __int64 v9; // r14
  __int64 *v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rdi
  bool v13; // zf
  void (__fastcall ***v14)(void *); // rbx

  v3 = *(_QWORD *)(a1 + 160);
  *(_DWORD *)(a1 + 152) = 0;
  if ( v3 )
  {
    v4 = *(_DWORD *)(v3 - 4);
    if ( v4 <= a2 )
      a2 = *(_DWORD *)(v3 - 4);
    v5 = v4 - a2;
    v6 = (unsigned int *)(v3 + 4LL * v5);
    result = *(_QWORD *)(a1 + 128);
    if ( !result )
    {
LABEL_14:
      *(_DWORD *)(v3 - 4) = v5;
      goto LABEL_15;
    }
  }
  else
  {
    result = *(_QWORD *)(a1 + 128);
    if ( !result )
      goto LABEL_15;
    v6 = nullptr;
    v5 = 0;
  }
  v8 = *v6;
  v9 = result + 8LL * *(unsigned int *)(result - 4);
  v10 = (__int64 *)(result + 8LL * *v6);
  if ( (unsigned __int64)v10 >= v9 )
    goto LABEL_12;
  do
  {
    while ( 1 )
    {
      v11 = *v10;
      if ( *v10 )
      {
        v12 = *(_QWORD *)(a1 + 120);
        v13 = (*(_DWORD *)(v11 + 8))-- == 1;
        if ( v13 )
          break;
      }
      if ( (unsigned __int64)++v10 >= v9 )
        goto LABEL_11;
    }
    sub_15D7BC0(v12, v11);
    ++v10;
  }
  while ( (unsigned __int64)v10 < v9 );
LABEL_11:
  result = *(_QWORD *)(a1 + 128);
  v3 = *(_QWORD *)(a1 + 160);
  if ( result )
LABEL_12:
    *(_DWORD *)(result - 4) = v8;
  if ( v3 )
    goto LABEL_14;
LABEL_15:
  v14 = *(void (__fastcall ****)(void *))(a1 + 168);
  if ( v14 )
  {
    v13 = (*((_DWORD *)v14 + 12))-- == 1;
    if ( v13 )
    {
      (**v14)(v14);
      result = sub_186B220(v14);
    }
  }
  *(_QWORD *)(a1 + 168) = 0;
  return result;
}

