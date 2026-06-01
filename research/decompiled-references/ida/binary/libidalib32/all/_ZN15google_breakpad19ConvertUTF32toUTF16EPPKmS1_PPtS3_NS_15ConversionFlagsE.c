__int64 __fastcall google_breakpad::ConvertUTF32toUTF16(
        unsigned __int64 **a1,
        unsigned __int64 a2,
        _WORD **a3,
        unsigned __int64 a4,
        int a5)
{
  unsigned __int64 *v5; // rax
  _WORD *v6; // rax
  _WORD *v7; // rax
  _WORD *v8; // rax
  _WORD *v9; // rax
  unsigned __int64 v11; // [rsp+24h] [rbp-20h]
  unsigned __int64 v12; // [rsp+24h] [rbp-20h]
  _WORD *v13; // [rsp+2Ch] [rbp-18h]
  unsigned __int64 *v14; // [rsp+34h] [rbp-10h]
  unsigned int v15; // [rsp+40h] [rbp-4h]

  v15 = 0;
  v14 = *a1;
  v13 = *a3;
  while ( (unsigned __int64)v14 < a2 )
  {
    if ( (unsigned __int64)v13 >= a4 )
    {
      v15 = 2;
      break;
    }
    v5 = v14++;
    v11 = *v5;
    if ( *v5 > 0xFFFF )
    {
      if ( v11 <= 0x10FFFF )
      {
        if ( a4 <= (unsigned __int64)(v13 + 1) )
        {
          --v14;
          v15 = 2;
          break;
        }
        v12 = v11 - 0x10000;
        *v13 = (v12 >> 10) - 10240;
        v9 = v13 + 1;
        v13 += 2;
        *v9 = (v12 & 0x3FF) - 9216;
      }
      else if ( a5 )
      {
        v8 = v13++;
        *v8 = -3;
      }
      else
      {
        v15 = 3;
      }
    }
    else if ( v11 <= 0xD7FF || v11 > 0xDFFF )
    {
      v7 = v13++;
      *v7 = v11;
    }
    else
    {
      if ( !a5 )
      {
        --v14;
        v15 = 3;
        break;
      }
      v6 = v13++;
      *v6 = -3;
    }
  }
  *a1 = v14;
  *a3 = v13;
  return v15;
}

