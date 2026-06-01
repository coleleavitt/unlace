/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C1E00
// Address: 0x00000000000C1E00

//----- (00000000000C1E00) ----------------------------------------------------
__int64 __fastcall sub_C1E00(__int64 a1, int a2, int a3)
{
  _BOOL4 v5; // w22
  __int64 *v6; // x21
  __int64 *v7; // x23
  char v8; // w26
  int v9; // w8
  __int64 v10; // x8
  sem_t *v11; // x0
  __int64 v12; // x8
  sem_t *v13; // x0

  v5 = (a3 & 0x7F) == 0 || (((_BYTE)a3 + 1) & 0x7E) != 0;
  v6 = (__int64 *)(a1 + 24);
  v7 = *(__int64 **)(a1 + 24);
  if ( (__int64 *)(a1 + 24) == v7 )
  {
    v8 = 0;
  }
  else
  {
    v8 = 0;
    do
    {
      if ( !*((_BYTE *)v7 + 40) )
      {
        if ( (v8 & 1) == 0
          && ((v9 = *((_DWORD *)v7 + 4), v9 == -1) || v9 == a2)
          && (a3 != 0xFFFF || (*((_DWORD *)v7 + 7) & 8) != 0) )
        {
          v12 = v7[4];
          v8 = 1;
          *((_DWORD *)v7 + 4) = a2;
          *((_DWORD *)v7 + 5) = a3;
          *((_BYTE *)v7 + 40) = 1;
          if ( v12 )
          {
            v13 = (sem_t *)(v12 + 24);
            if ( *(_QWORD *)(v12 + 8) > 1u )
              v13 = (sem_t *)v13->__align;
            sem_post(v13);
            v8 = 1;
          }
        }
        else if ( v5 && *((_DWORD *)v7 + 4) == a2 )
        {
          v10 = v7[4];
          *((_BYTE *)v7 + 24) = 1;
          *((_BYTE *)v7 + 40) = 1;
          if ( v10 )
          {
            v11 = (sem_t *)(v10 + 24);
            if ( *(_QWORD *)(v10 + 8) > 1u )
              v11 = (sem_t *)v11->__align;
            sem_post(v11);
          }
        }
      }
      v7 = (__int64 *)*v7;
    }
    while ( v6 != v7 );
  }
  return v8 & 1;
}
