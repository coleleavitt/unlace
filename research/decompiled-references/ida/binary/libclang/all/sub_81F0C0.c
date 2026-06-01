__int64 __fastcall sub_81F0C0(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        char *src,
        __int64 a8,
        char *a9,
        __int64 a10,
        int a11)
{
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rdi
  signed __int64 v19; // r13
  char *v20; // r9
  char *v21; // rcx
  char *v22; // rdx
  char v23; // r12
  __int16 v24; // bp
  __int64 v25; // rax
  char *v26; // rdx
  unsigned __int64 v27; // rax
  _DWORD *v28; // rax
  int v29; // r9d
  __int64 v30; // r9
  char v31; // al
  char v32; // al
  _QWORD *v33; // rdi
  __int64 result; // rax
  char v35; // cl
  int v36; // eax
  __int64 v37; // [rsp+0h] [rbp-58h]
  __int64 v38; // [rsp+8h] [rbp-50h]

  v16 = *(_QWORD *)(a2 + 18480);
  v17 = a10;
  *(_WORD *)a1 = *(_WORD *)a1 & 0xFE00 | 0x10;
  if ( byte_4AD234C )
  {
    v38 = a4;
    v37 = v16;
    sub_AC4570(16);
    v17 = a10;
    a4 = v38;
    v16 = v37;
  }
  v18 = 8 * a8;
  *(_DWORD *)(a1 + 32) = a5;
  v19 = 8 * v17;
  v20 = &src[8 * a8];
  *(_DWORD *)(a1 + 20) = v17;
  v21 = &a9[8 * v17];
  *(_WORD *)(a1 + 1) &= 0xF801u;
  *(_QWORD *)(a1 + 8) = v16;
  *(_DWORD *)(a1 + 16) = a8;
  *(_QWORD *)(a1 + 24) = a4;
  *(_DWORD *)(a1 + 36) = a6;
  *(_DWORD *)(a1 + 40) = a11;
  *(_DWORD *)(a1 + 4) = a3;
  if ( src == v20 )
  {
    v23 = 0;
    LOBYTE(v24) = 0;
    result = *(unsigned __int8 *)(a1 + 2) | 8u;
    *(_BYTE *)(a1 + 2) |= 8u;
    if ( v19 )
    {
LABEL_7:
      v26 = a9;
      while ( 1 )
      {
        while ( 1 )
        {
          v30 = *(_QWORD *)v26;
          v31 = *(_BYTE *)(*(_QWORD *)v26 + 4LL);
          v23 |= (v31 & 2) != 0;
          LOBYTE(v24) = v31 & 1 | v24;
          if ( !(_BYTE)v24 )
          {
            v32 = *(_BYTE *)(a1 + 2) & 0xF7 | (2 * v31) & 8;
            *(_BYTE *)(a1 + 2) = v32;
            if ( (v32 & 8) == 0 )
              goto LABEL_20;
          }
          if ( (unsigned int)(*(_DWORD *)v30 - 1) > 1 )
            break;
          v27 = *(_QWORD *)(v30 + 8);
          if ( v27 > 3 )
          {
            v28 = (_DWORD *)(v27 & 0xFFFFFFFFFFFFFFFCLL);
LABEL_10:
            if ( ((*v28 >> 14) & 0x1Fu) > 0xF )
            {
              v29 = (*(_DWORD *)a1 >> 14) & 0xF | 0x10;
              *(_BYTE *)(a1 + 1) = *(_BYTE *)(a1 + 1) & 0x3F | (((*(_DWORD *)a1 >> 14) & 0x1F) << 6);
              *(_BYTE *)(a1 + 2) = ((unsigned __int8)v29 >> 2) | *(_BYTE *)(a1 + 2) & 0xF8;
            }
          }
LABEL_12:
          v26 += 8;
          if ( v21 == v26 )
            goto LABEL_20;
        }
        if ( *(_DWORD *)v30 != 3 || *(_BYTE *)(v30 + 24) )
          goto LABEL_12;
        v28 = *(_DWORD **)(v30 + 8);
        if ( v28 )
          goto LABEL_10;
        v26 += 8;
        if ( v21 == v26 )
          goto LABEL_20;
      }
    }
    goto LABEL_28;
  }
  v22 = src;
  v23 = 0;
  v24 = 0;
  do
  {
    v25 = *(_QWORD *)v22;
    v22 += 8;
    LOWORD(v25) = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v25 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
    v23 |= v25 & 1;
    v24 |= ((unsigned __int16)v25 >> 1) & 1;
  }
  while ( v20 != v22 );
  *(_BYTE *)(a1 + 2) |= 8u;
  if ( a9 != v21 )
    goto LABEL_7;
LABEL_20:
  if ( v18 <= 8 )
  {
    if ( v18 == 8 )
      *(_QWORD *)(a1 + 48) = *(_QWORD *)src;
  }
  else
  {
    memmove((void *)(a1 + 48), src, 8 * a8);
  }
  v33 = (_QWORD *)(a1 + 8LL * (unsigned int)a8 + 48);
  if ( v19 <= 8 )
  {
    if ( v19 == 8 )
      *v33 = *(_QWORD *)a9;
  }
  else
  {
    memmove(v33, a9, v19);
  }
  result = (8 * (v24 & 1 | ((*(_BYTE *)(a1 + 2) & 8) != 0))) | *(_BYTE *)(a1 + 2) & 0xF7u;
  *(_BYTE *)(a1 + 2) = (8 * (v24 & 1 | ((*(_BYTE *)(a1 + 2) & 8) != 0))) | *(_BYTE *)(a1 + 2) & 0xF7;
  if ( v23 )
  {
    result = ((unsigned __int8)((*(_DWORD *)a1 >> 14) & 0x1E | 1) >> 2) | (unsigned int)result & 0xFFFFFFF8;
    v35 = (((*(_DWORD *)a1 >> 14) & 0x1E | 1) << 6) | *(_BYTE *)(a1 + 1) & 0x3F;
    *(_BYTE *)(a1 + 2) = result;
    *(_BYTE *)(a1 + 1) = v35;
  }
  if ( (_BYTE)v24 )
  {
    v36 = (unsigned __int8)((*(_DWORD *)a1 >> 14) & 0x15 | 0xA) >> 2;
    *(_BYTE *)(a1 + 1) = (((*(_DWORD *)a1 >> 14) & 0x15 | 0xA) << 6) | *(_BYTE *)(a1 + 1) & 0x3F;
    result = *(_BYTE *)(a1 + 2) & 0xF8 | (unsigned int)v36;
LABEL_28:
    *(_BYTE *)(a1 + 2) = result;
  }
  return result;
}

