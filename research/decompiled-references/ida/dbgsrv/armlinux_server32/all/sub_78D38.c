/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_78D38
// Address: 0x00078D38

//----- (00078D38) --------------------------------------------------------
pthread_mutex_t *__fastcall sub_78D38(int a1)
{
  pthread_mutex_t *v2; // r7
  _DWORD *v3; // r6
  __int64 v4; // kr00_8
  char *v5; // r4
  char *i; // r3
  int v7; // r0
  char *v9; // r0
  int v10; // r4

  v2 = (pthread_mutex_t *)dword_D6C10;
  if ( !dword_D6C10 )
  {
    v2 = sub_7A070();
    dword_D6C10 = (int)v2;
    if ( !v2 )
    {
      if ( under_debugger )
        __und(0xFFu);
      sub_78C64(547);
    }
  }
  sub_7A268(v2);
  v3 = (_DWORD *)dword_D6C0C;
  if ( !dword_D6C0C )
  {
    v3 = sub_77FEC(12);
    v5 = nullptr;
    *v3 = 0;
    v3[1] = 0;
    v3[2] = 0;
    dword_D6C0C = (int)v3;
    v4 = 0x100000000LL;
    if ( v3[2] )
      goto LABEL_9;
    goto LABEL_15;
  }
  v4 = *(_QWORD *)dword_D6C0C;
  v5 = (char *)(*(_DWORD *)dword_D6C0C + 4 * *(_DWORD *)(dword_D6C0C + 4));
  if ( *(char **)dword_D6C0C == v5 )
  {
LABEL_8:
    if ( (unsigned int)(HIDWORD(v4) + 1) <= *(_DWORD *)(dword_D6C0C + 8) )
    {
LABEL_9:
      *(_DWORD *)v5 = a1;
      ++v3[1];
      return sub_7A290(v2);
    }
LABEL_15:
    v9 = (char *)sub_78018((int)v3, (void *)v4, HIDWORD(v4), 4u);
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
        return sub_7A290(v2);
    }
    goto LABEL_8;
  }
  return sub_7A290(v2);
}
// D6C0C: using guessed type int dword_D6C0C;
// D6C10: using guessed type int dword_D6C10;
// D6C20: using guessed type char under_debugger;
