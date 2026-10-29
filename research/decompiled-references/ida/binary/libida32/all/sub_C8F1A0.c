__int64 __fastcall sub_C8F1A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rsi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r13
  _QWORD *v8; // rbp
  __int64 v9; // rax
  __int64 v10; // r8
  unsigned int v11; // r15d
  __int64 v12; // r14
  char v14; // al
  __int64 v15; // r15
  __int64 v16; // r13
  __int64 v17; // [rsp+0h] [rbp-58h]
  __int64 v18[8]; // [rsp+18h] [rbp-40h] BYREF

  v3 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v5 = *v3;
  v6 = *(unsigned __int8 *)(*v3 + 16);
  if ( (unsigned __int8)(v6 - 2) > 4u )
  {
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
      BUG();
    v5 = sub_F3F310(
           *v3,
           v3,
           (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2,
           v6);
  }
  v7 = *(_QWORD *)(v5 + 32);
  v8 = *(_QWORD **)(v5 + 40);
  if ( (*(_BYTE *)(v5 + 19) & 2) != 0 )
  {
    if ( *((_DWORD *)v8 + 2) <= 0x40u )
      v8 = (_QWORD *)*v8;
    else
      v8 = *(_QWORD **)*v8;
  }
  v9 = sub_CC2440(*(_QWORD *)(a1 + 488), v7);
  v11 = v9;
  if ( BYTE4(v9) )
  {
    v12 = 0;
    if ( !v8 )
      return 1;
    while ( (unsigned __int8)sub_C8ED90(a1, v11, v7, a3, v10) )
    {
      v18[0] = a3 | 4;
      if ( !(unsigned __int8)sub_C81040(a1, v11, v12, v18) )
        break;
      if ( v8 == (_QWORD *)++v12 )
        return 1;
    }
  }
  else
  {
    v14 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    if ( v14 == 48 )
    {
      v17 = sub_C8D540(a1, v7);
      if ( !v8 )
        return 1;
      v16 = 0;
      while ( 1 )
      {
        v18[0] = a3 | 4;
        if ( !(unsigned __int8)sub_C80730(a1, v16, v18) )
          break;
        v18[0] = a3 | 4;
        if ( !(unsigned __int8)sub_C7C390(a1, 5, v18) )
          break;
        if ( !(unsigned __int8)sub_C8F450(a1, v17, a3) )
          break;
        v18[0] = a3 | 4;
        if ( !(unsigned __int8)sub_C7EAC0(a1, v18) )
          break;
        if ( v8 == (_QWORD *)++v16 )
          return 1;
      }
    }
    else if ( (unsigned __int8)(v14 - 2) <= 4u )
    {
      if ( !v8 )
        return 1;
      v15 = 0;
      while ( 1 )
      {
        v18[0] = a3 | 4;
        if ( !(unsigned __int8)sub_C80730(a1, v15, v18) )
          break;
        v18[0] = a3 | 4;
        if ( !(unsigned __int8)sub_C7C390(a1, 5, v18) )
          break;
        if ( !(unsigned __int8)sub_C8F1A0(a1, v7, a3) )
          break;
        v18[0] = a3 | 4;
        if ( !(unsigned __int8)sub_C7EAC0(a1, v18) )
          break;
        if ( v8 == (_QWORD *)++v15 )
          return 1;
      }
    }
  }
  return 0;
}

