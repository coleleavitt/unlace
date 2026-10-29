__int64 __fastcall sub_984990(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  unsigned int v4; // ebp
  __int64 result; // rax
  __int64 v6; // rdi
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rax
  __int64 **v10; // rcx
  __int64 *v11; // rsi
  __int64 *v12; // rcx

  v2 = *(_QWORD *)(a1 + 88);
  do
  {
    v3 = v2;
    if ( !v2 )
      goto LABEL_15;
    v4 = *(_DWORD *)(v2 - 4);
    result = *(unsigned int *)(a1 + 96);
    if ( (unsigned int)result >= v4 )
    {
      v7 = *(_QWORD *)(a1 + 104);
      if ( !v7 )
        continue;
      goto LABEL_8;
    }
    while ( 1 )
    {
      v6 = *(_QWORD *)(v3 + 8LL * (unsigned int)result);
      *(_DWORD *)(a1 + 96) = result + 1;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 32LL))(v6, a1);
      result = *(unsigned int *)(a1 + 96);
      if ( (unsigned int)result >= v4 )
        break;
      v3 = *(_QWORD *)(a1 + 88);
    }
    v7 = *(_QWORD *)(a1 + 104);
    if ( !v7 )
    {
      v2 = *(_QWORD *)(a1 + 88);
      if ( v2 )
        goto LABEL_11;
LABEL_15:
      v7 = *(_QWORD *)(a1 + 104);
      if ( !v7 )
      {
        result = *(unsigned int *)(a1 + 96);
        v4 = 0;
        continue;
      }
      goto LABEL_8;
    }
    do
    {
LABEL_8:
      v8 = *(_DWORD *)(v7 - 4);
      if ( !v8 )
        break;
      v9 = (unsigned int)(v8 - 1);
      v10 = (__int64 **)(v7 + 16 * v9);
      v11 = *v10;
      v12 = v10[1];
      *(_DWORD *)(v7 - 4) = v9;
      sub_984870(a1, v11, v12);
      v7 = *(_QWORD *)(a1 + 104);
    }
    while ( v7 );
    v2 = *(_QWORD *)(a1 + 88);
    result = *(unsigned int *)(a1 + 96);
    if ( v2 )
    {
LABEL_11:
      v4 = *(_DWORD *)(v2 - 4);
      continue;
    }
    v4 = 0;
  }
  while ( v4 != (_DWORD)result );
  *(_QWORD *)(a1 + 176) = 0;
  return result;
}

