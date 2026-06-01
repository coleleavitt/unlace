__int64 __fastcall sub_81EB00(__int64 a1, __int64 a2, char *a3)
{
  char *v5; // rbx
  int v6; // eax
  _BYTE *v7; // rcx
  __int64 result; // rax
  __int64 v9; // rsi
  __int64 v10; // rdi
  char v11; // dl
  __int64 v12; // rbx
  _QWORD *v13; // rbp
  int v14; // esi
  char v15; // dl
  __int64 v16; // rbp
  __int64 v17; // rdx
  char v18; // [rsp+Ch] [rbp-1Ch] BYREF

  v5 = a3;
  if ( !a3 )
    v5 = &v18;
  v6 = sub_81DB90(a2, (_WORD *)a1);
  v7 = *(_BYTE **)(a2 + 2160);
  if ( (v7[1] & 8) == 0 )
  {
    v9 = *(_QWORD *)(a1 + 8);
    v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v11 = *(_BYTE *)(v10 + 16);
    if ( (unsigned __int8)(v11 - 25) <= 1u || v9 == *(_QWORD *)(a2 + 18920) )
      return 1;
    if ( v11 == 13 && ((*(_WORD *)(v10 + 18) >> 3) & 0x1FF) == 0x1B2 && (v9 & 7) == 0 && (v9 & 8) == 0 )
    {
      v17 = *(_QWORD *)&byte_8[*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL];
      if ( (v17 & 7) == 0 && (v17 & 8) == 0 )
      {
        if ( !v6 )
          return 2;
        return 4;
      }
    }
    if ( v6 != 11 )
    {
      if ( !v6 )
        goto LABEL_15;
LABEL_34:
      switch ( (__int16)v6 )
      {
        case 0:
        case 1:
        case 3:
        case 11:
          return 4;
        case 2:
          return 1;
        case 4:
          return 2;
        case 5:
          result = 3;
          break;
        case 6:
          result = 12;
          break;
        case 7:
          result = 13;
          break;
        case 8:
          result = 15;
          break;
        case 9:
          result = 16;
          break;
        case 10:
          result = 14;
          break;
      }
      return result;
    }
LABEL_29:
    v16 = sub_80F230(a1);
    if ( ((*(_WORD *)v16 + 431) & 0x1FFu) <= 8 && ((*(_BYTE *)(sub_80F310(*(_QWORD *)(v16 + 16)) + 1) >> 1) & 3) == 1 )
    {
      *(_DWORD *)v5 = sub_8124E0(v16);
      return 5;
    }
    return 4;
  }
  if ( v6 == 11 )
    goto LABEL_29;
  if ( v6 )
    goto LABEL_34;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL)
                                                                + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 25 <= 1 )
    return 1;
LABEL_15:
  if ( (*(_WORD *)a1 & 0x1FF) != 0x21 || (*(_BYTE *)(a1 + 16) & 4) == 0 || (result = 11, *(_QWORD *)(a1 + 24) > 7u) )
  {
    v12 = *(_QWORD *)&byte_8[*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL] | *(_QWORD *)(a1 + 8) & 7LL;
    result = 7;
    if ( !(byte_8[*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL] & 1 | *(_BYTE *)(a1 + 8) & 1) )
    {
      v13 = (_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
      if ( (v7[47] & 0x20) == 0
        || (byte_8[*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL] & 8) == 0
        || (result = 9,
            (unsigned int)((*(__int64 *)((char *)&qword_18 + (v12 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned __int64)(v12 & 7)) >> 9) != 3) )
      {
        v14 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*v13 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
        if ( (_BYTE)v14 == 2 )
        {
          result = 10;
        }
        else
        {
          result = 10;
          if ( (unsigned __int8)(v14 - 4) <= 2u )
            return result;
          if ( v14 != 3 )
          {
LABEL_25:
            v15 = sub_B19120(*v13, 0);
            result = 6;
            if ( !v15 )
            {
              result = 0;
              if ( (v12 & 0xFFFFFFFFFFFFFFF8LL) > 0xF && *(_BYTE *)(*v13 + 16LL) == 47 )
                return 8 * (unsigned int)(unsigned __int8)sub_B14A80();
            }
            return result;
          }
        }
        if ( (v7[89] & 1) == 0 )
          return result;
        goto LABEL_25;
      }
    }
  }
  return result;
}

