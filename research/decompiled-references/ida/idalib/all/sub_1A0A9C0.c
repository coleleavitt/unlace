__int64 __fastcall sub_1A0A9C0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rsi
  unsigned __int64 v15; // rax
  _QWORD *v16; // rdx

  if ( !(unsigned int)sub_B76070(a2[1], (__int64)a2, a3, a4) )
    return 0;
  v8 = (__int64 *)(*(_QWORD *)(**(_QWORD **)(a2[1] + 120LL) + 48LL) & 0xFFFFFFFFFFFFFFF0LL);
  v9 = *v8;
  if ( (unsigned int)*(unsigned __int8 *)(*v8 + 16) - 43 <= 1
    || (v10 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43,
        (unsigned int)v10 <= 1)
    && (v9 = sub_F63050(*v8, a2, v10, v4)) != 0 )
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)(v9 + 32);
      if ( (*(_BYTE *)(v9 + 18) & 0x10) == 0 )
        break;
      while ( 1 )
      {
        v9 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
        v11 = (unsigned int)*(unsigned __int8 *)(v9 + 16) - 43;
        if ( (unsigned int)v11 <= 1 )
          break;
        v12 = sub_F63050(v9, a2, v11, v4);
        v10 = *(_QWORD *)(v12 + 32);
        if ( (*(_BYTE *)(v12 + 18) & 0x10) == 0 )
          goto LABEL_7;
      }
    }
LABEL_7:
    v8 = (__int64 *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
  }
  v13 = *(_QWORD *)((*a2 & 0xFFFFFFFFFFFFFFF8LL) + 16);
  v14 = (_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v13 & 4) != 0 )
    v14 = (_QWORD *)*v14;
  if ( v14 )
    v14 -= 8;
  v15 = sub_A7A9D0(a1, (__int64)v14, v10, v4, v5, v6);
  v16 = (_QWORD *)(v8[1] & 0xFFFFFFFFFFFFFFF0LL);
  LOBYTE(v16) = *v16 == *(_QWORD *)(*(_QWORD *)&byte_8[v15 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
  return (unsigned int)v16;
}
