__int64 __fastcall sub_C98D00(__int64 *a1)
{
  __int64 v2; // rdx
  char v3; // al
  unsigned int v4; // eax
  __int64 v5; // rbp
  __int64 v6; // r12
  __int64 v7; // rdi
  __int64 v8; // rax
  char i; // cl
  _DWORD *v10; // rdx
  __int64 v12; // rax
  int v13; // edx
  __int64 *v14; // rax
  _DWORD *v15; // rax
  int v16; // eax
  __int64 v17; // [rsp+0h] [rbp-28h] BYREF

  sub_16669D0(&v17, *a1);
  v2 = a1[9];
  if ( !v2 )
    return 1;
  v3 = *(_BYTE *)(v2 + 3) >> 6;
  if ( !v3 )
  {
    do
    {
      v2 = *(_QWORD *)(v2 + 16);
      v3 = *(_BYTE *)(v2 + 3) >> 6;
    }
    while ( !v3 );
    if ( v3 != 1 )
      goto LABEL_4;
LABEL_18:
    v4 = *(_DWORD *)(v2 + 4) + 1;
    goto LABEL_6;
  }
  if ( v3 == 1 )
    goto LABEL_18;
LABEL_4:
  if ( v3 == 2 )
    v4 = *(_DWORD *)(v2 + 4) - 1;
  else
    v4 = *(_DWORD *)(v2 + 4);
LABEL_6:
  if ( !v4 )
    return 1;
  v5 = v4;
  v6 = 0;
  while ( 2 )
  {
    v7 = *a1;
    if ( (*((_BYTE *)a1 + 123) & 0x20) != 0 )
    {
      v8 = *(_QWORD *)(v7 + 864);
    }
    else
    {
      v12 = a1[9];
      v13 = 18;
      while ( --v13 )
      {
        if ( *(char *)(v12 + 3) >= 0 )
        {
          if ( *(_DWORD *)(v12 + 4) == (_DWORD)v6 )
          {
            v14 = (__int64 *)(v12 + 8);
            goto LABEL_24;
          }
        }
        else if ( *(_BYTE *)(v12 + 3) >> 6 != 2 )
        {
          v14 = (__int64 *)(*(_QWORD *)(v12 + 16) + 8 * v6);
          goto LABEL_24;
        }
        v12 = *(_QWORD *)(v12 + 16);
      }
      sub_233F80((__int64 *)(v7 + 616), (_DWORD *)a1 + 18);
      v14 = (__int64 *)(*(_QWORD *)(a1[9] + 16) + 8 * v6);
LABEL_24:
      v8 = *v14;
    }
    if ( !*(_WORD *)(v8 + 4) )
    {
      for ( i = 0; ; i ^= 1u )
      {
        v10 = *(_DWORD **)(*(_QWORD *)(v8 + 16) + 24LL);
        if ( !v10 )
          return 0;
        if ( *v10 )
          break;
        if ( v10[1] != 8 || *(_DWORD *)(v8 + 24) != 1 )
        {
          if ( v10[1] != 2 )
            return 0;
          if ( i )
            return 0;
          v15 = *(_DWORD **)(sub_15D1F10(*(_QWORD *)(v8 + 32)) + 24);
          if ( !v15 || *v15 != 5 )
            return 0;
          goto LABEL_33;
        }
        v8 = *(_QWORD *)(v8 + 32);
        if ( *(_WORD *)(v8 + 4) )
          return 0;
      }
      if ( *v10 != 5 )
        return 0;
      v16 = v10[1];
      if ( v16 != 2 && v16 != 3 && v16 != 4 && v16 != 5 )
        return 0;
LABEL_33:
      if ( v5 != ++v6 )
        continue;
      return 1;
    }
    return 0;
  }
}

