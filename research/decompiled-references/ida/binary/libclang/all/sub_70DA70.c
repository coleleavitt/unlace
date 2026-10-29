__int16 __fastcall sub_70DA70(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rdx
  __int64 v4; // r12
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rbp
  unsigned __int64 v11; // rbp
  __int64 v12; // rax
  unsigned int *v13; // rsi
  void *v14; // rdi
  __int64 v15; // rbx
  size_t v16; // rbp
  const void *v17; // rsi
  size_t v18; // rax
  const char *v19; // rsi
  __int64 v20; // rbx
  __int64 *v21; // r13
  __int64 v22; // r14
  __int64 v23; // rsi
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // rax
  const char *v26; // rsi
  __int64 v27; // rax
  _QWORD v29[11]; // [rsp+0h] [rbp-58h] BYREF

  while ( 2 )
  {
    v3 = a3 & 0xFFFFFFFFFFFFFFF0LL;
    v4 = *(_QWORD *)(*(_QWORD *)(v3 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    v5 = a2;
    switch ( *(_BYTE *)(v4 + 16) )
    {
      case 2:
      case 3:
      case 5:
      case 6:
        sub_5FF0F0(a2, "A");
        a3 = *(_QWORD *)(v4 + 32);
        goto LABEL_12;
      case 7:
        goto LABEL_26;
      case 0xA:
      case 0x1E:
      case 0x28:
        goto LABEL_16;
      case 0xB:
      case 0x21:
      case 0x29:
LABEL_13:
        v19 = "P";
        goto LABEL_14;
      case 0xD:
        LODWORD(v18) = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 18LL);
        LOWORD(v18) = ((unsigned __int16)v18 >> 3) & 0x1FF;
        if ( (unsigned __int16)v18 > 0x1B0u )
        {
          v18 = (unsigned int)(v18 + 78);
          LOWORD(v18) = v18 & 0x1FF;
          switch ( v18 )
          {
            case 0uLL:
              v19 = "v";
              goto LABEL_14;
            case 1uLL:
            case 2uLL:
            case 3uLL:
            case 4uLL:
            case 5uLL:
            case 6uLL:
            case 7uLL:
            case 8uLL:
            case 9uLL:
            case 0xAuLL:
            case 0xBuLL:
            case 0xCuLL:
            case 0xDuLL:
            case 0xEuLL:
            case 0xFuLL:
            case 0x10uLL:
            case 0x11uLL:
            case 0x12uLL:
            case 0x13uLL:
            case 0x14uLL:
            case 0x15uLL:
            case 0x16uLL:
            case 0x17uLL:
            case 0x18uLL:
            case 0x19uLL:
            case 0x1AuLL:
            case 0x1BuLL:
            case 0x1CuLL:
            case 0x1DuLL:
            case 0x1EuLL:
            case 0x1FuLL:
            case 0x20uLL:
            case 0x21uLL:
            case 0x22uLL:
            case 0x23uLL:
            case 0x24uLL:
            case 0x25uLL:
            case 0x26uLL:
            case 0x27uLL:
            case 0x28uLL:
            case 0x29uLL:
            case 0x2AuLL:
            case 0x2BuLL:
            case 0x2CuLL:
              v19 = "i";
              goto LABEL_14;
            case 0x2DuLL:
              v19 = "Dh";
              goto LABEL_14;
            case 0x2EuLL:
              v19 = "f";
              goto LABEL_14;
            case 0x2FuLL:
              v19 = "d";
              goto LABEL_14;
            case 0x30uLL:
              v19 = "e";
              goto LABEL_14;
            case 0x31uLL:
              v19 = "DF16_";
              goto LABEL_14;
            case 0x32uLL:
            case 0x39uLL:
            case 0x3AuLL:
            case 0x3BuLL:
            case 0x3CuLL:
            case 0x3DuLL:
              goto LABEL_16;
            case 0x33uLL:
              v19 = "g";
              goto LABEL_14;
            case 0x35uLL:
            case 0x36uLL:
            case 0x37uLL:
            case 0x38uLL:
              goto LABEL_13;
            default:
              return v18;
          }
          return v18;
        }
        if ( (unsigned __int16)v18 <= 0x68u )
          return v18;
LABEL_16:
        v19 = "?";
        goto LABEL_14;
      case 0xE:
        sub_5FF0F0(a2, "C");
LABEL_26:
        a3 = *(_QWORD *)(v4 + 32);
        goto LABEL_12;
      case 0x19:
      case 0x1A:
        sub_5FF0F0(a2, "F");
        sub_70DA70(a1, a2, *(_QWORD *)(v4 + 24));
        if ( *(_BYTE *)(v4 + 16) == 26 )
        {
          v21 = (__int64 *)(v4 + 48);
          v22 = v4 + 48 + 8LL * (unsigned __int16)(*(_DWORD *)(v4 + 20) >> 6);
          if ( v22 != v4 + 48 )
          {
            do
            {
              v23 = *v21++;
              v29[0] = v23;
              v24 = sub_6DABD0(a1, v23);
              v29[0] = v24;
              v29[0] = sub_6DA540(a1, v24);
              v25 = sub_6B3060(v29, v24);
              sub_70DA70(a1, v5, v25);
            }
            while ( (__int64 *)v22 != v21 );
          }
          if ( (*(_BYTE *)(v4 + 23) & 0x10) != 0 )
            sub_5FF0F0(v5, "z");
        }
        v19 = "E";
        goto LABEL_14;
      case 0x20:
        sub_5FF0F0(a2, "M");
        if ( *(_BYTE *)(v4 + 16) != 32 )
          v4 = sub_B0D320(v4);
        sub_70DA70(a1, a2, *(_QWORD *)(v4 + 40) & 0xFFFFFFFFFFFFFFF0LL);
        a3 = *(_QWORD *)(v4 + 32);
        goto LABEL_12;
      case 0x22:
      case 0x23:
        v19 = "<objc_object>";
        goto LABEL_14;
      case 0x2A:
        v26 = "R";
        goto LABEL_34;
      case 0x2B:
        v26 = "O";
LABEL_34:
        sub_5FF0F0(v5, v26);
        a3 = sub_6B2590(v4);
        goto LABEL_12;
      case 0x2E:
        v27 = sub_B14A40(v4);
        a3 = sub_6B31C0(v27, a2);
        if ( (a3 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
          a3 = a1[2320];
LABEL_12:
        a2 = v5;
        continue;
      case 0x2F:
        v6 = sub_B14A40(*(_QWORD *)(*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF0LL));
        v7 = *(_QWORD *)(v6 + 40);
        if ( ((v7 & 7) != 0 || (v11 = v7 & 0xFFFFFFFFFFFFFFF8LL, (v7 & 0xFFFFFFFFFFFFFFF8LL) == 0))
          && ((v8 = *(_QWORD *)(v6 + 120), (v8 & 4) != 0)
           || (v9 = v8 & 0xFFFFFFFFFFFFFFF8LL) == 0
           || (v10 = *(_QWORD *)(v9 + 40), (v10 & 7) != 0)
           || (v11 = v10 & 0xFFFFFFFFFFFFFFF8LL) == 0) )
        {
          v19 = "<anonymous_record>";
LABEL_14:
          LOWORD(v18) = sub_5FF0F0(v5, v19);
        }
        else
        {
          v12 = sub_26238A0(a2, **(unsigned int **)(v11 + 16));
          v13 = *(unsigned int **)(v11 + 16);
          v14 = *(void **)(v12 + 32);
          v15 = v12;
          v16 = *v13;
          v17 = v13 + 4;
          v18 = *(_QWORD *)(v12 + 24) - (_QWORD)v14;
          if ( v18 < v16 )
          {
            LOWORD(v18) = sub_26240F0(v15, v17, v16);
          }
          else if ( v16 )
          {
            LOWORD(v18) = (unsigned __int16)memcpy(v14, v17, v16);
            *(_QWORD *)(v15 + 32) += v16;
          }
        }
        return v18;
      case 0x38:
      case 0x39:
        v20 = sub_5FF0F0(a2, "Dv");
        sub_70D900((__int64)v29, (__int64)a1, v4);
        LOWORD(v18) = sub_26238C0(v20, v29[0]);
        return v18;
      default:
        LOWORD(v18) = *(_WORD *)(v3 + 8) & 0xFFF0;
        return v18;
    }
  }
}

