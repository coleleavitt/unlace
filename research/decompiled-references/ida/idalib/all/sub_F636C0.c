__int64 __fastcall sub_F636C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  _QWORD *v8; // rax
  unsigned __int8 v9; // al
  unsigned __int8 v10; // al
  unsigned __int8 v11; // al
  __int64 v12; // rdx
  __int64 v13; // r13
  __int64 *v14; // rbx
  __int64 v15; // rax
  unsigned __int8 v16; // al
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rsi
  unsigned __int8 v22; // al
  unsigned __int8 v23[41]; // [rsp+Fh] [rbp-29h] BYREF

  switch ( *(_BYTE *)(a2 + 16) )
  {
    case 0:
    case 1:
    case 2:
    case 3:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 0xB:
    case 0xC:
    case 0xE:
    case 0x18:
    case 0x1E:
    case 0x1F:
    case 0x22:
    case 0x25:
    case 0x28:
    case 0x29:
    case 0x2A:
    case 0x2E:
    case 0x35:
    case 0x38:
    case 0x39:
    case 0x3A:
      result = sub_F638B0(a1, *(_QWORD *)(a2 + 32));
      break;
    case 4:
    case 0xA:
    case 0xD:
    case 0xF:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x1C:
    case 0x1D:
    case 0x20:
    case 0x26:
    case 0x27:
    case 0x2D:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x36:
    case 0x37:
      result = 22;
      break;
    case 0x19:
    case 0x23:
      result = sub_F638B0(a1, *(_QWORD *)(a2 + 24));
      break;
    case 0x1A:
      v11 = sub_F638B0(a1, *(_QWORD *)(a2 + 24));
      v12 = *(unsigned __int16 *)(a2 + 22);
      v23[0] = v11;
      v13 = a2 + 48 + 8 * v12;
      if ( a2 + 48 != v13 )
      {
        v14 = (__int64 *)(a2 + 48);
        do
        {
          v15 = *v14++;
          v16 = sub_F636C0(a1, *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL));
          sub_B72470(v23, v16);
        }
        while ( (__int64 *)v13 != v14 );
      }
      result = v23[0];
      break;
    case 0x1B:
      result = sub_F638B0(a1, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFFFFFF0LL) + 8LL));
      break;
    case 0x21:
      v23[0] = v23[0] & 0xC0 | 0x16;
      v8 = sub_F61C10(a2);
      if ( v8 )
      {
        v9 = sub_B81AA0(a1, (__int64)v8);
        sub_B72470(v23, v9);
      }
      else
      {
        v20 = *(_QWORD *)(a2 + 40);
        if ( ((*(__int64 *)(v20 + 8) >> 1) & 3) == 2 )
        {
          v21 = *(_QWORD *)(v20 + 16);
          if ( v21 )
          {
            v22 = sub_F636C0(a1, v21);
            sub_B72470(v23, v22);
          }
        }
      }
      v10 = sub_F638B0(a1, *(_QWORD *)(a2 + 32));
      sub_B72470(v23, v10);
      result = v23[0];
      break;
    case 0x24:
      v18 = sub_F62610(a2, a2, a3, a4, a5, a6);
      result = sub_B81AA0(a1, v18);
      break;
    case 0x2B:
    case 0x2C:
      v17 = sub_9B4870(a2, a2, a3, a4, a5);
      result = sub_F636C0(a1, *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0LL));
      break;
    case 0x2F:
    case 0x30:
      v19 = sub_F60E90(*(_QWORD **)(a2 + 24), a2, a3, a4, a5, a6);
      result = sub_B81AA0(a1, (__int64)v19);
      break;
  }
  return result;
}
