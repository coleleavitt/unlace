__int64 __fastcall google_breakpad::ConvertUTF16toUTF32(
        unsigned __int16 **a1,
        unsigned __int64 a2,
        unsigned __int64 **a3,
        unsigned __int64 a4,
        int a5)
{
  unsigned __int16 *v5; // rax
  unsigned __int64 *v6; // rax
  unsigned __int64 v8; // [rsp+24h] [rbp-30h]
  unsigned __int16 *v9; // [rsp+2Ch] [rbp-28h]
  unsigned __int64 v10; // [rsp+34h] [rbp-20h]
  unsigned __int64 *v11; // [rsp+3Ch] [rbp-18h]
  unsigned __int16 *v12; // [rsp+44h] [rbp-10h]
  unsigned int v13; // [rsp+50h] [rbp-4h]

  v13 = 0;
  v12 = *a1;
  v11 = *a3;
  while ( (unsigned __int64)v12 < a2 )
  {
    v9 = v12;
    v5 = v12++;
    v10 = *v5;
    if ( v10 <= 0xD7FF || v10 > 0xDBFF )
    {
      if ( !a5 && v10 > 0xDBFF && v10 <= 0xDFFF )
      {
        --v12;
        v13 = 3;
        break;
      }
    }
    else
    {
      if ( (unsigned __int64)v12 >= a2 )
      {
        --v12;
        v13 = 1;
        break;
      }
      v8 = *v12;
      if ( v8 <= 0xDBFF || v8 > 0xDFFF )
      {
        if ( !a5 )
        {
          --v12;
          v13 = 3;
          break;
        }
      }
      else
      {
        v10 = ((v10 - 55296) << 10) + v8 + 9216;
        ++v12;
      }
    }
    if ( (unsigned __int64)v11 >= a4 )
    {
      v12 = v9;
      v13 = 2;
      break;
    }
    v6 = v11++;
    *v6 = v10;
  }
  *a1 = v12;
  *a3 = v11;
  return v13;
}

