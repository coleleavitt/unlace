__int64 __fastcall sub_17F200(__int64 a1, __int64 a2, __int64 a3)
{
  bool v4; // zf
  char v5; // al
  __int64 result; // rax
  int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // rsi
  _DWORD *v11; // r13
  _DWORD *v12; // rsi
  __int64 v13; // [rsp+8h] [rbp-60h] BYREF
  __int64 v14; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int8 *v15; // [rsp+18h] [rbp-50h]
  __int64 v16; // [rsp+20h] [rbp-48h] BYREF
  __int64 v17; // [rsp+28h] [rbp-40h]
  unsigned __int64 v18; // [rsp+38h] [rbp-30h]

  v4 = *(_BYTE *)a3 == 4;
  v5 = *(_BYTE *)a2;
  v18 = __readfsqword(0x28u);
  if ( !v4 )
  {
    if ( v5 == 4 )
    {
      if ( **(_DWORD **)(a2 + 8) != 2 )
      {
        v13 = -1;
        goto LABEL_15;
      }
      return 0xFFFFFFFFLL;
    }
    v13 = -1;
    goto LABEL_4;
  }
  v11 = *(_DWORD **)(a3 + 8);
  if ( *v11 == 2 )
  {
    if ( v5 == 4 )
    {
      v12 = *(_DWORD **)(a2 + 8);
      if ( *v12 == 2 )
      {
LABEL_28:
        v13 = -1;
        if ( *v11 != 2 )
          goto LABEL_15;
        goto LABEL_23;
      }
    }
    return 0xFFFFFFFFLL;
  }
  if ( v5 == 4 )
  {
    v12 = *(_DWORD **)(a2 + 8);
    if ( *v12 != 2 )
      goto LABEL_28;
    return 0xFFFFFFFFLL;
  }
  v13 = -1;
  if ( *v11 == 2 )
  {
    v12 = *(_DWORD **)(a2 + 8);
LABEL_23:
    v14 = 0;
    v15 = nullptr;
    v16 = 0;
    v17 = 0;
    if ( (unsigned __int8)sub_11EBC0(&v14, (__int64)(v12 + 12))
      && (unsigned __int8)sub_11EBC0(&v16, (__int64)(v11 + 12))
      && sub_1213D0(v15, a1, v17, 0) )
    {
      result = v14 - v16;
    }
    else
    {
      result = v13;
    }
    goto LABEL_6;
  }
LABEL_4:
  if ( (unsigned __int8)(v5 - 5) > 1u && v5 != 9 )
  {
LABEL_15:
    if ( !under_debugger )
      sub_37E160(51929);
    BUG();
  }
  sub_12BD70(a1, &v13, nullptr, 0, a3, 0, a2);
  result = v13;
LABEL_6:
  v8 = *(_DWORD *)(a3 + 4);
  v9 = *(int *)(a2 + 4);
  v10 = v8;
  if ( (int)v9 <= v8 )
    v10 = *(int *)(a2 + 4);
  if ( v8 )
    v9 = v10;
  if ( result < 0 || v9 <= result )
    return 0xFFFFFFFFLL;
  return result;
}
