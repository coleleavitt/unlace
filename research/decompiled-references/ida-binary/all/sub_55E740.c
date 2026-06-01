int __fastcall sub_55E740(__int64 a1)
{
  signed int v1; // r12d
  int result; // eax
  wint_t v4; // edi
  unsigned __int64 v5; // rsi
  unsigned __int8 *v6; // rax
  int v7; // edx
  bool v8; // cl
  int v9; // edi
  int v10; // ecx
  int v11; // r9d
  __int64 v12; // r9
  unsigned __int8 v13; // r8
  int v14; // ecx
  unsigned int v15; // ecx
  int v16; // edx

  v1 = *(_DWORD *)(a1 + 24);
LABEL_2:
  while ( 1 )
  {
    result = iswspace(v1);
    if ( !result )
    {
      if ( v1 != 59 )
        return result;
      sub_55E5B0(a1);
      v4 = *(_DWORD *)(a1 + 24);
      if ( v4 != 10 && v4 )
      {
        v5 = *(_QWORD *)(a1 + 16);
        v6 = *(unsigned __int8 **)a1;
        LOBYTE(v7) = *(_BYTE *)(a1 + 28);
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              while ( 1 )
              {
                v6 += (unsigned __int8)v7;
                *(_QWORD *)a1 = v6;
                if ( (unsigned __int64)v6 >= v5 )
                {
                  *(_BYTE *)(a1 + 28) = 0;
                  v4 = 0;
                  *(_DWORD *)(a1 + 24) = 0;
                  goto LABEL_9;
                }
                v1 = *v6;
                *(_DWORD *)(a1 + 24) = v1;
                if ( (v1 & 0x80u) != 0 )
                  break;
                v8 = v1 != 0 && v1 != 10;
                LOBYTE(v7) = 1;
LABEL_14:
                *(_BYTE *)(a1 + 28) = v7;
                if ( !v8 )
                  goto LABEL_2;
              }
              v9 = v5 - (_DWORD)v6;
              if ( (_DWORD)v5 - (_DWORD)v6 == 1 )
              {
LABEL_24:
                LOBYTE(v7) = 1;
                goto LABEL_25;
              }
              if ( v1 > 223 )
                break;
              if ( v1 <= 193 )
                goto LABEL_24;
              v12 = 1;
              LOBYTE(v7) = 1;
              v14 = v1 & 0x1F;
              *(_DWORD *)(a1 + 24) = v14;
LABEL_22:
              if ( (unsigned __int8)(v6[v12] + 0x80) <= 0x3Fu )
              {
                v1 = (v14 << 6) | (unsigned __int8)(v6[v12] + 0x80);
                *(_DWORD *)(a1 + 24) = v1;
                LOBYTE(v7) = v7 + 1;
                v8 = v1 != 10 && v1 != 0;
                goto LABEL_14;
              }
LABEL_25:
              *(_DWORD *)(a1 + 24) = -1;
              *(_BYTE *)(a1 + 28) = v7;
            }
            if ( v1 > 239 )
              break;
            v10 = v1 & 0xF;
            *(_DWORD *)(a1 + 24) = v10;
            v11 = byte_5C329C[v1 & 0xF];
            if ( !_bittest(&v11, v6[1] >> 5) )
              goto LABEL_24;
            v12 = 2;
            v13 = v6[1] & 0x3F;
            v7 = 2;
LABEL_21:
            v14 = v13 | (v10 << 6);
            *(_DWORD *)(a1 + 24) = v14;
            if ( v9 != v7 )
              goto LABEL_22;
            LOBYTE(v7) = v5 - (_BYTE)v6;
            *(_DWORD *)(a1 + 24) = -1;
            *(_BYTE *)(a1 + 28) = v9;
          }
          v15 = v1 - 240;
          *(_DWORD *)(a1 + 24) = v1 - 240;
          if ( v1 - 240 > 4 )
            goto LABEL_24;
          v16 = byte_6D56E0[(v6[1] >> 4) & 0xF];
          if ( !_bittest(&v16, v15) )
            goto LABEL_24;
          v10 = v6[1] & 0x3F | (v15 << 6);
          *(_DWORD *)(a1 + 24) = v10;
          if ( v9 != 2 )
          {
            v13 = v6[2] + 0x80;
            if ( v13 <= 0x3Fu )
            {
              v12 = 3;
              v7 = 3;
              goto LABEL_21;
            }
          }
          LOBYTE(v7) = 2;
          *(_DWORD *)(a1 + 24) = -1;
          *(_BYTE *)(a1 + 28) = 2;
        }
      }
LABEL_9:
      result = iswspace(v4);
      if ( !result )
        return result;
    }
    sub_55E5B0(a1);
    v1 = *(_DWORD *)(a1 + 24);
  }
}
