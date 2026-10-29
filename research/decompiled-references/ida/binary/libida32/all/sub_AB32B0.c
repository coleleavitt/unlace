void __fastcall sub_AB32B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // rbx
  unsigned __int8 v12; // al
  __int64 v13; // r12
  const __m128i *v14; // rbx
  const __m128i *v15; // rsi
  __int64 v16; // r12
  const __m128i *v17; // rbx
  const __m128i *v18; // rsi
  __int64 v19; // r12
  __int64 *v20; // rbx
  __int64 v21; // rsi
  __m128i v22[3]; // [rsp+0h] [rbp-38h] BYREF

  v6 = a2;
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
      v7 = *(_QWORD *)(a2 + 32);
      goto LABEL_3;
    case 4:
    case 6:
    case 0x27:
      sub_AB4A40(a1, *(_QWORD *)(a2 + 32));
      v8 = *(_QWORD *)(a2 + 40);
      goto LABEL_6;
    case 8:
      v7 = *(_QWORD *)(a2 + 40);
      if ( v7 != *(_QWORD *)(v6 + 48) )
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
      v8 = *(_QWORD *)(a2 + 24);
      goto LABEL_6;
    case 0x10:
      v16 = a2 + 48 + 24LL * *(unsigned int *)(a2 + 20);
      if ( a2 + 48 != v16 )
      {
        v17 = (const __m128i *)(a2 + 48);
        do
        {
          v18 = v17;
          v17 = (const __m128i *)((char *)v17 + 24);
          sub_AB2BB0(a1, v18, 0);
        }
        while ( (const __m128i *)v16 != v17 );
      }
      return;
    case 0x15:
      sub_AB4A40(a1, *(_QWORD *)(a2 + 40));
      v8 = *(_QWORD *)(a2 + 32);
LABEL_6:
      sub_AAE4E0(a1 + 8, 0, 0, v8, a1, a6);
      return;
    case 0x19:
      sub_AB4A40(a1, *(_QWORD *)(a2 + 24));
      return;
    case 0x1A:
      sub_AB4A40(a1, *(_QWORD *)(a2 + 24));
      v19 = a2 + 48 + 8LL * *(unsigned __int16 *)(a2 + 22);
      if ( a2 + 48 != v19 )
      {
        v20 = (__int64 *)(a2 + 48);
        do
        {
          v21 = *v20++;
          sub_AB4A40(a1, v21);
        }
        while ( (__int64 *)v19 != v20 );
      }
      return;
    case 0x1B:
      v7 = *(_QWORD *)(a2 + 40);
      if ( (v7 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
LABEL_3:
        sub_AB4A40(a1, v7);
      return;
    case 0x1C:
      v10 = a2 + 64 + 32LL * *(_QWORD *)(a2 + 48);
      if ( a2 + 64 == v10 )
        return;
      v11 = a2 + 64;
      v12 = *(_BYTE *)(a2 + 64);
      if ( !v12 )
        goto LABEL_20;
      break;
    case 0x21:
      sub_AB61E0();
      return;
    case 0x2B:
    case 0x2C:
      v9 = sub_990B30(a2, a2, a3, a4, a5);
      sub_AB4A40(a1, v9);
      return;
    case 0x2D:
      sub_F3A7E0(v22, a2);
      sub_AB2BB0(a1, v22, 0);
      return;
    case 0x31:
      goto LABEL_20;
  }
  do
  {
    if ( v12 > 2u )
    {
      if ( v12 != 3 )
        break;
      a2 = *(_QWORD *)(v11 + 8);
      sub_AB4A40(a1, a2);
    }
    v11 += 32;
    if ( v10 == v11 )
      return;
    v12 = *(_BYTE *)v11;
  }
  while ( *(_BYTE *)v11 );
LABEL_20:
  v13 = a2 + 48 + 24LL * *(unsigned int *)(a2 + 20);
  if ( a2 + 48 != v13 )
  {
    v14 = (const __m128i *)(a2 + 48);
    do
    {
      v15 = v14;
      v14 = (const __m128i *)((char *)v14 + 24);
      sub_AB2BB0(a1, v15, 0);
    }
    while ( (const __m128i *)v13 != v14 );
  }
}

