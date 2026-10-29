/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: user2qstr
// Address: 0x00000000000AC744

//----- (00000000000AC744) ----------------------------------------------------
__int64 __fastcall user2qstr(__int64 result, __int64 a2)
{
  __int64 v3; // x19
  unsigned __int64 v4; // x2
  unsigned __int8 *v5; // x8
  unsigned __int64 v6; // x9
  unsigned __int8 *v7; // x23
  int v8; // w20
  void *v9; // x1
  __int64 v10; // x8
  __int64 v11; // x24
  unsigned __int8 *v12[2]; // [xsp+0h] [xbp-50h] BYREF

  v3 = result;
  v12[1] = *(unsigned __int8 **)(_ReadStatusReg(TPIDR_EL0) + 40);
  *(_QWORD *)(result + 8) = 0;
  v4 = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)(result + 16) < v4 )
  {
    result = (__int64)qvector_reserve((pthread_mutex_t *)result, *(void **)result, v4, 1u);
    *(_QWORD *)v3 = result;
    v4 = *(_QWORD *)(a2 + 8);
  }
  v5 = *(unsigned __int8 **)a2;
  if ( v4 )
  {
    v6 = v4 - 1;
  }
  else
  {
    v5 = (unsigned __int8 *)&byte_F154B;
    v6 = 0;
  }
  v12[0] = v5;
  if ( v6 )
  {
    v7 = &v5[v6];
    do
    {
      v12[0] = v5 + 1;
      v8 = *v5;
      if ( v8 == 92 )
      {
        result = back_char(v12);
        LOBYTE(v8) = result;
      }
      v9 = *(void **)v3;
      v10 = *(_QWORD *)(v3 + 8);
      if ( v10 )
        v11 = v10 - 1;
      else
        v11 = 0;
      if ( *(_QWORD *)(v3 + 16) < (unsigned __int64)(v11 + 2) )
      {
        result = (__int64)qvector_reserve((pthread_mutex_t *)v3, v9, v11 + 2, 1u);
        v9 = (void *)result;
        *(_QWORD *)v3 = result;
      }
      *(_QWORD *)(v3 + 8) = v11 + 2;
      *((_BYTE *)v9 + v11) = v8;
      *(_BYTE *)(*(_QWORD *)v3 + v11 + 1) = 0;
      v5 = v12[0];
    }
    while ( v12[0] != v7 );
  }
  return result;
}
// F154B: using guessed type char byte_F154B;
