/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9D8E4
// Address: 0x000000000009D8E4

//----- (000000000009D8E4) ----------------------------------------------------
char *__fastcall sub_9D8E4(__int64 **a1, unsigned __int64 *a2, __int64 a3, _QWORD **a4)
{
  void **v4; // x22
  void **v5; // x23
  unsigned __int64 v8; // x8
  void *v9; // x9
  char *v10; // x20
  __int64 *v11; // x8
  __int64 *v12; // x1

  v4 = (void **)(a1 + 1);
  v5 = (void **)a1[1];
  if ( v5 )
  {
    v8 = *a2;
    v4 = (void **)(a1 + 1);
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = v5[4];
        if ( v8 < (unsigned __int64)v9 )
          break;
        if ( (unsigned __int64)v9 >= v8 )
          goto LABEL_11;
        v4 = v5 + 1;
        if ( !v5[1] )
          goto LABEL_11;
        v5 = (void **)v5[1];
      }
      if ( !*v5 )
        break;
      v4 = v5;
      v5 = (void **)*v5;
    }
    v4 = v5;
    v10 = (char *)*v5;
    if ( !*v5 )
      goto LABEL_14;
  }
  else
  {
    v5 = (void **)(a1 + 1);
LABEL_11:
    v10 = (char *)*v4;
    if ( !*v4 )
    {
LABEL_14:
      v10 = (char *)operator new(0x1D8u);
      *((_QWORD *)v10 + 4) = **a4;
      memset(v10 + 40, 0, 0x1B0u);
      *((_DWORD *)v10 + 44) = 0;
      *((_DWORD *)v10 + 34) = 0;
      *((_DWORD *)v10 + 54) = 0;
      *((_DWORD *)v10 + 64) = 0;
      *((_QWORD *)v10 + 13) = -1;
      *((_QWORD *)v10 + 14) = -1;
      *((_OWORD *)v10 + 9) = 0u;
      *((_OWORD *)v10 + 10) = 0u;
      *((_QWORD *)v10 + 15) = -1;
      *((_QWORD *)v10 + 16) = 0;
      *(_OWORD *)(v10 + 200) = 0u;
      *(_OWORD *)(v10 + 184) = 0u;
      *((_OWORD *)v10 + 14) = 0u;
      *((_OWORD *)v10 + 15) = 0u;
      *(_OWORD *)(v10 + 264) = 0u;
      *((_DWORD *)v10 + 74) = 0;
      *(_OWORD *)(v10 + 280) = 0u;
      *((_DWORD *)v10 + 84) = 0;
      *((_OWORD *)v10 + 19) = 0u;
      *((_OWORD *)v10 + 20) = 0u;
      *(_OWORD *)(v10 + 360) = 0u;
      *(_OWORD *)(v10 + 344) = 0u;
      *((_DWORD *)v10 + 94) = 0;
      *((_DWORD *)v10 + 104) = 0;
      *((_OWORD *)v10 + 24) = 0u;
      *((_OWORD *)v10 + 25) = 0u;
      *((_DWORD *)v10 + 114) = 0;
      *(_OWORD *)(v10 + 440) = 0u;
      *(_OWORD *)(v10 + 424) = 0u;
      *(_QWORD *)v10 = 0;
      *((_QWORD *)v10 + 1) = 0;
      *((_QWORD *)v10 + 2) = v5;
      *v4 = v10;
      v11 = (__int64 *)**a1;
      if ( v11 )
      {
        *a1 = v11;
        v12 = (__int64 *)*v4;
      }
      else
      {
        v12 = (__int64 *)v10;
      }
      sub_48ED8(a1[1], v12);
      a1[2] = (__int64 *)((char *)a1[2] + 1);
    }
  }
  return v10;
}
