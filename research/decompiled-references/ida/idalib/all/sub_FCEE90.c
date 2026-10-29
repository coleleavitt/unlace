__int64 __fastcall sub_FCEE90(_QWORD *a1, __int64 a2, signed int a3)
{
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v7; // r14
  __int64 v8; // rbx
  unsigned __int64 v9; // rax
  unsigned int v10; // ebp
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rbp
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 i; // r8
  unsigned __int64 v22; // [rsp+8h] [rbp-110h]
  int v23; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+78h] [rbp-A0h]
  int v25; // [rsp+80h] [rbp-98h]
  char v26; // [rsp+84h] [rbp-94h]
  void *ptr; // [rsp+88h] [rbp-90h]
  __int64 v28; // [rsp+90h] [rbp-88h]
  _BYTE v29[128]; // [rsp+98h] [rbp-80h] BYREF

  v3 = (__int64)(a1 + 1);
  v4 = a1[2];
  if ( !v4 )
    goto LABEL_8;
  while ( 1 )
  {
    if ( *(_DWORD *)(v4 + 32) < a3 )
    {
      v5 = *(_QWORD *)(v4 + 24);
      if ( !v5 )
        goto LABEL_8;
      goto LABEL_4;
    }
    v5 = *(_QWORD *)(v4 + 16);
    if ( *(_DWORD *)(v4 + 32) <= a3 )
      break;
    v3 = v4;
    if ( !v5 )
      goto LABEL_8;
LABEL_4:
    v4 = v5;
  }
  for ( i = *(_QWORD *)(v4 + 24); i; i = *(_QWORD *)(i + 24) )
  {
    while ( *(_DWORD *)(i + 32) > a3 )
    {
      v3 = i;
      i = *(_QWORD *)(i + 16);
      if ( !i )
        goto LABEL_23;
    }
  }
LABEL_23:
  while ( v5 )
  {
    while ( *(_DWORD *)(v5 + 32) >= a3 )
    {
      v4 = v5;
      v5 = *(_QWORD *)(v5 + 16);
      if ( !v5 )
        goto LABEL_26;
    }
    v5 = *(_QWORD *)(v5 + 24);
  }
LABEL_26:
  if ( v3 != v4 )
    return v4 + 40;
LABEL_8:
  v23 = a3;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  ptr = v29;
  v28 = 0x400000000LL;
  v7 = sub_FCECF0(a1, v3, (__int64)&v23);
  v8 = v7 + 40;
  if ( ptr != v29 )
    free(ptr);
  if ( a3 )
  {
    v9 = sub_10239D0(a2, (unsigned int)a3);
    v10 = HIDWORD(v9);
    v22 = HIDWORD(v9);
    v11 = sub_FCEE90(a1, a2, (unsigned int)v9);
    *(_QWORD *)(v7 + 40) = v11;
    *(_DWORD *)(v7 + 48) = v22;
    v12 = *(_QWORD *)(v11 + 16);
    v13 = 16LL * *(unsigned int *)(v11 + 24);
    v14 = v13 >> 4;
    if ( v13 )
    {
      do
      {
        while ( 1 )
        {
          v15 = v14 >> 1;
          v16 = v12 + 16 * (v14 >> 1);
          if ( v10 < *(_DWORD *)(v16 + 8) )
            break;
          v12 = v16 + 16;
          v14 = v14 - v15 - 1;
          if ( v14 <= 0 )
            goto LABEL_14;
        }
        v14 >>= 1;
      }
      while ( v15 );
    }
LABEL_14:
    v17 = *(_QWORD *)(v12 - 16);
  }
  else
  {
    v17 = a1[6];
  }
  v18 = *(unsigned int *)(v7 + 64);
  if ( v18 + 1 > (unsigned __int64)*(unsigned int *)(v7 + 68) )
  {
    sub_2237220(v7 + 56, v7 + 72, v18 + 1, 16);
    v18 = *(unsigned int *)(v7 + 64);
  }
  v19 = (_QWORD *)(*(_QWORD *)(v7 + 56) + 16 * v18);
  *v19 = v17;
  v19[1] = 0;
  ++*(_DWORD *)(v7 + 64);
  return v8;
}
