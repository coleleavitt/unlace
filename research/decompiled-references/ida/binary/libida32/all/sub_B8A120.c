unsigned __int64 __fastcall sub_B8A120(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  _QWORD *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r12
  __int64 v11; // rbp
  char v12; // al
  __int64 v13; // r13
  __int64 v14; // rsi
  unsigned __int64 result; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23[6]; // [rsp+8h] [rbp-30h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  v4 = (_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v3 & 4) != 0 )
    v4 = (_QWORD *)*v4;
  v5 = sub_B68470((__int64)v4);
  v10 = *(_QWORD *)(a1 + 40);
  v11 = v5;
  v12 = *(_BYTE *)(v5 + 28) & 0x7F;
  if ( v12 == 21 )
  {
    v13 = *(_QWORD *)(v11 + 88);
    if ( v13 )
    {
      v14 = *(_QWORD *)(a1 + 40);
      result = sub_B86DC0(*(_QWORD *)(v11 + 88), v14, (*(_BYTE *)(a1 + 58) & 2) != 0, v7, v8, v9);
      if ( result )
        return result;
      for ( v23[0] = sub_B86FC0(v13, v14, v16, v17, v18, v19); ; v23[0] = *(_QWORD *)(v23[0] + 128) )
      {
        sub_B82B00(v23);
        if ( !v23[0] )
          break;
        result = sub_B86DC0(v23[0], v10, (*(_BYTE *)(a1 + 58) & 2) != 0, v20, v8, v9);
        if ( result )
          return result;
      }
    }
  }
  else if ( v12 == 22 )
  {
    v21 = sub_B8A0E0(v11, a2, v6, v7, v8, v9);
    if ( v21 )
    {
      result = sub_B86DC0(v21, v10, (*(_BYTE *)(a1 + 58) & 2) != 0, v22, v8, v9);
      if ( result )
        return result;
    }
  }
  if ( (*(_BYTE *)(a1 + 58) & 0x40) == 0 )
    return a1;
  result = sub_B86C90(v11, v10, (*(_BYTE *)(a1 + 58) & 2) != 0, 1, v8, v9);
  if ( !result )
    return a1;
  return result;
}

