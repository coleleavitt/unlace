__int64 __fastcall sub_B83D40(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5)
{
  char v5; // r12
  unsigned int v6; // ebp
  _QWORD *v8; // rdi
  int v9; // eax
  unsigned __int64 v10; // rax
  unsigned __int8 v11; // cl
  __int64 result; // rax
  __int64 v13; // rax
  __int64 *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  _QWORD *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // r12
  unsigned __int64 v22; // rdi
  __int64 v23; // rax
  unsigned __int8 v24; // al
  unsigned __int8 v25[41]; // [rsp+Fh] [rbp-29h] BYREF

  v5 = a4;
  v6 = a3;
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_2;
  v13 = sub_B8C3D0(a2);
  a3 = *(_QWORD *)v13;
  a4 = *(_QWORD *)v13 + 8LL * *(unsigned int *)(v13 + 8);
  if ( *(_QWORD *)v13 < a4 )
  {
    v14 = *(__int64 **)v13;
    while ( 1 )
    {
      a3 = *v14;
      if ( *(_WORD *)(*v14 + 36) == 238 )
        break;
      if ( (__int64 *)a4 == ++v14 )
        goto LABEL_2;
    }
    if ( (__int64 *)a4 == v14 )
      goto LABEL_2;
    return 18;
  }
  if ( a3 != a4 )
  {
    while ( *(_WORD *)(*(_QWORD *)a4 + 36LL) != 238 )
    {
      a4 += 8LL;
      if ( a3 == a4 )
        goto LABEL_2;
    }
    return 18;
  }
LABEL_2:
  switch ( (*(_BYTE *)(a2 + 28) + 114) & 0x7F )
  {
    case 0:
    case 4:
    case 5:
    case 7:
    case 8:
    case 9:
    case 0x21:
    case 0x25:
    case 0x36:
    case 0x3D:
    case 0x3E:
      return 22;
    case 0x10:
      v25[0] = sub_B72810(a1, *(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL), v6);
      v24 = sub_A51550(a1, a2 + 64, v6);
      sub_B72470(v25, v24);
      return v25[0];
    case 0x13:
      v15 = *(_QWORD *)(sub_B8C330(a2) + 2320);
      result = 20;
      if ( (*(_BYTE *)(v15 + 1) & 8) != 0 )
      {
        v16 = *(_QWORD *)(a2 + 16);
        v17 = (_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF8LL);
        if ( (v16 & 4) != 0 )
          v17 = (_QWORD *)*v17;
        if ( v17 )
          v17 -= 8;
        return sub_B816E0(a1, (__int64)v17, v6);
      }
      return result;
    case 0x1D:
    case 0x1F:
    case 0x27:
    case 0x2A:
    case 0x3F:
    case 0x40:
    case 0x42:
    case 0x43:
      return 17;
    case 0x2D:
      v18 = *(_QWORD *)(a2 + 128);
      if ( !v18 || (*(_BYTE *)(v18 + 10) & 0x20) == 0 )
        goto LABEL_4;
      if ( (*(_BYTE *)(v18 + 108) & 1) != 0 || !(*(_DWORD *)(v18 + 108) >> 1) )
        return 18;
      v19 = sub_B970F0(a2);
      v20 = *(_QWORD *)(a2 + 16);
      v21 = v19;
      if ( (v20 & 4) != 0 )
        v22 = *(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFF8LL);
      else
        v22 = v20 & 0xFFFFFFFFFFFFFFF8LL;
      v23 = sub_B8EAA0(v22);
      return sub_B84060(a1, v23, v21, v6);
    case 0x32:
    case 0x33:
      if ( sub_B7A5B0((_QWORD *)a2, 1, a3, a4, a5) )
        goto LABEL_4;
      return 17;
    default:
LABEL_4:
      v8 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
      {
        v9 = *(_BYTE *)(sub_B8EAA0(*v8) + 8) & 0x7F;
        if ( !v9 )
          return sub_B82FC0(a1, a2, v6, v5);
      }
      else
      {
        v9 = *(_BYTE *)(sub_B8EAA0(v8) + 8) & 0x7F;
        if ( !v9 )
          return sub_B82FC0(a1, a2, v6, v5);
      }
      if ( v9 == 24 )
        return sub_B82FC0(a1, a2, v6, v5);
      v10 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
        v10 = *(_QWORD *)v10;
      v11 = *(_BYTE *)(v10 + 8) & 0x7F;
      if ( v11 <= 0x39u )
      {
        if ( v11 > 0x12u )
        {
          if ( ((v11 + 94) & 0x7Fu) <= 5 )
            return sub_B83860(a1, a2, v6);
        }
        else if ( ((1LL << v11) & 0x40182) != 0 )
        {
          return sub_B83860(a1, a2, v6);
        }
        return 17;
      }
      if ( v11 > 0x3Du )
        return 17;
      return sub_B829E0(a1, a2, v6, v5);
  }
}
