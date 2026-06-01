__int64 __fastcall sub_78ED00(__int64 a1, __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned __int8 v4; // r13
  _QWORD *v5; // r14
  unsigned int v7; // ebp
  __int64 v9; // rcx
  _QWORD *v10; // rdi
  int v11; // eax
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int64 result; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rbx
  _QWORD *v23; // rdi
  __int64 v24; // rax
  char v25; // al
  char v26; // dl
  bool v27; // cl
  unsigned __int8 v28; // al
  __int64 v29; // rax
  _QWORD *v30; // rsi
  char v31; // al
  unsigned __int8 v32[41]; // [rsp+Fh] [rbp-29h] BYREF

  v5 = (_QWORD *)a2;
  v7 = a3;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v17 = sub_79A2B0(a2);
    a3 = *(_QWORD *)v17;
    v18 = *(_QWORD *)v17 + 8LL * *(unsigned int *)(v17 + 8);
    if ( a3 < v18 )
    {
      while ( *(_WORD *)(*(_QWORD *)a3 + 32LL) != 230 )
      {
        a3 += 8LL;
        if ( v18 == a3 )
          goto LABEL_2;
      }
    }
    else
    {
      if ( a3 == v18 )
        goto LABEL_2;
      while ( *(_WORD *)(*(_QWORD *)v18 + 32LL) != 230 )
      {
        v18 += 8LL;
        if ( a3 == v18 )
          goto LABEL_2;
      }
    }
    if ( a3 != v18 )
      return 18;
  }
LABEL_2:
  v9 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( (unsigned __int8)v9 > 0x39u )
  {
    if ( (unsigned __int8)v9 <= 0x3Fu )
    {
      if ( (unsigned __int8)v9 > 0x3Du )
      {
        a2 = 1;
        if ( !sub_784CB0(v5, 1) )
          return 17;
      }
      goto LABEL_8;
    }
    if ( (unsigned __int8)v9 > 0x4Au )
    {
      v9 = ((_BYTE)v9 + 53) & 0x7F;
      if ( (unsigned __int8)v9 <= 3u )
        return 17;
      goto LABEL_8;
    }
    if ( (unsigned __int8)v9 <= 0x48u && (_BYTE)v9 != 66 )
    {
LABEL_8:
      v10 = (_QWORD *)(v5[2] & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v5[2] & 4) != 0 )
        v10 = (_QWORD *)*v10;
      v11 = *(_BYTE *)(sub_79C2A0(v10, a2, a3, v9) + 8) & 0x7F;
      if ( !v11 || v11 == 22 )
        return sub_78D6C0(a1, (__int64)v5, v7, a4);
      v13 = v5[2] & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v5[2] & 4) != 0 )
        v13 = *(_QWORD *)v13;
      v14 = *(_BYTE *)(v13 + 8) & 0x7F;
      if ( (unsigned __int8)v14 > 0x37u )
      {
        if ( (unsigned __int8)v14 <= 0x3Bu )
          return sub_78E0F0(a1, (__int64)v5, v7, a4);
      }
      else if ( (unsigned __int8)v14 > 0x10u )
      {
        if ( (((_BYTE)v14 + 96) & 0x7Fu) <= 5 )
          return sub_78E850(a1, (__int64)v5, v7, v12);
      }
      else
      {
        v15 = 65922;
        if ( _bittest64(&v15, v14) )
          return sub_78E850(a1, (__int64)v5, v7, v12);
      }
      return 17;
    }
    return 22;
  }
  if ( (unsigned __int8)v9 <= 0x28u )
  {
    LODWORD(v9) = ((_BYTE)v9 + 116) & 0x7F;
    switch ( (char)v9 )
    {
      case 0:
      case 4:
      case 5:
      case 7:
      case 8:
      case 9:
        return 22;
      case 16:
        if ( (v7 & 4) != 0 )
        {
          v31 = sub_B15EF0(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL));
          v27 = 1;
          v26 = 2;
          v25 = v31 & 7;
        }
        else
        {
          v4 = sub_B16640(a1);
          v25 = v4 & 7;
          v26 = (v4 >> 3) & 3;
          v27 = (v4 & 0x20) != 0;
        }
        v32[0] = ((32 * v27) | v25 | (8 * v26)) & 0x3F | v4 & 0xC0;
        v28 = sub_6A3980(a1, a2 + 64, v7);
        sub_779E00(v32, v28);
        result = v32[0];
        break;
      case 19:
        if ( (*(_BYTE *)(*(_QWORD *)(sub_798D40(a2) + 2160) + 1LL) & 8) != 0 )
        {
          v29 = *(_QWORD *)(a2 + 16);
          v30 = (_QWORD *)(v29 & 0xFFFFFFFFFFFFFFF8LL);
          if ( (v29 & 4) != 0 )
            v30 = (_QWORD *)*v30;
          if ( v30 )
            v30 -= 8;
          result = sub_78C840(a1, (__int64)v30, v7);
        }
        else
        {
          result = 20;
        }
        break;
      default:
        v9 = (unsigned int)v9;
        goto LABEL_8;
    }
    return result;
  }
  if ( ((1LL << v9) & 0x480A0000000000LL) != 0 )
    return 17;
  a3 = 0x2200000000000LL;
  if ( ((1LL << v9) & 0x2200000000000LL) != 0 )
    return 22;
  if ( (_BYTE)v9 != 57 )
    goto LABEL_8;
  v19 = *(_QWORD *)(a2 + 128);
  if ( !v19 || (*(_BYTE *)(v19 + 10) & 0x20) == 0 )
    goto LABEL_8;
  if ( (*(_BYTE *)(v19 + 108) & 1) != 0 || !(*(_DWORD *)(v19 + 108) >> 1) )
    return 18;
  v22 = sub_7A4600(a2);
  v23 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    v23 = (_QWORD *)*v23;
  v24 = sub_79C2A0(v23, a2, v20, v21);
  return sub_78F100(a1, v24, v22, v7);
}

