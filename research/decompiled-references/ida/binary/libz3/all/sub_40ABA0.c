__int64 __fastcall sub_40ABA0(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v5; // rbx
  _QWORD *v6; // r13
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned int v12; // r14d
  __int64 v13; // r13
  unsigned int v14; // ecx
  unsigned int v15; // ebx
  __int64 v16; // r13
  __int64 result; // rax
  bool v18; // cl
  __int64 v19; // rax
  _QWORD v20[6]; // [rsp+8h] [rbp-30h] BYREF

  v5 = *(_QWORD **)(a1 + 40);
  if ( v5 )
  {
    v6 = &v5[*((unsigned int *)v5 - 1)];
    if ( v5 >= v6 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v7 = *v5;
        if ( *v5 )
        {
          v8 = *(_QWORD *)(a1 + 32);
          if ( (*(_DWORD *)(v7 + 8))-- == 1 )
            break;
        }
        if ( ++v5 >= v6 )
          goto LABEL_8;
      }
      sub_15D7BC0(v8, v7);
      ++v5;
    }
    while ( v5 < v6 );
LABEL_8:
    v5 = *(_QWORD **)(a1 + 40);
    if ( v5 )
LABEL_9:
      *((_DWORD *)v5 - 1) = 0;
  }
  sub_3FCDF0(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24));
  v10 = *(_QWORD *)(a3 + 8);
  v11 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 16) = 0;
  if ( v10 )
  {
    v12 = 0;
    while ( v12 < *(_DWORD *)(v10 - 4) )
    {
      v13 = *(_QWORD *)(v10 + 8LL * v12);
      if ( v13 )
        ++*(_DWORD *)(v13 + 8);
      if ( !v11 || (v14 = *(_DWORD *)(v11 - 4), v14 == *(_DWORD *)(v11 - 8)) )
      {
        sub_23A6F0((unsigned int **)(a1 + 40));
        v11 = *(_QWORD *)(a1 + 40);
        v10 = *(_QWORD *)(a3 + 8);
        v14 = *(_DWORD *)(v11 - 4);
      }
      ++v12;
      *(_QWORD *)(v11 + 8LL * v14) = v13;
      *(_DWORD *)(v11 - 4) = v14 + 1;
      if ( !v10 )
        goto LABEL_18;
    }
  }
  if ( !v11 )
  {
LABEL_27:
    v19 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 856LL);
    v20[0] = v19;
    if ( v19 )
      ++*(_DWORD *)(v19 + 8);
    sub_407600((unsigned int **)(a1 + 40), v20);
    v10 = *(_QWORD *)(a3 + 8);
    if ( !v10 )
      goto LABEL_30;
    goto LABEL_20;
  }
LABEL_18:
  if ( !*(_DWORD *)(v11 - 4) )
    goto LABEL_27;
  if ( !v10 )
  {
LABEL_30:
    sub_41D160(a1 + 48);
    return sub_41D160(a1 + 64);
  }
LABEL_20:
  v15 = *(_DWORD *)(v10 - 4);
  if ( !v15 )
    goto LABEL_30;
  v16 = 0;
  while ( 1 )
  {
    result = sub_422190(*(_QWORD *)(v10 + 8 * v16));
    v18 = (int)v16++ + 1 < v15;
    if ( (((unsigned __int8)result ^ 1) & v18) == 0 )
      break;
    v10 = *(_QWORD *)(a3 + 8);
  }
  if ( !(_BYTE)result )
    goto LABEL_30;
  return result;
}

