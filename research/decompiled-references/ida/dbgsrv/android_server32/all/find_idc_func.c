/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: find_idc_func
// Address: 0x00041E28

//----- (00041E28) --------------------------------------------------------
int __fastcall find_idc_func(int a1, const char *a2, int a3)
{
  int v3; // r6
  const char **v6; // r5
  unsigned int v7; // r4
  const char *v8; // r6
  const char *v10; // r7
  size_t v11; // r0
  size_t v12; // r5
  unsigned int v13; // r2
  void *v14; // r0
  pthread_mutex_t *mutex; // [sp+4h] [bp-10h]
  unsigned int v17; // [sp+8h] [bp-Ch]
  size_t n; // [sp+Ch] [bp-8h]
  char *s1; // [sp+10h] [bp-4h]
  char *s1a; // [sp+10h] [bp-4h]

  v3 = 0;
  if ( a2 )
  {
    mutex = (pthread_mutex_t *)dword_DE374;
    qmutex_lock((pthread_mutex_t *)dword_DE374);
    s1 = (char *)a2;
    n = strlen(a2);
    v3 = 0;
    v17 = dword_DD60C;
    if ( dword_DD60C )
    {
      v6 = (const char **)off_DD610;
      v7 = 0;
      while ( 1 )
      {
        v8 = *v6;
        if ( !strncmp(s1, *v6, n) && --a3 < 0 )
          break;
        v6 += 6;
        ++v7;
        v3 = 0;
        if ( v7 >= v17 )
          goto LABEL_7;
      }
      v10 = v8;
      v3 = 1;
      if ( a1 )
      {
        if ( v10 && (v11 = strlen(v10)) != 0 )
        {
          v12 = v11;
          v13 = v11 + 1;
          if ( *(_DWORD *)(a1 + 8) >= v11 + 1 )
          {
            v14 = *(void **)a1;
          }
          else
          {
            s1a = (char *)(v11 + 1);
            v14 = qvector_reserve(a1, *(void **)a1, v13, 1u);
            *(_DWORD *)a1 = v14;
            v13 = (unsigned int)s1a;
          }
          *(_DWORD *)(a1 + 4) = v13;
          memmove(v14, v10, v12);
          *(_BYTE *)(*(_DWORD *)a1 + v12) = 0;
        }
        else
        {
          *(_DWORD *)(a1 + 4) = 0;
        }
      }
    }
LABEL_7:
    qmutex_unlock(mutex);
  }
  return v3;
}
// DD60C: using guessed type int dword_DD60C;
// DD610: using guessed type char **off_DD610;
// DE374: using guessed type int dword_DE374;
