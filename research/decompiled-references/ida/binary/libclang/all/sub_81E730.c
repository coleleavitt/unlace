__int64 __fastcall sub_81E730(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v5; // eax
  _BYTE *v6; // rcx
  int v7; // ebp
  unsigned __int16 v8; // bx
  __int64 v9; // rbx
  _QWORD *v10; // rbp
  int v11; // edx
  __int64 v12; // rsi
  unsigned __int64 v13; // rdx
  int v14; // r9d
  __int64 v16; // r13
  __int64 v17; // rdx

  v5 = sub_81DB90(a2, (_WORD *)a1);
  v6 = *(_BYTE **)(a2 + 2160);
  if ( (v6[1] & 8) != 0 )
  {
    if ( a3 )
    {
      if ( v5 != 11 )
      {
        if ( !v5 )
        {
          v7 = 3;
          v8 = 0;
          if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8)
                                                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                                                        + 8LL)
                                                            & 0xFFFFFFFFFFFFFFF0LL)
                                                + 16LL)
             - 25 <= 1 )
            return (v7 << 16) | (unsigned int)v8;
LABEL_6:
          if ( (*(_WORD *)a1 & 0x1FF) == 0x21 && (*(_BYTE *)(a1 + 16) & 4) != 0 && *(_QWORD *)(a1 + 24) <= 7u )
          {
            v7 = 5;
            v8 = 0;
            return (v7 << 16) | (unsigned int)v8;
          }
          v9 = *(_QWORD *)&byte_8[*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL] | *(_QWORD *)(a1 + 8) & 7LL;
          if ( byte_8[*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL] & 1 | *(_BYTE *)(a1 + 8) & 1 )
          {
            v7 = 6;
            v8 = 0;
            return (v7 << 16) | (unsigned int)v8;
          }
          v10 = (_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
          if ( (v6[47] & 0x20) != 0
            && (byte_8[*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL] & 8) != 0
            && (unsigned int)((*(__int64 *)((char *)&qword_18 + (v9 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned __int64)(v9 & 7)) >> 9) == 3 )
          {
            v7 = 8;
            v8 = 0;
            return (v7 << 16) | (unsigned int)v8;
          }
          v11 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*v10 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
          if ( (_BYTE)v11 != 2 )
          {
            if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v10 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 4) <= 2u )
              goto LABEL_37;
            if ( v11 != 3 )
              goto LABEL_16;
          }
          if ( (v6[89] & 1) != 0 )
          {
LABEL_16:
            if ( (unsigned __int8)sub_B19120(*v10, 0) )
            {
              v7 = 10;
              v8 = 0;
            }
            else if ( (v9 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF
                   || *(_BYTE *)(*v10 + 16LL) != 47
                   || (v7 = 7, v8 = 0, !(unsigned __int8)sub_B14A80()) )
            {
              v7 = 1;
              v8 = 0;
            }
            return (v7 << 16) | (unsigned int)v8;
          }
LABEL_37:
          v7 = 9;
          v8 = 0;
          return (v7 << 16) | (unsigned int)v8;
        }
LABEL_29:
        v8 = v5;
        v7 = 2;
        return (v7 << 16) | (unsigned int)v8;
      }
LABEL_33:
      v7 = 2;
      v8 = 11;
      v16 = sub_80F230(a1);
      if ( ((*(_WORD *)v16 + 431) & 0x1FFu) <= 8 && ((*(_BYTE *)(sub_80F310(*(_QWORD *)(v16 + 16)) + 1) >> 1) & 3) == 1 )
      {
        v7 = 4;
        *a3 = sub_8124E0(v16);
      }
      return (v7 << 16) | (unsigned int)v8;
    }
    goto LABEL_30;
  }
  v12 = *(_QWORD *)(a1 + 8);
  v13 = *(_QWORD *)(*(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
  v14 = *(unsigned __int8 *)(*(_QWORD *)v13 + 16LL);
  if ( (_BYTE)v14 == 25 || v14 == 26 || v12 == *(_QWORD *)(a2 + 18920) )
  {
    v8 = 2;
    v7 = 2 * (a3 != nullptr);
    return (v7 << 16) | (unsigned int)v8;
  }
  if ( (_BYTE)v14 != 13
    || ((*(_WORD *)(*(_QWORD *)v13 + 18LL) >> 3) & 0x1FF) != 0x1B2
    || (v12 & 7) != 0
    || (v12 & 8) != 0
    || (v17 = *(_QWORD *)&byte_8[*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL], (v17 & 7) != 0)
    || (v17 & 8) != 0 )
  {
    if ( a3 )
    {
      if ( v5 != 11 )
      {
        if ( !v5 )
          goto LABEL_6;
        goto LABEL_29;
      }
      goto LABEL_33;
    }
LABEL_30:
    v8 = v5;
    v7 = 0;
    return (v7 << 16) | (unsigned int)v8;
  }
  v8 = 4;
  v7 = 2 * (a3 != nullptr);
  if ( v5 )
    v8 = 3;
  return (v7 << 16) | (unsigned int)v8;
}

