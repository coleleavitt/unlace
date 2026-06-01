__int64 __fastcall sub_61B330(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 *v4; // rbx
  __int64 v5; // rdi
  unsigned int v6; // eax
  __int64 *v8; // rax

  while ( 2 )
  {
    v3 = a3;
    v4 = a1;
    v5 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (a2 & 7) != 0 || (a2 & 8) != 0 )
    {
LABEL_4:
      v6 = sub_B1AFD0(v5 & 0xFFFFFFFFFFFFFFF0LL);
      return sub_61E9E0(
               v4,
               *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL),
               v6 * ((v3 != 0) + (v3 - (unsigned __int64)(v3 != 0)) / v6));
    }
    switch ( *(_BYTE *)(v5 + 16) )
    {
      case 0:
        return sub_61D5D0(v4, a2, a3);
      case 1:
        return sub_61D580(v4, a2, a3);
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
        return sub_61D4E0(v4, a2, a3);
      case 7:
        return sub_61D730(v4, a2, a3);
      case 8:
        return sub_61D260(v4, a2, a3);
      case 9:
        return sub_61D300(v4, a2, a3);
      case 0xA:
      case 0xE:
      case 0x10:
      case 0x12:
      case 0x13:
      case 0x15:
      case 0x17:
      case 0x1E:
      case 0x1F:
      case 0x2C:
      case 0x2D:
      case 0x38:
      case 0x39:
        return 0;
      case 0xB:
        return sub_61D120(v4, a2, a3);
      case 0xC:
        return sub_61D2B0(v4, a2, a3);
      case 0xD:
        return sub_619870(v4, a2, (unsigned int *)a3);
      case 0xF:
        return sub_619810(v4, a2);
      case 0x11:
        return sub_619380(v4, *(_QWORD *)(a2 + 40), *(_DWORD *)a3);
      case 0x14:
        return sub_61B740(v4, *(_QWORD *)(a2 + 32), *(_QWORD *)(a3 + 8));
      case 0x16:
        return sub_61C800(v4, a2, a3);
      case 0x18:
        return sub_61D620(v4, a2, a3);
      case 0x19:
      case 0x1A:
        return sub_61D3A0(v4, a2, a3, 0);
      case 0x1B:
        return sub_61D350(v4, a2, a3);
      case 0x1C:
        return sub_6197B0(v4, a2, (unsigned int *)a3);
      case 0x1D:
        return sub_61D080(v4, a2, a3);
      case 0x20:
        return sub_61D170(v4, a2, a3);
      case 0x21:
        return sub_61CFE0(v4, a2, a3);
      case 0x22:
        return sub_61CE30(v4, a2, a3);
      case 0x23:
        return sub_619750(v4, a2, (unsigned int *)a3);
      case 0x24:
        return sub_61B000((__int64)v4, a2, a3);
      case 0x25:
        return sub_61D6E0(v4, a2, a3);
      case 0x26:
        return sub_61B620(v4, a2, a3);
      case 0x27:
        return sub_61D030(v4, a2, a3);
      case 0x28:
        return sub_61D780(v4, a2, a3);
      case 0x29:
        return sub_61D0D0(v4, a2, a3);
      case 0x2A:
        return sub_61D1C0(v4, a2, a3);
      case 0x2B:
        return sub_61D210(v4, a2, a3);
      case 0x2E:
      case 0x2F:
        return sub_619680(v4, a2, (unsigned int *)a3);
      case 0x30:
        return sub_61C8B0(v4, a2, a3);
      case 0x31:
        return sub_61C790(v4, a2, a3);
      case 0x32:
        return sub_619630(v4, a2);
      case 0x33:
      case 0x35:
        v8 = *(__int64 **)(a3 + 16);
        if ( v8 )
        {
          a3 = (__int64)(v8 + 1);
          a2 = *v8;
          a1 = v4;
          continue;
        }
        return 0;
      case 0x34:
        return sub_6195F0(v4, a2, (unsigned int *)a3);
      case 0x36:
        return sub_6195B0(v4, a2, (unsigned int *)a3);
      case 0x37:
        return sub_619540(v4, a2, (unsigned int *)a3);
      case 0x3A:
        goto LABEL_4;
    }
  }
}

