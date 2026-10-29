__int64 __fastcall sub_8425B0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // [rsp+0h] [rbp-38h]
  _QWORD v12[4]; // [rsp+18h] [rbp-20h] BYREF

  v5 = *(_QWORD *)(*(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
  switch ( *(_BYTE *)(v5 + 16) )
  {
    case 0:
    case 1:
    case 4:
    case 8:
    case 9:
    case 0xC:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x1C:
    case 0x1D:
    case 0x1F:
    case 0x24:
    case 0x25:
    case 0x27:
    case 0x2C:
    case 0x2D:
    case 0x31:
    case 0x34:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
      sub_8442A0(a1, a2, v5, a4);
      break;
    case 2:
    case 3:
      sub_841FE0(a1, a2, v5, a4);
      break;
    case 5:
    case 6:
    case 7:
    case 0xA:
    case 0xB:
    case 0xF:
    case 0x10:
    case 0x11:
    case 0x19:
    case 0x1A:
    case 0x1B:
    case 0x1E:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x26:
    case 0x28:
    case 0x29:
    case 0x2A:
    case 0x2B:
    case 0x30:
    case 0x32:
    case 0x33:
    case 0x35:
      sub_8242A0(*a2, a2[2], v5 & 0xFFFFFFFFFFFFFFF0LL);
      *(_BYTE *)(a1 + 56) = 0;
      break;
    case 0xD:
      sub_8414A0(a1, a2, v5, a4, 0);
      break;
    case 0xE:
      sub_8438C0(a1, a2, v5, a4);
      break;
    case 0x2E:
      v11 = v5;
      v7 = sub_B14A40(v5);
      v8 = v11;
      v9 = *(_QWORD *)(v7 + 128);
      if ( v9 <= 7 )
      {
        v10 = 0;
      }
      else
      {
        if ( (v9 & 4) != 0 )
        {
          v12[0] = *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF8LL);
          v9 = sub_6B3060(v12, (__int64)a2);
          v8 = v11;
        }
        v10 = v9 & 0xFFFFFFFFFFFFFFF0LL;
      }
      sub_8414A0(
        a1,
        a2,
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
        a4,
        v8);
      break;
    case 0x2F:
      sub_842700(a1, a2, v5, a4);
      break;
  }
  return a1;
}

