/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_swap
// Address: 0x00000000000C587C

//----- (00000000000C587C) ----------------------------------------------------
void __fastcall rangeset_t_swap(__int64 a1, __int128 **a2)
{
  int v4; // w8
  char v5; // w0
  int v6; // w8
  __int128 *v7; // x22
  unsigned __int64 v8; // x23
  __int128 v9; // q0
  __int128 *v10; // x22
  __int128 *v11; // x23
  __int128 v12; // q0
  __int128 *v13; // x8
  __int128 v14; // q0
  __int128 *v15; // x9
  void *ptr; // [xsp+0h] [xbp-80h] BYREF
  __int64 v17; // [xsp+8h] [xbp-78h]
  __int64 v18; // [xsp+10h] [xbp-70h]
  int v19; // [xsp+18h] [xbp-68h]
  unsigned __int8 v20; // [xsp+1Ch] [xbp-64h]
  __int128 v21; // [xsp+20h] [xbp-60h] BYREF
  char v22; // [xsp+30h] [xbp-50h]
  __int64 v23; // [xsp+38h] [xbp-48h]

  v23 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *(_DWORD *)(a1 + 32);
  ptr = nullptr;
  v17 = 0;
  v18 = 0;
  v19 = v4;
  if ( v4 == -1 )
    v5 = 0;
  else
    v5 = must_journal();
  v6 = v5 & 1;
  v20 = v5 & 1;
  if ( (v5 & 1) != 0 )
  {
    v7 = *(__int128 **)a1;
    v8 = *(_QWORD *)a1 + 16LL * *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)a1 < v8 )
    {
      do
      {
        v9 = *v7;
        v22 = 1;
        v21 = v9;
        sub_C5A18((char **)&ptr, (unsigned __int64)&v21);
        ++v7;
      }
      while ( (unsigned __int64)v7 < v8 );
      v6 = v20;
    }
  }
  v10 = *a2;
  if ( v6 )
  {
    v11 = &v10[(_QWORD)a2[1]];
    if ( v10 < v11 )
    {
      do
      {
        v12 = *v10;
        v22 = 0;
        v21 = v12;
        sub_C5A18((char **)&ptr, (unsigned __int64)&v21);
        ++v10;
      }
      while ( v10 < v11 );
      v10 = *a2;
    }
  }
  v13 = *(__int128 **)a1;
  *(_QWORD *)a1 = v10;
  v14 = *(_OWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = a2[1];
  *(_QWORD *)(a1 + 16) = a2[2];
  *a2 = v13;
  *(_OWORD *)(a2 + 1) = v14;
  v15 = *(__int128 **)(a1 + 24);
  *(_QWORD *)(a1 + 24) = a2[3];
  a2[3] = v15;
  if ( ptr )
  {
    v17 = 0;
    qfree(ptr);
  }
}
