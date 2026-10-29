char __fastcall sub_1A42580(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rax
  char v6; // dl
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // r15
  char v10; // al
  __int64 v11; // r14
  __int64 v12; // rax
  char v13; // al
  char result; // al
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r14
  __int64 v22; // rax
  __int64 v23; // rbx
  unsigned __int64 v24; // rax
  unsigned __int16 v25; // r14
  _BYTE v26[64]; // [rsp+8h] [rbp-40h] BYREF

  v4 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    v4 = *(_QWORD *)(v4 + 8);
  if ( !v4 || (v5 = *(_BYTE *)(v4 + 8) & 0x7F, (unsigned __int8)v5 <= 0x18u) && (v16 = 16777297, _bittest64(&v16, v5)) )
  {
    if ( a3 )
      return sub_1A3F940(a1, a2);
    return 0;
  }
  v6 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( ((v6 + 61) & 0x7Fu) <= 1 || v6 == 47 )
  {
    v7 = sub_B8C1B0(v4);
    if ( !v7 )
      goto LABEL_13;
    v8 = sub_B8BF90(v7);
    if ( !v8 )
      goto LABEL_13;
    v9 = *(_QWORD *)(v8 + 56);
    v10 = *(_BYTE *)(a2 + 28) & 0x7F;
    if ( v10 == 67 )
    {
      v11 = (unsigned int)sub_BBE5B0(a2);
      sub_BBE590(a2);
    }
    else
    {
      v25 = v10 == 47 ? *(_WORD *)(a2 + 70) : *(_WORD *)(a2 + 66);
      v11 = v25 >> 4;
    }
    if ( (*(_DWORD *)(v9 + 20) & 0x1FFFFFFFu) <= (unsigned int)v11 || a2 != *(_QWORD *)(v9 + 8 * v11 + 24) )
    {
LABEL_13:
      v12 = sub_B8C1B0(v4);
      v13 = sub_1E61100(a1, v12, v26, a3, 0);
      goto LABEL_14;
    }
  }
  else if ( v6 != 43
         && ((unsigned int)(unsigned __int8)v5 - 34 > 5 || (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) != 0) )
  {
    v21 = 16777297;
    if ( (*(_QWORD *)(a2 + 8) & 7LL) == 4 )
    {
      while ( 1 )
      {
        v22 = sub_B8C1B0(v4);
        if ( (unsigned __int8)sub_1A421C0(a1, v22) )
          break;
        v23 = *(_QWORD *)(sub_B8C1B0(v4) + 16);
        if ( (v23 & 4) != 0 )
          v4 = *(_QWORD *)((v23 & 0xFFFFFFFFFFFFFFF8LL) + 8);
        else
          v4 = v23 & 0xFFFFFFFFFFFFFFF8LL;
        v24 = *(_BYTE *)(v4 + 8) & 0x7F;
        if ( (unsigned __int8)v24 <= 0x18u && _bittest64(&v21, v24) )
          return 0;
      }
      goto LABEL_15;
    }
    goto LABEL_13;
  }
  v17 = sub_B8C1B0(v4);
  v13 = sub_1A42550(a1, v17, a3, v18, v19, v20);
LABEL_14:
  if ( !v13 )
    return 0;
LABEL_15:
  result = 1;
  if ( !(*(_DWORD *)(a1 + 11320) | a3) )
  {
    result = 1;
    if ( *(char *)(*(_QWORD *)(a1 + 232) + 22LL) >= 0 )
    {
      v15 = *(_QWORD *)(a2 + 8);
      if ( (v15 & 6) != 0 )
        *(_QWORD *)(a2 + 8) = v15 & 0xFFFFFFFFFFFFFFF8LL | 1;
    }
  }
  return result;
}
