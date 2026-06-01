/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4271E0
// Address: 0x00000000004271E0

//----- (00000000004271E0) ----------------------------------------------------
__int64 __fastcall sub_4271E0(_QWORD *a1, _DWORD *a2, __int64 a3, int a4, __int64 a5, unsigned int a6, unsigned int a7)
{
  unsigned int v9; // w3
  unsigned int v10; // w5
  _QWORD *v11; // x3
  __int64 v12; // x7
  __int64 v13; // x7
  __int64 v14; // x7
  __int64 v15; // x7
  int v16; // w1

  a7 = (unsigned __int8)a7;
  *a2 = 0;
  if ( (_BYTE)a7 )
  {
    if ( (unsigned __int8)sub_427080(a5, (__int64)a1, a6) )
      goto LABEL_3;
  }
  else
  {
    v9 = *(_DWORD *)(a3 + 80 + 4LL * a4 + 56);
    if ( !v9 )
      return a7;
    v10 = *(unsigned __int8 *)(a3 + 248);
    if ( !*(_BYTE *)(a3 + 248) )
      sub_4068C0();
    if ( (unsigned __int64)v9 >= *(_QWORD *)(a3 + 120) )
      return a7;
    v11 = (_QWORD *)(*(_QWORD *)(a3 + 112) + ((unsigned __int64)v9 << 6));
    if ( !v11 )
      return a7;
    v12 = v11[1];
    *a1 = *v11;
    a1[1] = v12;
    v13 = v11[3];
    a1[2] = v11[2];
    a1[3] = v13;
    v14 = v11[5];
    a1[4] = v11[4];
    a1[5] = v14;
    v15 = v11[7];
    a1[6] = v11[6];
    a1[7] = v15;
    v16 = *((_DWORD *)v11 + 10);
    if ( v16 == *(_DWORD *)(a3 + 192) && (unsigned int)*(_QWORD *)(a3 + 312) )
    {
      a7 = v10;
      *a2 = 1;
      return a7;
    }
    if ( v16 == *(_DWORD *)(a3 + 160) && (unsigned int)*(_QWORD *)(a3 + 296) != (unsigned int)*(_QWORD *)(a3 + 312) )
    {
LABEL_3:
      a7 = 1;
      *a2 = 2;
      return a7;
    }
  }
  return *a2 != 0;
}
