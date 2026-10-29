/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_78BD0
// Address: 0x00078BD0

//----- (00078BD0) --------------------------------------------------------
pthread_mutex_t *__fastcall sub_78BD0(int a1)
{
  pthread_mutex_t *v2; // r7
  _DWORD *v3; // r6
  __int64 v4; // kr00_8
  char *v5; // r4
  char *i; // r3
  int v7; // r0
  char *v9; // r0
  int v10; // r4

  v2 = (pthread_mutex_t *)dword_D5BF0;
  if ( !dword_D5BF0 )
  {
    v2 = sub_79F08();
    dword_D5BF0 = (int)v2;
    if ( !v2 )
    {
      if ( under_debugger )
        __und(0xFFu);
      sub_78AFC(547);
    }
  }
  sub_7A100(v2);
  v3 = (_DWORD *)dword_D5BEC;
  if ( !dword_D5BEC )
  {
    v3 = sub_77E84(12);
    v5 = nullptr;
    *v3 = 0;
    v3[1] = 0;
    v3[2] = 0;
    dword_D5BEC = (int)v3;
    v4 = 0x100000000LL;
    if ( v3[2] )
      goto LABEL_9;
    goto LABEL_15;
  }
  v4 = *(_QWORD *)dword_D5BEC;
  v5 = (char *)(*(_DWORD *)dword_D5BEC + 4 * *(_DWORD *)(dword_D5BEC + 4));
  if ( *(char **)dword_D5BEC == v5 )
  {
LABEL_8:
    if ( (unsigned int)(HIDWORD(v4) + 1) <= *(_DWORD *)(dword_D5BEC + 8) )
    {
LABEL_9:
      *(_DWORD *)v5 = a1;
      ++v3[1];
      return sub_7A128(v2);
    }
LABEL_15:
    v9 = (char *)sub_77EB0((int)v3, (void *)v4, HIDWORD(v4), 4u);
    v10 = v3[1];
    *v3 = v9;
    v5 = &v9[4 * v10];
    goto LABEL_9;
  }
  if ( *(_DWORD *)v4 != a1 )
  {
    for ( i = (char *)(v4 + 4); i != v5; i += 4 )
    {
      v7 = *(_DWORD *)i;
      if ( v7 == a1 )
        return sub_7A128(v2);
    }
    goto LABEL_8;
  }
  return sub_7A128(v2);
}
// D5BEC: using guessed type int dword_D5BEC;
// D5BF0: using guessed type int dword_D5BF0;
// D5C00: using guessed type char under_debugger;
