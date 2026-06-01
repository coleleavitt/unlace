__int64 __fastcall sub_760EA0(_QWORD *ptr)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  bool v4; // zf
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 *v7; // rbx
  __int64 *v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rdi
  void *v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 result; // rax

  if ( !ptr )
    return result;
  v2 = ptr[79];
  *ptr = &off_1C542B0;
  if ( v2 && (v3 = ptr[80], v4 = *(_DWORD *)(v2 + 8) == 1, --*(_DWORD *)(v2 + 8), v4) )
  {
    sub_15D7BC0(v3, v2);
    v5 = ptr[77];
    if ( v5 )
    {
LABEL_5:
      v6 = ptr[78];
      v4 = (*(_DWORD *)(v5 + 8))-- == 1;
      if ( v4 )
        sub_15D7BC0(v6, v5);
    }
  }
  else
  {
    v5 = ptr[77];
    if ( v5 )
      goto LABEL_5;
  }
  v7 = (__int64 *)ptr[76];
  if ( v7 )
  {
    v8 = &v7[*((unsigned int *)v7 - 1)];
    if ( v7 >= v8 )
      goto LABEL_15;
    do
    {
      while ( 1 )
      {
        v9 = *v7;
        if ( *v7 )
        {
          v10 = ptr[75];
          v4 = (*(_DWORD *)(v9 + 8))-- == 1;
          if ( v4 )
            break;
        }
        if ( ++v7 >= v8 )
          goto LABEL_14;
      }
      sub_15D7BC0(v10, v9);
      ++v7;
    }
    while ( v7 < v8 );
LABEL_14:
    v7 = (__int64 *)ptr[76];
    if ( v7 )
LABEL_15:
      sub_186B220(v7 - 1);
  }
  v11 = ptr[74];
  if ( v11 )
    sub_186B220((void *)(v11 - 8));
  v12 = (void *)ptr[71];
  if ( v12 )
    sub_186B220(v12);
  v13 = ptr[66];
  *ptr = &off_1C54290;
  if ( v13 )
    sub_186B220((void *)(v13 - 8));
  v14 = ptr[64];
  if ( v14 && (v15 = ptr[65], v4 = *(_DWORD *)(v14 + 8) == 1, --*(_DWORD *)(v14 + 8), v4) )
  {
    sub_15D7BC0(v15, v14);
    v16 = ptr[62];
    if ( !v16 )
    {
LABEL_26:
      v18 = ptr[60];
      if ( v18 )
        goto LABEL_27;
      goto LABEL_29;
    }
  }
  else
  {
    v16 = ptr[62];
    if ( !v16 )
      goto LABEL_26;
  }
  v17 = ptr[63];
  v4 = (*(_DWORD *)(v16 + 8))-- == 1;
  if ( !v4 )
    goto LABEL_26;
  sub_15D7BC0(v17, v16);
  v18 = ptr[60];
  if ( v18 )
  {
LABEL_27:
    v19 = ptr[61];
    v4 = (*(_DWORD *)(v18 + 8))-- == 1;
    if ( v4 )
      sub_15D7BC0(v19, v18);
  }
LABEL_29:
  ptr[41] = &qword_1C637E8;
  sub_15841B0(ptr + 41);
  ptr[21] = &qword_1C637E8;
  sub_15841B0(ptr + 21);
  v20 = ptr[20];
  if ( v20 )
    sub_186B220((void *)(v20 - 8));
  sub_15841B0(ptr);
  return sub_186B220(ptr);
}

