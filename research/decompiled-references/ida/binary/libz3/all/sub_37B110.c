__int64 __fastcall sub_37B110(__int64 *a1, _DWORD *a2)
{
  __int64 v2; // rdx
  char v4; // al
  __int64 v5; // r12
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rax
  int v10; // edx
  __int64 *v11; // rax
  void *v12; // rdi
  char *v13; // rcx
  bool v14; // si
  __int64 *v15; // rax
  __int64 v16; // rdx
  void *ptr; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+8h] [rbp-C0h]
  _BYTE v20[184]; // [rsp+10h] [rbp-B8h] BYREF

  v2 = a1[9];
  ptr = v20;
  v19 = 0x1000000000LL;
  if ( !v2 )
    return 0;
  v4 = *(_BYTE *)(v2 + 3) >> 6;
  if ( !v4 )
  {
    do
    {
      v2 = *(_QWORD *)(v2 + 16);
      v4 = *(_BYTE *)(v2 + 3) >> 6;
    }
    while ( !v4 );
    if ( v4 != 1 )
      goto LABEL_4;
LABEL_27:
    v5 = (unsigned int)(*(_DWORD *)(v2 + 4) + 1);
    goto LABEL_6;
  }
  if ( v4 == 1 )
    goto LABEL_27;
LABEL_4:
  if ( v4 == 2 )
    v5 = (unsigned int)(*(_DWORD *)(v2 + 4) - 1);
  else
    v5 = *(unsigned int *)(v2 + 4);
LABEL_6:
  if ( !(_DWORD)v5 )
    return 0;
  v6 = 0;
  while ( 2 )
  {
    v8 = *a1;
    if ( (*((_BYTE *)a1 + 123) & 0x20) != 0 )
    {
      v7 = *(_QWORD *)(v8 + 864);
      goto LABEL_9;
    }
    v9 = a1[9];
    v10 = 17;
    while ( 1 )
    {
      if ( *(char *)(v9 + 3) < 0 )
      {
        if ( *(_BYTE *)(v9 + 3) >> 6 != 2 )
        {
          v11 = (__int64 *)(*(_QWORD *)(v9 + 16) + 8 * v6);
          goto LABEL_15;
        }
        goto LABEL_17;
      }
      if ( *(_DWORD *)(v9 + 4) == (_DWORD)v6 )
        break;
LABEL_17:
      v9 = *(_QWORD *)(v9 + 16);
      if ( !--v10 )
      {
        sub_233F80((__int64 *)(v8 + 616), (_DWORD *)a1 + 18);
        v11 = (__int64 *)(*(_QWORD *)(a1[9] + 16) + 8 * v6);
        goto LABEL_15;
      }
    }
    v11 = (__int64 *)(v9 + 8);
LABEL_15:
    v7 = *v11;
LABEL_9:
    sub_37A6E0(a2, (__int64)&ptr, v7);
    if ( v5 != ++v6 )
      continue;
    break;
  }
  v12 = ptr;
  v13 = (char *)ptr + 8 * (unsigned int)v19;
  v14 = ptr == v20 || ptr == nullptr;
  if ( ptr != v13 )
  {
    v15 = (__int64 *)ptr;
    do
    {
      v16 = *v15++;
      *(_BYTE *)(v16 + 6) &= ~1u;
    }
    while ( v15 != (__int64 *)v13 );
  }
  LODWORD(v19) = 0;
  if ( !v14 )
    sub_186B220(v12);
  return 0;
}

