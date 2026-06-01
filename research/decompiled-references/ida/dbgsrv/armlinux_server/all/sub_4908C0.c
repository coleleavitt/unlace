/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4908C0
// Address: 0x00000000004908C0

//----- (00000000004908C0) ----------------------------------------------------
__int64 __fastcall sub_4908C0(
        const char *a1,
        const char *a2,
        unsigned __int8 a3,
        unsigned __int8 (__fastcall *a4)(__int64, __int64, __int64),
        __int64 a5)
{
  int v5; // w19
  FILE *v9; // x0
  FILE *v10; // x20
  FILE *v11; // x21
  __int64 v12; // x27
  __int64 v13; // x25
  __int64 v14; // x28
  int v15; // w0
  unsigned int v16; // w19
  unsigned int v18; // w21
  _BYTE v19[4096]; // [xsp+68h] [xbp-1008h] BYREF

  v5 = a3;
  v9 = sub_48DDA0(a1);
  if ( v9 )
  {
    v10 = v9;
    if ( v5 | (unsigned __int8)sub_490268(a2) ^ 1 )
    {
      v11 = sub_48DEA0(a2);
      if ( v11 )
      {
        sub_490650(v10, 0, 2);
        v12 = sub_4905F0(v10);
        v13 = 0;
        sub_490650(v10, 0, 0);
        while ( 1 )
        {
          v15 = sub_4904B8(v10, v19, 0x1000u);
          if ( v15 <= 0 )
          {
            v16 = 0;
            sub_4906A0(v11);
            goto LABEL_9;
          }
          v14 = v15;
          if ( v15 != sub_490560(v11, v19, v15) )
          {
            v16 = -4;
            goto LABEL_12;
          }
          if ( a4 )
          {
            v13 += v14;
            if ( !a4(v13, v12, a5) )
              break;
          }
        }
        v16 = -5;
LABEL_12:
        sub_4906A0(v11);
        v18 = sub_4869A0();
        sub_490700(a2);
        sub_4869C8(v18);
LABEL_9:
        sub_4906A0(v10);
      }
      else
      {
        v16 = -2;
        sub_4906A0(v10);
      }
    }
    else
    {
      return (unsigned int)-3;
    }
  }
  else
  {
    return (unsigned int)-1;
  }
  return v16;
}
// 4908C0: could not find valid save-restore pair for x21
// 4908C0: could not find valid save-restore pair for x25
// 4908C0: could not find valid save-restore pair for x27
// 4908C0: could not find valid save-restore pair for x28
