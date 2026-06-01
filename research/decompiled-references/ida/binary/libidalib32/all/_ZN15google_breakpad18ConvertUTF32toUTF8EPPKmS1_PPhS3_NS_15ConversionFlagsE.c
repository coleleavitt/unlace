__int64 __fastcall google_breakpad::ConvertUTF32toUTF8(
        unsigned __int64 **a1,
        unsigned __int64 a2,
        __int64 *a3,
        unsigned __int64 a4,
        int a5)
{
  unsigned __int64 *v5; // rax
  unsigned __int16 v7; // [rsp+42h] [rbp-22h]
  unsigned __int64 v8; // [rsp+44h] [rbp-20h]
  unsigned __int64 v9; // [rsp+4Ch] [rbp-18h]
  unsigned __int64 v10; // [rsp+4Ch] [rbp-18h]
  unsigned __int64 *v11; // [rsp+54h] [rbp-10h]
  unsigned int v12; // [rsp+60h] [rbp-4h]

  v12 = 0;
  v11 = *a1;
  v9 = *a3;
  while ( (unsigned __int64)v11 < a2 )
  {
    v5 = v11++;
    v8 = *v5;
    if ( !a5 && v8 > 0xD7FF && v8 <= 0xDFFF )
    {
      --v11;
      v12 = 3;
      break;
    }
    if ( v8 > 0x7F )
    {
      if ( v8 > 0x7FF )
      {
        if ( v8 > 0xFFFF )
        {
          if ( v8 > 0x10FFFF )
          {
            v7 = 3;
            v8 = 65533;
            v12 = 3;
          }
          else
          {
            v7 = 4;
          }
        }
        else
        {
          v7 = 3;
        }
      }
      else
      {
        v7 = 2;
      }
    }
    else
    {
      v7 = 1;
    }
    v10 = v7 + v9;
    if ( v10 > a4 )
    {
      --v11;
      v9 = v10 - v7;
      v12 = 2;
      break;
    }
    if ( v7 == 2 )
      goto LABEL_25;
    if ( v7 > 2u )
    {
      if ( v7 != 3 )
      {
        *(_BYTE *)--v10 = v8 & 0x3F | 0x80;
        v8 >>= 6;
      }
      *(_BYTE *)--v10 = v8 & 0x3F | 0x80;
      v8 >>= 6;
LABEL_25:
      *(_BYTE *)--v10 = v8 & 0x3F | 0x80;
      v8 >>= 6;
LABEL_26:
      *(_BYTE *)--v10 = v8 | byte_1DB1D0[v7];
      goto LABEL_27;
    }
    if ( v7 == 1 )
      goto LABEL_26;
LABEL_27:
    v9 = v7 + v10;
  }
  *a1 = v11;
  *a3 = v9;
  return v12;
}

