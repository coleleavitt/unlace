/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3C070
// Address: 0x0003C070

//----- (0003C070) --------------------------------------------------------
int __fastcall sub_3C070(char *a1, int a2, const void *a3, unsigned int a4)
{
  pthread_mutex_t *v8; // r10
  void **v9; // r4
  int v10; // r0
  _DWORD *v11; // r3
  int v12; // r4
  unsigned int v13; // r3
  char *v14; // r0
  int v15; // r4
  unsigned int v17; // r1
  char v18; // [sp+3h] [bp-5h] BYREF

  v8 = (pthread_mutex_t *)dword_D4AB0;
  sub_7A268((pthread_mutex_t *)dword_D4AB0);
  v9 = (void **)sub_3E4E0();
  v10 = sub_3EF50(v9, a1);
  if ( v10 == -1 )
  {
    v15 = 0;
    goto LABEL_5;
  }
  v11 = *v9;
  v18 = 0;
  v12 = v11[v10];
  v13 = *(_DWORD *)(v12 + 20);
  v14 = *(char **)(v12 + 16);
  if ( a4 >= v13 )
  {
    if ( a4 <= v13 )
      goto LABEL_4;
    v17 = *(_DWORD *)(v12 + 24);
    if ( v14 <= &v18 && &v18 < &v14[v17] )
    {
      if ( a4 <= v17
        || (v14 = (char *)sub_78018(v12 + 16, *(void **)(v12 + 16), a4, 1u),
            v13 = *(_DWORD *)(v12 + 20),
            *(_DWORD *)(v12 + 16) = v14,
            a4 > v13) )
      {
        do
        {
          v14[v13++] = 0;
          v14 = *(char **)(v12 + 16);
        }
        while ( a4 > v13 );
      }
    }
    else if ( a4 <= v17
           || (v14 = (char *)sub_78018(v12 + 16, *(void **)(v12 + 16), a4, 1u),
               v13 = *(_DWORD *)(v12 + 20),
               *(_DWORD *)(v12 + 16) = v14,
               a4 > v13) )
    {
      do
      {
        v14[v13++] = 0;
        v14 = *(char **)(v12 + 16);
      }
      while ( a4 > v13 );
    }
  }
  *(_DWORD *)(v12 + 20) = a4;
LABEL_4:
  memcpy(v14, a3, a4);
  sub_3E858((_DWORD *)(v12 + 16));
  *(_DWORD *)(v12 + 12) = a2;
  *(_DWORD *)(v12 + 68) = 0;
  v15 = 1;
LABEL_5:
  sub_7A290(v8);
  return v15;
}
// D4AB0: using guessed type int dword_D4AB0;
