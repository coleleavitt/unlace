/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A009C
// Address: 0x00000000000A009C

//----- (00000000000A009C) ----------------------------------------------------
void __fastcall sub_A009C(__int64 *a1, char a2, unsigned __int64 *a3)
{
  int v6; // w22
  __int64 v7; // x25
  __int64 i; // x26
  __int64 v9; // x27
  __int64 v10; // x28
  int v11; // w0
  unsigned __int64 v12; // x8
  size_t v13; // x22
  char *v14; // x0
  const void *v15; // x1
  unsigned __int64 v16; // x8
  void *v17; // x0
  char v18[4]; // [xsp+4h] [xbp-6Ch] BYREF
  __int64 v19; // [xsp+8h] [xbp-68h]

  v19 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = unpack_dd(a3, a3[1]);
  sub_A0220((__int64)a1, v6);
  if ( v6 >= 1 )
  {
    v7 = 0;
    for ( i = (unsigned int)v6; i; --i )
    {
      v9 = *a1;
      v10 = v9 + v7;
      *(_DWORD *)(v9 + v7) = unpack_dd(a3, a3[1]);
      v11 = unpack_dd(a3, a3[1]);
      v12 = *(_QWORD *)(v9 + v7 + 16);
      v13 = v11;
      if ( v12 >= v11 )
      {
        if ( v12 != v11 )
        {
          v18[0] = 0;
          sub_5BBF4((pthread_mutex_t *)(v10 + 8), v11, v18);
          if ( (a2 & 1) != 0 )
            goto LABEL_12;
          goto LABEL_15;
        }
      }
      else
      {
        if ( *(_QWORD *)(v10 + 24) >= (unsigned __int64)v11 )
        {
          v14 = *(char **)(v9 + v7 + 8);
        }
        else
        {
          v14 = (char *)qvector_reserve((pthread_mutex_t *)(v9 + v7 + 8), *(void **)(v9 + v7 + 8), v11, 1u);
          *(_QWORD *)(v9 + v7 + 8) = v14;
          v12 = *(_QWORD *)(v10 + 16);
        }
        memset(&v14[v12], 0, v13 - v12);
        *(_QWORD *)(v10 + 16) = v13;
      }
      if ( (a2 & 1) != 0 )
      {
LABEL_12:
        *(_DWORD *)(v9 + v7 + 4) = unpack_dd(a3, a3[1]);
        v15 = (const void *)*a3;
        v16 = *a3 + v13;
        if ( v16 >= *a3 && v16 <= a3[1] )
        {
          v17 = *(void **)(v9 + v7 + 8);
          *a3 = v16;
          memcpy(v17, v15, v13);
        }
      }
LABEL_15:
      v7 += 32;
    }
  }
}
