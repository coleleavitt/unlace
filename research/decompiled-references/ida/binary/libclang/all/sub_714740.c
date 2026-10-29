char __fastcall sub_714740(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v5; // r12
  __int64 v6; // rdi
  char v7; // dl
  unsigned __int64 v8; // rax
  unsigned __int64 v10; // rax
  char v11; // rdx^4
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r12
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rbx
  __int64 v20; // r14
  unsigned __int64 v21; // r15
  unsigned __int64 v22; // rax
  __int64 v23; // [rsp+8h] [rbp-60h] BYREF
  _QWORD v24[11]; // [rsp+10h] [rbp-58h] BYREF

  v23 = a2;
  v5 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v7 = *(_BYTE *)(v6 + 16);
  if ( (unsigned __int8)(v7 - 2) <= 4u )
  {
    v8 = sub_6CB5B0((_QWORD *)a1, a2);
    return sub_714740(a1, v8, a3);
  }
  if ( a3 )
  {
    if ( !(unsigned __int8)sub_B198D0(&v23, a1) )
      return 0;
    v5 = *(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFF0LL);
    v10 = *(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL;
    v6 = *(_QWORD *)v10;
    v7 = *(_BYTE *)(*(_QWORD *)v10 + 16LL);
  }
  switch ( v7 )
  {
    case 13:
      if ( (((*(_WORD *)(v6 + 18) >> 3) + 77) & 0x1FFu) > 0x13 )
      {
        if ( *(_BYTE *)(v5 + 16) == 32 )
        {
LABEL_9:
          (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 17272) + 16LL))(*(_QWORD *)(a1 + 17272), v5);
          return v11 ^ 1;
        }
        return 0;
      }
      if ( *(_BYTE *)(v5 + 16) == 10 )
        return ((*(_DWORD *)(v5 + 32) >> 1) & 0xFFFFFF) == sub_6F6DE0(a1, v5);
      return 1;
    case 46:
      v12 = sub_B14A40(v6);
      v5 = *(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(v12 + 74) & 1) == 0 && *(_QWORD *)(v12 + 128) <= 7u )
      {
        v13 = *(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL;
        v6 = *(_QWORD *)v13;
        v7 = *(_BYTE *)(*(_QWORD *)v13 + 16LL);
        break;
      }
      if ( *(_BYTE *)(v5 + 16) == 10 )
        return ((*(_DWORD *)(v5 + 32) >> 1) & 0xFFFFFF) == sub_6F6DE0(a1, v5);
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 10 )
        return 1;
LABEL_21:
      v5 = sub_B0D320(v5);
      if ( !v5 )
        return 1;
      return ((*(_DWORD *)(v5 + 32) >> 1) & 0xFFFFFF) == sub_6F6DE0(a1, v5);
    case 10:
      if ( *(_BYTE *)(v5 + 16) == 10 )
        return ((*(_DWORD *)(v5 + 32) >> 1) & 0xFFFFFF) == sub_6F6DE0(a1, v5);
      goto LABEL_21;
  }
  if ( v7 == 41 )
    return 1;
  if ( *(_BYTE *)(v5 + 16) == 32 )
    goto LABEL_9;
  if ( v7 == 32 )
  {
    v5 = sub_B0D320(v5);
    if ( v5 )
      goto LABEL_9;
    v14 = *(_QWORD *)(*(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
    v6 = *(_QWORD *)v14;
    v7 = *(_BYTE *)(*(_QWORD *)v14 + 16LL);
  }
  if ( v7 != 47 )
    return 0;
  v15 = sub_B14A40(v6);
  v16 = v15;
  if ( *(char *)(v15 + 28) < 0 )
    return 0;
  if ( *(_BYTE *)(v15 + 73) >> 5 != 2 )
  {
    v17 = sub_713240(a1, v15, a3);
    v24[1] = v18;
    v24[0] = v17;
    if ( (_BYTE)v18 )
    {
      v19 = v24[0];
      return v19 == sub_6F6DE0(a1, *(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFF0LL));
    }
    return 0;
  }
  sub_70D900((__int64)v24, a1, *(_QWORD *)(v15 + 48));
  v20 = v24[0];
  v21 = sub_7868A0(v16);
  if ( v21 )
  {
LABEL_36:
    if ( !(unsigned __int8)sub_714740(a1, *(_QWORD *)(v21 + 48), a3) )
      return 0;
    sub_70D900((__int64)v24, a1, *(_QWORD *)(*(_QWORD *)(v21 + 48) & 0xFFFFFFFFFFFFFFF0LL));
    if ( v20 != v24[0] )
      return 0;
    while ( 1 )
    {
      v22 = *(_QWORD *)(v21 + 8);
      v21 = v22 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v22 <= 7 )
        break;
      if ( (*(_BYTE *)(v21 + 28) & 0x7Fu) - 47 <= 2 )
        goto LABEL_36;
    }
  }
  return sub_7868A0(v16) != 0;
}

