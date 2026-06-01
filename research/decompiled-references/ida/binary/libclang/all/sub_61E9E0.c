__int64 __fastcall sub_61E9E0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // r12
  __int64 v7; // rbp
  unsigned int v9; // eax
  _BOOL8 v10; // rsi
  __int64 v11; // rcx
  unsigned __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rbp
  unsigned int v18; // eax
  __int64 *v19; // rax
  __int64 v20; // rbp
  unsigned int v21; // eax
  _BOOL8 v22; // rsi
  __int64 v23; // rcx
  unsigned __int64 v24; // rbp
  unsigned int v25; // eax
  __int64 v26; // rbp
  unsigned int v27; // eax
  _BOOL8 v28; // rsi
  __int64 v29; // rcx
  unsigned __int64 v30; // rbp

  while ( 2 )
  {
    v6 = (__int64 *)a2;
    v7 = a3;
    switch ( *(_BYTE *)(a2 + 16) )
    {
      case 0:
      case 1:
      case 0xC:
        goto LABEL_5;
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
        return sub_61D4E0(a1, a2, a3);
      case 7:
        v7 = a3 + 12;
        goto LABEL_5;
      case 8:
        v26 = a3 + 8;
        v27 = sub_B1AFD0(*(_QWORD *)(a2 + 40));
        v28 = v26 != 0;
        v29 = v27;
        v30 = (v26 - v28) / (unsigned __int64)v27;
        v13 = v6[5];
        v14 = v29 * (v28 + v30);
        goto LABEL_6;
      case 9:
        v7 = a3 + 1;
        goto LABEL_5;
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
        v7 = a3 + 4;
        goto LABEL_5;
      case 0xD:
        return sub_619870(a1, a2, (unsigned int *)a3);
      case 0xF:
        return sub_619810(a1, a2);
      case 0x11:
        return sub_619380(a1, *(_QWORD *)(a2 + 40), *(_DWORD *)a3);
      case 0x14:
        return sub_61B740(a1, *(_QWORD *)(a2 + 32), *(_QWORD *)(a3 + 8));
      case 0x16:
        return sub_61C800(a1, (const __m128i *)a2, a3);
      case 0x18:
        return sub_61D620(a1, a2, a3);
      case 0x19:
      case 0x1A:
        return sub_61D3A0(a1, a2, a3, 0, a5, a6);
      case 0x1B:
      case 0x20:
        v7 = a3 + 16;
LABEL_5:
        v9 = sub_B1AFD0(*(_QWORD *)(a2 + 32));
        v10 = v7 != 0;
        v11 = v9;
        v12 = (v7 - v10) / (unsigned __int64)v9;
        v13 = v6[4];
        v14 = v11 * (v10 + v12);
        goto LABEL_6;
      case 0x1C:
        return sub_6197B0(a1, a2, (unsigned int *)a3);
      case 0x1D:
        v20 = a3 + 4;
        v21 = sub_B1AFD0(*(_QWORD *)(a2 + 24));
        v22 = v20 != 0;
        v23 = v21;
        v24 = (v20 - v22) / (unsigned __int64)v21;
        v13 = v6[3];
        v14 = v23 * (v22 + v24);
LABEL_6:
        v15 = v14;
        goto LABEL_7;
      case 0x21:
      case 0x25:
      case 0x28:
        v17 = a3 + 4;
        goto LABEL_10;
      case 0x22:
        return sub_61CE30(a1, a2, a3);
      case 0x23:
        return sub_619750(a1, a2, (unsigned int *)a3);
      case 0x24:
        return sub_61B000((__int64)a1, a2, a3);
      case 0x26:
        return sub_61B620(a1, a2, a3);
      case 0x27:
        v17 = a3 + 8;
LABEL_10:
        v18 = sub_B1AFD0(*(_QWORD *)(a2 + 32));
        v15 = v18 * ((v17 != 0) + (v17 - (unsigned __int64)(v17 != 0)) / v18);
        v13 = *(_QWORD *)(a2 + 32);
LABEL_7:
        v16 = v13;
        return sub_61B330(a1, v16, v15);
      case 0x29:
        return sub_61D0D0(a1, a2, a3);
      case 0x2A:
        return sub_61D1C0(a1, a2, a3);
      case 0x2B:
        return sub_61D210(a1, a2, a3);
      case 0x2E:
      case 0x2F:
        return sub_619680(a1, a2, (unsigned int *)a3);
      case 0x30:
        return sub_61C8B0(a1, (const __m128i *)a2, (unsigned int *)a3);
      case 0x31:
        return sub_61C790(a1, a2, (unsigned int *)a3);
      case 0x32:
        return sub_619630(a1, a2);
      case 0x33:
      case 0x35:
        v19 = *(__int64 **)(a3 + 16);
        if ( !v19 )
          return 0;
        v15 = (__int64)(v19 + 1);
        v16 = *v19;
        return sub_61B330(a1, v16, v15);
      case 0x34:
        return sub_6195F0(a1, a2, (unsigned int *)a3);
      case 0x36:
        return sub_6195B0(a1, a2, (unsigned int *)a3);
      case 0x37:
        return sub_619540(a1, a2, (unsigned int *)a3);
      case 0x3A:
        v25 = sub_B1AFD0(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL);
        a5 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
        a2 = a5;
        a3 = v25 * ((v7 != 0) + (v7 - (unsigned __int64)(v7 != 0)) / v25);
        continue;
    }
  }
}

