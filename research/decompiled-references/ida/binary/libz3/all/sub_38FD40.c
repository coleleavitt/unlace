__int64 __fastcall sub_38FD40(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // r12
  char v3; // bl
  __int16 v4; // ax
  _QWORD *v5; // rax
  bool v6; // zf
  int v8; // eax
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rbp
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v19; // [rsp+38h] [rbp-D0h]

  v2 = *a2;
  v19 = a2[1];
  if ( *a2 )
    ++*(_DWORD *)(v2 + 8);
  v3 = 1;
  while ( 1 )
  {
    v4 = *(_WORD *)(v2 + 4);
    if ( v4 == 2 )
    {
      v8 = *(_DWORD *)(v2 + 16);
      if ( v8 )
      {
LABEL_26:
        if ( v8 != 1 )
          break;
        if ( v3 )
          goto LABEL_9;
        while ( 1 )
        {
          v12 = v2;
          v2 = *(_QWORD *)(v2 + 24);
          if ( v2 )
            ++*(_DWORD *)(v2 + 8);
          v6 = (*(_DWORD *)(v12 + 8))-- == 1;
          if ( v6 )
            sub_15D7BC0(v19, v12);
          v4 = *(_WORD *)(v2 + 4);
          if ( v4 != 2 )
            break;
          if ( *(_DWORD *)(v2 + 16) != 1 )
            goto LABEL_16;
        }
      }
      else
      {
        if ( !v3 )
          goto LABEL_16;
        while ( 1 )
        {
          v11 = v2;
          v2 = *(_QWORD *)(v2 + 24);
          if ( v2 )
            ++*(_DWORD *)(v2 + 8);
          v6 = (*(_DWORD *)(v11 + 8))-- == 1;
          if ( v6 )
            sub_15D7BC0(v19, v11);
          v4 = *(_WORD *)(v2 + 4);
          if ( v4 != 2 )
            break;
          v8 = *(_DWORD *)(v2 + 16);
          if ( v8 )
            goto LABEL_26;
        }
      }
    }
    if ( v4 )
      break;
    v5 = *(_QWORD **)(*(_QWORD *)(v2 + 16) + 24LL);
    if ( !v5 || *v5 != 0x800000000LL || *(_DWORD *)(v2 + 24) != 1 )
      break;
    v13 = *(_QWORD *)(v2 + 32);
    v3 ^= 1u;
    if ( v13 )
      ++*(_DWORD *)(v13 + 8);
    v6 = (*(_DWORD *)(v2 + 8))-- == 1;
    if ( v6 )
      sub_15D7BC0(v19, v2);
    v2 = v13;
  }
  if ( v3 )
    goto LABEL_9;
LABEL_16:
  v9 = v2;
  v10 = sub_15E1A70(*a1);
  v2 = v10;
  if ( v10 )
    ++*(_DWORD *)(v10 + 8);
  v6 = (*(_DWORD *)(v9 + 8))-- == 1;
  if ( v6 )
    sub_15D7BC0(v19, v9);
LABEL_9:
  sub_15EE230(v2);
  v14 = sub_15E1AF0(*a1);
  v15 = v14;
  if ( v14 )
    ++*(_DWORD *)(v14 + 8);
  v16 = *a2;
  if ( *a2 )
  {
    v17 = a2[1];
    v6 = (*(_DWORD *)(v16 + 8))-- == 1;
    if ( v6 )
      sub_15D7BC0(v17, v16);
  }
  *a2 = v15;
  if ( v2 )
  {
    v6 = (*(_DWORD *)(v2 + 8))-- == 1;
    if ( v6 )
      sub_15D7BC0(v19, v2);
  }
  return 1;
}

