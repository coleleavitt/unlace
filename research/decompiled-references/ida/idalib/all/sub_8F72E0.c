char __fastcall sub_8F72E0(char *a1, __int64 a2, __int64 *a3, __int64 a4)
{
  char *v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r12
  char *v8; // rsi
  char v9; // r14

  v4 = (char *)(a2 + a4);
  v5 = *a3;
  v6 = 3 * a3[1];
  v7 = *a3 + 24 * a3[1];
  if ( v7 != *a3 )
  {
    do
    {
      v8 = (char *)haystack;
      v9 = 1;
      if ( *(_QWORD *)(v5 + 8) )
      {
        v8 = *(char **)v5;
        if ( **(_BYTE **)v5 == 33 )
        {
          ++v8;
          v9 = 0;
        }
      }
      LOBYTE(v6) = sub_83E5E0(v4, v8, 0);
      if ( (_BYTE)v6 )
        *a1 = v9;
      v5 += 24;
    }
    while ( v7 != v5 );
  }
  return v6;
}
