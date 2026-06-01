/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001F520
// Address: 0x000000014001F520

//----- (000000014001F520) ----------------------------------------------------
__int64 __fastcall sub_14001F520(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // r8
  char *v5; // rcx
  unsigned __int64 v6; // rdx
  char v7; // al
  size_t v8; // rax
  char Str[1024]; // [rsp+30h] [rbp-418h] BYREF

  Str[0] = 0;
  v3 = *(int *)(a1 + 40);
  if ( (unsigned int)(v3 - 2) <= 0x1E )
  {
    v4 = *(_QWORD *)(a1 + 8);
    v5 = Str;
    if ( !v4 )
      goto LABEL_7;
    do
    {
      v6 = v4 % v3;
      v4 /= v3;
      v7 = 55;
      if ( (int)v6 <= 9 )
        v7 = 48;
      *v5++ = v6 + v7;
    }
    while ( v4 );
    if ( v5 == Str )
LABEL_7:
      *v5++ = 48;
    *v5 = 0;
    sub_1400622B0(Str, v5 - Str);
  }
  v8 = strlen(Str);
  *(_BYTE *)a2 = 7;
  *(_QWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 24) = 0;
  if ( v8 )
    sub_140001810(a2 + 8, Str, v8);
  return 0;
}
