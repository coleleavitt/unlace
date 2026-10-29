/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000596FC
// Address: 0x00000001000596FC

//----- (00000001000596FC) ----------------------------------------------------
char *__fastcall sub_1000596FC(__int64 **a1, unsigned __int64 *a2, __int64 a3, _QWORD **a4)
{
  char *v6; // x9
  __int64 **v7; // x22
  unsigned __int64 v8; // x8
  char *v9; // x20
  unsigned __int64 v10; // x9
  char *v11; // x23
  __int64 *v12; // x1
  __int64 *v13; // x8

  v7 = a1 + 1;
  v6 = (char *)a1[1];
  if ( v6 )
  {
    v8 = *a2;
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = v6;
        v10 = *((_QWORD *)v6 + 4);
        if ( v8 >= v10 )
          break;
        v6 = *(char **)v9;
        v7 = (__int64 **)v9;
        if ( !*(_QWORD *)v9 )
          goto LABEL_9;
      }
      if ( v10 >= v8 )
        break;
      v6 = *((char **)v9 + 1);
      if ( !v6 )
      {
        v7 = (__int64 **)(v9 + 8);
        goto LABEL_9;
      }
    }
  }
  else
  {
    v9 = (char *)(a1 + 1);
LABEL_9:
    v11 = v9;
    v9 = (char *)operator new(0x1D8u);
    *((_QWORD *)v9 + 4) = **a4;
    *(_OWORD *)(v9 + 248) = 0u;
    *(_OWORD *)(v9 + 232) = 0u;
    *(_OWORD *)(v9 + 216) = 0u;
    *(_OWORD *)(v9 + 200) = 0u;
    *(_OWORD *)(v9 + 184) = 0u;
    *(_OWORD *)(v9 + 168) = 0u;
    *(_OWORD *)(v9 + 152) = 0u;
    *(_OWORD *)(v9 + 136) = 0u;
    *(_OWORD *)(v9 + 120) = 0u;
    *(_OWORD *)(v9 + 104) = 0u;
    *(_OWORD *)(v9 + 88) = 0u;
    *(_OWORD *)(v9 + 72) = 0u;
    *(_OWORD *)(v9 + 40) = 0u;
    *(_OWORD *)(v9 + 56) = 0u;
    *(_OWORD *)(v9 + 440) = 0u;
    *(_OWORD *)(v9 + 456) = 0u;
    *(_OWORD *)(v9 + 408) = 0u;
    *(_OWORD *)(v9 + 424) = 0u;
    *(_OWORD *)(v9 + 376) = 0u;
    *(_OWORD *)(v9 + 392) = 0u;
    *(_OWORD *)(v9 + 344) = 0u;
    *(_OWORD *)(v9 + 360) = 0u;
    *(_OWORD *)(v9 + 312) = 0u;
    *(_OWORD *)(v9 + 328) = 0u;
    *(_OWORD *)(v9 + 280) = 0u;
    *(_OWORD *)(v9 + 296) = 0u;
    *(_OWORD *)(v9 + 264) = 0u;
    *(_OWORD *)(v9 + 264) = 0u;
    *(_OWORD *)(v9 + 280) = 0u;
    *(_OWORD *)(v9 + 344) = 0u;
    *(_OWORD *)(v9 + 360) = 0u;
    *(_OWORD *)(v9 + 424) = 0u;
    *(_OWORD *)(v9 + 440) = 0u;
    *((_QWORD *)v9 + 13) = -1;
    *((_QWORD *)v9 + 14) = -1;
    *((_OWORD *)v9 + 9) = 0u;
    *((_OWORD *)v9 + 10) = 0u;
    *((_DWORD *)v9 + 44) = 0;
    *(_OWORD *)(v9 + 184) = 0u;
    *(_OWORD *)(v9 + 200) = 0u;
    *((_DWORD *)v9 + 54) = 0;
    *((_OWORD *)v9 + 14) = 0u;
    *((_OWORD *)v9 + 15) = 0u;
    *((_DWORD *)v9 + 64) = 0;
    *((_DWORD *)v9 + 74) = 0;
    *((_OWORD *)v9 + 19) = 0u;
    *((_OWORD *)v9 + 20) = 0u;
    *((_DWORD *)v9 + 84) = 0;
    *((_DWORD *)v9 + 94) = 0;
    *((_DWORD *)v9 + 104) = 0;
    *((_OWORD *)v9 + 24) = 0u;
    *((_OWORD *)v9 + 25) = 0u;
    *((_DWORD *)v9 + 114) = 0;
    *((_QWORD *)v9 + 15) = -1;
    *((_QWORD *)v9 + 16) = 0;
    *((_DWORD *)v9 + 34) = 0;
    *(_QWORD *)v9 = 0;
    *((_QWORD *)v9 + 1) = 0;
    *((_QWORD *)v9 + 2) = v11;
    *v7 = (__int64 *)v9;
    v12 = (__int64 *)v9;
    v13 = (__int64 *)**a1;
    if ( v13 )
    {
      *a1 = v13;
      v12 = *v7;
    }
    sub_10000B394(a1[1], v12);
    a1[2] = (__int64 *)((char *)a1[2] + 1);
  }
  return v9;
}
