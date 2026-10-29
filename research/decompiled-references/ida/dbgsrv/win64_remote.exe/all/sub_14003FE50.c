/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14003FE50
// Address: 0x000000014003FE50

//----- (000000014003FE50) ----------------------------------------------------
char __fastcall sub_14003FE50(__int64 a1, int a2)
{
  __int16 *v3; // rsi
  __int16 *v4; // rbx
  __int16 i; // ax
  int v6; // eax
  __int64 v7; // rax
  unsigned int v8; // ebx
  char *v9; // rdx

  v3 = *(__int16 **)(*(_QWORD *)(a1 + 8) + 8LL * a2);
  v4 = v3;
  for ( i = *v3; *v4 != -1; i = *v4 )
  {
    if ( i )
    {
      if ( !*(_BYTE *)(a1 + 24) )
      {
        if ( (*(unsigned int (__fastcall **)(__int64))a1)(a1) )
          return 0;
        *(_BYTE *)(a1 + 24) = 1;
      }
      if ( *v4 != *(unsigned __int16 *)(a1 + 56) )
      {
        v4 += 3;
        continue;
      }
      *(_BYTE *)(a1 + 24) = 0;
    }
    if ( v4[1] != -1 && !(unsigned __int8)sub_14003FE50(a1, (unsigned int)v4[1]) )
      return 0;
    if ( *((_BYTE *)v4 + 5) == 0xFF )
      goto LABEL_15;
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 16) + 8LL * *((unsigned __int8 *)v4 + 5)))(a1);
    if ( v6 != 1507 )
    {
      if ( v6 )
        return 0;
LABEL_15:
      v7 = *((unsigned __int8 *)v4 + 4);
      if ( (_BYTE)v7 == 0xFF )
        return 1;
      v4 = &v3[3 * v7];
      continue;
    }
    *(_BYTE *)(a1 + 24) = 1;
    v4 += 3;
  }
  v8 = v4[1];
  if ( !v8 )
    return 1;
  if ( v8 == 67 )
  {
    v9 = (char *)Str1;
    if ( *(_QWORD *)(a1 + 40) )
      v9 = *(char **)(a1 + 32);
    sub_140063F70(0, v9);
  }
  sub_1400640B0(v8);
  return 0;
}
