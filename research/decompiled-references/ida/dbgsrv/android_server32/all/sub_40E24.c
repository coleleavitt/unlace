/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40E24
// Address: 0x00040E24

//----- (00040E24) --------------------------------------------------------
int __fastcall sub_40E24(_DWORD *a1, const char *a2)
{
  int v2; // r5
  int v5; // r7
  int v6; // r5
  int v7; // r7
  const char *v8; // r0
  _DWORD *v9; // r0
  int v10; // r1
  _DWORD *v11; // r0
  int v12; // r5
  size_t v13; // r0
  size_t v14; // r6
  unsigned int v15; // r2
  unsigned int v16; // r7
  void *v17; // r0
  pthread_mutex_t *mutex; // [sp+10h] [bp-4h]
  pthread_mutex_t *mutexa; // [sp+10h] [bp-4h]

  v2 = 0;
  if ( a2 )
  {
    mutex = (pthread_mutex_t *)dword_DE374;
    qmutex_lock((pthread_mutex_t *)dword_DE374);
    v5 = a1[14];
    v2 = 0;
    if ( 40 * v5 )
    {
      v6 = a1[13];
      v7 = 40 * v5;
      while ( 1 )
      {
        v8 = &byte_B3CBE;
        if ( *(_DWORD *)(v6 + 4) )
          v8 = *(const char **)v6;
        if ( !strcmp(v8, a2) )
          break;
        v7 -= 40;
        v6 += 40;
        if ( !v7 )
        {
          v2 = 0;
          goto LABEL_10;
        }
      }
      v2 = v6 + 16;
    }
LABEL_10:
    qmutex_unlock(mutex);
    if ( !v2 )
    {
      v9 = a1 + 13;
      v10 = a1[14];
      if ( a1[15] >= (unsigned int)(v10 + 1) )
      {
        v11 = (_DWORD *)*v9;
      }
      else
      {
        v11 = qvector_reserve((int)v9, (void *)a1[13], v10 + 1, 0x28u);
        a1[13] = v11;
        v10 = a1[14];
      }
      v11[10 * v10] = 0;
      v12 = (int)&v11[10 * v10];
      *(_DWORD *)(v12 + 4) = 0;
      *(_DWORD *)(v12 + 8) = 0;
      *(_BYTE *)(v12 + 16) = 2;
      memset((void *)(v12 + 24), 0, 0x10u);
      *(_DWORD *)(v12 + 24) = 0;
      ++a1[14];
      mutexa = (pthread_mutex_t *)(v12 + 4);
      v13 = strlen(a2);
      if ( v13 )
      {
        v14 = v13;
        v15 = v13 + 1;
        if ( *(_DWORD *)(v12 + 8) >= v13 + 1 )
        {
          v17 = *(void **)v12;
        }
        else
        {
          v16 = v13 + 1;
          v17 = qvector_reserve(v12, *(void **)v12, v15, 1u);
          v15 = v16;
          *(_DWORD *)v12 = v17;
        }
        mutexa->__lock = v15;
        memmove(v17, a2, v14);
        *(_BYTE *)(*(_DWORD *)v12 + v14) = 0;
      }
      else
      {
        mutexa->__lock = 0;
      }
      return v12 + 16;
    }
  }
  return v2;
}
// B3CBE: using guessed type char byte_B3CBE;
// DE374: using guessed type int dword_DE374;
