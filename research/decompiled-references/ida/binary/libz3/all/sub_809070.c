__int64 __fastcall sub_809070(__int64 a1, __int64 *a2)
{
  _QWORD *v4; // r14
  _QWORD *v5; // rbx
  __int64 v6; // rbp
  __int64 result; // rax
  unsigned int v8; // ebp
  unsigned int *v9; // rbx
  unsigned int **v10; // r15
  unsigned int *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rdi
  bool v14; // zf
  int v15[2]; // [rsp+8h] [rbp-40h] BYREF

  *(_QWORD *)v15 = 0;
  sub_808830(a1, (__int64)a2, (char **)v15);
  v4 = *(_QWORD **)v15;
  if ( *(_QWORD *)v15 )
  {
    v5 = *(_QWORD **)v15;
    v6 = *(_QWORD *)v15 + 8LL * *(unsigned int *)(*(_QWORD *)v15 - 4LL);
    if ( *(_QWORD *)v15 != v6 )
    {
      do
        sub_14CC3A0(a1 + 192, *v5++);
      while ( (_QWORD *)v6 != v5 );
    }
    result = a2[1];
    if ( !result )
      return sub_186B220(v4 - 1);
  }
  else
  {
    result = a2[1];
    if ( !result )
      return result;
  }
  v8 = 0;
  while ( v8 < *(_DWORD *)(result - 4) )
  {
    v9 = *(unsigned int **)(a1 + 280);
    v10 = (unsigned int **)(result + 8LL * v8);
    v11 = *v10;
    if ( !v9 )
    {
      v13 = *a2;
      goto LABEL_11;
    }
    v12 = *v11;
    if ( (unsigned int)v12 < *(v9 - 1) )
    {
      v9 = *(unsigned int **)&v9[2 * v12];
      v13 = *a2;
      if ( v9 )
        ++v9[2];
LABEL_11:
      v14 = v11[2]-- == 1;
      if ( v14 )
        goto LABEL_16;
      goto LABEL_12;
    }
    v13 = *a2;
    v9 = nullptr;
    v14 = v11[2]-- == 1;
    if ( v14 )
    {
LABEL_16:
      sub_15D7BC0(v13, v11);
      result = a2[1];
    }
LABEL_12:
    *v10 = v9;
    ++v8;
    if ( !result )
      break;
  }
  if ( v4 )
    return sub_186B220(v4 - 1);
  return result;
}

