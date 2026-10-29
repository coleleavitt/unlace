__int64 __fastcall sub_2283BC0(__int64 *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, int a6, __int64 a7)
{
  unsigned __int64 v8; // r8
  __int64 v9; // r11
  __int64 result; // rax
  __int64 v11; // rdi
  __int64 v12; // rbp
  __int64 v13; // r9
  unsigned __int64 v14; // rsi
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rcx
  unsigned int v23; // [rsp+Ch] [rbp-48h]
  unsigned int v24; // [rsp+10h] [rbp-44h]
  __int64 v26; // [rsp+1Ch] [rbp-38h]

  v8 = 1LL << a3;
  if ( a3 != a4 )
  {
    v9 = *a1;
    v24 = a6 - 130;
    v26 = (unsigned __int8)a6;
    v23 = a6 & 0xFFFFFFFD;
    result = a7;
    while ( 1 )
    {
      v11 = *(_QWORD *)(v9 + 8 * a3);
      v12 = a3;
      v13 = v8;
      v14 = (unsigned int)v11 & 0xF8000000;
      if ( v14 == 1476395008 )
        goto LABEL_44;
      if ( v14 > 0x58000000 )
      {
        if ( v14 == 0x80000000 )
        {
          v17 = a3 + 1;
          if ( (v8 & result) != 0 )
          {
            v19 = *(_QWORD *)(v9 + 8 * a3 + 8);
            if ( (v19 & 0xF8000000) == 0x90000000LL )
            {
              LOBYTE(v20) = 1;
            }
            else
            {
              v20 = 1;
              do
              {
                v20 += v19 & 0x7FFFFFF;
                v19 = *(_QWORD *)(v9 + 8 * (v20 + a3));
              }
              while ( (v19 & 0xF8000000) != 0x90000000LL );
            }
            ++a3;
            result |= (result & v8) << v20;
            v8 *= 2LL;
            if ( a4 == v17 )
              return result;
          }
          else
          {
            ++a3;
            v8 *= 2LL;
            if ( a4 == v17 )
              return result;
          }
        }
        else if ( v14 <= 0x80000000 )
        {
          if ( v14 == 1744830464 )
            goto LABEL_30;
          if ( v14 <= 0x68000000 )
          {
            if ( v14 != 1610612736 )
            {
              ++a3;
              goto LABEL_27;
            }
LABEL_30:
            ++a3;
            result |= 2 * (result & v8);
            goto LABEL_27;
          }
          if ( v14 == 1879048192 )
            goto LABEL_30;
          if ( v14 == 2013265920 )
          {
LABEL_44:
            ++a3;
            result |= ((((2 * (v8 & result)) | result) & v8) << v11) | (2 * (v8 & result));
            v8 *= 2LL;
            if ( a4 == a3 )
              return result;
          }
          else
          {
LABEL_26:
            ++a3;
LABEL_27:
            v8 = 2 * v13;
            if ( a4 == a3 )
              return result;
          }
        }
        else
        {
          if ( v14 == 2415919104 )
            goto LABEL_30;
          if ( v14 <= 0x90000000 )
          {
            if ( v14 != 2281701376 )
              goto LABEL_26;
            v16 = v11 & 0x7FFFFFF;
            ++a3;
            result |= 2 * (v8 & result);
            if ( (*(_QWORD *)(v9 + 8 * (v16 + v12)) & 0xF8000000LL) == 0x90000000LL )
              goto LABEL_13;
            result |= (v8 & result) << v16;
            v8 *= 2LL;
            if ( a4 == a3 )
              return result;
          }
          else if ( v14 == 2550136832 )
          {
            ++a3;
            if ( a6 == 133 )
              goto LABEL_12;
            v8 *= 2LL;
            if ( a4 == a3 )
              return result;
          }
          else
          {
            if ( v14 != 2684354560 )
              goto LABEL_26;
            ++a3;
            if ( a6 == 134 )
              goto LABEL_12;
            v8 *= 2LL;
            if ( a4 == a3 )
              return result;
          }
        }
      }
      else
      {
        if ( v14 == 805306368 )
        {
          ++a3;
          if ( a6 <= 127 )
          {
            v18 = *a2 + 32 * (v11 & 0x7FFFFFF);
            if ( (*(_BYTE *)(*(_QWORD *)v18 + v26) & *(_BYTE *)(v18 + 8)) != 0 )
              result |= 2 * (v8 & a5);
          }
          goto LABEL_13;
        }
        if ( v14 > 0x30000000 )
        {
          if ( v14 == 0x40000000 )
            goto LABEL_30;
          if ( v14 <= 0x40000000 )
          {
            if ( v14 == 939524096 )
              goto LABEL_30;
          }
          else
          {
            if ( v14 == 1207959552 )
              goto LABEL_30;
            if ( v14 == 1342177280 )
            {
              v15 = result | (2 * (v8 & result));
              result = v15 | ((v8 & v15) >> v11);
              if ( ((v8 >> v11) & v15) == 0 && (result & (v8 >> v11)) != 0 )
              {
                a3 = a3 - 1 - (v11 & 0x7FFFFFF);
                v13 = 1LL << a3;
              }
            }
          }
          goto LABEL_26;
        }
        if ( v14 == 402653184 )
        {
          ++a3;
          if ( v23 == 129 )
            result |= 2 * (v8 & a5);
          goto LABEL_13;
        }
        if ( v14 <= 0x18000000 )
        {
          if ( v14 != 0x10000000 )
            goto LABEL_26;
          ++a3;
          if ( (char)v11 == a6 )
            goto LABEL_12;
          v8 *= 2LL;
          if ( a4 == a3 )
            return result;
        }
        else if ( v14 == 0x20000000 )
        {
          ++a3;
          if ( v24 <= 1 )
          {
LABEL_12:
            result |= 2 * (v8 & a5);
            goto LABEL_13;
          }
          v8 *= 2LL;
          if ( a4 == a3 )
            return result;
        }
        else
        {
          if ( v14 != 671088640 )
            goto LABEL_26;
          ++a3;
          if ( a6 <= 127 )
            goto LABEL_12;
LABEL_13:
          v8 *= 2LL;
          if ( a4 == a3 )
            return result;
        }
      }
    }
  }
  return a7;
}
