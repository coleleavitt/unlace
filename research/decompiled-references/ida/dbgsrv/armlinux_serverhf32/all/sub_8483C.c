/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8483C
// Address: 0x0008483C

//----- (0008483C) --------------------------------------------------------
size_t __fastcall sub_8483C(size_t a1, int a2)
{
  char *v2; // r5
  size_t result; // r0
  int v5; // r3
  char *v6; // r6
  int v7; // r1
  char v8; // r8
  char v9; // t1
  int v10; // r2
  int (__fastcall *v11)(size_t, int, int); // r3
  char s[28]; // [sp+4h] [bp-1Ch] BYREF

  v2 = s;
  sprintf(s, "%d", a2);
  result = strlen(s);
  if ( result )
  {
    v5 = *(_DWORD *)(a1 + 256);
    v6 = &s[result];
    do
    {
      v7 = v5;
      result = a1;
      v9 = *v2++;
      v8 = v9;
      if ( v5 == 255 )
      {
        v10 = *(_DWORD *)(a1 + 268);
        v11 = *(int (__fastcall **)(size_t, int, int))(a1 + 264);
        *(_BYTE *)(a1 + 255) = 0;
        result = v11(a1, 255, v10);
        v5 = 1;
        v7 = 0;
        ++*(_DWORD *)(a1 + 292);
      }
      else
      {
        ++v5;
      }
      *(_DWORD *)(a1 + 256) = v5;
      *(_BYTE *)(a1 + v7) = v8;
      *(_BYTE *)(a1 + 260) = v8;
    }
    while ( v6 != v2 );
  }
  return result;
}
