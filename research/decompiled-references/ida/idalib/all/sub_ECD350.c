__int64 __fastcall sub_ECD350(__int64 a1, unsigned __int64 a2, _WORD *a3, __int64 a4, unsigned int a5, double a6)
{
  __int64 *v9; // r13
  unsigned __int64 v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // r15d
  __int64 v14; // rax
  __int64 v15; // rdi
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  __int64 *v18; // rdx
  __int64 v19; // rax
  unsigned __int16 v20; // r9
  unsigned int v21; // eax
  unsigned __int64 v22; // rax
  char v23; // cl
  __int64 v24; // rcx
  __int64 v25; // r8
  __int32 v26; // eax
  _QWORD *v27; // rbp
  __int64 v29; // rcx
  int v30; // eax
  unsigned __int64 v31; // rdx
  bool v32; // zf
  __int64 v33; // rax
  unsigned __int8 v34; // al
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rdi
  __int64 v38; // rbp
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  unsigned __int8 v45; // [rsp+8h] [rbp-80h]
  _OWORD v46[2]; // [rsp+10h] [rbp-78h] BYREF
  __m128i v47; // [rsp+30h] [rbp-58h] BYREF
  __m128i v48[4]; // [rsp+40h] [rbp-48h] BYREF

  if ( *(_DWORD *)(a1 + 64) == 23 )
    return 0;
  v9 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v10 = a2;
  v13 = sub_F6AE00(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL));
  if ( (_BYTE)v13 )
  {
    if ( (_BYTE)a5 )
    {
      *(_DWORD *)(a1 + 64) = 33;
      v13 = a5;
      *(_BYTE *)(a1 + 120) = 0;
      *(_BYTE *)(a1 + 168) = 0;
      *(_BYTE *)(a1 + 192) = 0;
      *(_BYTE *)(a1 + 216) = 0;
      *(_BYTE *)(a1 + 240) = 0;
      *(_DWORD *)(a1 + 356) = 0;
      *(_DWORD *)(a1 + 8) = 0;
      return v13;
    }
    return 0;
  }
  v14 = *v9;
  v15 = *(_QWORD *)(*(_QWORD *)(*v9 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v16 = *(unsigned __int8 *)(v15 + 16);
  if ( (_BYTE)v16 == 42 )
  {
    v33 = sub_F68450(v14, a2, v16, v11, v12);
    v34 = sub_F57FF0(*(_QWORD *)(v33 & 0xFFFFFFFFFFFFFFF0LL), a6);
    if ( v34 )
    {
      *(_DWORD *)(a1 + 64) = 21;
      *(_BYTE *)(a1 + 216) = 0;
      *(_BYTE *)(a1 + 240) = 0;
      v45 = v34;
      v40 = sub_F68450(*v9, a2, v35, v11, v12);
      v13 = sub_F57F20(*(_QWORD *)(v40 & 0xFFFFFFFFFFFFFFF0LL), a2, v41, v42, v43);
      if ( (_BYTE)v13 )
      {
        *(_DWORD *)(a1 + 8) = 4;
      }
      else
      {
        *(_DWORD *)(a1 + 8) = 0;
        return v45;
      }
      return v13;
    }
    v14 = *v9;
    v15 = *(_QWORD *)(*(_QWORD *)(*v9 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    v16 = *(unsigned __int8 *)(v15 + 16);
  }
  if ( (_BYTE)v16 != 47 )
    goto LABEL_10;
  v17 = sub_F60F10(v15, a2, v16, v11, v12);
  v18 = nullptr;
  v19 = *(_QWORD *)(v17 + 128);
  v10 = v19 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v19 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    if ( (v19 & 4) != 0 )
    {
      v37 = *(_QWORD *)v10;
      v38 = *(_QWORD *)(*(_QWORD *)v10 & 0xFFFFFFFFFFFFFFF0LL);
      if ( !(*(_QWORD *)(v38 + 8) & 7LL | (*(__int64 *)(v38 + 8) >> 3) & 1) )
      {
        v10 = v38 & 0xFFFFFFFFFFFFFFF0LL;
        goto LABEL_8;
      }
      v19 = sub_F64F00(v37);
    }
    v10 = v19 & 0xFFFFFFFFFFFFFFF0LL;
LABEL_8:
    v18 = (__int64 *)v10;
  }
  v14 = *v18;
  v16 = *(_QWORD *)(*v18 + 8) & 0xFFFFFFFFFFFFFFF0LL;
  v15 = *(_QWORD *)v16;
  LODWORD(v16) = *(unsigned __int8 *)(*(_QWORD *)v16 + 16LL);
LABEL_10:
  if ( (_BYTE)v16 == 13 )
    goto LABEL_11;
  v29 = (unsigned int)*(unsigned __int8 *)(v14 + 16) - 57;
  if ( (unsigned int)v29 > 1 )
  {
    v36 = (unsigned int)(v16 - 57);
    if ( (unsigned int)v36 > 1 )
      return 0;
    v14 = sub_F63050(v14, a2, v36, v29);
    if ( !v14 )
      return 0;
  }
  v10 = *(_QWORD *)(v14 + 32);
  v30 = *(_DWORD *)(v14 + 20);
  v31 = *(_QWORD *)(*(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
  v15 = *(_QWORD *)v31;
  v32 = *(_BYTE *)(*(_QWORD *)v31 + 16LL) == 13;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = 0x100000000LL;
  *(_DWORD *)(a1 + 88) = v30;
  if ( !v32 )
  {
    *(_WORD *)(a1 + 92) &= 0xFEu;
    return v13;
  }
  *(_WORD *)(a1 + 92) &= 0xFEu;
LABEL_11:
  v20 = (*(_WORD *)(v15 + 18) >> 3) & 0x1FF;
  if ( v20 <= 0x1C1u )
  {
    if ( v20 < 0x1C0u )
    {
      if ( v20 > 0x1BAu )
      {
        if ( v20 == 445 )
          goto LABEL_76;
        if ( v20 > 0x1BDu )
        {
          if ( v20 != 446 )
            return v13;
          goto LABEL_41;
        }
        if ( v20 == 443 )
          goto LABEL_51;
        goto LABEL_47;
      }
      if ( v20 >= 0x1B7u || v20 <= 0x1B4u )
        return v13;
    }
    *(_DWORD *)(a1 + 8) = 1;
    goto LABEL_17;
  }
  if ( v20 <= 0x1E0u )
  {
    if ( v20 >= 0x1C7u )
      return v13;
    if ( v20 != 452 )
    {
      if ( v20 > 0x1C4u )
      {
        if ( v20 != 453 )
        {
LABEL_41:
          *(_DWORD *)(a1 + 8) = 5;
          goto LABEL_17;
        }
LABEL_76:
        *(_DWORD *)(a1 + 8) = 4;
        goto LABEL_17;
      }
      if ( v20 == 450 )
        return v13;
LABEL_51:
      *(_DWORD *)(a1 + 8) = 2;
      goto LABEL_17;
    }
LABEL_47:
    *(_DWORD *)(a1 + 8) = 3 * (*(_DWORD *)(a1 + 84) != 3);
    goto LABEL_17;
  }
  if ( v20 == 483 )
  {
    *(_DWORD *)(a1 + 8) = 13;
  }
  else
  {
    if ( v20 <= 0x1E3u )
    {
      if ( v20 != 481 )
      {
        *(_DWORD *)(a1 + 8) = 4 * (*(_DWORD *)(a1 + 84) != 3);
        goto LABEL_17;
      }
      goto LABEL_47;
    }
    if ( v20 <= 0x1FCu )
      return v13;
  }
LABEL_17:
  if ( (*a3 & 0x1001) != 0 )
    sub_C9E2C0(v10, a1);
  LOBYTE(v21) = sub_C9DF30((_DWORD *)a1, *(_DWORD **)(a4 + 17448), (__int64)a3);
  v13 = v21;
  if ( !(_BYTE)v21 )
    goto LABEL_31;
  v22 = *(unsigned int *)(a1 + 64);
  if ( (unsigned int)v22 >= 2 )
  {
    if ( (unsigned int)v22 <= 4 )
    {
      if ( !(unsigned __int8)sub_F65360(*(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL)) || *(_BYTE *)(a1 + 168) )
        goto LABEL_24;
      *(_DWORD *)(a1 + 64) = 9;
      goto LABEL_75;
    }
    if ( (unsigned int)(v22 - 9) <= 1 )
    {
      if ( !(unsigned __int8)sub_F65140(*(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL)) )
      {
LABEL_24:
        v22 = *(unsigned int *)(a1 + 64);
        goto LABEL_25;
      }
      *(_DWORD *)(a1 + 64) = 2;
LABEL_75:
      v23 = a5;
      goto LABEL_26;
    }
  }
LABEL_25:
  v23 = a5;
  if ( (unsigned int)v22 <= 0x26 )
  {
    v39 = 0x4001000001LL;
    if ( _bittest64(&v39, v22) )
    {
LABEL_31:
      v27 = (_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
      if ( sub_F6AC00(*v27) || (v13 = sub_F57EE0(*v27), !(_BYTE)v13) )
      {
        v13 = sub_F58100(*v27);
        if ( (_BYTE)v13 )
        {
          *(_DWORD *)(a1 + 64) = 13;
        }
        else
        {
          v13 = sub_F65140(*v27);
          if ( (_BYTE)v13 )
          {
            *(_DWORD *)(a1 + 64) = 2;
            *(_BYTE *)(a1 + 216) = 0;
          }
          else
          {
            v13 = 1;
            sub_F65360(*v27);
            *(_DWORD *)(a1 + 64) = 9;
            *(_BYTE *)(a1 + 216) = 0;
            *(_BYTE *)(a1 + 168) = 0;
          }
        }
      }
      else
      {
        *(_DWORD *)(a1 + 64) = 1;
        *(_DWORD *)(a1 + 8) = 0;
        *(_DWORD *)(a1 + 356) = 0;
        *(_BYTE *)(a1 + 216) = 0;
        *(_BYTE *)(a1 + 240) = 0;
        *(_BYTE *)(a1 + 168) = 0;
      }
      return v13;
    }
  }
LABEL_26:
  sub_ECC8F0((__int64)&v47, (_DWORD *)a1, (_QWORD *)a4, v23);
  if ( v47.m128i_i32[0] == 1 || *(_DWORD *)(a1 + 84) == 3 )
  {
    v26 = v47.m128i_i32[0];
    v46[0] = _mm_load_si128(&v47);
    v46[1] = _mm_load_si128(v48);
  }
  else
  {
    sub_C9D820((__int64)v46, (__int64)&v47, a4, *(_DWORD *)(a1 + 88));
    v26 = v46[0];
  }
  if ( v26 == 1 || !(unsigned int)sub_C9CA70((__int64)v46, (__int64 *)a4, v10, v24, v25) )
    goto LABEL_31;
  return v13;
}
