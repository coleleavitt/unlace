/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A3C0
// Address: 0x000000000004A3C0

//----- (000000000004A3C0) ----------------------------------------------------
__int64 __fastcall sub_4A3C0(__int64 a1, char *a2, __int128 *a3)
{
  __int128 v6; // q0
  pthread_mutex_t *v7; // x0
  __int128 v8; // q0
  int v9; // w0
  unsigned __int64 v10; // x21
  pthread_mutex_t *v11; // x0
  _OWORD v13[2]; // [xsp+0h] [xbp-A0h] BYREF
  _OWORD v14[2]; // [xsp+20h] [xbp-80h] BYREF
  __int128 v15; // [xsp+40h] [xbp-60h]
  __int128 v16; // [xsp+50h] [xbp-50h]
  __int64 v17; // [xsp+68h] [xbp-38h]

  v17 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = a3[1];
  v15 = *a3;
  v16 = v6;
  v7 = *(pthread_mutex_t **)a1;
  if ( v7 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v7);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
  v8 = a3[1];
  v14[0] = *a3;
  v14[1] = v8;
  v9 = qvsnprintf(nullptr, 0, a2, v14);
  if ( v9 )
  {
    v10 = v9 + 1LL;
    if ( *(_QWORD *)(a1 + 16) >= v10 )
    {
      v11 = *(pthread_mutex_t **)a1;
    }
    else
    {
      v11 = (pthread_mutex_t *)qvector_reserve((pthread_mutex_t *)a1, *(void **)a1, v10, 1u);
      *(_QWORD *)a1 = v11;
    }
    *(_QWORD *)(a1 + 8) = v10;
    v13[0] = v15;
    v13[1] = v16;
    qvsnprintf(v11, v10, a2, v13);
  }
  return a1;
}
