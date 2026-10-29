__int64 __fastcall sub_408D40(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 result; // rax

  v5 = a2;
  v6 = *(_QWORD *)(switch_dbctx(*(int *)(a1 + 8)) + 1480);
  switch ( a3 )
  {
    case 1:
LABEL_11:
      v5 = sub_4087C0(v6, v5);
      break;
    case 2:
      v5 = sub_408C80(v6, a2);
      break;
    case 0:
      v7 = *(_QWORD *)(v6 + 2376);
      if ( !v7 )
        goto LABEL_11;
      v8 = v6 + 2368;
      do
      {
        while ( 1 )
        {
          v9 = *(_QWORD *)(v7 + 16);
          v10 = *(_QWORD *)(v7 + 24);
          if ( *(_DWORD *)(v7 + 32) < v5 )
            break;
          v8 = v7;
          v7 = *(_QWORD *)(v7 + 16);
          if ( !v9 )
            goto LABEL_9;
        }
        v7 = *(_QWORD *)(v7 + 24);
      }
      while ( v10 );
LABEL_9:
      if ( v8 == v6 + 2368 || a2 < *(_DWORD *)(v8 + 32) )
        goto LABEL_11;
      break;
  }
  result = v5;
  if ( v5 == -1 )
    return -1;
  return result;
}

