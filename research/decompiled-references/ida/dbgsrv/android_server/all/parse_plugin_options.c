/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: parse_plugin_options
// Address: 0x00000000000AEFE4

//----- (00000000000AEFE4) ----------------------------------------------------
__int64 __fastcall parse_plugin_options(__int64 a1, char *a2)
{
  const char *i; // x21
  __int64 v4; // x28
  _QWORD *v5; // x0
  _QWORD *v6; // x22
  _OWORD *v7; // x23
  char *v8; // x0
  const void *v9; // x24
  size_t v10; // x0
  unsigned __int64 v11; // x27
  size_t v12; // x25
  void **v13; // x26
  void *v14; // x0
  size_t v15; // x0
  void *v16; // x1
  unsigned __int64 v17; // x25
  size_t v18; // x24
  void *ptr[3]; // [xsp+8h] [xbp-88h] BYREF
  const char *v21[2]; // [xsp+20h] [xbp-70h] BYREF

  v21[1] = *(const char **)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( !a2 || !*a2 )
    return 0;
  sub_39140(ptr, a2);
  for ( i = qstrtok((char *)ptr[0], ":", v21); i; i = qstrtok(nullptr, ":", v21) )
  {
    v4 = *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)(a1 + 16) >= (unsigned __int64)(v4 + 1) )
    {
      v6 = *(_QWORD **)a1;
    }
    else
    {
      v5 = qvector_reserve((pthread_mutex_t *)a1, *(void **)a1, v4 + 1, 0x30u);
      v4 = *(_QWORD *)(a1 + 8);
      v6 = v5;
      *(_QWORD *)a1 = v5;
    }
    v7 = &v6[6 * v4];
    v7[1] = 0u;
    v7[2] = 0u;
    *v7 = 0u;
    ++*(_QWORD *)(a1 + 8);
    v8 = strchr(i, 61);
    if ( v8 )
    {
      *v8 = 0;
      v9 = v8 + 1;
      if ( v8 == (char *)-1LL || (v10 = strlen(v8 + 1)) == 0 )
      {
        v6[6 * v4 + 4] = 0;
      }
      else
      {
        v11 = v10 + 1;
        v12 = v10;
        v13 = (void **)&v6[6 * v4 + 3];
        if ( v6[6 * v4 + 5] >= v10 + 1 )
        {
          v14 = *v13;
        }
        else
        {
          v14 = qvector_reserve((pthread_mutex_t *)&v6[6 * v4 + 3], *v13, v11, 1u);
          *v13 = v14;
        }
        v6[6 * v4 + 4] = v11;
        memmove(v14, v9, v12);
        *((_BYTE *)*v13 + v12) = 0;
      }
    }
    v15 = strlen(i);
    if ( v15 )
    {
      v16 = *(void **)v7;
      v17 = v15 + 1;
      v18 = v15;
      if ( v6[6 * v4 + 2] < v15 + 1 )
      {
        v16 = qvector_reserve((pthread_mutex_t *)&v6[6 * v4], v16, v17, 1u);
        *(_QWORD *)v7 = v16;
      }
      v6[6 * v4 + 1] = v17;
      memmove(v16, i, v18);
      *(_BYTE *)(*(_QWORD *)v7 + v18) = 0;
    }
    else
    {
      v6[6 * v4 + 1] = 0;
    }
  }
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
    ptr[0] = nullptr;
    ptr[2] = nullptr;
  }
  return 1;
}
