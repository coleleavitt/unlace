__int64 __fastcall google_breakpad::ConvertUTF16toUTF8(
        unsigned __int16 **a1,
        unsigned __int64 a2,
        __int64 *a3,
        unsigned __int64 a4,
        int a5)
{
  unsigned __int16 *v5; // rax
  unsigned __int64 v7; // [rsp+2Ch] [rbp-48h]
  unsigned __int16 *v8; // [rsp+34h] [rbp-40h]
  unsigned __int16 v9; // [rsp+52h] [rbp-22h]
  unsigned __int64 v10; // [rsp+54h] [rbp-20h]
  unsigned __int64 v11; // [rsp+5Ch] [rbp-18h]
  unsigned __int64 v12; // [rsp+5Ch] [rbp-18h]
  unsigned __int16 *v13; // [rsp+64h] [rbp-10h]
  unsigned int v14; // [rsp+70h] [rbp-4h]

  v14 = 0;
  v13 = *a1;
  v11 = *a3;
  while ( (unsigned __int64)v13 < a2 )
  {
    v8 = v13;
    v5 = v13++;
    v10 = *v5;
    if ( v10 <= 0xD7FF || v10 > 0xDBFF )
    {
      if ( !a5 && v10 > 0xDBFF && v10 <= 0xDFFF )
      {
        --v13;
        v14 = 3;
        break;
      }
    }
    else
    {
      if ( (unsigned __int64)v13 >= a2 )
      {
        --v13;
        v14 = 1;
        break;
      }
      v7 = *v13;
      if ( v7 <= 0xDBFF || v7 > 0xDFFF )
      {
        if ( !a5 )
        {
          --v13;
          v14 = 3;
          break;
        }
      }
      else
      {
        v10 = ((v10 - 55296) << 10) + v7 + 9216;
        ++v13;
      }
    }
    if ( v10 > 0x7F )
    {
      if ( v10 > 0x7FF )
      {
        if ( v10 > 0xFFFF )
        {
          if ( v10 > 0x10FFFF )
          {
            v9 = 3;
            v10 = 65533;
          }
          else
          {
            v9 = 4;
          }
        }
        else
        {
          v9 = 3;
        }
      }
      else
      {
        v9 = 2;
      }
    }
    else
    {
      v9 = 1;
    }
    v12 = v9 + v11;
    if ( v12 > a4 )
    {
      v13 = v8;
      v11 = v12 - v9;
      v14 = 2;
      break;
    }
    if ( v9 == 2 )
      goto LABEL_34;
    if ( v9 > 2u )
    {
      if ( v9 != 3 )
      {
        *(_BYTE *)--v12 = v10 & 0x3F | 0x80;
        v10 >>= 6;
      }
      *(_BYTE *)--v12 = v10 & 0x3F | 0x80;
      v10 >>= 6;
LABEL_34:
      *(_BYTE *)--v12 = v10 & 0x3F | 0x80;
      v10 >>= 6;
LABEL_35:
      *(_BYTE *)--v12 = v10 | byte_1DC1F0[v9];
      goto LABEL_36;
    }
    if ( v9 == 1 )
      goto LABEL_35;
LABEL_36:
    v11 = v9 + v12;
  }
  *a1 = v13;
  *a3 = v11;
  return v14;
}

