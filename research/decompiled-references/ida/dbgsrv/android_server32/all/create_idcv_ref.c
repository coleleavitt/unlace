/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: create_idcv_ref
// Address: 0x00043D6C

//----- (00043D6C) --------------------------------------------------------
int __fastcall create_idcv_ref(unsigned __int8 *a1, int a2)
{
  pthread_mutex_t *v4; // r4
  int v5; // r0
  unsigned int v6; // r1
  unsigned int v7; // r2
  unsigned int v8; // r0
  int v9; // r7
  _DWORD *v10; // r5
  int v11; // r1
  signed int v13; // [sp+4h] [bp-4h]

  v4 = (pthread_mutex_t *)dword_DE374;
  qmutex_lock((pthread_mutex_t *)dword_DE374);
  v5 = sub_3F7BC();
  v6 = *(_DWORD *)(v5 + 52);
  v7 = v6 + 40 * *(_DWORD *)(v5 + 56);
  v8 = a2 - 16;
  v9 = 0;
  if ( v6 <= a2 - 16 && v7 > v8 )
  {
    v13 = v8 - v6;
    free_idcv(a1);
    *a1 = 10;
    v10 = a1 + 8;
    v9 = 1;
    if ( *(_BYTE *)a2 == 10 )
    {
      v11 = *(_DWORD *)(a2 + 12);
      *v10 = *(_DWORD *)(a2 + 8);
      v10[1] = v11;
    }
    else
    {
      *v10 = 0;
      v10[1] = v13 / -40 - 1;
    }
  }
  qmutex_unlock(v4);
  return v9;
}
// DE374: using guessed type int dword_DE374;
