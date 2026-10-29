__int64 __fastcall sub_2284030(__int64 *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, int a6, __int64 a7)
{
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // r12
  __int64 v11; // rbp
  unsigned __int64 v12; // rbx
  _BYTE *v13; // rbx
  __int64 v14; // rcx
  char v15; // bp
  char v16; // r12
  _BYTE *v17; // rsi
  __int64 v18; // rbp
  char v19; // bl
  __int64 v20; // rbp
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // rbx
  __int64 v25; // [rsp+20h] [rbp-40h]
  char v26; // [rsp+2Fh] [rbp-31h]

  result = a7;
  if ( a4 != a3 )
  {
    while ( 1 )
    {
      v9 = *a1;
      v10 = a3;
      v11 = *(_QWORD *)(*a1 + 8 * a3);
      v12 = (unsigned int)v11 & 0xF8000000;
      if ( v12 == 1476395008 )
        goto LABEL_46;
      if ( v12 > 0x58000000 )
      {
        if ( v12 == 0x80000000 )
        {
          v20 = a3 + 1;
          v25 = a3 + 1;
          v26 = *(_BYTE *)(a7 + a3);
          if ( v26 )
          {
            v22 = *(_QWORD *)(v9 + 8 * a3 + 8);
            if ( (v22 & 0xF8000000) != 0x90000000LL )
            {
              v23 = 1;
              do
              {
                v23 += v22 & 0x7FFFFFF;
                v20 = v23 + a3;
                v22 = *(_QWORD *)(v9 + 8 * (v23 + a3));
              }
              while ( (v22 & 0xF8000000) != 0x90000000LL );
            }
            ++a3;
            *(_BYTE *)(a7 + v20) |= v26;
            if ( a4 == v25 )
              return result;
          }
          else
          {
            ++a3;
            if ( a4 == v20 )
              return result;
          }
        }
        else if ( v12 <= 0x80000000 )
        {
          if ( v12 == 1744830464 )
            goto LABEL_24;
          if ( v12 <= 0x68000000 )
          {
            if ( v12 != 1610612736 )
              goto LABEL_49;
LABEL_24:
            *(_BYTE *)(a7 + a3 + 1) |= *(_BYTE *)(a7 + a3);
            ++a3;
            goto LABEL_21;
          }
          if ( v12 == 1879048192 )
            goto LABEL_24;
          if ( v12 != 2013265920 )
            goto LABEL_49;
LABEL_46:
          *(_BYTE *)(a7 + a3 + 1) |= *(_BYTE *)(a7 + a3);
          *(_BYTE *)(a7 + (v11 & 0x7FFFFFF) + a3) |= *(_BYTE *)(a7 + a3);
          if ( a4 == ++a3 )
            return result;
        }
        else
        {
          if ( v12 == 2415919104 )
            goto LABEL_24;
          if ( v12 <= 0x90000000 )
          {
            if ( v12 != 2281701376 )
              goto LABEL_49;
            v17 = (_BYTE *)(a7 + a3);
            v18 = a3 + (v11 & 0x7FFFFFF);
            v19 = *(_BYTE *)(a7 + a3++);
            *(_BYTE *)(a7 + a3) |= v19;
            if ( (*(_QWORD *)(*a1 + 8 * v18) & 0xF8000000LL) == 0x90000000LL )
              goto LABEL_12;
            *(_BYTE *)(a7 + v18) |= *v17;
            if ( a4 == a3 )
              return result;
          }
          else if ( v12 == 2550136832 )
          {
            ++a3;
            if ( a6 == 133 )
              goto LABEL_11;
            if ( a4 == a3 )
              return result;
          }
          else
          {
            if ( v12 != 2684354560 )
              goto LABEL_49;
            ++a3;
            if ( a6 == 134 )
              goto LABEL_11;
            if ( a4 == a3 )
              return result;
          }
        }
      }
      else
      {
        if ( v12 == 805306368 )
        {
          ++a3;
          if ( a6 <= 127 )
          {
            v21 = 32 * (v11 & 0x7FFFFFF) + *a2;
            if ( (*(_BYTE *)(*(_QWORD *)v21 + (unsigned __int8)a6) & *(_BYTE *)(v21 + 8)) != 0 )
              *(_BYTE *)(a7 + v10 + 1) |= *(_BYTE *)(a5 + v10);
          }
          goto LABEL_12;
        }
        if ( v12 > 0x30000000 )
        {
          if ( v12 == 0x40000000 )
            goto LABEL_24;
          if ( v12 <= 0x40000000 )
          {
            if ( v12 != 939524096 )
              goto LABEL_49;
            goto LABEL_24;
          }
          if ( v12 == 1207959552 )
            goto LABEL_24;
          if ( v12 != 1342177280 )
            goto LABEL_49;
          v13 = (_BYTE *)(a7 + a3);
          v14 = a3 + 1;
          a3 -= v11 & 0x7FFFFFF;
          *(_BYTE *)(a7 + v14) |= *v13;
          v15 = *(_BYTE *)(a7 + a3);
          v16 = *v13 | v15;
          *(_BYTE *)(a7 + a3) = v16;
          if ( v16 && !v15 )
            goto LABEL_12;
          a3 = v14;
LABEL_21:
          if ( a4 == a3 )
            return result;
        }
        else
        {
          if ( v12 == 402653184 )
          {
            ++a3;
            if ( (a6 & 0xFFFFFFFD) == 0x81 )
              *(_BYTE *)(a7 + v10 + 1) |= *(_BYTE *)(a5 + v10);
            goto LABEL_12;
          }
          if ( v12 <= 0x18000000 )
          {
            if ( v12 != 0x10000000 )
              goto LABEL_49;
            ++a3;
            if ( (char)v11 == a6 )
              goto LABEL_11;
            if ( a4 == a3 )
              return result;
          }
          else if ( v12 == 0x20000000 )
          {
            ++a3;
            if ( (unsigned int)(a6 - 130) <= 1 )
            {
LABEL_11:
              *(_BYTE *)(a7 + v10 + 1) |= *(_BYTE *)(a5 + v10);
              goto LABEL_12;
            }
            if ( a4 == a3 )
              return result;
          }
          else if ( v12 == 671088640 )
          {
            ++a3;
            if ( a6 <= 127 )
              goto LABEL_11;
LABEL_12:
            if ( a4 == a3 )
              return result;
          }
          else
          {
LABEL_49:
            if ( a4 == ++a3 )
              return result;
          }
        }
      }
    }
  }
  return result;
}
