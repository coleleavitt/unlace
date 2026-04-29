__int64 __fastcall sub_251E00(__int64 *a1, __int64 a2, __int64 a3)
{
  int v5; // eax
  __int64 result; // rax
  int v7; // edx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 *v11; // rax
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rbp
  __int64 v18; // r13
  __int64 v19; // r15
  __int64 i; // r12
  _QWORD *v21; // rbp
  __int64 v22; // rsi
  __int64 v23; // r12

  v5 = *((_DWORD *)a1 + 2);
  *((_DWORD *)a1 + 2) = v5 & 0xFFFFFFFE;
  if ( (v5 & 0x10) != 0 )
  {
    if ( *(int *)(a2 + 8) <= 69 )
      return 0;
    if ( (v5 & 2) == 0 )
    {
LABEL_4:
      result = (*(__int64 (__fastcall **)(__int64 *, __int64))(*a1 + 16))(a1, a2);
      v7 = *((_DWORD *)a1 + 2);
      if ( (_DWORD)result )
        goto LABEL_5;
      goto LABEL_12;
    }
  }
  else if ( (v5 & 2) == 0 )
  {
    if ( *(int *)(a2 + 8) > 69 )
      goto LABEL_4;
    goto LABEL_11;
  }
  v9 = a1[3];
  v10 = a1[2];
  if ( a1[4] < (unsigned __int64)(v9 + 1) )
  {
    v14 = qvector_reserve(a1 + 2, v10, v9 + 1, 8);
    a1[2] = v14;
    v10 = v14;
    v9 = a1[3];
  }
  *(_QWORD *)(v10 + 8 * v9) = a3;
  ++a1[3];
  if ( *(int *)(a2 + 8) > 69 )
    goto LABEL_4;
LABEL_11:
  result = (*(__int64 (__fastcall **)(__int64 *, __int64))(*a1 + 24))(a1, a2);
  v7 = *((_DWORD *)a1 + 2);
  if ( (_DWORD)result )
    goto LABEL_5;
LABEL_12:
  if ( (v7 & 1) == 0 )
  {
    switch ( *(_DWORD *)(a2 + 8) )
    {
      case 0:
      case 0x3D:
      case 0x3E:
      case 0x3F:
      case 0x40:
      case 0x41:
      case 0x44:
      case 0x45:
      case 0x46:
      case 0x4E:
      case 0x4F:
      case 0x51:
      case 0x52:
        goto LABEL_23;
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 0xA:
      case 0xB:
      case 0xC:
      case 0xD:
      case 0xE:
      case 0xF:
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x17:
      case 0x18:
      case 0x19:
      case 0x1A:
      case 0x1B:
      case 0x1C:
      case 0x1D:
      case 0x1E:
      case 0x1F:
      case 0x20:
      case 0x21:
      case 0x22:
      case 0x23:
      case 0x24:
      case 0x25:
      case 0x26:
      case 0x27:
      case 0x28:
      case 0x29:
      case 0x2A:
      case 0x2B:
      case 0x2C:
      case 0x2D:
      case 0x3A:
        result = sub_251E00(a1, *(_QWORD *)(a2 + 24), a2);
        if ( (_DWORD)result )
          goto LABEL_26;
        v15 = *(_QWORD **)(a2 + 32);
        goto LABEL_33;
      case 0x10:
        result = sub_251E00(a1, *(_QWORD *)(a2 + 24), a2);
        if ( (_DWORD)result )
          goto LABEL_26;
        result = sub_251E00(a1, *(_QWORD *)(a2 + 32), a2);
        if ( (_DWORD)result )
          goto LABEL_26;
        v15 = *(_QWORD **)(a2 + 40);
        goto LABEL_33;
      case 0x2E:
      case 0x2F:
      case 0x30:
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x3B:
      case 0x3C:
      case 0x42:
      case 0x43:
      case 0x48:
      case 0x50:
      case 0x54:
        goto LABEL_32;
      case 0x39:
        result = sub_251E00(a1, *(_QWORD *)(a2 + 24), a2);
        if ( (_DWORD)result )
          goto LABEL_26;
        v11 = *(__int64 **)(a2 + 32);
        v12 = *v11;
        if ( !(72 * v11[1]) )
          goto LABEL_22;
        while ( 1 )
        {
          result = sub_251E00(a1, v12, a2);
          if ( (_DWORD)result )
            goto LABEL_26;
          v12 += 72;
          if ( v12 == **(_QWORD **)(a2 + 32) + 72LL * *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL) )
            goto LABEL_22;
        }
      case 0x47:
        result = sub_2525C0(a1, *(_QWORD *)(a2 + 24), a2);
        v7 = *((_DWORD *)a1 + 2);
        if ( (_DWORD)result )
          goto LABEL_5;
        goto LABEL_23;
      case 0x49:
        v21 = *(_QWORD **)(a2 + 24);
        result = sub_251E00(a1, v21[8], a2);
        if ( !(_DWORD)result )
        {
          v22 = v21[9];
          if ( !v22 )
            goto LABEL_49;
          result = sub_251E00(a1, v22, a2);
          if ( !(_DWORD)result )
            goto LABEL_49;
        }
        goto LABEL_26;
      case 0x4A:
        result = sub_251E00(a1, *(_QWORD *)(a2 + 24) + 72LL, a2);
        if ( !(_DWORD)result )
        {
          result = sub_251E00(a1, *(_QWORD *)(a2 + 24) + 136LL, a2);
          if ( !(_DWORD)result )
            goto LABEL_31;
        }
        goto LABEL_26;
      case 0x4B:
      case 0x4C:
LABEL_31:
        result = sub_251E00(a1, *(_QWORD *)(*(_QWORD *)(a2 + 24) + 64LL), a2);
        if ( (_DWORD)result )
          goto LABEL_26;
LABEL_32:
        v15 = *(_QWORD **)(a2 + 24);
        goto LABEL_33;
      case 0x4D:
        v21 = *(_QWORD **)(a2 + 24);
        v23 = v21[14];
        if ( !(56LL * v21[15]) )
          goto LABEL_49;
        while ( 1 )
        {
          result = sub_251E00(a1, v23, a2);
          if ( (_DWORD)result )
            goto LABEL_26;
          v23 += 56;
          if ( v23 == v21[14] + 56LL * v21[15] )
          {
            v21 = *(_QWORD **)(a2 + 24);
LABEL_49:
            v15 = v21;
LABEL_33:
            if ( !v15 )
              goto LABEL_22;
            result = sub_251E00(a1, v15, a2);
            v7 = *((_DWORD *)a1 + 2);
            if ( !(_DWORD)result )
              goto LABEL_23;
            goto LABEL_5;
          }
        }
      case 0x53:
        result = sub_2525C0(a1, *(_QWORD *)(a2 + 24), a2);
        if ( (_DWORD)result )
          goto LABEL_26;
        v16 = *(_QWORD *)(a2 + 24);
        v17 = *(_QWORD *)(v16 + 24);
        v18 = v17 + 48LL * *(_QWORD *)(v16 + 32);
        if ( v18 == v17 )
          goto LABEL_22;
        break;
      default:
        if ( !under_debugger )
          sub_37EEE0(50065);
        BUG();
    }
    while ( 1 )
    {
      result = sub_2525C0(a1, v17, a2);
      if ( (_DWORD)result )
        goto LABEL_26;
      v19 = *(_QWORD *)(v17 + 24);
      for ( i = v19 + 88LL * *(_QWORD *)(v17 + 32); i != v19; v19 += 88 )
      {
        result = sub_251E00(a1, v19, a2);
        if ( (_DWORD)result )
          goto LABEL_26;
      }
      v17 += 48;
      if ( v18 == v17 )
      {
LABEL_22:
        v7 = *((_DWORD *)a1 + 2);
        break;
      }
    }
  }
LABEL_23:
  result = v7 & 4;
  if ( (v7 & 4) == 0 )
    goto LABEL_5;
  v13 = *a1;
  if ( *(int *)(a2 + 8) > 69 )
  {
    result = (*(__int64 (__fastcall **)(__int64 *, __int64))(v13 + 32))(a1, a2);
LABEL_26:
    v7 = *((_DWORD *)a1 + 2);
    goto LABEL_5;
  }
  result = (*(__int64 (__fastcall **)(__int64 *, __int64))(v13 + 40))(a1, a2);
  v7 = *((_DWORD *)a1 + 2);
LABEL_5:
  if ( (v7 & 2) != 0 )
  {
    v8 = a1[3];
    if ( v8 )
      a1[3] = v8 - 1;
  }
  return result;
}
