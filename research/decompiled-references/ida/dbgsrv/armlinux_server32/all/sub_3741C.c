/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3741C
// Address: 0x0003741C

//----- (0003741C) --------------------------------------------------------
int __fastcall sub_3741C(int a1, int a2)
{
  unsigned int v2; // r6
  size_t v4; // r0
  size_t v5; // r6
  unsigned int v7; // r0
  char *p_s; // r8
  int v9; // r1
  char v10; // r1
  void *v11; // r0
  char s; // [sp+4h] [bp-404h] BYREF
  char v13; // [sp+5h] [bp-403h] BYREF

  v2 = *(_DWORD *)(a1 + 32);
  s = 0;
  if ( v2 - 2 <= 0x1E )
  {
    v7 = *(_DWORD *)(a1 + 8);
    p_s = &s;
    if ( !v7 )
      goto LABEL_12;
    do
    {
      v9 = v7 % v2;
      v7 /= v2;
      if ( v9 <= 9 )
        v10 = v9 + 48;
      else
        v10 = v9 + 55;
      *p_s++ = v10;
    }
    while ( v7 );
    if ( p_s == &s )
    {
LABEL_12:
      p_s = &v13;
      s = 48;
    }
    *p_s = 0;
    sub_794AC((int)&s, p_s - &s);
  }
  v4 = strlen(&s);
  v5 = v4;
  *(_BYTE *)a2 = 7;
  *(_DWORD *)(a2 + 8) = 0;
  *(_DWORD *)(a2 + 12) = 0;
  *(_DWORD *)(a2 + 16) = 0;
  if ( v4 )
  {
    v11 = sub_78018(a2 + 8, nullptr, v4 + 1, 1u);
    *(_DWORD *)(a2 + 8) = v11;
    *(_DWORD *)(a2 + 12) = v5 + 1;
    memmove(v11, &s, v5);
    *(_BYTE *)(*(_DWORD *)(a2 + 8) + v5) = 0;
  }
  return 0;
}
