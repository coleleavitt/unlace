/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14006BCC8
// Address: 0x000000014006BCC8

//----- (000000014006BCC8) ----------------------------------------------------
__int64 __fastcall sub_14006BCC8(_BYTE *a1, __int64 a2, __int64 a3, int a4, char a5)
{
  char v5; // bl
  int *v6; // r10
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax
  int v14; // edx
  _BYTE *v15; // r8
  _BYTE *v16; // r9
  __int64 v17; // rcx
  int *v18; // r9
  unsigned int v19; // r10d
  int v20; // eax
  int v21; // ecx
  __int64 v22; // rcx

  v5 = *a1;
  v6 = (int *)(a1 + 1);
  *(_BYTE *)a2 = *a1;
  if ( (v5 & 4) != 0 )
  {
    v11 = *(_BYTE *)v6 & 0xF;
    v6 = (int *)((char *)v6 - *((char *)qword_1400AE700 + v11));
    *(_DWORD *)(a2 + 4) = (unsigned int)*(v6 - 1) >> *((_BYTE *)&qword_1400AE700[2] + v11);
  }
  if ( (v5 & 8) != 0 )
  {
    v12 = *v6++;
    *(_DWORD *)(a2 + 8) = v12;
  }
  if ( (v5 & 0x10) != 0 )
  {
    v13 = *v6++;
    *(_DWORD *)(a2 + 12) = v13;
  }
  v14 = 0;
  v15 = v6 + 1;
  if ( a5 || (v5 & 2) == 0 )
  {
    *(_DWORD *)(a2 + 16) = *v6;
  }
  else
  {
    *(_DWORD *)(a2 + 16) = 0;
    if ( !*v6 )
      __fastfail(7u);
    v16 = (_BYTE *)(*v6 + a3);
    v17 = *v16 & 0xF;
    v18 = (int *)&v16[-*((char *)qword_1400AE700 + v17)];
    v19 = (unsigned int)*(v18 - 1) >> *((_BYTE *)&qword_1400AE700[2] + v17);
    if ( v19 )
    {
      while ( 1 )
      {
        v20 = *v18;
        v21 = v18[1];
        v18 += 2;
        if ( v20 == a4 )
          break;
        if ( ++v14 >= v19 )
          goto LABEL_17;
      }
      *(_DWORD *)(a2 + 16) = v21;
    }
  }
LABEL_17:
  if ( (v5 & 1) != 0 )
  {
    v22 = *v15 & 0xF;
    v15 -= *((char *)qword_1400AE700 + v22);
    *(_DWORD *)(a2 + 20) = *((_DWORD *)v15 - 1) >> *((_BYTE *)&qword_1400AE700[2] + v22);
  }
  return v15 - a1;
}
// 1400AE700: using guessed type __int64[4];
