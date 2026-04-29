__int64 __fastcall sub_69A50(__int64 a1)
{
  int v2; // esi
  int v3; // ecx
  int v4; // r8d
  int v5; // edi
  unsigned __int64 v6; // r12
  int v7; // r9d
  int v8; // edx
  __int64 result; // rax
  int v10; // r10d
  __int64 v11; // rbp
  int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // r9d
  char v17; // al
  int v18; // edx
  int v19; // esi
  int v20; // ecx
  __int64 v21; // r9
  int v22; // esi
  __int64 v23; // rdi
  __int64 v24; // rdi
  char v25; // dl
  int v26; // eax
  int v27; // edx
  int v28; // edx
  int v29; // ecx
  __int16 v30; // ax
  __int64 v31; // rsi
  char v32; // al
  int v33; // r9d
  int v34; // r11d
  unsigned int v35; // ecx
  int v36; // r10d
  int v37; // esi
  int v38; // ecx
  __int64 v39; // rdi
  __int64 v40; // r13
  __int64 v41; // r14
  __int64 v42; // rax
  char v43; // dl
  int v44; // ecx
  int v45; // r12d
  __int64 v46; // rsi
  __int64 v47; // rdx
  char v48; // al
  __int64 v49; // r10
  int v50; // [rsp+Ch] [rbp-2Ch]

  v3 = *(int *)(a1 + 16) >> 7;
  v2 = *(_DWORD *)(a1 + 16);
  v4 = (v2 >> 13) & 7;
  v5 = v2 >> 20;
  v6 = v3 & 3;
  v7 = (v2 >> 22) & 1;
  v8 = (v2 >> 28) & 1;
  result = HIBYTE(v2) & 1;
  v10 = v2 >> 21;
  v11 = (v2 >> 20) & 1;
  if ( (v2 & 0x11801000) != 0x10801000 )
  {
    if ( (((unsigned __int8)v10 | HIBYTE(v2)) & 1) == 0 )
      goto LABEL_3;
    if ( (v2 & 0x401000) == 0 )
    {
      if ( (_DWORD)v6 != 3 )
      {
        if ( (v3 & 3) == 0 )
          return 0;
        if ( (_DWORD)v6 == 1 )
        {
          result = 0;
          if ( ((v2 >> 19) & 1) != 0 )
            return result;
        }
        if ( ((v2 >> 20) & 1) != 0 )
        {
          if ( v8 )
            v17 = byte_8E218[v3 & 3];
          else
            v17 = byte_8E21C[v3 & 3];
        }
        else
        {
          v17 = byte_8E210[v3 & 3];
        }
        if ( v17 )
          *(_BYTE *)(*(_QWORD *)(a1 + 8) + 33LL) = v17 | 0x80;
        v18 = (v2 >> 19) & 1;
        v19 = (v2 >> 16) & 7;
        return sub_699E0(a1, v19, v18);
      }
      goto LABEL_45;
    }
    v27 = v2 & 0x1000;
    if ( (v2 & 0x10000000) == 0 )
    {
      if ( (v2 & 0x1000) != 0 )
      {
        if ( (_DWORD)v6 == 3 )
          return 0;
        v19 = (v2 >> 16) & 0xF;
        if ( v19 == 15 || (_BYTE)v7 )
          return 0;
        if ( v19 == 13 )
        {
          result = 0;
          if ( (v10 & 1) != 0 )
            return result;
        }
        v32 = byte_8E210[v3 & 3];
        if ( v32 )
          *(_BYTE *)(*(_QWORD *)(a1 + 8) + 33LL) = v32 | 0x80;
        v18 = v3 & 3;
        return sub_699E0(a1, v19, v18);
      }
      if ( (_DWORD)v6 != 3 )
      {
LABEL_5:
        v12 = ((unsigned __int8)v10 | HIBYTE(v2)) & 1;
        result = v12 | v7 | v2 & 0x800000u;
        if ( !(v12 | v7 | v2 & 0x800000) )
        {
          if ( (v2 & 0x1100) == 0x100 && (~(_BYTE)v2 & 0xD) != 0 && (~BYTE2(v2) & 0xD) != 0 )
          {
            v13 = *(_QWORD *)(a1 + 8);
            if ( ((v2 >> 20) & 1) != 0 )
            {
              v14 = v13 + 40;
              v15 = v13 + 120;
            }
            else
            {
              v14 = v13 + 120;
              v15 = v13 + 40;
            }
            *(_BYTE *)(v14 + 1) = 12;
            v16 = (v2 >> 4) & 1;
            *(_WORD *)(v14 + 6) = v4 + 45;
            *(_QWORD *)(v14 + 8) = 0;
            *(_BYTE *)(v14 + 33) = 0;
            *(_BYTE *)(v14 + 34) = v16 + 3;
            *(_BYTE *)(v14 + 41) = 12;
            *(_WORD *)(v14 + 46) = v4 + 45;
            *(_QWORD *)(v14 + 48) = 0;
            *(_BYTE *)(v14 + 73) = 0;
            *(_BYTE *)(v14 + 74) = v16 + 1;
            *(_WORD *)(v15 + 6) = v2 & 0xF;
            *(_BYTE *)(v15 + 1) = 1;
            *(_BYTE *)(v15 + 5) = 2;
            *(_WORD *)(v15 + 46) = BYTE2(v2) & 0xF;
            *(_BYTE *)(v15 + 41) = 1;
            *(_BYTE *)(v15 + 45) = 2;
            *(_WORD *)(*(_QWORD *)(a1 + 8) + 24LL) = 1084;
            return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
          }
          return result;
        }
        return 0;
      }
LABEL_45:
      result = 0;
      v28 = BYTE2(v2) & 0xF;
      if ( v28 != 15 )
      {
        v29 = v4 + 8 * v7;
        v30 = word_8DB80[v29];
        v31 = *(_QWORD *)(a1 + 8);
        if ( v30 == -1 )
        {
          *(_BYTE *)(v31 + 41) = 11;
          *(_WORD *)(*(_QWORD *)(a1 + 8) + 46LL) = v29;
        }
        else
        {
          *(_WORD *)(v31 + 46) = v30;
          *(_BYTE *)(*(_QWORD *)(a1 + 8) + 41LL) = 1;
        }
        sub_69930(a1, *(_QWORD *)(a1 + 8) + 80LL, v28, 2);
        *(_WORD *)(*(_QWORD *)(a1 + 8) + 24LL) = (_DWORD)v11 == 0 ? 417 : 344;
        return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
      }
      return result;
    }
LABEL_42:
    if ( (v2 & 0x1000000) != 0 )
    {
      if ( v27 )
      {
LABEL_38:
        result = v7 | v2 & 0x80u;
        if ( v7 | v2 & 0x80 )
          return 0;
        v44 = (v2 >> 17) & 7;
        if ( v4 != v44 || (v5 & 1) == 0 )
        {
          v45 = ((v2 >> 8) & 1) + 2;
          v46 = *(_QWORD *)(a1 + 8);
          *(_BYTE *)(v46 + 41) = 1;
          *(_WORD *)(v46 + 46) = v4 + 45;
          *(_BYTE *)(v46 + 45) = 8;
          sub_69930(a1, *(_QWORD *)(a1 + 8) + 80LL, v44 + 45, v45);
          v47 = *(_QWORD *)(a1 + 8);
          v48 = byte_8E210[v45];
          if ( v48 )
          {
            *(_BYTE *)(v47 + 33) = v48 | 0x80;
            v47 = *(_QWORD *)(a1 + 8);
          }
          *(_WORD *)(v47 + 24) = word_8DBF0[4 * v11 + v45];
          return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
        }
        return result;
      }
      if ( (_DWORD)v6 != 3 )
        return 0;
    }
    else if ( v27 || (_DWORD)v6 != 3 )
    {
      return result;
    }
    goto LABEL_45;
  }
  if ( (_DWORD)v6 == 3 )
  {
    if ( (((unsigned __int8)v10 | HIBYTE(v2)) & 1) == 0 )
    {
LABEL_3:
      if ( (v2 & 0x801000) != 0x800000 )
      {
        if ( (v2 & 0x10000000) == 0 )
          goto LABEL_5;
        if ( (v2 & 0x1000000) == 0 )
          return result;
        result = v2 & 0x1000;
        if ( (v2 & 0x1000) == 0 )
          return result;
        goto LABEL_38;
      }
      result = v7 | v2 & 0x20u;
      if ( v7 | v2 & 0x20 )
        return 0;
      v33 = (v2 >> 1) & 7;
      v34 = (v2 >> 16) & 0xF;
      if ( ((unsigned __int8)v5 & (v4 == v33)) != 0 || v34 == 15 )
        return result;
      v35 = v2;
      v36 = v2;
      v37 = v2 & 1;
      v38 = (v36 >> 4) & 1 | (v35 >> 5) & 2;
      if ( v38 == 2 )
      {
        if ( (_DWORD)v6 != 2 )
          return result;
      }
      else
      {
        if ( v38 != 3 )
        {
          if ( v38 == 1 )
          {
            v49 = 9;
            if ( _bittest64(&v49, v6) || ((unsigned __int8)v5 & ((unsigned __int8)v8 ^ 1)) != 0 && (_DWORD)v6 == 1 )
              return result;
          }
          else if ( (_DWORD)v6 == 3 || ((unsigned __int8)v5 & ((unsigned __int8)v8 ^ 1)) != 0 && !(_DWORD)v6 || v37 )
          {
            return result;
          }
          goto LABEL_77;
        }
        if ( (_DWORD)v6 != 3 )
          return result;
      }
      if ( (v5 & (v8 ^ 1)) != 0 )
        return result;
LABEL_77:
      v39 = *(_QWORD *)(a1 + 8);
      v40 = v38;
      *(_BYTE *)(v39 + 41) = 1;
      *(_WORD *)(v39 + 46) = v4 + 45;
      *(_BYTE *)(v39 + 45) = 8;
      *(_BYTE *)(*(_QWORD *)(a1 + 8) + 81LL) = 3;
      *(_WORD *)(*(_QWORD *)(a1 + 8) + 86LL) = v34;
      *(_BYTE *)(*(_QWORD *)(a1 + 8) + 112LL) = v33 + 45;
      if ( v37 )
      {
        *(_BYTE *)(*(_QWORD *)(a1 + 8) + 113LL) = 8;
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL) = v38;
      }
      v41 = *(_QWORD *)(a1 + 8);
      v50 = v8;
      *(_BYTE *)(v41 + 85) = get_dtype_by_size();
      v42 = *(_QWORD *)(a1 + 8);
      if ( (_DWORD)v11 )
      {
        if ( v50 )
          v43 = byte_8E218[(int)v6];
        else
          v43 = byte_8E21C[(int)v6];
      }
      else
      {
        v43 = byte_8E210[(int)v6];
      }
      if ( v43 )
      {
        *(_BYTE *)(v42 + 33) = v43 | 0x80;
        v42 = *(_QWORD *)(a1 + 8);
      }
      *(_WORD *)(v42 + 24) = word_8DBF0[4 * v11 + v40];
      return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
    }
    if ( (v2 & 0x401000) == 0 )
      goto LABEL_45;
    v27 = v2 & 0x1000;
    if ( (v2 & 0x10000000) == 0 )
    {
      result = 0;
      if ( (v2 & 0x1000) != 0 )
        return result;
      goto LABEL_45;
    }
    goto LABEL_42;
  }
  v20 = (v2 >> 16) & 0xF;
  if ( v20 == 15 || (_BYTE)v7 )
    return 0;
  if ( v20 == 13 )
  {
    result = 0;
    if ( (v10 & 1) != 0 )
      return result;
  }
  result = v2 & 1;
  if ( (v2 & 1) != 0 )
  {
    if ( v4 + 4 > 8 )
      return 0;
    v21 = 4;
    v22 = (v2 >> 5) & 3;
  }
  else
  {
    if ( v4 == 7 )
      return result;
    v21 = 2;
    v22 = (v2 >> 5) & 1;
  }
  v23 = *(_QWORD *)(a1 + 8);
  *(_BYTE *)(v23 + 41) = 12;
  *(_WORD *)(v23 + 46) = v4 + 45;
  *(_QWORD *)(v23 + 48) = v21;
  *(_WORD *)(v23 + 73) = 0;
  *(_BYTE *)(*(_QWORD *)(a1 + 8) + 81LL) = 4;
  *(_WORD *)(*(_QWORD *)(a1 + 8) + 86LL) = v20;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 96LL) = 0;
  if ( (v10 & 1) != 0 )
    *(_DWORD *)(*(_QWORD *)(a1 + 8) + 28LL) |= 0x20u;
  v24 = *(_QWORD *)(a1 + 8);
  v25 = byte_8E210[(int)v6];
  if ( v25 )
  {
    *(_BYTE *)(v24 + 33) = v25 | 0x80;
    v24 = *(_QWORD *)(a1 + 8);
  }
  if ( (_DWORD)result )
    v26 = ((_DWORD)v11 == 0 ? 6 : 0) + v22 + 1066;
  else
    v26 = ((_DWORD)v11 == 0 ? 6 : 0) + v22 + 1064;
  *(_WORD *)(v24 + 24) = v26;
  return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
}
