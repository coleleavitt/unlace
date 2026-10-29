/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400219A0
// Address: 0x00000001400219A0

//----- (00000001400219A0) ----------------------------------------------------
__int64 __fastcall sub_1400219A0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  _QWORD *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 *v10; // r8
  __int64 i; // rcx
  __int64 j; // rcx
  __int64 k; // rcx
  __int64 m; // rcx
  _QWORD *v15; // rsi
  void *v16; // rcx

  v4 = a2;
  v6 = (_QWORD *)*a1;
  if ( a2 == *(_QWORD *)*a1 && *(_BYTE *)(a3 + 25) )
  {
    sub_140020A50((__int64)a1, (__int64)a1, v6[1]);
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
      v9 = *(_QWORD *)(v4 + 16);
      if ( *(_BYTE *)(v9 + 25) )
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
        for ( k = *(_QWORD *)v9; !*(_BYTE *)(k + 25); k = *(_QWORD *)k )
          v4 = k;
        for ( m = *(_QWORD *)v9; !*(_BYTE *)(m + 25); m = *(_QWORD *)m )
          ;
      }
      v15 = (_QWORD *)sub_14000C8A0(a1, v7);
      sub_140029390((__int64)(v15 + 7));
      v16 = (void *)v15[4];
      if ( v16 )
      {
        v15[5] = 0;
        j_free(v16);
        v15[4] = 0;
        v15[6] = 0;
      }
      j_j_free(v15);
    }
    while ( v4 != a3 );
  }
  return a3;
}
