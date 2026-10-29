__int64 __fastcall sub_70E310(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r12
  __int64 v7; // rdi
  char v8; // al
  __int64 v9; // rax
  _QWORD v10[9]; // [rsp+0h] [rbp-48h] BYREF

  v3 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  v4 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 5 )
  {
    v5 = 0;
    if ( (unsigned __int8)sub_B19120(v4, 0) )
      return v5;
    v4 = *(_QWORD *)v3;
  }
  sub_70D900((__int64)v10, a1, v4);
  v5 = v10[0];
  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v3 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v8 = *(_BYTE *)(v7 + 16);
  if ( v10[0] > 0LL )
  {
    switch ( v8 )
    {
      case 13:
        if ( (((*(_WORD *)(v7 + 18) >> 3) + 77) & 0x1FFu) > 0x13 )
          return v5;
        break;
      case 46:
        v9 = sub_B14A40(v7);
        if ( (*(_BYTE *)(v9 + 74) & 1) == 0 && *(_QWORD *)(v9 + 128) <= 7u )
        {
          v8 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v3 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
          goto LABEL_6;
        }
        break;
      case 10:
        break;
      default:
        goto LABEL_6;
    }
    sub_70D900((__int64)v10, a1, *(_QWORD *)(*(_QWORD *)(a1 + 18560) & 0xFFFFFFFFFFFFFFF0LL));
    if ( v5 < v10[0] )
      return v10[0];
    return v5;
  }
LABEL_6:
  if ( (unsigned __int8)(v8 - 2) > 4u )
    return v5;
  sub_70D900((__int64)v10, a1, *(_QWORD *)(*(_QWORD *)(a1 + 18896) & 0xFFFFFFFFFFFFFFF0LL));
  return v10[0];
}

