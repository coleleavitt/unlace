__int64 __fastcall sub_8EDC90(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rbp
  char *v7; // r15
  unsigned int v8; // r14d
  __int64 v9; // r12
  unsigned int v10; // r13d
  __int64 v11; // rdi
  __int64 v12; // r12
  unsigned int v13; // eax
  __int64 v15; // r13
  unsigned int v16; // r15d
  unsigned int v17; // r14d
  unsigned int v18; // ebp
  bool v19; // al
  __int64 v20; // rax
  unsigned int v21; // eax
  __int64 v22; // rdi
  __int64 v23; // [rsp+0h] [rbp-48h]
  __int64 v24; // [rsp+8h] [rbp-40h]

  v4 = *(_QWORD *)(a2 + 8);
  v23 = a3;
  v5 = *(_QWORD *)(a3 + 8);
  v24 = v5;
  if ( v4 != v5 )
  {
    v6 = a2;
    if ( !*(_QWORD *)(v4 + 72) )
    {
      v15 = *(_QWORD *)(v5 + 72);
      if ( !v15 )
      {
        v16 = *(char *)(v4 + 64);
        if ( !*(_BYTE *)(*(_QWORD *)(a1 + 112) + 561LL) )
        {
          v17 = *(int *)(v4 + 64) >> 8;
          goto LABEL_28;
        }
        if ( v16 != -1 )
        {
          do
          {
            v17 = sub_B39350(v6, v16);
            if ( v17 != -1 )
              break;
            v6 = *(_QWORD *)(v6 + 80);
          }
          while ( v6 );
          if ( *(_BYTE *)(*(_QWORD *)(a1 + 112) + 561LL) )
          {
            while ( 1 )
            {
              v18 = sub_B39350(v23, v16);
              if ( v18 != -1 )
                break;
              v23 = *(_QWORD *)(v23 + 80);
              if ( !v23 )
                return 1;
            }
            v19 = v17 != -1;
            goto LABEL_29;
          }
LABEL_28:
          v18 = *(int *)(v24 + 64) >> 8;
          v19 = v17 != -1 && v16 != -1 && v18 != -1;
LABEL_29:
          if ( v19 && v16 == *(char *)(v24 + 64) )
          {
            v20 = *(_QWORD *)(a1 + 8672);
            if ( v20 )
            {
              if ( v16 < *(_DWORD *)(v20 - 4) )
                v15 = *(_QWORD *)(v20 + 8LL * v16);
            }
            else
            {
              v15 = 0;
            }
            if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v15 + 72LL))(v15) )
              sub_8EDB70(a1, v16, v17, v18);
          }
        }
        return 1;
      }
    }
    v7 = (char *)(v4 + 64);
    if ( *(int *)(v4 + 64) >> 8 == -1 )
      return 1;
    while ( 1 )
    {
      v8 = *v7;
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 112) + 561LL) )
      {
        if ( v8 == -1 )
          goto LABEL_53;
        v9 = a2;
        do
        {
          v10 = sub_B39350(v9, v8);
          if ( v10 != -1 )
            break;
          v9 = *(_QWORD *)(v9 + 80);
        }
        while ( v9 );
      }
      else
      {
        v10 = *(int *)v7 >> 8;
        if ( v8 == -1 )
LABEL_53:
          BUG();
      }
      v11 = *(_QWORD *)(a1 + 8672);
      if ( v11 )
      {
        if ( v8 >= *(_DWORD *)(v11 - 4) )
          v11 = 0;
        else
          v11 = *(_QWORD *)(v11 + 8LL * v8);
      }
      if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v11 + 72LL))(v11) )
        goto LABEL_18;
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 112) + 561LL) )
      {
        v12 = v23;
        while ( 1 )
        {
          v13 = sub_B39350(v12, v8);
          if ( v13 != -1 )
            break;
          v12 = *(_QWORD *)(v12 + 80);
          if ( !v12 )
            goto LABEL_18;
        }
      }
      else
      {
        v13 = sub_B39350(v24, v8);
        if ( v13 == -1 )
          goto LABEL_18;
      }
      sub_8EDB70(a1, v8, v10, v13);
LABEL_18:
      v7 = *((char **)v7 + 1);
      if ( !v7 )
        return 1;
    }
  }
  v21 = *(char *)(v4 + 64);
  if ( (_BYTE)v21 == 0xFF )
    return 0;
  v22 = *(_QWORD *)(a1 + 8672);
  if ( !v22 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 72LL))(v22);
  if ( v21 < *(_DWORD *)(v22 - 4) )
  {
    v22 = *(_QWORD *)(v22 + 8LL * v21);
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 72LL))(v22);
  }
  return MEMORY[0x3010102464C45C7](0);
}

