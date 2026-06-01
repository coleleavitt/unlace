/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_778B8
// Address: 0x000778B8

//----- (000778B8) --------------------------------------------------------
int __fastcall sub_778B8(
        int a1,
        const char *a2,
        unsigned __int8 a3,
        int (__fastcall *a4)(_DWORD, _DWORD, _DWORD, _DWORD, int),
        int a5)
{
  FILE *v8; // r0
  FILE *v9; // r5
  FILE *v10; // r6
  __int64 v11; // kr00_8
  int v12; // r0
  int v13; // r11
  int v14; // r4
  int v16; // r6
  __int64 v17; // [sp+10h] [bp-1014h]
  _BYTE ptr[4068]; // [sp+1Ch] [bp-1008h] BYREF

  v8 = sub_75C68(a1);
  if ( !v8 )
    return -1;
  v9 = v8;
  if ( !(a3 | !sub_77404((int)a2)) )
    return -3;
  v10 = sub_75CF8((int)a2);
  if ( v10 )
  {
    sub_7771C((int)v9);
    v17 = sub_776D4((int)v9);
    sub_7771C((int)v9);
    v11 = 0;
    while ( 1 )
    {
      v12 = sub_77620(v9, ptr, 4096);
      v13 = v12;
      if ( v12 <= 0 )
      {
        v14 = 0;
        sub_77754(v10);
        goto LABEL_9;
      }
      if ( v12 != sub_7768C(v10, ptr, v12) )
      {
        v14 = -4;
        goto LABEL_12;
      }
      if ( a4 )
      {
        v11 += v13;
        if ( !a4(v11, HIDWORD(v11), v17, HIDWORD(v17), a5) )
          break;
      }
    }
    v14 = -5;
LABEL_12:
    sub_77754(v10);
    v16 = sub_70A10();
    sub_7779C(a2);
    sub_70A2C(v16);
LABEL_9:
    sub_77754(v9);
  }
  else
  {
    v14 = -2;
    sub_77754(v9);
  }
  return v14;
}
