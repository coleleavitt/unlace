__int64 __fastcall sub_55E5B0(__int64 a1)
{
  unsigned __int64 v1; // rcx
  unsigned __int8 *v3; // rdx
  int v5; // edi
  char v6; // r8
  int v7; // ecx
  unsigned int v8; // esi
  int v9; // edi
  int v10; // esi
  unsigned __int8 v11; // di
  __int64 v12; // r10
  int v13; // r9d
  int v14; // esi
  unsigned __int8 v15; // dl
  int v16; // r9d

  v1 = *(_QWORD *)(a1 + 16);
  v3 = (unsigned __int8 *)(*(_QWORD *)a1 + *(unsigned __int8 *)(a1 + 28));
  *(_QWORD *)a1 = v3;
  if ( (unsigned __int64)v3 >= v1 )
  {
    *(_BYTE *)(a1 + 28) = 0;
    *(_DWORD *)(a1 + 24) = 0;
    return 0;
  }
  v5 = *v3;
  v6 = 1;
  *(_DWORD *)(a1 + 24) = v5;
  if ( (v5 & 0x80u) != 0 )
  {
    v7 = v1 - (_DWORD)v3;
    if ( v7 != 1 )
    {
      if ( v5 <= 223 )
      {
        if ( v5 > 193 )
        {
          v14 = v5 & 0x1F;
          v12 = 1;
          LOBYTE(v13) = 1;
          *(_DWORD *)(a1 + 24) = v14;
          goto LABEL_19;
        }
      }
      else if ( v5 <= 239 )
      {
        v10 = v5 & 0xF;
        *(_DWORD *)(a1 + 24) = v10;
        v16 = byte_5C329C[v5 & 0xF];
        if ( _bittest(&v16, v3[1] >> 5) )
        {
          v11 = v3[1] & 0x3F;
          v12 = 2;
          v6 = 2;
          v13 = 2;
LABEL_12:
          v14 = v11 | (v10 << 6);
          *(_DWORD *)(a1 + 24) = v14;
          if ( v7 == v13 )
            goto LABEL_16;
LABEL_19:
          v15 = v3[v12] + 0x80;
          if ( v15 <= 0x3Fu )
          {
            v6 = v13 + 1;
            *(_DWORD *)(a1 + 24) = v15 | (v14 << 6);
            goto LABEL_17;
          }
          goto LABEL_16;
        }
      }
      else
      {
        v8 = v5 - 240;
        *(_DWORD *)(a1 + 24) = v5 - 240;
        if ( v5 - 240 <= 4 )
        {
          v9 = byte_6D56E0[(v3[1] >> 4) & 0xF];
          if ( _bittest(&v9, v8) )
          {
            v10 = v3[1] & 0x3F | (v8 << 6);
            *(_DWORD *)(a1 + 24) = v10;
            if ( v7 != 2 )
            {
              v11 = v3[2] + 0x80;
              if ( v11 <= 0x3Fu )
              {
                v12 = 3;
                v6 = 3;
                v13 = 3;
                goto LABEL_12;
              }
            }
            v6 = 2;
LABEL_16:
            *(_DWORD *)(a1 + 24) = -1;
            goto LABEL_17;
          }
        }
      }
    }
    v6 = 1;
    goto LABEL_16;
  }
LABEL_17:
  *(_BYTE *)(a1 + 28) = v6;
  return 1;
}
