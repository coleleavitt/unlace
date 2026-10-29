/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_438110
// Address: 0x0000000000438110

//----- (0000000000438110) ----------------------------------------------------
__int64 __fastcall sub_438110(__int64 a1)
{
  unsigned __int16 v2; // w0
  int v3; // w4
  char *v4; // x1
  _DWORD *v6; // x1
  int v7; // [xsp+24h] [xbp-Ch] BYREF

  if ( !*(_QWORD *)(a1 + 48) )
  {
    v2 = sub_437FB8((__int64 *)a1, (char *)&qword_4B2D48, &v7);
    v3 = v7;
    if ( (unsigned int)(v7 - 1) > 2 )
      goto LABEL_3;
LABEL_7:
    v6 = (_DWORD *)(*(_QWORD *)(a1 + 368) + 16LL * *(_QWORD *)(a1 + 376) - 16);
    v6[2] = v3;
    v6[3] = v2;
    v6[1] = *(_DWORD *)(a1 + 208);
    return 0;
  }
  v2 = sub_437FB8((__int64 *)a1, *(char **)(a1 + 40), &v7);
  v3 = v7;
  if ( (unsigned int)(v7 - 1) <= 2 )
    goto LABEL_7;
LABEL_3:
  if ( *(_QWORD *)(a1 + 48) )
    v4 = *(char **)(a1 + 40);
  else
    v4 = (char *)&qword_4B2D48;
  sub_486A58(0, v4);
  return sub_4869C8(55);
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
