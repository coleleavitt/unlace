void __fastcall sub_1866A00(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4, __m128 a5)
{
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // rbx
  _BOOL8 v10; // rsi
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  int v14; // eax
  _QWORD *v15; // r13
  _DWORD *v16; // rbp
  __int64 v17; // r14
  _QWORD *v18; // rdx
  char v19; // al
  int v20; // eax
  __int64 v21; // r13
  unsigned int v22; // eax
  __int64 v23; // rbp
  __int64 v24; // rbx
  __int64 v25; // rax
  _QWORD *v26; // rdx
  __int64 v27; // [rsp-28h] [rbp-28h]
  __int64 v28; // [rsp-20h] [rbp-20h]

  while ( 2 )
  {
    if ( a2 & 7 | (a2 >> 3) & 1 )
    {
LABEL_3:
      sub_1866730(a1, a2, a3, a4, a5);
    }
    else
    {
      v28 = v6;
      v27 = v5;
      v7 = a3;
      switch ( *(_BYTE *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) )
      {
        case 0:
        case 1:
        case 8:
        case 9:
        case 0xA:
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
        case 0x1B:
        case 0x1C:
        case 0x1D:
        case 0x1E:
        case 0x1F:
        case 0x20:
        case 0x22:
        case 0x23:
        case 0x24:
        case 0x25:
        case 0x26:
        case 0x27:
        case 0x28:
        case 0x29:
        case 0x2D:
        case 0x2E:
        case 0x2F:
        case 0x30:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x39:
        case 0x3A:
        case 0x3B:
          goto LABEL_3;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
          sub_1866CB0();
          return;
        case 7:
          v8 = *(_QWORD *)(a2 + 32);
          v9 = a3 + 12;
          goto LABEL_6;
        case 0xB:
        case 0x2A:
        case 0x2B:
        case 0x2C:
          v8 = *(_QWORD *)(a2 + 32);
          v9 = a3 + 4;
          goto LABEL_6;
        case 0x1A:
          v19 = *(_BYTE *)(a2 + 16);
          if ( v19 == 26 )
          {
            v20 = ((*(_BYTE *)(a2 + 19) >> 1) & 0xF) == 0 ? 15 : 23;
LABEL_16:
            v21 = 8 * ((v20 + 8 * (unsigned int)*(unsigned __int16 *)(a2 + 22)) >> 3) + 8;
            goto LABEL_17;
          }
          v21 = 16;
          if ( v19 != 25 )
          {
            v20 = 15;
            goto LABEL_16;
          }
LABEL_17:
          v22 = sub_F6C520(*(_QWORD *)(a2 + 24));
          sub_1866A00(
            a1,
            *(_QWORD *)(a2 + 24),
            v22 * ((v7 + v21 - (unsigned __int64)(v7 + v21 != 0)) / v22 + (v7 + v21 != 0)),
            0);
          if ( *(_BYTE *)(a2 + 16) != 25 && *(_WORD *)(a2 + 22) )
          {
            v23 = v7 + 16;
            v24 = v7 + 8LL * ((unsigned int)*(unsigned __int16 *)(a2 + 22) - 1) + 24;
            do
            {
              if ( *(_QWORD *)v23 )
              {
                v25 = *(_QWORD *)(*(_QWORD *)v23 + 56LL);
                v26 = (_QWORD *)(v25 & 0xFFFFFFFFFFFFFFF8LL);
                if ( (v25 & 4) != 0 )
                  v26 = (_QWORD *)v26[4];
                if ( v26 )
                  sub_1866A00(a1, *v26, v26 + 1, 1);
              }
              v23 += 8;
            }
            while ( v24 != v23 );
          }
          break;
        case 0x21:
          v8 = *(_QWORD *)(a2 + 32);
          v9 = a3 + 16;
LABEL_6:
          v10 = v9 != 0;
          v11 = (unsigned int)sub_F6C520(v8);
          v12 = v9 - v10;
          v5 = v27;
          v13 = v12 / v11 + v10;
          a2 = v8;
          v6 = v28;
          a3 = v11 * v13;
          a4 = -1;
          continue;
        case 0x31:
          v14 = *(_DWORD *)(a2 + 20);
          if ( v14 )
          {
            v15 = (_QWORD *)(a3 + 16);
            v16 = (_DWORD *)(a2 + 48);
            v17 = a3 + 8LL * (unsigned int)(v14 - 1) + 24;
            do
            {
              if ( (*v16 & 0x7FFFFFFF) == 1 )
              {
                v18 = (_QWORD *)(*v15 & 0xFFFFFFFFFFFFFFFCLL);
                if ( v18 )
                  sub_1866A00(a1, *v18, v18 + 1, 0xFFFFFFFFLL);
              }
              ++v15;
              v16 += 6;
            }
            while ( v15 != (_QWORD *)v17 );
          }
          return;
        default:
          return;
      }
    }
    break;
  }
}
