/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4C568
// Address: 0x0004C568

//----- (0004C568) --------------------------------------------------------
char *__fastcall sub_4C568(int a1, char *a2, int a3, int a4, const char *a5, char a6)
{
  __int64 v10; // r4
  int i; // r11
  unsigned __int8 *v12; // r0
  char *v13; // r7
  int v15; // r2
  int v16; // r4
  int v17; // r5
  unsigned __int8 *v18; // r0
  pthread_mutex_t *v22; // [sp+14h] [bp-8h]

  v22 = (pthread_mutex_t *)dword_D4AB0;
  sub_7A268((pthread_mutex_t *)dword_D4AB0);
  v10 = *(_QWORD *)(a1 + 12);
  HIDWORD(v10) = v10 + 12 * HIDWORD(v10);
  if ( HIDWORD(v10) == (_DWORD)v10 )
    goto LABEL_13;
  if ( !a5 )
    goto LABEL_7;
  for ( i = v10 + 12; ; i += 12 )
  {
    LODWORD(v10) = i;
    if ( !*(_DWORD *)(i - 8) )
      break;
    if ( !strcasecmp(*(const char **)(i - 12), a5) )
      goto LABEL_6;
LABEL_25:
    if ( HIDWORD(v10) == i )
      goto LABEL_13;
  }
  if ( strcasecmp((const char *)&dword_8DB98, a5) )
    goto LABEL_25;
LABEL_6:
  if ( HIDWORD(v10) == i )
  {
LABEL_13:
    v15 = *(_DWORD *)(a1 + 4);
    if ( !v15 )
    {
      sub_74008(a1, "idc", 0);
      v15 = *(_DWORD *)(a1 + 4);
    }
    v16 = *(_DWORD *)a1;
    v17 = *(_DWORD *)a1 + 12 * v15;
    if ( *(_DWORD *)a1 == v17 )
    {
LABEL_22:
      v13 = sub_741CC(a2, a3, a4, nullptr);
    }
    else
    {
      while ( 1 )
      {
        v18 = (unsigned __int8 *)(*(_DWORD *)(v16 + 4)
                                ? sub_76B98(a2, a3, *(unsigned __int8 **)v16, a4, 0)
                                : sub_76B98(a2, a3, (unsigned __int8 *)&dword_8DB98, a4, 0));
        v13 = (char *)v18;
        if ( a6 ? sub_4B228(v18, a3) : sub_7756C((int)v18) )
          break;
        v16 += 12;
        if ( v16 == v17 )
          goto LABEL_22;
      }
    }
    goto LABEL_23;
  }
LABEL_7:
  while ( 1 )
  {
    v12 = (unsigned __int8 *)(*(_DWORD *)(v10 + 4)
                            ? sub_76B98(a2, a3, *(unsigned __int8 **)v10, a4, 0)
                            : sub_76B98(a2, a3, (unsigned __int8 *)&dword_8DB98, a4, 0));
    v13 = (char *)v12;
    if ( a6 ? sub_4B228(v12, a3) : sub_7756C((int)v12) )
      break;
    LODWORD(v10) = v10 + 12;
    if ( HIDWORD(v10) == (_DWORD)v10 )
      goto LABEL_13;
  }
LABEL_23:
  sub_7A290(v22);
  return v13;
}
// 8DB98: using guessed type int dword_8DB98;
// D4AB0: using guessed type int dword_D4AB0;
