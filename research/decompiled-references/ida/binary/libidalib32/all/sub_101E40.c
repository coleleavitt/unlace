__int64 __fastcall sub_101E40(__int64 a1, unsigned int a2, char *a3)
{
  unsigned int v3; // r12d
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 wide_byte; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rsi
  unsigned int v17; // eax
  const char *v18; // rax
  unsigned __int8 v19; // [rsp+7h] [rbp-41h]
  char v20; // [rsp+8h] [rbp-40h] BYREF
  const char *v21; // [rsp+10h] [rbp-38h]
  unsigned __int64 v22; // [rsp+18h] [rbp-30h]

  v22 = __readfsqword(0x28u);
  if ( !*(_BYTE *)(a1 + 1232) )
    return 0;
  v3 = is_mapped();
  if ( !(_BYTE)v3 )
    return 0;
  if ( !a3 )
    a3 = &v20;
  *(_QWORD *)a3 = -1;
  v8 = *(_QWORD *)(a1 + 1256);
  if ( v8 )
  {
    v9 = a1 + 1248;
    do
    {
      while ( 1 )
      {
        v10 = *(_QWORD *)(v8 + 16);
        v11 = *(_QWORD *)(v8 + 24);
        if ( *(_DWORD *)(v8 + 32) >= a2 )
          break;
        v8 = *(_QWORD *)(v8 + 24);
        if ( !v11 )
          goto LABEL_12;
      }
      v9 = v8;
      v8 = *(_QWORD *)(v8 + 16);
    }
    while ( v10 );
LABEL_12:
    if ( a1 + 1248 != v9 && a2 >= *(_DWORD *)(v9 + 32) )
    {
      wide_byte = get_wide_byte();
      v13 = *(_QWORD *)(v9 + 40);
      if ( v13 != wide_byte )
      {
LABEL_15:
        *(_QWORD *)a3 = v13;
        return v3;
      }
      if ( (get_flags_ex() & 0x600) == 0 )
      {
        v13 = *(_QWORD *)(v9 + 40);
        goto LABEL_15;
      }
    }
  }
  if ( !*(_BYTE *)(a1 + 1233) )
    return 0;
  v14 = *(_QWORD *)(a1 + 1304);
  v15 = a1 + 1296;
  if ( !v14 )
    return 0;
  v16 = a1 + 1296;
  do
  {
    if ( *(_DWORD *)(v14 + 32) < a2 )
    {
      v14 = *(_QWORD *)(v14 + 24);
    }
    else
    {
      v16 = v14;
      v14 = *(_QWORD *)(v14 + 16);
    }
  }
  while ( v14 );
  if ( v15 != v16
    && a2 >= *(_DWORD *)(v16 + 32)
    && (v17 = *(_DWORD *)(a1 + 1224), a2 >= v17)
    && a2 - v17 < *(_DWORD *)(*(_QWORD *)(a1 + 752) + 24LL) * *(_DWORD *)(*(_QWORD *)(a1 + 752) + 28LL) )
  {
    v18 = s1;
    if ( *(_QWORD *)(a1 + 1208) )
      v18 = *(const char **)(a1 + 1200);
    v21 = v18;
    v3 = 0;
    if ( !skip_utf8() )
    {
      v3 = sub_101CF0(a1);
      if ( (_BYTE)v3 )
      {
        v13 = v19;
        goto LABEL_15;
      }
    }
  }
  else
  {
    return 0;
  }
  return v3;
}

