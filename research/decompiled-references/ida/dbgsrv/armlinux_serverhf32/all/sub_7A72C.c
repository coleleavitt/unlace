/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7A72C
// Address: 0x0007A72C

//----- (0007A72C) --------------------------------------------------------
int __fastcall sub_7A72C(const char *a1, int a2)
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

  if ( !dword_D5C0C )
    sub_79F7C();
  v4 = (pthread_mutex_t *)dword_D5C08;
  sub_7A100((pthread_mutex_t *)dword_D5C08);
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
          v12 = sub_77EB0(a2, *(void **)a2, v11, 1u);
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
      sub_7A128(v4);
      return v6;
    }
    sub_7A128(v4);
    return 1;
  }
  else
  {
    v10 = (unsigned __int8)*v5;
    sub_7A128(v4);
    return v10;
  }
}
// D5C08: using guessed type int dword_D5C08;
// D5C0C: using guessed type int dword_D5C0C;
