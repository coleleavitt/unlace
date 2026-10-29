/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7A894
// Address: 0x0007A894

//----- (0007A894) --------------------------------------------------------
int __fastcall sub_7A894(const char *a1, int a2)
{
  pthread_mutex_t *v4; // r5
  char *v5; // r0
  int v6; // r4
  size_t v7; // r0
  size_t v8; // r7
  int v10; // r4
  unsigned int v11; // r8
  void *v12; // r0
  const void *v13; // r1

  if ( !dword_D6C2C )
    sub_7A0E4();
  v4 = (pthread_mutex_t *)dword_D6C28;
  sub_7A268((pthread_mutex_t *)dword_D6C28);
  v5 = getenv(a1);
  v6 = (int)v5;
  if ( !v5 )
    goto LABEL_8;
  if ( *v5 )
  {
    if ( a2 )
    {
      v7 = strlen(v5);
      v8 = v7;
      if ( v7 )
      {
        v11 = v7 + 1;
        v12 = *(void **)a2;
        if ( v11 > *(_DWORD *)(a2 + 8) )
        {
          v12 = sub_78018(a2, *(void **)a2, v11, 1u);
          *(_DWORD *)a2 = v12;
        }
        v13 = (const void *)v6;
        *(_DWORD *)(a2 + 4) = v11;
        v6 = 1;
        memmove(v12, v13, v8);
        *(_BYTE *)(*(_DWORD *)a2 + v8) = 0;
      }
      else
      {
        v6 = 1;
        *(_DWORD *)(a2 + 4) = 0;
      }
LABEL_8:
      sub_7A290(v4);
      return v6;
    }
    sub_7A290(v4);
    return 1;
  }
  else
  {
    v10 = (unsigned __int8)*v5;
    sub_7A290(v4);
    return v10;
  }
}
// D6C28: using guessed type int dword_D6C28;
// D6C2C: using guessed type int dword_D6C2C;
