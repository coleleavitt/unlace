__int64 __fastcall sub_81C10(__int64 a1, __int64 a2)
{
  __int64 *v2; // r14
  size_t v3; // rax
  size_t v4; // rax
  size_t v5; // rax
  __int64 result; // rax
  const char *v7; // rsi
  __int64 v8; // rdi
  const char *v9; // rsi
  size_t v10; // rax
  __int64 *v11; // rax
  __int64 v12; // r13
  __int64 v13; // rbx
  int i; // r13d
  size_t v15; // rax
  const char *v16; // [rsp+0h] [rbp-68h] BYREF
  __int64 v17; // [rsp+8h] [rbp-60h]
  _BYTE v18[3]; // [rsp+1Eh] [rbp-4Ah] BYREF
  unsigned __int64 v19; // [rsp+28h] [rbp-40h]

  v2 = (__int64 *)(a1 + 72);
  v19 = __readfsqword(0x28u);
  v3 = pack_dd() - (_QWORD)v18;
  if ( v3 )
    sub_7BEC0(v2, v18, v3);
  if ( *(_QWORD *)a2 == -1 )
  {
    sub_7A780(v2, 2);
  }
  else
  {
    if ( *(_QWORD *)a2 >= *(_QWORD *)(a1 + 64) )
      sub_7A780(v2, 0);
    else
      sub_7A780(v2, 1);
    v4 = pack_dq() - (_QWORD)v18;
    if ( v4 )
      sub_7BEC0(v2, v18, v4);
  }
  v5 = pack_dd() - (_QWORD)v18;
  if ( v5 )
    sub_7BEC0(v2, v18, v5);
  if ( !(unsigned __int8)sub_7C970(a1, (_BYTE *)(a2 + 48)) )
    return 1;
  sub_7C7F0(v2);
  switch ( *(_DWORD *)(a2 + 8) )
  {
    case 0:
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
    case 0x10:
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
    case 0x2E:
    case 0x2F:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x3A:
    case 0x42:
    case 0x43:
    case 0x45:
      return 0;
    case 0x33:
    case 0x3B:
      goto LABEL_13;
    case 0x39:
      result = sub_255A80(a1, *(_QWORD *)(a2 + 24), a2);
      if ( (_DWORD)result )
        return result;
      if ( !(unsigned __int8)sub_7C970(a1, (_BYTE *)(*(_QWORD *)(a2 + 32) + 24LL)) )
        return 1;
      sub_7C7F0(v2);
      sub_7C7F0(v2);
      v11 = *(__int64 **)(a2 + 32);
      v12 = *v11;
      v13 = *v11 + 72 * v11[1];
      if ( v13 == *v11 )
        goto LABEL_35;
      break;
    case 0x3C:
    case 0x41:
      sub_7C7F0(v2);
      goto LABEL_13;
    case 0x3D:
      sub_81170((_QWORD *)a1, *(_QWORD *)(a2 + 24));
      return 0;
    case 0x3E:
      for ( i = 0; i != 8; ++i )
      {
        v15 = pack_dw() - (_QWORD)v18;
        if ( v15 )
          sub_7BEC0(v2, v18, v15);
      }
      goto LABEL_13;
    case 0x3F:
      sub_81980((__int64)&v16, *(const char **)(a2 + 24));
      v9 = s1;
      if ( v17 )
        v9 = v16;
      sub_7C850(v2, v9);
      v8 = (__int64)v16;
      if ( v16 )
        goto LABEL_22;
      return 0;
    case 0x40:
      v10 = pack_dq() - (_QWORD)v18;
      if ( v10 )
        sub_7BEC0(v2, v18, v10);
LABEL_13:
      sub_7C7F0(v2);
      return 0;
    case 0x44:
      sub_81980((__int64)&v16, *(const char **)(a2 + 24));
      v7 = s1;
      if ( v17 )
        v7 = v16;
      sub_7C850(v2, v7);
      v8 = (__int64)v16;
      if ( v16 )
      {
LABEL_22:
        v17 = 0;
        qfree(v8);
      }
      return 0;
    default:
      if ( !under_debugger )
        sub_383060(52345);
      BUG();
  }
  while ( 1 )
  {
    sub_7A780(v2, *(_BYTE *)(v12 + 60));
    sub_7C970(a1, (_BYTE *)(v12 + 64));
    result = sub_255A80(a1, v12, a2);
    if ( (_DWORD)result )
      break;
    v12 += 72;
    if ( v13 == v12 )
    {
LABEL_35:
      *(_DWORD *)(a1 + 8) |= 1u;
      return 0;
    }
  }
  return result;
}
