/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140040D60
// Address: 0x0000000140040D60

//----- (0000000140040D60) ----------------------------------------------------
__int64 __fastcall sub_140040D60(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  _QWORD *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 *v9; // r8
  __int64 *v10; // r8
  __int64 i; // rcx
  __int64 j; // rcx
  __int64 k; // rcx
  __int64 *v14; // rcx
  __int64 v15; // rax
  _QWORD *v16; // rsi
  void *v17; // rcx
  void *v18; // rcx

  v4 = a2;
  v6 = (_QWORD *)*a1;
  if ( a2 == *(_QWORD *)*a1 && *(_BYTE *)(a3 + 25) )
  {
    sub_140009950((__int64)a1, (__int64)a1, v6[1]);
    v6[1] = v6;
    *v6 = v6;
    v6[2] = v6;
    a1[1] = 0;
  }
  else if ( a2 != a3 )
  {
    do
    {
      v7 = v4;
      v8 = v4;
      v9 = *(__int64 **)(v4 + 16);
      if ( *((_BYTE *)v9 + 25) )
      {
        v10 = (__int64 *)(v4 + 8);
        for ( i = *(_QWORD *)(v4 + 8); !*(_BYTE *)(i + 25); i = *(_QWORD *)(i + 8) )
        {
          if ( v4 != *(_QWORD *)(i + 16) )
            break;
          v4 = i;
        }
        v4 = i;
        for ( j = *v10; !*(_BYTE *)(j + 25); j = *(_QWORD *)(j + 8) )
        {
          if ( v8 != *(_QWORD *)(j + 16) )
            break;
          v8 = j;
        }
      }
      else
      {
        v4 = *(_QWORD *)(v4 + 16);
        for ( k = *v9; !*(_BYTE *)(k + 25); k = *(_QWORD *)k )
          v4 = k;
        v14 = (__int64 *)*v9;
        if ( !*(_BYTE *)(*v9 + 25) )
        {
          do
            v14 = (__int64 *)*v14;
          while ( !*((_BYTE *)v14 + 25) );
        }
      }
      v15 = sub_14000C8A0(a1, v7);
      v16 = (_QWORD *)v15;
      v17 = *(void **)(v15 + 80);
      if ( v17 )
      {
        *(_QWORD *)(v15 + 88) = 0;
        j_free(v17);
        v16[10] = 0;
        v16[12] = 0;
      }
      v18 = (void *)v16[6];
      if ( v18 )
      {
        v16[7] = 0;
        j_free(v18);
        v16[6] = 0;
        v16[8] = 0;
      }
      j_j_free(v16);
    }
    while ( v4 != a3 );
  }
  return a3;
}
