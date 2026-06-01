/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9C3D0
// Address: 0x000000000009C3D0

//----- (000000000009C3D0) ----------------------------------------------------
__int64 __fastcall sub_9C3D0(__int64 a1, int *a2, __int64 a3, int a4)
{
  int v6; // w20
  __int64 **v7; // x22
  __int64 *v8; // x29
  unsigned __int64 v9; // x8
  __int64 *v10; // x9
  __int64 *v11; // x1
  unsigned __int64 v12; // x10
  bool v13; // cf
  _BOOL4 v14; // w10
  char *v15; // x0
  char *v16; // x24
  unsigned __int64 v17; // x26
  const void *v18; // x27
  void **v19; // x28
  void *v20; // x0
  unsigned __int64 v23; // [xsp+10h] [xbp-80h] BYREF
  _QWORD *v24[2]; // [xsp+20h] [xbp-70h] BYREF

  v24[1] = *(_QWORD **)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a4 >= 1 )
  {
    v6 = 0;
    v7 = (__int64 **)(a1 + 328);
    v8 = (__int64 *)(a1 + 336);
    do
    {
      v9 = *(_QWORD *)a3;
      v23 = *(_QWORD *)a3;
      if ( *(_QWORD *)(a3 + 16) > 1u )
      {
        v24[0] = &v23;
        v15 = sub_9D8E4(v7, &v23, (__int64)&byte_106C49, v24);
        v16 = v15;
        *((_QWORD *)v15 + 5) = *(_QWORD *)a3;
        if ( v15 + 40 != (char *)a3 )
        {
          v17 = *(_QWORD *)(a3 + 16);
          if ( v17 < 2 )
          {
            *((_QWORD *)v15 + 7) = 0;
          }
          else
          {
            v18 = *(const void **)(a3 + 8);
            v19 = (void **)(v15 + 48);
            if ( *((_QWORD *)v15 + 8) >= v17 )
            {
              v20 = *v19;
            }
            else
            {
              v20 = qvector_reserve((pthread_mutex_t *)(v15 + 48), *v19, *(_QWORD *)(a3 + 16), 1u);
              *v19 = v20;
            }
            *((_QWORD *)v16 + 7) = v17;
            memmove(v20, v18, v17 - 1);
            *(_BYTE *)(*((_QWORD *)v16 + 6) + v17 - 1) = 0;
          }
        }
        *((_DWORD *)v16 + 18) = *(_DWORD *)(a3 + 32);
        sub_989E0((__int64)(v16 + 80), a3 + 40);
        memcpy(v16 + 104, (const void *)(a3 + 64), 0x170u);
      }
      else
      {
        v10 = (__int64 *)*v8;
        if ( *v8 )
        {
          v11 = v8;
          do
          {
            v12 = v10[4];
            v13 = v12 >= v9;
            v14 = v12 < v9;
            if ( v13 )
              v11 = v10;
            v10 = (__int64 *)v10[v14];
          }
          while ( v10 );
          if ( v11 != v8 && v9 >= v11[4] )
            sub_9D81C(v7, v11);
        }
      }
      ++v6;
      a3 += 432;
    }
    while ( v6 != a4 );
  }
  if ( a2 )
    *a2 = a4;
  return 1;
}
// 106C49: using guessed type char byte_106C49;
