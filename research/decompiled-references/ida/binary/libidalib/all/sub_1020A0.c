__int64 __fastcall sub_1020A0(__int64 a1, unsigned __int64 a2, char *a3)
{
  unsigned int v3; // r12d
  _QWORD *v8; // rax
  _QWORD *v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 wide_byte; // rdx
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rdi
  _QWORD *v16; // rsi
  unsigned __int64 v17; // rax
  const char *v18; // rax
  unsigned __int8 v19; // [rsp+7h] [rbp-41h]
  char v20; // [rsp+8h] [rbp-40h] BYREF
  const char *v21; // [rsp+10h] [rbp-38h]
  unsigned __int64 v22; // [rsp+18h] [rbp-30h]

  v22 = __readfsqword(0x28u);
  if ( !*(_BYTE *)(a1 + 1248) )
    return 0;
  v3 = is_mapped();
  if ( !(_BYTE)v3 )
    return 0;
  if ( !a3 )
    a3 = &v20;
  *(_QWORD *)a3 = -1;
  v8 = *(_QWORD **)(a1 + 1272);
  if ( v8 )
  {
    v9 = (_QWORD *)(a1 + 1264);
    do
    {
      while ( 1 )
      {
        v10 = v8[2];
        v11 = v8[3];
        if ( v8[4] >= a2 )
          break;
        v8 = (_QWORD *)v8[3];
        if ( !v11 )
          goto LABEL_12;
      }
      v9 = v8;
      v8 = (_QWORD *)v8[2];
    }
    while ( v10 );
LABEL_12:
    if ( (_QWORD *)(a1 + 1264) != v9 && a2 >= v9[4] )
    {
      wide_byte = get_wide_byte();
      v13 = v9[5];
      if ( v13 != wide_byte )
      {
LABEL_15:
        *(_QWORD *)a3 = v13;
        return v3;
      }
      if ( (get_flags_ex() & 0x600) == 0 )
      {
        v13 = v9[5];
        goto LABEL_15;
      }
    }
  }
  if ( !*(_BYTE *)(a1 + 1249) )
    return 0;
  v14 = *(_QWORD **)(a1 + 1320);
  v15 = a1 + 1312;
  if ( !v14 )
    return 0;
  v16 = (_QWORD *)(a1 + 1312);
  do
  {
    if ( v14[4] < a2 )
    {
      v14 = (_QWORD *)v14[3];
    }
    else
    {
      v16 = v14;
      v14 = (_QWORD *)v14[2];
    }
  }
  while ( v14 );
  if ( (_QWORD *)v15 != v16
    && a2 >= v16[4]
    && (v17 = *(_QWORD *)(a1 + 1232), a2 >= v17)
    && a2 - v17 < *(_DWORD *)(*(_QWORD *)(a1 + 760) + 24LL) * *(_DWORD *)(*(_QWORD *)(a1 + 760) + 28LL) )
  {
    v18 = s1;
    if ( *(_QWORD *)(a1 + 1216) )
      v18 = *(const char **)(a1 + 1208);
    v21 = v18;
    v3 = 0;
    if ( !skip_utf8() )
    {
      v3 = sub_101F50(a1);
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

