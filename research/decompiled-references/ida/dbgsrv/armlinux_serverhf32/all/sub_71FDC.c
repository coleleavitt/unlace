/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_71FDC
// Address: 0x00071FDC

//----- (00071FDC) --------------------------------------------------------
__int16 *__fastcall sub_71FDC(__int64 a1, int a2)
{
  bool v4; // cf
  int v5; // [sp+4h] [bp-20h] BYREF
  int v6; // [sp+8h] [bp-1Ch]
  int v7; // [sp+Ch] [bp-18h]
  int v8; // [sp+10h] [bp-14h]
  int v9; // [sp+14h] [bp-10h]
  __int16 v10; // [sp+18h] [bp-Ch]

  v6 = 0;
  v5 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  if ( a1 < 0 )
  {
    v4 = (_DWORD)a1 == 0;
    LODWORD(a1) = -(int)a1;
    HIDWORD(a1) -= 2 * HIDWORD(a1) + !v4;
    LOWORD(v5) = -1;
    goto LABEL_3;
  }
  if ( a1 )
  {
LABEL_3:
    HIWORD(v7) = a1;
    HIWORD(v6) = WORD2(a1);
    LOWORD(v6) = HIWORD(a1);
    LOWORD(v7) = WORD1(a1);
    HIWORD(v5) = 16430 - sub_71334((unsigned __int16 *)&v5);
  }
  return sub_714FC(&v5, a2);
}
