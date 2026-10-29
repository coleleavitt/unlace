__int64 __fastcall sub_AC25F0(_QWORD *a1)
{
  __int64 result; // rax
  unsigned int i; // ebp
  unsigned int *v4; // rax
  __int64 v5; // rdx
  unsigned int v6; // r13d
  unsigned int v7; // r12d
  __int64 v8; // rsi
  __int64 v9; // r10
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // r15
  int v13; // r14d
  __int64 v14; // rcx
  unsigned int v15; // edx
  __int64 v16; // r11
  __int64 v17; // rsi
  __int64 v18; // r14
  unsigned int v19; // esi
  char v20; // di
  unsigned int v21; // esi
  __int64 v22; // [rsp+0h] [rbp-48h]
  __int64 v23; // [rsp+0h] [rbp-48h]
  __int64 v24; // [rsp+0h] [rbp-48h]
  __int64 v25; // [rsp+8h] [rbp-40h]

  result = a1[144];
  if ( !result )
    return result;
  for ( i = 0; ; ++i )
  {
    if ( i >= *(_DWORD *)(result - 4) )
    {
LABEL_15:
      *(_DWORD *)(result - 4) = 0;
      return result;
    }
    v4 = (unsigned int *)(result + 8LL * i);
    v5 = *v4;
    v6 = v4[1];
    v7 = *v4;
    if ( *(_DWORD *)(a1[65] + 4 * v5) == v6 )
    {
      v24 = *v4;
      sub_ABDA50(a1, v5);
      v5 = v24;
    }
    v8 = a1[63];
    v9 = 4LL * v6;
    v10 = a1[2];
    v11 = *(_QWORD *)(v10 + 8848);
    v12 = *(unsigned int *)(*(_QWORD *)(v8 + 8 * v5) + v9);
    v13 = *(char *)(v11 + v12);
    if ( !*(_BYTE *)(v11 + v12) )
      goto LABEL_7;
    v14 = a1[60];
    v15 = *(_DWORD *)(v14 + 4 * v5);
    if ( v13 == -1 )
      break;
    if ( v7 != v15 )
    {
      while ( 1 )
      {
        v16 = v15;
        v17 = *(unsigned int *)(*(_QWORD *)(v8 + 8LL * v15) + v9);
        if ( (_DWORD)v12 == ((unsigned int)v17 ^ 1) )
          return sub_AB99C0((__int64)a1, v7, v15, v6);
        if ( v13 != *(char *)(v11 + v17) )
        {
          v25 = v15;
          v22 = v9;
          sub_AC2100((__int64)a1, v17, v7, v15, v6, v12, 0);
          v10 = a1[2];
          v9 = v22;
          v16 = v25;
          if ( qword_1C7ECE8 != *(_QWORD *)(v10 + 8984) || *(_BYTE *)(v10 + 2416) )
            goto LABEL_14;
          v14 = a1[60];
        }
        v15 = *(_DWORD *)(v14 + 4 * v16);
        if ( v7 == v15 )
          break;
        v8 = a1[63];
        v11 = *(_QWORD *)(v10 + 8848);
      }
    }
LABEL_7:
    result = a1[144];
    if ( !result )
      return result;
  }
  if ( v7 == v15 )
    goto LABEL_7;
  while ( 1 )
  {
    v18 = v15;
    v19 = *(_DWORD *)(*(_QWORD *)(v8 + 8LL * v15) + v9);
    v20 = *(_BYTE *)(v11 + v19);
    v21 = v19 ^ 1;
    if ( (_DWORD)v12 == v21 )
      return sub_AB99C0((__int64)a1, v7, v15, v6);
    if ( v20 != -1 )
    {
      v23 = v9;
      sub_AC2100((__int64)a1, v21, v7, v15, v6, v12 ^ 1, 0);
      v10 = a1[2];
      v9 = v23;
      if ( *(_QWORD *)(v10 + 8984) != qword_1C7ECE8 || *(_BYTE *)(v10 + 2416) )
      {
LABEL_14:
        result = a1[144];
        if ( !result )
          return result;
        goto LABEL_15;
      }
      v14 = a1[60];
    }
    v15 = *(_DWORD *)(v14 + 4 * v18);
    if ( v7 == v15 )
      goto LABEL_7;
    v8 = a1[63];
    v11 = *(_QWORD *)(v10 + 8848);
  }
}

