bool __fastcall sub_3F2C0(__int64 a1)
{
  bool v1; // zf
  int v3; // eax
  unsigned __int16 v4; // cx
  int v5; // eax
  int flags; // eax
  __int64 v7; // rax
  __int64 v8; // rdi
  int v10; // eax
  int v11; // eax
  __int64 v12; // rdi
  __int16 v13; // ax
  int v14; // eax
  __int64 v15; // r12
  __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  char *v20; // rax
  int v21; // [rsp+Ch] [rbp-18Ch] BYREF
  __int128 v22; // [rsp+10h] [rbp-188h] BYREF
  __int64 v23; // [rsp+20h] [rbp-178h]
  __int64 v24; // [rsp+28h] [rbp-170h]
  __int64 v25; // [rsp+30h] [rbp-168h]
  char v26; // [rsp+38h] [rbp-160h] BYREF
  _QWORD v27[4]; // [rsp+178h] [rbp-20h] BYREF

  v1 = *(_BYTE *)(a1 + 376) == 0;
  v27[0] = __readfsqword(0x28u);
  if ( !v1 )
  {
    flags = get_flags_ex(*(_QWORD *)(a1 + 32), 4);
    if ( (~(_WORD)flags & 0x600) == 0 && (flags & 0x10000000) != 0 )
      goto LABEL_20;
  }
  v3 = *(_DWORD *)(a1 + 412) + 1;
  *(_DWORD *)(a1 + 412) = v3;
  if ( v3 > 1000 )
    return 1;
  v4 = *(_WORD *)(a1 + 40);
  if ( v4 > 0xE4u )
  {
    if ( v4 == 306 )
    {
      if ( *(_DWORD *)(a1 + 392) != -2 )
        return 0;
      v1 = *(_QWORD *)(a1 + 384) == -1;
      *(_DWORD *)(a1 + 392) = *(unsigned __int16 *)(a1 + 62);
      if ( v1 )
        *(_QWORD *)(a1 + 384) = *(_QWORD *)(a1 + 32);
      if ( !*(_QWORD *)(a1 + 400) )
      {
        *(_DWORD *)(a1 + 408) = 60;
        return 0;
      }
      goto LABEL_33;
    }
    if ( v4 != 320 )
    {
      if ( v4 != 279 )
        goto LABEL_24;
      goto LABEL_9;
    }
    if ( *(_DWORD *)(a1 + 408) != 61 || *(_QWORD *)(a1 + 400) )
      goto LABEL_24;
    v5 = *(_DWORD *)(a1 + 44);
    if ( (v5 & 0x108) != 0x100 )
    {
LABEL_30:
      if ( (v5 & 0x300) != 0 )
        goto LABEL_24;
      v10 = get_flags_ex(*(_QWORD *)(a1 + 72), 4);
      if ( (~(_WORD)v10 & 0x600) != 0 || (v10 & 0x10000000) == 0 )
        goto LABEL_24;
    }
LABEL_33:
    *(_DWORD *)(a1 + 408) = 100;
    return 1;
  }
  if ( v4 <= 0xA6u )
  {
    if ( v4 != 13 )
    {
      if ( v4 != 157 )
      {
        if ( v4 != 12 )
          goto LABEL_24;
        if ( (*(_BYTE *)(a1 + 44) & 2) != 0 )
        {
          v23 = -1;
          v20 = &v26;
          v24 = 0;
          v25 = 0;
          v22 = -1;
          do
          {
            *(_WORD *)v20 = 0;
            v20 += 40;
            *((_WORD *)v20 - 19) = 0;
            *((_WORD *)v20 - 18) = 0;
            *((_DWORD *)v20 - 2) = 0;
            *((_WORD *)v20 - 17) = 0;
            *((_OWORD *)v20 - 2) = 0;
            *((_QWORD *)v20 - 2) = 0;
          }
          while ( v27 != (_QWORD *)v20 );
          if ( (int)decode_insn(&v22, *(_QWORD *)(a1 + 32) + *(unsigned __int16 *)(a1 + 42), v27, 0.0) > 0
            && (unsigned __int16)(v24 - 329) <= 7u
            && (WORD2(v24) & 0x108) == 0x100 )
          {
            goto LABEL_24;
          }
        }
      }
      goto LABEL_9;
    }
    if ( *(_DWORD *)(a1 + 408) != 61 || *(_QWORD *)(a1 + 400) )
      goto LABEL_24;
    v5 = *(_DWORD *)(a1 + 44);
    goto LABEL_30;
  }
  v7 = 1LL << ((unsigned __int8)v4 + 89);
  if ( (v7 & 0x40000080000LL) != 0 )
  {
    if ( *(_BYTE *)(a1 + 57) != 1 )
      goto LABEL_24;
    if ( *(_WORD *)(a1 + 62) != 1 )
      goto LABEL_24;
    if ( (*(_QWORD *)(a1 + 96) & 0xFFFF00000000FF00LL) != 0x1000000000400LL )
      goto LABEL_24;
    v17 = *(_QWORD *)(a1 + 112);
    if ( (v17 & 0x8000u) == 0LL || *(_QWORD *)(a1 + 400) )
      goto LABEL_24;
    v1 = *(_QWORD *)(a1 + 384) == -1;
    *(_QWORD *)(a1 + 400) = -v17;
    if ( v1 )
      *(_QWORD *)(a1 + 384) = *(_QWORD *)(a1 + 32);
    if ( *(_DWORD *)(a1 + 392) == -2 )
    {
      *(_DWORD *)(a1 + 408) = 61;
      return 0;
    }
    goto LABEL_33;
  }
  if ( (v7 & 0x2000000000000001LL) != 0 )
  {
LABEL_9:
    if ( !*(_DWORD *)(a1 + 408) && *(int *)(a1 + 412) <= 3 )
      return 1;
    goto LABEL_24;
  }
  if ( (v7 & 0x8000020000LL) != 0 )
  {
    v14 = *(_DWORD *)(a1 + 392);
    if ( v14 >= 0
      && v14 == *(unsigned __int16 *)(a1 + 62)
      && (*(_QWORD *)(a1 + 96) & 0xFFFF00000000FF00LL) == 0x1000000000400LL )
    {
      v15 = *(_QWORD *)(a1 + 400);
      v16 = *(_QWORD *)(a1 + 112);
      if ( v16 == v15 + (int)sub_34940(*(_QWORD *)(a1 + 8)) )
      {
        *(_DWORD *)(a1 + 392) = -1;
        return 0;
      }
    }
    return 0;
  }
LABEL_24:
  v8 = *(_QWORD *)(a1 + 8);
  v21 = 1;
  if ( (unsigned int)sub_3F060(v8, a1 + 16, &v21, 1) != -1 )
  {
    if ( *(_DWORD *)(a1 + 408) != 61 )
      return 1;
    v13 = *(_WORD *)(a1 + 40);
    if ( (unsigned __int16)(v13 - 4) <= 1u )
    {
      if ( *(_BYTE *)(a1 + 57) != 1 || *(_WORD *)(a1 + 62) != 1 )
        return 1;
      v18 = a1 + 56;
      if ( *(_BYTE *)(a1 + 137) )
      {
        if ( *(_BYTE *)(a1 + 97) != 1 )
          return 1;
        v18 = a1 + 96;
      }
      if ( *(_WORD *)(v18 + 6) != 1 )
        return 1;
      if ( *(_BYTE *)(v18 + 41) != 5 )
        return 1;
      v19 = *(_QWORD *)(v18 + 48);
      if ( v19 <= 0 || v19 != *(_QWORD *)(a1 + 400) )
        return 1;
    }
    else if ( v13 != 88 && v13 != 118
           || *(_BYTE *)(a1 + 57) != 1
           || *(_WORD *)(a1 + 62) != 1
           || (*(_QWORD *)(a1 + 96) & 0xFFFF00000000FF00LL) != 0x1000000000400LL
           || *(_QWORD *)(a1 + 112) )
    {
      return 1;
    }
    *(_QWORD *)(a1 + 400) = 0;
    return 0;
  }
  v11 = *(_DWORD *)(a1 + 392);
  if ( v11 == -2 )
  {
    if ( (*(_BYTE *)(a1 + 44) & 8) != 0 )
      return 1;
    return *(_WORD *)(a1 + 40) == 292;
  }
  if ( v11 < 0 )
    return 0;
  v12 = *(_QWORD *)(a1 + 8);
  v21 = *(_DWORD *)(a1 + 392);
  if ( (unsigned int)sub_3F060(v12, a1 + 16, &v21, 1) != -1 )
  {
LABEL_20:
    *(_DWORD *)(a1 + 408) = 0;
    return 1;
  }
  return 0;
}
