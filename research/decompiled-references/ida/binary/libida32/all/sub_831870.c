unsigned __int8 *__fastcall sub_831870(unsigned __int8 *a1, __int64 a2, int *a3)
{
  int v4; // edx
  unsigned __int8 *v6; // rsi
  char v7; // cl
  unsigned __int8 v8; // dl
  char v9; // r9
  __int64 v10; // rdx
  unsigned __int8 v12; // cl
  __int64 v13; // rdx
  unsigned __int8 *v14; // rsi
  int v15; // edx
  int v16; // ecx
  int v17; // edx
  int v18; // edx
  __int64 v19; // rcx
  int v20; // edx
  int v21; // edx
  _BOOL4 v22; // edx

  v4 = *a1;
  v6 = a1 + 1;
  *a3 = v4;
  v7 = v4;
  v8 = v4 - 33;
  if ( v8 > 0x40u )
  {
    a3[1] = 0;
  }
  else
  {
    if ( (unsigned __int8)v7 > 0x54u )
    {
      v8 = v7 - 85;
      v9 = 85;
    }
    else if ( (unsigned __int8)v7 > 0x47u )
    {
      v8 = v7 - 72;
      v9 = 72;
    }
    else if ( (unsigned __int8)v7 > 0x3Au )
    {
      v8 = v7 - 59;
      v9 = 59;
    }
    else
    {
      v9 = 33;
      if ( (unsigned __int8)v7 > 0x2Du )
      {
        v8 = v7 - 46;
        v9 = 46;
      }
    }
    if ( (unsigned __int8)(v8 - 6) <= 2u || v8 == 12 )
      v6 = a1 + 3;
    a3[1] = (unsigned __int8)(v8 - 2) > 1u && ((v8 + 33) & 0xFD) != 41;
    if ( v9 == 59 )
    {
      *a3 = 31;
      v10 = 0x80000000LL;
      v7 = 31;
      goto LABEL_20;
    }
    if ( (unsigned __int8)v9 <= 0x3Bu )
    {
      if ( v9 != 33 )
      {
LABEL_29:
        v18 = 29;
LABEL_30:
        *a3 = v18;
        v19 = *v6;
        a3[2] = v19;
        v20 = *(unsigned __int8 *)(a2 + v19);
        a3[3] = v20;
        if ( (_DWORD)v19 == v20 )
          a3[3] = -1;
        else
          a3[4] = -1;
        return ++v6;
      }
      *a3 = 29;
LABEL_22:
      v17 = *v6;
      a3[3] = -1;
      a3[2] = v17;
      return v6 + 1;
    }
    if ( v9 == 72 )
    {
      v18 = 31;
      goto LABEL_30;
    }
    v21 = *v6++;
    *a3 = v21;
    v7 = v21;
  }
  if ( (unsigned __int8)v7 > 0x20u )
  {
    if ( (unsigned __int8)(v7 - 110) > 1u )
      return nullptr;
    v12 = v6[32] - 98;
    if ( v12 > 0xBu )
      goto LABEL_35;
    v13 = 1LL << v12;
    if ( ((1LL << v12) & 0x533) != 0 )
    {
      a3[1] = 1;
      v14 = v6 + 33;
      v15 = 1;
      v16 = 33;
      goto LABEL_18;
    }
    if ( (v13 & 0x8C0) != 0 )
    {
      v16 = 37;
      v22 = *(_WORD *)(v6 + 33) == 0;
      v14 = v6 + 37;
      a3[1] = v22;
      v15 = 5;
      goto LABEL_18;
    }
    if ( (v13 & 0x20C) != 0 )
    {
      v14 = v6 + 33;
      v15 = 1;
      v16 = 33;
    }
    else
    {
LABEL_35:
      v14 = v6 + 32;
      v15 = 0;
      v16 = 32;
    }
LABEL_18:
    a3[2] = v16;
    a3[3] = v15;
    return v14;
  }
  if ( (unsigned __int8)v7 <= 5u )
    return nullptr;
  v10 = 1LL << v7;
  if ( ((1LL << v7) & 0x7FE3FC0) != 0 )
    return v6;
LABEL_20:
  if ( (v10 & 0x140000000LL) != 0 )
  {
    v18 = 31;
    if ( v7 != 30 )
      goto LABEL_30;
    goto LABEL_29;
  }
  if ( (v10 & 0xA0000000) != 0 )
    goto LABEL_22;
  return nullptr;
}

