/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4566A0
// Address: 0x004566A0

//----- (004566A0) --------------------------------------------------------
void __userpurge sub_4566A0(int a1@<ebx>, __m128i a2@<xmm0>, char *a3, int a4)
{
  char *v4; // eax
  const char *v5; // eax
  char *v6; // [esp+Ch] [ebp-18h] BYREF
  int v7; // [esp+10h] [ebp-14h]
  int v8; // [esp+14h] [ebp-10h]
  int v9; // [esp+20h] [ebp-4h]
  unsigned __int16 v10[260]; // [esp+24h] [ebp+0h] BYREF

  if ( !sub_4725EF(v10, 260) )
  {
LABEL_12:
    v5 = (const char *)sub_45CA00(a1, a2, 0xFFFFFFFF);
    sub_404C90((int)"getcwd: %s", v5);
  }
  v6 = nullptr;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  if ( !sub_45A700((int)&v6, v10, -1) )
  {
    *sub_46B984() = 42;
LABEL_11:
    v9 = -1;
    sub_401400((void **)&v6);
    goto LABEL_12;
  }
  if ( ((v7 - 1) & (unsigned int)-(v7 != 0)) >= a4 - 1 )
  {
    *sub_46B984() = 34;
    goto LABEL_11;
  }
  v4 = (char *)MultiByteStr;
  if ( v7 )
    v4 = v6;
  sub_45A4D0(a3, v4, a4);
  v9 = 1;
  if ( v6 )
  {
    v7 = 0;
    sub_453A20(v6);
  }
}
