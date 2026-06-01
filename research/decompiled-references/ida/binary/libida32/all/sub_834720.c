__int64 __fastcall sub_834720(unsigned int *a1, unsigned int **a2, __int64 a3, __int64 a4, int *a5)
{
  int v6; // eax
  unsigned int *v10; // rsi
  int v11; // ebp
  unsigned int v12; // edx
  unsigned int *v13; // rcx
  unsigned int *v15; // [rsp+8h] [rbp-40h] BYREF
  unsigned int v16; // [rsp+14h] [rbp-34h] BYREF
  unsigned __int64 v17; // [rsp+18h] [rbp-30h]

  v15 = a1;
  v17 = __readfsqword(0x28u);
  v16 = 0;
  *(_QWORD *)(a4 + 168) = -1;
  v6 = *a1;
  if ( *a1 != 0x80000000 )
  {
    v10 = a1;
    v11 = 0;
    while ( 1 )
    {
      if ( v6 >= 0 )
        goto LABEL_12;
      HIWORD(v12) = HIWORD(v6);
      LOWORD(v12) = 0;
      if ( v12 == -2145648640 )
      {
        v13 = v10 + 1;
        if ( (unsigned int)(v6 + 2145648625) > 1 )
          v13 = v15;
        goto LABEL_10;
      }
      if ( v12 > 0x801C0000 )
        break;
      if ( v12 == -2146435072 )
      {
        v13 = v10 + 2;
        ++v11;
        goto LABEL_10;
      }
      if ( v12 > 0x80100000 )
      {
        if ( v12 == -2146107392 )
          goto LABEL_29;
        if ( v12 <= 0x80150000 )
        {
          if ( v12 != -2146238464 )
          {
            if ( v12 > 0x80130000 )
            {
              if ( v12 != -2146172928 )
                goto LABEL_27;
            }
            else if ( ((v12 + 2146369536) & 0xFFFE0000) != 0 )
            {
              goto LABEL_27;
            }
          }
LABEL_29:
          v13 = v10 + 3;
          ++v11;
          goto LABEL_10;
        }
        if ( v12 == -2145976320 )
          goto LABEL_67;
        if ( v12 <= 0x80170000 )
        {
          if ( v12 != -2146041856 )
            goto LABEL_27;
LABEL_51:
          v13 = v10 + 2;
          goto LABEL_10;
        }
        if ( v12 == -2145845248 )
          goto LABEL_65;
        if ( v12 <= 0x80190000 )
        {
          if ( v12 != -2145910784 )
            goto LABEL_27;
LABEL_65:
          v13 = v10 + 1;
          goto LABEL_10;
        }
        if ( (v6 & 0xFFFE0000) != 0x801A0000 )
          goto LABEL_27;
        goto LABEL_12;
      }
      if ( v12 == -2147090432 )
        goto LABEL_42;
      if ( v12 <= 0x80060000 )
      {
        if ( v12 == -2147221504 )
          goto LABEL_42;
        if ( v12 <= 0x80040000 )
        {
          if ( v12 == -2147352576 )
            goto LABEL_67;
          if ( (v6 & 0xFFFD0000) != 0x80010000 )
            goto LABEL_27;
          goto LABEL_12;
        }
        if ( v12 != -2147155968 )
          goto LABEL_27;
        v13 = v10 + 1;
      }
      else
      {
        v13 = v10 + 5;
        if ( v12 != -2147024896 )
        {
          if ( v12 <= 0x8006FFFF )
            goto LABEL_27;
          if ( v12 != -2146697216 )
          {
            if ( v12 > 0x800C0000 )
            {
              if ( v12 == -2146500608 )
                goto LABEL_67;
              if ( v12 > 0x800F0000 || ((v12 + 2146631680) & 0xFFFE0000) != 0 )
                goto LABEL_27;
            }
            else
            {
              if ( v12 == -2146959360 )
                goto LABEL_67;
              if ( v12 <= 0x8007FFFF || v12 != -2146828288 && (v6 & 0xFFFD0000) != 0x80090000 )
                goto LABEL_27;
            }
          }
          goto LABEL_12;
        }
      }
LABEL_10:
      v6 = v13[1];
      v10 = v13 + 1;
      v15 = v13 + 1;
      if ( v6 == 0x80000000 )
        return 0;
    }
    if ( v12 != -2144796672 )
    {
      if ( v12 <= 0x80290000 )
      {
        if ( v12 == -2145320960 )
          goto LABEL_65;
        if ( v12 > 0x80210000 )
        {
          if ( v12 == -2145058816 )
          {
LABEL_42:
            v13 = v10 + 3;
            goto LABEL_10;
          }
          if ( v12 > 0x80250000 )
          {
            if ( (v6 & 0xFFFE0000) != 0x80260000 && v12 != -2144862208 )
              goto LABEL_27;
            goto LABEL_67;
          }
          if ( v12 == -2145124352 )
            goto LABEL_51;
          if ( v12 > 0x80240000 || (v6 & 0xFFFE0000) != 0x80220000 )
            goto LABEL_27;
        }
        else
        {
          if ( v12 != -2145583104 )
          {
            if ( v12 <= 0x801CFFFF )
              goto LABEL_27;
            if ( v12 != -2145452032 )
            {
              if ( v12 != -2145386496 )
              {
                if ( v12 != -2145517568 )
                  goto LABEL_27;
                goto LABEL_67;
              }
              goto LABEL_65;
            }
            goto LABEL_51;
          }
          if ( --v11 < 0 )
          {
            if ( a2 )
              *a2 = v10;
            return 0;
          }
        }
        goto LABEL_12;
      }
      if ( v12 == -2144075776 )
      {
LABEL_12:
        v13 = v15;
        goto LABEL_10;
      }
      if ( v12 > 0x80340000 )
      {
        if ( v12 != -2143289344 )
        {
          if ( v12 > 0x80400000 )
          {
            if ( v12 != -2143158272 && (v6 & 0xFFFD0000) != 0x80410000 )
              goto LABEL_27;
            goto LABEL_51;
          }
          if ( v12 == -2143879168 )
            goto LABEL_84;
          if ( v12 <= 0x80370000 )
          {
            if ( v12 == -2144010240 )
              goto LABEL_84;
            if ( v12 != -2143944704 )
              goto LABEL_27;
          }
          else if ( v12 != -2143551488 )
          {
            if ( v12 > 0x803C0000 )
            {
              if ( v12 != -2143420416 && (v6 & 0xFFFD0000) != 0x803D0000 )
              {
LABEL_27:
                *(_QWORD *)(a4 + 168) = 0;
                return 170;
              }
            }
            else if ( v12 != -2143682560 )
            {
              if ( v12 > 0x803A0000 )
              {
                if ( v12 != -2143617024 )
                  goto LABEL_27;
              }
              else if ( (v6 & 0xFFFE0000) != 0x80380000 )
              {
                goto LABEL_27;
              }
            }
          }
        }
        goto LABEL_12;
      }
      if ( v12 != -2144600064 )
      {
        if ( v12 > 0x802C0000 )
        {
          if ( v12 == -2144272384 )
            goto LABEL_84;
          if ( v12 > 0x80310000 )
          {
            if ( v12 != -2144206848 )
            {
              if ( v12 != -2144141312 )
                goto LABEL_27;
LABEL_84:
              v13 = &v10[v10[1] + 1];
              goto LABEL_10;
            }
          }
          else
          {
            if ( v12 == -2144534528 )
              goto LABEL_84;
            if ( v12 <= 0x802CFFFF || (v6 & 0xFFFE0000) != 0x802E0000 && v12 != -2144337920 )
              goto LABEL_27;
          }
          goto LABEL_12;
        }
        if ( v12 != -2144731136 )
        {
          if ( v12 != -2144665600 )
            goto LABEL_27;
LABEL_67:
          v13 = v15;
          ++v11;
          goto LABEL_10;
        }
      }
    }
    if ( !(unsigned int)sub_8345A0(&v15, &v16, a5, a3, a4) )
      return v16;
    goto LABEL_12;
  }
  return 0;
}

