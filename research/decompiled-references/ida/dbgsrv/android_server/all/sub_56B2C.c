/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_56B2C
// Address: 0x0000000000056B2C

//----- (0000000000056B2C) ----------------------------------------------------
__int64 __fastcall sub_56B2C(__int64 a1, _QWORD *a2, __int64 a3, unsigned __int64 a4, char a5)
{
  __int64 v10; // x8
  int v11; // w25
  char v12; // w26
  void *v13; // x1
  __int64 v14; // x8
  __int64 v15; // x27
  bool v16; // cf
  char v17[4]; // [xsp+4h] [xbp-5Ch] BYREF
  __int64 v18; // [xsp+8h] [xbp-58h]

  v18 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( ~a3 < a4 || a4 + a3 > a2[1] )
    return 0;
  *(_QWORD *)(a1 + 8) = 0;
  if ( (a5 & 1) != 0 )
  {
    if ( *(_QWORD *)(a1 + 16) < a4 )
    {
      *(_QWORD *)a1 = qvector_reserve((pthread_mutex_t *)a1, *(void **)a1, a4, 1u);
      goto LABEL_9;
    }
    if ( a4 )
    {
LABEL_9:
      v10 = 0;
      v11 = 1;
      do
      {
        v12 = *(_BYTE *)(*a2 + v10 + a3);
        if ( !v12 )
          break;
        v13 = *(void **)a1;
        v14 = *(_QWORD *)(a1 + 8);
        v15 = v14 ? v14 - 1 : 0LL;
        if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v15 + 2) )
        {
          v13 = qvector_reserve((pthread_mutex_t *)a1, v13, v15 + 2, 1u);
          *(_QWORD *)a1 = v13;
        }
        *(_QWORD *)(a1 + 8) = v15 + 2;
        *((_BYTE *)v13 + v15) = v12;
        v10 = v11;
        v16 = v11++ >= a4;
        *(_BYTE *)(*(_QWORD *)a1 + v15 + 1) = 0;
      }
      while ( !v16 );
    }
  }
  else
  {
    v17[0] = 0;
    sub_5C6B0((pthread_mutex_t *)a1, a4 + 1, v17);
    *(_BYTE *)(*(_QWORD *)a1 + a4) = 0;
    memcpy(*(void **)a1, (const void *)(*a2 + a3), a4);
  }
  return 1;
}
