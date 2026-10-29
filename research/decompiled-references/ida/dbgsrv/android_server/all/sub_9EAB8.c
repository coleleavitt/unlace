/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9EAB8
// Address: 0x000000000009EAB8

//----- (000000000009EAB8) ----------------------------------------------------
__int64 __fastcall sub_9EAB8(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  const char *v6; // x0
  __int64 v7; // x9
  char *v8; // x21
  const char *v9; // x22
  const char *v10; // x9
  size_t v12; // x0
  unsigned __int64 v13; // x24
  size_t v14; // x23
  void *v15; // x0
  const char *v17; // [xsp+8h] [xbp-58h] BYREF
  const char *v18; // [xsp+10h] [xbp-50h]
  __int64 v19; // [xsp+18h] [xbp-48h]

  v19 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = (const char *)(*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 16LL))(
                       a1,
                       *(unsigned __int8 *)(*(_QWORD *)a2 + 4LL),
                       a2);
  if ( v6 )
  {
    v7 = *(unsigned int *)v6;
    v8 = (char *)v6;
    v17 = v6 + 5;
    v18 = &v6[v7 + 5];
    a3 = unpack_dd((unsigned __int64 *)&v17, (unsigned __int64)v18);
    if ( a4 && (a3 & 0x80000000) != 0 )
    {
      v9 = v17;
      v10 = v17;
      do
      {
        if ( v10 >= v18 )
          goto LABEL_11;
      }
      while ( *v10++ );
      v17 = v10;
      if ( !v9 || (v12 = strlen(v9)) == 0 )
      {
LABEL_11:
        *(_QWORD *)(a4 + 8) = 0;
        goto LABEL_12;
      }
      v13 = v12 + 1;
      v14 = v12;
      if ( *(_QWORD *)(a4 + 16) >= v12 + 1 )
      {
        v15 = *(void **)a4;
      }
      else
      {
        v15 = qvector_reserve((pthread_mutex_t *)a4, *(void **)a4, v13, 1u);
        *(_QWORD *)a4 = v15;
      }
      *(_QWORD *)(a4 + 8) = v13;
      memmove(v15, v9, v14);
      *(_BYTE *)(*(_QWORD *)a4 + v14) = 0;
    }
LABEL_12:
    qfree(v8);
  }
  return a3;
}
