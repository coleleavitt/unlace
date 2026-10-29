char *__fastcall sub_867CC0(__int64 a1, unsigned __int64 a2, int a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v7; // r13
  __int16 v9; // bx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // r14d
  __int64 v13; // r12
  int v14; // esi
  char v15; // dl
  _BYTE *v16; // rax
  char *v17; // rdx
  char *v18; // rcx
  __int64 v19; // rax
  char v20; // si
  char v21; // r8
  _BYTE *v22; // rax
  char v23; // r10
  char v24; // al
  char v26; // al
  int v27; // eax
  int v28; // edx
  _BYTE *v29; // r10
  int v30; // edx
  __int64 v31; // rdx
  __int64 v32; // rax
  _DWORD *v33; // rax
  __int64 v34; // [rsp+8h] [rbp-50h]
  __int64 v35; // [rsp+8h] [rbp-50h]
  __int64 v37; // [rsp+18h] [rbp-40h]

  v7 = a6;
  v9 = a2;
  v10 = a2 & 0xF;
  v11 = v10 + 1;
  if ( *(_DWORD *)(a1 + 144) || (LOBYTE(v12) = 72, (a2 & 0x200) != 0) )
    v12 = ((a2 >> 8) & 1) << 6;
  v13 = v10 + 2;
  if ( (a2 & 0x1C00) == 0 )
    v13 = v10 + 1;
  if ( (a5 & 0x80u) == 0 )
  {
    if ( (a2 & 0x4000) != 0 )
    {
      if ( byte_23C2EF0[a5] <= 7u )
        goto LABEL_16;
    }
    else if ( *((_BYTE *)&unk_23C2F30 + a5) <= 7u )
    {
      goto LABEL_16;
    }
    goto LABEL_37;
  }
  v14 = a5 & 0x7F00;
  if ( (a5 & 0x7F00) != 0 )
  {
    if ( (a5 & 0x7F) == 0 )
      goto LABEL_52;
    v23 = byte_23C2F10[a5 & 0x7F];
    if ( a6 )
    {
      if ( v23 != 5 )
        goto LABEL_46;
      if ( (a6 & 3) != 0 )
      {
        ++v13;
        if ( *((_BYTE *)&unk_23C2F30 + (a5 & 0x7F)) > 7u )
          LOBYTE(v12) = v12 | 0x41;
        goto LABEL_130;
      }
    }
    else if ( v23 != 5 )
    {
LABEL_46:
      if ( *((_BYTE *)&unk_23C2F30 + (a5 & 0x7F)) <= 7u )
        goto LABEL_47;
LABEL_79:
      LOBYTE(v12) = v12 | 0x41;
      goto LABEL_47;
    }
LABEL_104:
    v30 = a5 >> 8;
    if ( byte_23C2F10[BYTE1(a5) & 0x7F] == 5 )
    {
      ++v13;
      v31 = a5 & 0x7F;
      v14 = a5 & 0x7F00;
    }
    else
    {
      a5 = BYTE1(a5) | ((_WORD)a5 << 8) & 0x7F00;
      v14 = a5 & 0x7F00;
      v31 = v30 & 0x7F;
      LOBYTE(a5) = a5 | 0x80;
    }
    if ( *((_BYTE *)&unk_23C2F30 + v31) > 7u )
      LOBYTE(v12) = v12 | 0x41;
    if ( byte_23C2F10[v31] == 4 )
    {
      if ( v14 )
        goto LABEL_47;
      goto LABEL_120;
    }
LABEL_130:
    if ( !v14 )
      goto LABEL_85;
    goto LABEL_47;
  }
  if ( (unsigned __int64)(a6 + 0x80000000LL) >> 32 )
  {
    v37 = v10 + 1;
    v35 = v10;
    v27 = sub_867C50((_QWORD *)a1, 16, a6);
    v10 = v35;
    v11 = v37;
    if ( v27 )
      return nullptr;
    v28 = a5 & 0x7F;
    if ( (a5 & 0x7F) == 0 )
    {
      a5 |= 0x10u;
      LOBYTE(v12) = v12 | 0x41;
      v7 = 0;
      goto LABEL_85;
    }
    a5 |= 0x1000u;
    if ( byte_23C2F10[v28] != 5 )
    {
      v7 = 0;
      if ( *((_BYTE *)&unk_23C2F30 + v28) <= 7u )
        goto LABEL_47;
      goto LABEL_79;
    }
    v7 = 0;
    goto LABEL_104;
  }
  if ( (a5 & 0x7F) == 0 )
  {
LABEL_52:
    v13 += 5;
    goto LABEL_16;
  }
  v15 = byte_23C2F10[a5 & 0x7F];
  if ( !a6 )
  {
    if ( v15 != 5 )
    {
      if ( *((_BYTE *)&unk_23C2F30 + (a5 & 0x7F)) <= 7u )
        goto LABEL_119;
      goto LABEL_118;
    }
    ++v13;
    if ( *((_BYTE *)&unk_23C2F30 + (a5 & 0x7F)) <= 7u )
      goto LABEL_16;
LABEL_37:
    LOBYTE(v12) = v12 | 0x41;
    if ( v9 >= 0 )
      goto LABEL_16;
    goto LABEL_38;
  }
  if ( (unsigned __int64)(a6 + 128) <= 0xFF )
  {
    ++v13;
    if ( *((_BYTE *)&unk_23C2F30 + (a5 & 0x7F)) <= 7u )
      goto LABEL_119;
LABEL_118:
    LOBYTE(v12) = v12 | 0x41;
    goto LABEL_119;
  }
  v13 += 4;
  if ( *((_BYTE *)&unk_23C2F30 + (a5 & 0x7F)) > 7u )
    goto LABEL_118;
LABEL_119:
  if ( v15 != 4 )
    goto LABEL_85;
LABEL_120:
  a5 |= 0xE00u;
LABEL_47:
  ++v13;
  if ( *((_BYTE *)&unk_23C2F30 + ((a5 >> 8) & 0x7F)) > 7u )
  {
    LOBYTE(v12) = v12 | 0x42;
    if ( v9 >= 0 )
      goto LABEL_16;
    goto LABEL_38;
  }
LABEL_85:
  if ( v9 >= 0 || (v12 & 3) == 0 )
  {
LABEL_16:
    if ( a3 != 127 )
      goto LABEL_17;
LABEL_39:
    if ( (v9 & 0x10) != 0 )
    {
      if ( (unsigned __int64)(a4 + 128) > 0xFF )
      {
        v13 += 4;
        goto LABEL_19;
      }
    }
    else
    {
      if ( (v9 & 0x20) == 0 )
      {
        if ( (v9 & 0x40) != 0 )
        {
          ++v13;
        }
        else
        {
          v32 = v13 + 2;
          v13 += 4;
          if ( (v9 & 0x80u) != 0 )
            v13 = v32;
        }
        goto LABEL_19;
      }
      if ( a4 == 1 )
        goto LABEL_19;
    }
    ++v13;
    v9 |= 0x40u;
    goto LABEL_19;
  }
LABEL_38:
  ++v13;
  v10 = v11;
  if ( a3 == 127 )
    goto LABEL_39;
LABEL_17:
  if ( (v9 & 0x2000) != 0 )
  {
    if ( byte_23C2EF0[a3] > 7u )
      goto LABEL_51;
LABEL_19:
    if ( !(_BYTE)v12 )
      goto LABEL_21;
    goto LABEL_20;
  }
  if ( *((_BYTE *)&unk_23C2F30 + a3) <= 7u )
    goto LABEL_19;
LABEL_51:
  LOBYTE(v12) = v12 | 0x44;
LABEL_20:
  ++v13;
LABEL_21:
  v34 = v10;
  v16 = sub_867B60(a1, v13 + 1);
  if ( !v16 )
    return nullptr;
  *v16 = v13;
  *(_QWORD *)(a1 + 120) += v13;
  if ( (v9 & 0x800) != 0 )
  {
    v16[1] = -14;
    v17 = v16 + 2;
  }
  else if ( (v9 & 0x1000) != 0 )
  {
    v16[1] = -13;
    v17 = v16 + 2;
  }
  else
  {
    v17 = v16 + 1;
    if ( (v9 & 0x400) != 0 )
    {
      v16[1] = 102;
      v17 = v16 + 2;
    }
  }
  if ( (_BYTE)v12 )
    *v17++ = v12;
  v18 = &v17[v34];
  if ( (v9 & 0x20) != 0 )
  {
    if ( a3 == 127 )
    {
      v26 = -47;
      if ( a4 != 1 )
        v26 = -63;
      *v17 = v26;
    }
    else
    {
      *v17 = -45;
    }
    goto LABEL_57;
  }
  if ( (v9 & 0x10) == 0 )
  {
    if ( a3 != 127 )
    {
      v19 = a3;
      if ( (v9 & 0x2000) == 0 )
      {
LABEL_30:
        v20 = 8 * byte_23C2F10[v19];
        if ( (a5 & 0x80u) != 0 )
          goto LABEL_31;
        goto LABEL_59;
      }
      goto LABEL_69;
    }
LABEL_57:
    v20 = 0;
    goto LABEL_58;
  }
  if ( a3 == 127 )
  {
    *v17 = (v9 & 0x40) == 0 ? -127 : -125;
    goto LABEL_57;
  }
  v19 = a3;
  if ( (v9 & 0x2000) == 0 )
    goto LABEL_30;
LABEL_69:
  v20 = 8 * byte_23C2ED0[v19];
LABEL_58:
  if ( (a5 & 0x80u) != 0 )
  {
LABEL_31:
    if ( (a5 & 0x7F) != 0 )
    {
      v21 = byte_23C2F10[a5 & 0x7F];
      if ( (a5 & 0x7F00) == 0 || (a5 & 0x7F00) == 0xE00 )
      {
        if ( v7 || v21 == 5 )
        {
          if ( (unsigned __int64)(v7 + 128) > 0xFF )
          {
            if ( (a5 & 0x7F00) != 0 )
            {
              *v18 = v20 | 0x84;
              v18[1] = v21 | (8 * byte_23C2F10[(a5 >> 8) & 0x7F]);
              v33 = v18 + 2;
            }
            else
            {
              v33 = v18 + 1;
              *v18 = v21 | v20 | 0x80;
            }
            *v33 = v7;
            v22 = v33 + 1;
          }
          else
          {
            if ( (a5 & 0x7F00) != 0 )
            {
              v29 = v18 + 2;
              *v18 = v20 | 0x44;
              v18[1] = v21 | (8 * byte_23C2F10[(a5 >> 8) & 0x7F]);
            }
            else
            {
              v29 = v18 + 1;
              *v18 = v21 | v20 | 0x40;
            }
            *v29 = v7;
            v22 = v29 + 1;
          }
        }
        else if ( (a5 & 0x7F00) != 0 )
        {
          *v18 = v20 | 4;
          v18[1] = v21 | (8 * byte_23C2F10[(a5 >> 8) & 0x7F]);
          v22 = v18 + 2;
        }
        else
        {
          v22 = v18 + 1;
          *v18 = v21 | v20;
        }
      }
      else if ( v21 == 5 )
      {
        v18[2] = 0;
        *v18 = v20 | 0x44;
        v18[1] = ((_BYTE)v7 << 6) | 5 | (8 * byte_23C2F10[(a5 >> 8) & 0x7F]);
        v22 = v18 + 3;
      }
      else
      {
        *v18 = v20 | 4;
        v18[1] = v21 | ((_BYTE)v7 << 6) | (8 * byte_23C2F10[(a5 >> 8) & 0x7F]);
        v22 = v18 + 2;
      }
    }
    else
    {
      v18[1] = 37;
      v22 = v18 + 6;
      *v18 = v20 | 4;
      *(_DWORD *)(v18 + 2) = v7;
    }
    goto LABEL_62;
  }
LABEL_59:
  if ( (v9 & 0x4000) != 0 )
    v24 = byte_23C2ED0[a5];
  else
    v24 = byte_23C2F10[a5];
  *v18 = v20 | v24 | 0xC0;
  v22 = v18 + 1;
LABEL_62:
  if ( a3 == 127 )
  {
    if ( (v9 & 0x40) != 0 )
    {
      *v22 = a4;
    }
    else if ( (v9 & 0x80) != 0 )
    {
      *(_WORD *)v22 = a4;
    }
    else if ( (v9 & 0x20) == 0 )
    {
      *(_DWORD *)v22 = a4;
    }
  }
  return v17;
}
