/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4928A0
// Address: 0x00000000004928A0

//----- (00000000004928A0) ----------------------------------------------------
__int64 __fastcall sub_4928A0(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  unsigned int v5; // w24
  size_t v7; // x0
  size_t v8; // x22
  size_t v9; // x19
  int v10; // w0
  unsigned __int64 v11; // x0
  struct tm tp; // [xsp+40h] [xbp-60h] BYREF
  char buf[32]; // [xsp+78h] [xbp-28h] BYREF

  v5 = (unsigned __int8)sub_492840(&tp, a3);
  if ( v5 && asctime_r(&tp, buf) )
  {
    sub_493350(a1, (unsigned __int8 *)buf, a2);
    if ( a2 > 8 && *(_BYTE *)(a1 + 8) == 32 )
      *(_BYTE *)(a1 + 8) = 48;
    v7 = strlen((const char *)a1);
    v8 = v7;
    if ( v7 )
    {
      v9 = v7 - 1;
      v10 = *(unsigned __int8 *)(a1 + v7 - 1);
      if ( (v10 & 0x80) != 0 )
      {
        v11 = v8 + 6;
      }
      else
      {
        while ( 1 )
        {
          v8 = v9 + 1;
          if ( !isspace(v10) )
          {
            v11 = v9 + 7;
            goto LABEL_16;
          }
          if ( !v9 )
          {
            v11 = 6;
            v8 = 0;
            goto LABEL_16;
          }
          v10 = *(unsigned __int8 *)(a1 + v9 - 1);
          if ( (v10 & 0x80) != 0 )
            break;
          --v9;
        }
        v11 = v9 + 6;
        v8 = v9;
      }
    }
    else
    {
      v11 = 6;
    }
LABEL_16:
    if ( a2 >= v11 )
      sub_493350(a1 + v8, " UTC\n", 6);
  }
  else
  {
    v5 = 0;
    sub_493350(a1, "[wrong timestamp]\n", a2);
  }
  return v5;
}
// 4928A0: could not find valid save-restore pair for x22
