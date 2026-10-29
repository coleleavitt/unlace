/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D2000
// Address: 0x080D2000

//----- (080D2000) --------------------------------------------------------
int __cdecl sub_80D2000(char *name, void **a2)
{
  char *v2; // eax
  char *v3; // edi
  size_t v4; // eax
  size_t v5; // edx
  int v6; // edi
  unsigned int v8; // ecx
  void *v9; // eax
  size_t v10; // [esp+0h] [ebp-24h]
  size_t v11; // [esp+4h] [ebp-20h]
  unsigned int v12; // [esp+4h] [ebp-20h]
  pthread_mutex_t *mutex; // [esp+8h] [ebp-1Ch]

  if ( dword_811F8C4 )
  {
    mutex = (pthread_mutex_t *)dword_811F8C8;
  }
  else
  {
    dword_811F8C4 = sub_80D0B70();
    mutex = sub_80D1320();
    dword_811F8C8 = (int)mutex;
  }
  sub_80D15A0(mutex);
  v2 = getenv(name);
  v3 = v2;
  if ( v2 && *v2 )
  {
    if ( a2 )
    {
      v4 = strlen(v2);
      v5 = v4;
      if ( v4 )
      {
        v8 = v4 + 1;
        v9 = *a2;
        if ( (unsigned int)a2[2] < v8 )
        {
          v10 = v5;
          v12 = v8;
          v9 = sub_80CF920((int)a2, v9, v8, 1u);
          v5 = v10;
          *a2 = v9;
          v8 = v12;
        }
        a2[1] = (void *)v8;
        v11 = v5;
        memmove(v9, v3, v5);
        *((_BYTE *)*a2 + v11) = 0;
      }
      else
      {
        a2[1] = nullptr;
      }
    }
    v6 = 1;
  }
  else
  {
    v6 = 0;
  }
  sub_80D1600(mutex);
  return v6;
}
// 811F8C4: using guessed type int dword_811F8C4;
// 811F8C8: using guessed type int dword_811F8C8;
