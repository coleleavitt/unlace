char __fastcall sub_9C9A60(__int64 a1, unsigned __int8 *a2, unsigned __int8 *a3)
{
  char result; // al
  __int64 v4; // rbx
  unsigned __int8 *v5; // rbp
  unsigned __int8 *v6; // r12
  _BYTE *v7; // rsi
  _BYTE *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  _BYTE *v11; // rsi
  _BYTE *v12; // rdx
  unsigned __int8 v13; // al
  _BYTE *v14; // rsi
  _BYTE *v15; // rdx
  _BYTE *v16; // rsi
  _BYTE *v17; // rdx
  _BYTE *v18; // rsi
  _BYTE *v19; // rdx
  unsigned __int8 *v20; // rdx
  unsigned __int8 *v21; // rcx
  size_t v22; // rdx
  unsigned __int8 *v23; // rcx
  unsigned __int8 *v24; // r15
  unsigned __int8 *v25; // [rsp+8h] [rbp-40h]

  result = 0;
  v4 = *a2;
  if ( (_BYTE)v4 == *a3 )
  {
    v5 = a2;
    v6 = a3;
    while ( 1 )
    {
      switch ( v4 )
      {
        case 0LL:
          v20 = *((unsigned __int8 **)v5 + 3);
          if ( !v20 )
            return v5 == v6;
          v21 = *((unsigned __int8 **)v6 + 3);
          if ( !v21 )
            return v5 == v6;
          v4 = *v20;
          if ( (_BYTE)v4 == 2 )
            return 1;
          v13 = *v21;
          if ( *v21 == 2 )
            return 1;
          v6 = *((unsigned __int8 **)v6 + 3);
          v5 = *((unsigned __int8 **)v5 + 3);
          goto LABEL_19;
        case 1LL:
        case 2LL:
        case 3LL:
          return 1;
        case 4LL:
          v9 = *((_QWORD *)v5 + 2);
          if ( !v9 )
            return v5 == v6;
          v10 = *((_QWORD *)v6 + 2);
          result = v9 == v10;
          if ( !v10 )
            return v5 == v6;
          return result;
        case 5LL:
        case 22LL:
        case 23LL:
        case 24LL:
        case 25LL:
        case 26LL:
          return v5 == v6;
        case 6LL:
          v11 = *(_BYTE **)(*((_QWORD *)v5 + 2) + 32LL);
          if ( *v11 == 2 )
            goto LABEL_16;
          v12 = *(_BYTE **)(*((_QWORD *)v6 + 2) + 32LL);
          if ( *v12 == 2 )
            goto LABEL_16;
          goto LABEL_15;
        case 7LL:
          goto LABEL_16;
        case 8LL:
        case 9LL:
        case 10LL:
        case 16LL:
        case 17LL:
        case 18LL:
          goto LABEL_13;
        case 11LL:
          v23 = *((unsigned __int8 **)v5 + 2);
          v24 = *((unsigned __int8 **)v6 + 2);
          v4 = *v23;
          if ( (_BYTE)v4 != 2 && *v24 != 2 )
          {
            v25 = *((unsigned __int8 **)v5 + 2);
            result = sub_9C9A60(a1, v23, *((_QWORD *)v6 + 2));
            v23 = v25;
            if ( !result )
              return result;
          }
          v5 = *((unsigned __int8 **)v5 + 3);
          if ( v5 )
            v4 = *v5;
          else
            v5 = v23;
          v6 = *((unsigned __int8 **)v6 + 3);
          if ( !v6 )
            v6 = v24;
          if ( (_BYTE)v4 == 2 )
            return 1;
          goto LABEL_18;
        case 12LL:
          v7 = *((_BYTE **)v5 + 2);
          if ( *v7 == 2 )
            return *((_QWORD *)v6 + 8) == *((_QWORD *)v5 + 8);
          v8 = *((_BYTE **)v6 + 2);
          if ( *v8 == 2 )
            return *((_QWORD *)v6 + 8) == *((_QWORD *)v5 + 8);
          result = sub_9C9A60(a1, v7, v8);
          if ( result )
            return *((_QWORD *)v6 + 8) == *((_QWORD *)v5 + 8);
          return result;
        case 13LL:
        case 15LL:
        case 27LL:
          goto LABEL_22;
        case 14LL:
          if ( *((_WORD *)v6 + 1) == *((_WORD *)v5 + 1) )
            goto LABEL_22;
          return 0;
        case 19LL:
        case 21LL:
          if ( v6[2] != v5[2] )
            return 0;
LABEL_22:
          v5 = *((unsigned __int8 **)v5 + 2);
          v4 = *v5;
          if ( (_BYTE)v4 == 2 )
            return 1;
          v6 = *((unsigned __int8 **)v6 + 2);
          v13 = *v6;
          if ( *v6 == 2 )
            return 1;
          goto LABEL_19;
        case 20LL:
          if ( v6[2] != v5[2] )
            return 0;
LABEL_13:
          v11 = *((_BYTE **)v5 + 2);
          if ( *v11 == 2 )
            goto LABEL_16;
          v12 = *((_BYTE **)v6 + 2);
          if ( *v12 == 2 )
            goto LABEL_16;
LABEL_15:
          result = sub_9C9A60(a1, v11, v12);
          if ( !result )
            return result;
LABEL_16:
          v5 = *((unsigned __int8 **)v5 + 3);
          v4 = *v5;
          if ( (_BYTE)v4 == 2 )
            return 1;
          v6 = *((unsigned __int8 **)v6 + 3);
LABEL_18:
          v13 = *v6;
          if ( *v6 == 2 )
            return 1;
LABEL_19:
          if ( (_BYTE)v4 != v13 )
            return 0;
          break;
        case 28LL:
          v22 = *((_QWORD *)v5 + 3);
          result = 0;
          if ( *((_QWORD *)v6 + 3) == v22 )
          {
            result = 1;
            if ( v22 )
              return memcmp(*((const void **)v5 + 2), *((const void **)v6 + 2), v22) == 0;
          }
          return result;
        case 29LL:
          v16 = *((_BYTE **)v5 + 2);
          if ( *v16 != 2 )
          {
            v17 = *((_BYTE **)v6 + 2);
            if ( *v17 != 2 )
            {
              result = sub_9C9A60(a1, v16, v17);
              if ( !result )
                return result;
            }
          }
          v18 = *((_BYTE **)v5 + 3);
          if ( *v18 != 2 )
          {
            v19 = *((_BYTE **)v6 + 3);
            if ( *v19 != 2 )
            {
              result = sub_9C9A60(a1, v18, v19);
              if ( !result )
                return result;
            }
          }
          v5 = *((unsigned __int8 **)v5 + 4);
          v4 = *v5;
          if ( (_BYTE)v4 == 2 )
            return 1;
          v6 = *((unsigned __int8 **)v6 + 4);
          v13 = *v6;
          if ( *v6 == 2 )
            return 1;
          goto LABEL_19;
        case 30LL:
          v14 = *(_BYTE **)(*((_QWORD *)v5 + 2) + 32LL);
          if ( *v14 == 2 )
            goto LABEL_16;
          v15 = *(_BYTE **)(*((_QWORD *)v6 + 2) + 32LL);
          if ( *v15 == 2 )
            goto LABEL_16;
          result = sub_9C9A60(a1, v14, v15);
          if ( result )
            goto LABEL_16;
          return result;
        default:
          return 0;
      }
    }
  }
  return result;
}
