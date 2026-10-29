__int64 __fastcall sub_5DF100(_BYTE *a1, __int64 *a2, char a3)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 *func; // rax
  __int64 *v8; // r12
  __int64 v9; // rdx
  char v10; // al
  __int64 v11; // rsi
  char v13; // al
  char v14; // al
  __int64 v15; // [rsp+0h] [rbp-48h]
  __int64 v16; // [rsp+8h] [rbp-40h]
  __int64 v17; // [rsp+8h] [rbp-40h]

  v5 = *a2;
  v6 = a2[1];
  func = (__int64 *)get_func(*a2);
  v8 = func;
  if ( func )
    v5 = *func;
  v9 = get_func(v6);
  v10 = *((_BYTE *)a2 + 16);
  if ( !v9 )
  {
    if ( !v10 )
    {
      v11 = v6;
      goto LABEL_23;
    }
    if ( (unsigned __int8)(*((_BYTE *)a2 + 17) - 16) > 1u )
      return 0;
LABEL_10:
    v11 = v6;
    goto LABEL_11;
  }
  v11 = *(_QWORD *)v9;
  if ( *(_QWORD *)v9 == v6 )
  {
    if ( !v10 )
    {
      v15 = v9;
      segtype(v6);
      v9 = v15;
    }
    goto LABEL_10;
  }
  if ( !v10 )
  {
LABEL_23:
    v16 = v9;
    v13 = segtype(v11);
    v9 = v16;
    if ( v13 != 1 && a1[73] )
      return 0;
    goto LABEL_11;
  }
  if ( (unsigned __int8)(*((_BYTE *)a2 + 17) - 16) > 1u )
    return 0;
LABEL_11:
  if ( a1[72] )
  {
    v17 = v9;
    v14 = segtype(v11);
    v9 = v17;
    if ( v14 == 1 )
      return 0;
  }
  if ( a1[75] && v8 && (v8[2] & 4) != 0 || a1[74] && v9 && (*(_BYTE *)(v9 + 16) & 4) != 0 )
    return 0;
  return (unsigned __int8)sub_5DEAE0((__int64)a1, v5, v11, a3) == 0 ? -1 : 1;
}
