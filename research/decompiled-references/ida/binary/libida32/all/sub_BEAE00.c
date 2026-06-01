__int64 __fastcall sub_BEAE00(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rsi
  int v9; // eax
  _BYTE *v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // r8
  unsigned __int16 v13; // bx
  int v14; // ebp
  unsigned __int64 v15; // r12
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v20; // rsi
  _QWORD *v21; // rbx
  int v22; // edx
  bool v23; // dl

  v8 = a1;
  v9 = sub_BEA150(a2, a1, (__int64)a3, a4, a5);
  v10 = *(_BYTE **)(a2 + 2320);
  if ( (v10[1] & 8) == 0 )
  {
    v11 = *(_QWORD *)(a1 + 8);
    v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v8 = *(unsigned __int8 *)(v12 + 16);
    if ( (unsigned __int8)(v8 - 25) <= 1u || v11 == *(_QWORD *)(a2 + 19080) )
    {
      v13 = 2;
      v14 = a3 != nullptr ? 2 : 0;
      return (v14 << 16) | (unsigned int)v13;
    }
    if ( (_BYTE)v8 == 13 )
    {
      v8 = *(unsigned __int16 *)(v12 + 18);
      LOWORD(v8) = ((unsigned __int16)v8 >> 3) & 0x1FF;
      if ( (_WORD)v8 == 435 )
      {
        v8 = *(_QWORD *)(a1 + 8) & 7LL | (*(__int64 *)(a1 + 8) >> 3) & 1;
        if ( !v8 )
        {
          v8 = *(_QWORD *)&byte_8[*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL] & 7LL;
          if ( !(v8 | (*(__int64 *)&byte_8[*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL] >> 3) & 1) )
          {
            v13 = 4;
            v14 = a3 != nullptr ? 2 : 0;
            if ( v9 )
              v13 = 3;
            return (v14 << 16) | (unsigned int)v13;
          }
        }
      }
    }
  }
  if ( !a3 )
  {
    v13 = v9;
    v14 = 0;
    return (v14 << 16) | (unsigned int)v13;
  }
  if ( v9 == 11 )
  {
    v14 = 2;
    v13 = 11;
    v15 = sub_BD7CB0(a1);
    if ( ((*(_WORD *)v15 + 432) & 0x1FFu) <= 8 && ((*(_BYTE *)(sub_BD7DA0(*(_QWORD *)(v15 + 16)) + 1) >> 1) & 3) == 1 )
    {
      v14 = 4;
      *a3 = sub_BDCD00(v15, v8, v16, v17, v18);
    }
    return (v14 << 16) | (unsigned int)v13;
  }
  if ( v9 )
  {
    v13 = v9;
    v14 = 2;
    return (v14 << 16) | (unsigned int)v13;
  }
  if ( (v10[1] & 8) == 0
    || (v14 = 3,
        v13 = 0,
        (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL)
                                                                 + 8LL)
                                                     & 0xFFFFFFFFFFFFFFF0LL)
                                         + 16LL)
      - 25 > 1) )
  {
    if ( (*(_WORD *)a1 & 0x1FF) == 0x20
      && (*(_BYTE *)(a1 + 16) & 4) != 0
      && (*(_QWORD *)(a1 + 24) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    {
      v14 = 5;
      v13 = 0;
      return (v14 << 16) | (unsigned int)v13;
    }
    v20 = *(_QWORD *)&byte_8[*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL];
    if ( (((unsigned __int8)v20 | (unsigned __int8)*(_QWORD *)(a1 + 8)) & 1) != 0 )
    {
      v14 = 6;
      v13 = 0;
      return (v14 << 16) | (unsigned int)v13;
    }
    v21 = (_QWORD *)(v20 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (v10[47] & 0x20) != 0
      && (v20 & 8) != 0
      && (*(_DWORD *)((char *)&qword_18 + (v20 & 0xFFFFFFFFFFFFFFF0LL))
        | ((unsigned __int8)v20 | (unsigned __int8)*(_QWORD *)(a1 + 8)) & 7u) >> 9 == 3 )
    {
      v14 = 8;
      v13 = 0;
      return (v14 << 16) | (unsigned int)v13;
    }
    v22 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*v21 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    if ( v22 == 2 )
    {
      if ( (v10[89] & 1) == 0 )
      {
LABEL_31:
        v14 = 9;
        v13 = 0;
        return (v14 << 16) | (unsigned int)v13;
      }
    }
    else
    {
      v23 = v22 == 3;
      if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v21 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 3) <= 3u
        && ((v10[89] & 1) == 0 || !v23) )
      {
        goto LABEL_31;
      }
    }
    if ( (unsigned __int8)sub_F3E930(*v21, 0) )
    {
      v14 = 10;
      v13 = 0;
    }
    else if ( v21 && *(_BYTE *)(*v21 + 16LL) == 48 )
    {
      v13 = 0;
      v14 = (unsigned __int8)sub_F3D730() == 0 ? 1 : 7;
    }
    else
    {
      v14 = 1;
      v13 = 0;
    }
  }
  return (v14 << 16) | (unsigned int)v13;
}

