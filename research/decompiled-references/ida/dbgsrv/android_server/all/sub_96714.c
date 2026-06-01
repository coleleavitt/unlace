/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_96714
// Address: 0x0000000000096714

//----- (0000000000096714) ----------------------------------------------------
__int64 __fastcall sub_96714(__int64 a1, __int64 a2)
{
  void *v4; // x19
  const char *v5; // x22
  unsigned __int64 v6; // x23
  unsigned __int64 v7; // x8
  void **v8; // x22
  char *v9; // x0
  char v10; // w23
  void *v11; // x1
  __int64 v12; // x8
  __int64 v13; // x25
  void *v15; // x0
  void *v16; // x0
  __int128 v17; // [xsp+8h] [xbp-68h] BYREF
  __int64 v18; // [xsp+18h] [xbp-58h]
  char v19[4]; // [xsp+24h] [xbp-4Ch] BYREF
  __int64 v20; // [xsp+28h] [xbp-48h]

  v20 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v18 = 0;
  v17 = 0u;
  sub_8A33C(&v17, (_QWORD *)a2, *(_QWORD **)(a1 + 16));
  v4 = (void *)v17;
  if ( *((_QWORD *)&v17 + 1) )
    v5 = (const char *)v17;
  else
    v5 = &byte_F154B;
  if ( !strcmp(v5, ".debug_info") )
  {
    *(_BYTE *)(a1 + 24) = 1;
  }
  else if ( strcmp(v5, ".note.gnu.build-id") || (v6 = *(unsigned int *)(a2 + 16), WORD1(v6)) )
  {
    if ( !strcmp(v5, ".gnu_debuglink") )
    {
      qlseek(*(_QWORD *)(a1 + 8), *(int *)(a2 + 20), 0);
      while ( qlread(*(_QWORD *)(a1 + 8), v19, 1u) == 1 )
      {
        v10 = v19[0];
        if ( !v19[0] )
          goto LABEL_21;
        v11 = *(void **)(a1 + 56);
        v12 = *(_QWORD *)(a1 + 64);
        if ( v12 )
          v13 = v12 - 1;
        else
          v13 = 0;
        if ( *(_QWORD *)(a1 + 72) < (unsigned __int64)(v13 + 2) )
        {
          v11 = qvector_reserve((pthread_mutex_t *)(a1 + 56), v11, v13 + 2, 1u);
          *(_QWORD *)(a1 + 56) = v11;
        }
        *(_QWORD *)(a1 + 64) = v13 + 2;
        *((_BYTE *)v11 + v13) = v10;
        *(_BYTE *)(*(_QWORD *)(a1 + 56) + v13 + 1) = 0;
      }
      v15 = *(void **)(a1 + 56);
      if ( v15 )
      {
        *(_QWORD *)(a1 + 64) = 0;
        qfree(v15);
        *(_QWORD *)(a1 + 56) = 0;
        *(_QWORD *)(a1 + 72) = 0;
        if ( !v4 )
          return 0;
        goto LABEL_22;
      }
    }
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 40);
    v8 = (void **)(a1 + 32);
    if ( v7 >= v6 )
    {
      if ( v7 != v6 )
      {
        v19[0] = 0;
        sub_5BBF4((pthread_mutex_t *)(a1 + 32), v6, v19);
      }
    }
    else
    {
      if ( *(_QWORD *)(a1 + 48) >= v6 )
      {
        v9 = (char *)*v8;
      }
      else
      {
        v9 = (char *)qvector_reserve((pthread_mutex_t *)(a1 + 32), *v8, *(unsigned int *)(a2 + 16), 1u);
        v7 = *(_QWORD *)(a1 + 40);
        *(_QWORD *)(a1 + 32) = v9;
      }
      memset(&v9[v7], 0, v6 - v7);
      *(_QWORD *)(a1 + 40) = v6;
    }
    qlseek(*(_QWORD *)(a1 + 8), *(int *)(a2 + 20), 0);
    if ( qlread(*(_QWORD *)(a1 + 8), *(void **)(a1 + 32), *(unsigned int *)(a2 + 16)) != *(_DWORD *)(a2 + 16) )
    {
      v16 = *v8;
      if ( *v8 )
      {
        *(_QWORD *)(a1 + 40) = 0;
        qfree(v16);
        *(_QWORD *)(a1 + 32) = 0;
        *(_QWORD *)(a1 + 48) = 0;
        if ( !v4 )
          return 0;
        goto LABEL_22;
      }
    }
  }
LABEL_21:
  if ( v4 )
  {
LABEL_22:
    *((_QWORD *)&v17 + 1) = 0;
    qfree(v4);
    *(_QWORD *)&v17 = 0;
    v18 = 0;
  }
  return 0;
}
// F154B: using guessed type char byte_F154B;
