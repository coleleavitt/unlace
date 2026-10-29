/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_71F6C
// Address: 0x00071F6C

//----- (00071F6C) --------------------------------------------------------
__int16 *__fastcall sub_71F6C(int a1, int a2)
{
  int v3; // r3
  int v5; // [sp+4h] [bp-1Ch] BYREF
  int v6; // [sp+8h] [bp-18h]
  int v7; // [sp+Ch] [bp-14h]
  int v8; // [sp+10h] [bp-10h]
  int v9; // [sp+14h] [bp-Ch]
  __int16 v10; // [sp+18h] [bp-8h]

  v6 = 0;
  v5 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v3 = a1;
  if ( a1 < 0 )
  {
    v3 = -a1;
    LOWORD(v5) = -1;
LABEL_4:
    LOWORD(v6) = HIWORD(v3);
    HIWORD(v6) = v3;
    HIWORD(v5) = 16398 - sub_71334((unsigned __int16 *)&v5);
    return sub_714FC(&v5, a2);
  }
  if ( a1 )
    goto LABEL_4;
  return sub_714FC(&v5, a2);
}
