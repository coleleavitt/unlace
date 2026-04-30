__int64 __fastcall sub_2CC820(__int64 a1, unsigned __int64 a2, char *a3)
{
  unsigned int v3; // r12d
  __int64 v8; // rsi
  _QWORD *v9; // rax
  _QWORD *v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 wide_byte; // rdx
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rdi
  _QWORD *v17; // rsi
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rbx
  const char *v20; // rax
  unsigned __int8 v21; // [rsp+7h] [rbp-41h] BYREF
  char v22; // [rsp+8h] [rbp-40h] BYREF
  __int64 v23[7]; // [rsp+10h] [rbp-38h] BYREF

  v23[1] = __readfsqword(0x28u);
  if ( !*(_BYTE *)(a1 + 1080) )
    return 0;
  v3 = is_mapped(a2);
  if ( !(_BYTE)v3 )
    return 0;
  v8 = a1 + 1096;
  if ( !a3 )
    a3 = &v22;
  *(_QWORD *)a3 = -1;
  v9 = *(_QWORD **)(a1 + 1104);
  if ( v9 )
  {
    v10 = (_QWORD *)(a1 + 1096);
    do
    {
      while ( 1 )
      {
        v11 = v9[2];
        v12 = v9[3];
        if ( v9[4] >= a2 )
          break;
        v9 = (_QWORD *)v9[3];
        if ( !v12 )
          goto LABEL_12;
      }
      v10 = v9;
      v9 = (_QWORD *)v9[2];
    }
    while ( v11 );
LABEL_12:
    if ( (_QWORD *)v8 != v10 && a2 >= v10[4] )
    {
      wide_byte = get_wide_byte(a2, v8, v11);
      v14 = v10[5];
      if ( v14 != wide_byte )
      {
LABEL_15:
        *(_QWORD *)a3 = v14;
        return v3;
      }
      if ( (get_flags_ex(a2, 4) & 0x600) == 0 )
      {
        v14 = v10[5];
        goto LABEL_15;
      }
    }
  }
  if ( !*(_BYTE *)(a1 + 1081) )
    return 0;
  v15 = *(_QWORD **)(a1 + 1152);
  v16 = a1 + 1144;
  if ( !v15 )
    return 0;
  v17 = (_QWORD *)(a1 + 1144);
  do
  {
    if ( v15[4] < a2 )
    {
      v15 = (_QWORD *)v15[3];
    }
    else
    {
      v17 = v15;
      v15 = (_QWORD *)v15[2];
    }
  }
  while ( v15 );
  if ( (_QWORD *)v16 != v17
    && a2 >= v17[4]
    && (v18 = *(_QWORD *)(a1 + 1064), a2 >= v18)
    && (v19 = a2 - v18, v19 < *(_DWORD *)(*(_QWORD *)(a1 + 728) + 24LL) * *(_DWORD *)(*(_QWORD *)(a1 + 728) + 28LL)) )
  {
    v20 = &s1;
    if ( *(_QWORD *)(a1 + 1048) )
      v20 = *(const char **)(a1 + 1040);
    v23[0] = (__int64)v20;
    v3 = 0;
    if ( !skip_utf8(v23, v19) )
    {
      v3 = sub_2CC6D0(a1, (const char *)&v21, v23[0]);
      if ( (_BYTE)v3 )
      {
        v14 = v21;
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
