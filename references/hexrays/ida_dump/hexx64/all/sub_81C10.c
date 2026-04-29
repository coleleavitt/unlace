__int64 __fastcall sub_81C10(__int64 a1, __int64 *a2)
{
  __int64 *v2; // r14
  __int64 v3; // rdx
  size_t v4; // rax
  unsigned __int64 v5; // r13
  __int64 v6; // rdx
  size_t v7; // rax
  size_t v8; // rax
  __int64 result; // rax
  const char *v10; // rsi
  const char *v11; // rdi
  const char *v12; // rsi
  size_t v13; // rax
  __int64 *v14; // rax
  __int64 v15; // r13
  __int64 v16; // rbx
  int i; // r13d
  size_t v18; // rax
  const char *v19; // [rsp+0h] [rbp-68h] BYREF
  __int64 v20; // [rsp+8h] [rbp-60h]
  _BYTE v21[3]; // [rsp+1Eh] [rbp-4Ah] BYREF
  char v22[2]; // [rsp+21h] [rbp-47h] BYREF
  _BYTE v23[5]; // [rsp+23h] [rbp-45h] BYREF
  _QWORD v24[8]; // [rsp+28h] [rbp-40h] BYREF

  v2 = (__int64 *)(a1 + 72);
  v3 = *((unsigned int *)a2 + 2);
  v24[0] = __readfsqword(0x28u);
  v4 = pack_dd(v21, v23, v3) - (_QWORD)v21;
  if ( v4 )
    sub_7BEC0(v2, v21, v4);
  v5 = *a2;
  if ( *a2 == -1 )
  {
    sub_7A780(v2, 2);
  }
  else
  {
    if ( v5 >= *(_QWORD *)(a1 + 64) )
    {
      sub_7A780(v2, 0);
      v6 = v5 - *(_QWORD *)(a1 + 64);
    }
    else
    {
      sub_7A780(v2, 1);
      v6 = *(_QWORD *)(a1 + 64) + ~v5;
    }
    v7 = pack_dq(v21, v24, v6) - (_QWORD)v21;
    if ( v7 )
      sub_7BEC0(v2, v21, v7);
  }
  v8 = pack_dd(v21, v23, (unsigned int)(*((_DWORD *)a2 + 3) + 1)) - (_QWORD)v21;
  if ( v8 )
    sub_7BEC0(v2, v21, v8);
  if ( !(unsigned __int8)sub_7C970(a1, (_BYTE *)a2 + 48) )
    return 1;
  sub_7C7F0(v2, *((_DWORD *)a2 + 14));
  switch ( *((_DWORD *)a2 + 2) )
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
      goto LABEL_13;
    case 0x39:
      result = sub_255A80(a1, a2[3], a2);
      if ( (_DWORD)result )
        return result;
      if ( !(unsigned __int8)sub_7C970(a1, (_BYTE *)(a2[4] + 24)) )
        return 1;
      sub_7C7F0(v2, *(_DWORD *)(a2[4] + 32));
      sub_7C7F0(v2, *(_DWORD *)(a2[4] + 8));
      v14 = (__int64 *)a2[4];
      v15 = *v14;
      v16 = *v14 + 72 * v14[1];
      if ( v16 == *v14 )
        goto LABEL_35;
      break;
    case 0x3B:
      sub_7C7F0(v2, *((_DWORD *)a2 + 8));
      return 0;
    case 0x3C:
    case 0x41:
      sub_7C7F0(v2, *((_DWORD *)a2 + 8));
      goto LABEL_13;
    case 0x3D:
      sub_81170((_QWORD *)a1, (__int64 *)a2[3]);
      return 0;
    case 0x3E:
      for ( i = 0; i != 8; ++i )
      {
        v18 = pack_dw(v21, v22, *(unsigned __int16 *)(a2[3] + 2LL * i)) - (_QWORD)v21;
        if ( v18 )
          sub_7BEC0(v2, v21, v18);
      }
      sub_7C7F0(v2, *(_DWORD *)(a2[3] + 16));
      return 0;
    case 0x3F:
      sub_81980((__int64)&v19, (const char *)a2[3]);
      v12 = s1;
      if ( v20 )
        v12 = v19;
      sub_7C850(v2, v12);
      v11 = v19;
      if ( v19 )
        goto LABEL_22;
      return 0;
    case 0x40:
      v13 = pack_dq(v21, v24, a2[3] - *(_QWORD *)(a1 + 64)) - (_QWORD)v21;
      if ( v13 )
        sub_7BEC0(v2, v21, v13);
LABEL_13:
      sub_7C7F0(v2, *((_DWORD *)a2 + 10));
      return 0;
    case 0x44:
      sub_81980((__int64)&v19, (const char *)a2[3]);
      v10 = s1;
      if ( v20 )
        v10 = v19;
      sub_7C850(v2, v10);
      v11 = v19;
      if ( v19 )
      {
LABEL_22:
        v20 = 0;
        qfree(v11);
      }
      return 0;
    default:
      if ( !under_debugger )
        sub_383060(52345);
      BUG();
  }
  while ( 1 )
  {
    sub_7A780(v2, *(_BYTE *)(v15 + 60));
    sub_7C970(a1, (_BYTE *)(v15 + 64));
    result = sub_255A80(a1, v15, a2);
    if ( (_DWORD)result )
      break;
    v15 += 72;
    if ( v16 == v15 )
    {
LABEL_35:
      *(_DWORD *)(a1 + 8) |= 1u;
      return 0;
    }
  }
  return result;
}
