void __fastcall sub_ABE310(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // rbx
  unsigned __int8 v11; // al
  __int64 v12; // r12
  __int64 v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // r12
  __int64 v16; // rbx
  __int64 v17; // rsi
  __int64 v18; // r12
  __int64 *v19; // rbx
  __int64 v20; // rsi
  _BYTE v21[56]; // [rsp+0h] [rbp-38h] BYREF

  v5 = a2;
  switch ( *(_BYTE *)(a2 + 16) )
  {
    case 0:
    case 1:
    case 2:
    case 3:
    case 5:
    case 7:
    case 9:
    case 0xB:
    case 0xE:
    case 0x22:
    case 0x26:
    case 0x29:
    case 0x2A:
    case 0x36:
    case 0x39:
    case 0x3A:
      v6 = *(_QWORD *)(a2 + 32);
      goto LABEL_3;
    case 4:
    case 6:
    case 0x27:
      sub_ABF9B0(a1, *(_QWORD *)(a2 + 32));
      v7 = *(_QWORD *)(a2 + 40);
      goto LABEL_6;
    case 8:
      v6 = *(_QWORD *)(a2 + 40);
      if ( v6 != *(_QWORD *)(v5 + 48) )
        goto LABEL_3;
      return;
    case 0xA:
    case 0xC:
    case 0xD:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x1D:
    case 0x1E:
    case 0x1F:
    case 0x20:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x28:
    case 0x2E:
    case 0x2F:
    case 0x30:
    case 0x32:
    case 0x34:
    case 0x35:
    case 0x37:
    case 0x38:
      return;
    case 0xF:
    case 0x33:
      v7 = *(_QWORD *)(a2 + 24);
      goto LABEL_6;
    case 0x10:
      v15 = a2 + 48 + 24LL * *(unsigned int *)(a2 + 20);
      if ( a2 + 48 != v15 )
      {
        v16 = a2 + 48;
        do
        {
          v17 = v16;
          v16 += 24;
          sub_AC0110(a1, v17, 0);
        }
        while ( v15 != v16 );
      }
      return;
    case 0x15:
      sub_ABF9B0(a1, *(_QWORD *)(a2 + 40));
      v7 = *(_QWORD *)(a2 + 32);
LABEL_6:
      sub_ABAAB0(a1 + 8, 0, 0, v7, a1);
      return;
    case 0x19:
      sub_ABF9B0(a1, *(_QWORD *)(a2 + 24));
      return;
    case 0x1A:
      sub_ABF9B0(a1, *(_QWORD *)(a2 + 24));
      v18 = a2 + 48 + 8LL * *(unsigned __int16 *)(a2 + 22);
      if ( a2 + 48 != v18 )
      {
        v19 = (__int64 *)(a2 + 48);
        do
        {
          v20 = *v19++;
          sub_ABF9B0(a1, v20);
        }
        while ( (__int64 *)v18 != v19 );
      }
      return;
    case 0x1B:
      v6 = *(_QWORD *)(a2 + 40);
      if ( (v6 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
LABEL_3:
        sub_ABF9B0(a1, v6);
      return;
    case 0x1C:
      v9 = a2 + 64 + 32LL * *(_QWORD *)(a2 + 48);
      if ( a2 + 64 == v9 )
        return;
      v10 = a2 + 64;
      v11 = *(_BYTE *)(a2 + 64);
      if ( !v11 )
        goto LABEL_20;
      break;
    case 0x21:
      sub_AC0CD0();
      return;
    case 0x2B:
    case 0x2C:
      v8 = sub_990B30(a2, a2, a3, a4, a5);
      sub_ABF9B0(a1, v8);
      return;
    case 0x2D:
      sub_F3A7E0(v21, a2);
      sub_AC0110(a1, v21, 0);
      return;
    case 0x31:
      goto LABEL_20;
  }
  do
  {
    if ( v11 > 2u )
    {
      if ( v11 != 3 )
        break;
      a2 = *(_QWORD *)(v10 + 8);
      sub_ABF9B0(a1, a2);
    }
    v10 += 32;
    if ( v9 == v10 )
      return;
    v11 = *(_BYTE *)v10;
  }
  while ( *(_BYTE *)v10 );
LABEL_20:
  v12 = a2 + 48 + 24LL * *(unsigned int *)(a2 + 20);
  if ( a2 + 48 != v12 )
  {
    v13 = a2 + 48;
    do
    {
      v14 = v13;
      v13 += 24;
      sub_AC0110(a1, v14, 0);
    }
    while ( v12 != v13 );
  }
}

