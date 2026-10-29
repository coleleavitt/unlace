__int64 __fastcall sub_14411B0(__int64 *a1, __int64 a2)
{
  bool v2; // bl
  _DWORD *v4; // rax
  _DWORD *v5; // rcx
  unsigned int v6; // edx
  __int64 v7; // rsi
  unsigned __int16 v8; // ax
  unsigned int *v9; // rdx
  unsigned __int64 v10; // rax
  bool v11; // cl
  char v12; // cl
  char v13; // si
  __int64 result; // rax
  __int64 v15; // rdx
  bool v16; // r8
  char v17; // si
  __int64 v18; // rdi
  __int64 (*v19)(); // rdx
  __int64 v20; // rbx
  const char *v21; // rax
  size_t v22; // rsi
  __int64 v23; // rbx
  __int64 v24; // rbp

  v4 = (_DWORD *)sub_1440A00(a2, *a1);
  if ( !v4 )
    return 0;
  v5 = v4;
  v6 = (unsigned __int16)(*v4 >> 9);
  if ( v6 <= 0x23 || v6 == 65534 || (v7 = v6 - 36, v6 == 36) )
  {
    v8 = *(_WORD *)(a2 + 16) - 199;
    if ( v8 <= 0xA6u )
    {
      v15 = v8;
      result = 1;
      if ( byte_2614CE0[v15] )
        return result;
    }
    v9 = *((unsigned int **)v5 + 2);
    v10 = *v9;
    if ( (*(_WORD *)v5 & 0x1FF) != 5 )
    {
      if ( v10 <= 9 )
      {
        v11 = (*(_BYTE *)(*(_QWORD *)(*a1 + 56) + 1LL) & 8) != 0;
        goto LABEL_10;
      }
      if ( *((_QWORD *)v9 + 2) == 0x69746C6975625F5FLL && *((_WORD *)v9 + 12) == 24430 )
        return 1;
    }
    v11 = (*(_BYTE *)(*(_QWORD *)(*a1 + 56) + 1LL) & 8) != 0;
    v16 = v10 != 18;
    switch ( v10 )
    {
      case 0x15uLL:
        if ( !(*((_QWORD *)v9 + 2) ^ 0x69746C6975625F5FLL | *((_QWORD *)v9 + 3) ^ 0x6E6F6D6D6F635F6ELL)
          && v9[8] == 1887007839
          && *((_BYTE *)v9 + 36) == 101 )
        {
          v2 = (*(_BYTE *)(*(_QWORD *)(*a1 + 56) + 1LL) & 8) != 0;
          v12 = 1;
          goto LABEL_27;
        }
LABEL_26:
        v12 = 0;
LABEL_27:
        v16 = 1;
LABEL_28:
        v17 = v12 | (v10 != 16);
        goto LABEL_29;
      case 0x11uLL:
        if ( *((_QWORD *)v9 + 2) ^ 0x735F6C736C685F5FLL | *((_QWORD *)v9 + 3) ^ 0x7079745F76726970LL
          || *((_BYTE *)v9 + 32) != 101 )
        {
          v12 = 0;
        }
        else
        {
          v2 = (*(_BYTE *)(*(_QWORD *)(*a1 + 56) + 1LL) & 8) != 0;
          v12 = 1;
        }
        goto LABEL_28;
      case 0x12uLL:
        if ( !(*((_QWORD *)v9 + 2) ^ 0x695F656B616D5F5FLL | *((_QWORD *)v9 + 3) ^ 0x735F72656765746ELL)
          && *((_WORD *)v9 + 16) == 29029 )
        {
LABEL_39:
          v2 = v11;
          v12 = 1;
          goto LABEL_13;
        }
        v17 = 1;
        v12 = 0;
        v16 = 0;
LABEL_29:
        if ( v17 )
        {
          if ( !v16 && !v12 )
          {
            if ( !(*((_QWORD *)v9 + 2) ^ 0x7261745F73695F5FLL | *((_QWORD *)v9 + 3) ^ 0x646E65765F746567LL)
              && *((_WORD *)v9 + 16) == 29295 )
            {
              v2 = 1;
              v12 = 1;
              goto LABEL_16;
            }
            v13 = v10 != 23;
            goto LABEL_15;
          }
        }
        else if ( !(*((_QWORD *)v9 + 2) ^ 0x7261745F73695F5FLL | *((_QWORD *)v9 + 3) ^ 0x686372615F746567LL) )
        {
          v12 = 1;
          v2 = 1;
LABEL_14:
          v13 = v12 | (v10 != 23);
LABEL_15:
          if ( v13 )
          {
LABEL_16:
            if ( (unsigned __int8)v12 | (v10 != 22) )
              goto LABEL_17;
            if ( *((_QWORD *)v9 + 2) ^ 0x7261745F73695F5FLL | *((_QWORD *)v9 + 3) ^ 0x697261765F746567LL
              || v9[8] != 1601465953
              || *((_WORD *)v9 + 18) != 29551 )
            {
              goto LABEL_18;
            }
            return 1;
          }
          if ( !(*((_QWORD *)v9 + 2) ^ 0x7261745F73695F5FLL | *((_QWORD *)v9 + 3) ^ 0x69766E655F746567LL)
            && v9[8] == 1835954034
            && *((_WORD *)v9 + 18) == 28261
            && *((_BYTE *)v9 + 38) == 116 )
          {
            return 1;
          }
LABEL_17:
          if ( !((unsigned __int8)v12 | (v10 != 31)) )
            return memcmp(v9 + 4, "__is_target_variant_environment", 0x1Fu) == 0;
LABEL_18:
          result = 0;
          if ( !v12 )
            return result;
          return v2;
        }
LABEL_13:
        if ( !((unsigned __int8)v12 | (v10 != 14)) )
        {
          if ( *((_QWORD *)v9 + 2) != 0x7261745F73695F5FLL || v9[6] != 1601463655 || *((_WORD *)v9 + 14) != 29551 )
            goto LABEL_16;
          v2 = 1;
          v12 = 1;
          goto LABEL_17;
        }
        goto LABEL_14;
    }
LABEL_10:
    if ( v10 == 19 )
    {
      if ( *((_QWORD *)v9 + 2) ^ 0x705F657079745F5FLL | *((_QWORD *)v9 + 3) ^ 0x6D656C655F6B6361LL
        || *((_WORD *)v9 + 16) != 28261
        || *((_BYTE *)v9 + 34) != 116 )
      {
        v12 = 0;
        goto LABEL_13;
      }
      goto LABEL_39;
    }
    goto LABEL_26;
  }
  switch ( (unsigned __int16)(*v4 >> 9) )
  {
    case 0xF3u:
      v18 = *(_QWORD *)(*a1 + 64);
      v19 = *(__int64 (**)())(*(_QWORD *)v18 + 608LL);
      result = 0;
      if ( v19 != sub_102BA90 )
        goto LABEL_73;
      break;
    case 0xF4u:
      v18 = *(_QWORD *)(*a1 + 64);
      v19 = *(__int64 (**)())(*(_QWORD *)v18 + 600LL);
      result = 0;
      if ( v19 != sub_102BA80 )
        goto LABEL_73;
      break;
    case 0xF5u:
      v18 = *(_QWORD *)(*a1 + 64);
      v19 = *(__int64 (**)())(*(_QWORD *)v18 + 592LL);
      result = 0;
      if ( v19 != sub_102BA70 )
LABEL_73:
        result = ((unsigned __int8 (__fastcall *)(__int64, __int64))v19)(v18, v7);
      break;
    case 0x106u:
    case 0x107u:
      result = 201802;
      break;
    default:
      v20 = *(_QWORD *)(*(_QWORD *)(*a1 + 64) + 208LL);
      v21 = (const char *)sub_FBD530(*(__int64 **)(*a1 + 688), v7);
      v22 = 0;
      v23 = v20 + 280;
      v24 = (__int64)v21;
      if ( v21 )
        v22 = j__strlen(v21);
      result = (unsigned __int8)sub_FBE200(v24, v22, v23);
      break;
  }
  return result;
}
