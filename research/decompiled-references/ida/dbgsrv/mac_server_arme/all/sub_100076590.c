/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100076590
// Address: 0x0000000100076590

//----- (0000000100076590) ----------------------------------------------------
__int64 __fastcall sub_100076590(__int64 a1, int a2, int a3)
{
  __int64 *v3; // x21
  __int64 *v4; // x22
  char v7; // w27
  int v8; // w23
  unsigned int v9; // w24
  int v10; // w8
  bool v11; // zf
  __int64 v12; // x8

  v3 = (__int64 *)(a1 + 24);
  v4 = *(__int64 **)(a1 + 24);
  if ( v4 != (__int64 *)(a1 + 24) )
  {
    v7 = 0;
    v8 = a3 & 0x7F;
    v9 = a3 & 0xFFFFFF7F;
    while ( 1 )
    {
      if ( (v4[5] & 1) == 0 )
      {
        if ( (v7 & 1) != 0
          || ((v10 = *((_DWORD *)v4 + 4), v10 != -1) ? (v11 = v10 == a2) : (v11 = 1),
              !v11 || v9 == 4991 && (*((_DWORD *)v4 + 7) & 0x10) == 0) )
        {
          if ( v8 == 127 )
            goto LABEL_4;
          if ( *((_DWORD *)v4 + 4) != a2 )
            goto LABEL_4;
          *((_BYTE *)v4 + 24) = 1;
          *((_BYTE *)v4 + 40) = 1;
          v12 = v4[4];
          if ( !v12 )
            goto LABEL_4;
LABEL_19:
          if ( *(_QWORD *)(v12 + 8) > 1u )
            sem_post(*(sem_t **)(v12 + 24));
          else
            semaphore_signal(*(_DWORD *)(v12 + 24));
          goto LABEL_4;
        }
        *((_DWORD *)v4 + 4) = a2;
        *((_DWORD *)v4 + 5) = a3;
        v7 = 1;
        *((_BYTE *)v4 + 40) = 1;
        v12 = v4[4];
        if ( v12 )
          goto LABEL_19;
      }
LABEL_4:
      v4 = (__int64 *)*v4;
      if ( v4 == v3 )
        return v7 & 1;
    }
  }
  v7 = 0;
  return v7 & 1;
}
