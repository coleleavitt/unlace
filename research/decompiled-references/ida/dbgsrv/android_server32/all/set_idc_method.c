/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: set_idc_method
// Address: 0x0004163C

//----- (0004163C) --------------------------------------------------------
int __fastcall set_idc_method(int **a1, const char *a2)
{
  char *v3; // r6
  int result; // r0
  _DWORD *v5; // r6
  int v6; // r4
  int v7; // r5
  int v8; // r1
  const char *v9; // r0
  unsigned int v10; // r5
  char **v11; // r6
  int v12; // r4
  unsigned int v13; // r7
  _DWORD *v14; // r4
  int **v15; // [sp+10h] [bp-38h]
  char *v16; // [sp+14h] [bp-34h]
  pthread_mutex_t *mutex; // [sp+1Ch] [bp-2Ch]
  int v18; // [sp+20h] [bp-28h]
  void *v20[3]; // [sp+28h] [bp-20h] BYREF
  void **v21; // [sp+38h] [bp-10h] BYREF
  int v22; // [sp+3Ch] [bp-Ch] BYREF

  v3 = strchr(a2, 46);
  result = 0;
  if ( v3 )
  {
    mutex = (pthread_mutex_t *)dword_DE374;
    qmutex_lock((pthread_mutex_t *)dword_DE374);
    v18 = 0;
    if ( !(sub_9B7B4((int)&dword_DE394, 0, 0) << 31) && _cxa_guard_acquire(&dword_DE394) )
    {
      v14 = operator new(0x50u);
      *v14 = 0;
      v14[1] = 0;
      v14[2] = 0;
      v14[3] = 0;
      v14[4] = 0;
      v14[5] = 0;
      v14[6] = 0;
      memset(v14 + 8, 0, 0x29u);
      dword_DE390 = (int)v14;
      _cxa_guard_release(&dword_DE394);
    }
    if ( a2 )
    {
      v16 = v3;
      v15 = a1;
      v5 = (_DWORD *)dword_DE390;
      v6 = *(_DWORD *)(dword_DE390 + 4);
      v7 = 4 * v6 - 4;
      while ( --v6 >= 0 )
      {
        v8 = *(_DWORD *)(*v5 + v7);
        v9 = &byte_B3CBE;
        if ( *(_DWORD *)(v8 + 4) )
          v9 = *(const char **)v8;
        v7 -= 4;
        if ( !strcmp(v9, a2) )
        {
          if ( v6 == 0x7FFFFFFF )
            goto LABEL_22;
          goto LABEL_19;
        }
      }
      v10 = dword_DD60C;
      if ( dword_DD60C )
      {
        v11 = off_DD610;
        v12 = 0;
        v13 = 0;
        while ( strcmp(v11[v12], a2) )
        {
          v12 += 6;
          ++v13;
          v18 = 0;
          if ( v13 >= v10 )
            goto LABEL_22;
        }
        v18 = 0;
        if ( &v11[v12] )
        {
          if ( v11[v12 + 1] )
          {
            v6 = v12 * 4 / -24;
LABEL_19:
            sub_1B09C((int)v20, v16 + 1);
            v21 = v20;
            sub_42CE0((int)&v22, v15, (int)v20, (int)&byte_B45B3, (int **)&v21);
            *(_DWORD *)(v22 + 28) = v6;
            if ( v20[0] )
            {
              v20[1] = nullptr;
              qfree(v20[0]);
              v20[2] = nullptr;
              v20[0] = nullptr;
            }
            v18 = 1;
          }
        }
      }
    }
LABEL_22:
    qmutex_unlock(mutex);
    return v18;
  }
  return result;
}
// B3CBE: using guessed type char byte_B3CBE;
// B45B3: using guessed type char byte_B45B3;
// DD60C: using guessed type int dword_DD60C;
// DD610: using guessed type char **off_DD610;
// DE374: using guessed type int dword_DE374;
// DE390: using guessed type int dword_DE390;
// DE394: using guessed type int dword_DE394;
