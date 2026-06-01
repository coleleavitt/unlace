/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_55A30
// Address: 0x00055A30

//----- (00055A30) --------------------------------------------------------
_DWORD *__fastcall sub_55A30(_DWORD *a1, int a2, __int64 a3)
{
  _DWORD *v4; // r4
  int *v5; // r8
  int v6; // r6
  int v7; // r5
  int v8; // r0
  _DWORD *v9; // r3
  _DWORD *result; // r0
  int v11; // r0

  v4 = *(_DWORD **)(a2 + 8);
  v5 = (int *)a3;
  if ( v4 )
  {
    v6 = *(_DWORD *)a3;
    while ( 1 )
    {
      v7 = v4[4];
      v8 = 1;
      if ( v6 >= v7 )
      {
        v8 = 0;
        v9 = (_DWORD *)v4[3];
      }
      else
      {
        v9 = (_DWORD *)v4[2];
      }
      if ( !v9 )
        break;
      v4 = v9;
    }
    HIDWORD(a3) = v4;
    if ( !v8 )
      goto LABEL_9;
  }
  else
  {
    v4 = (_DWORD *)(a2 + 4);
  }
  if ( *(_DWORD **)(a2 + 12) == v4 )
  {
    *a1 = 0;
    a1[1] = v4;
    return a1;
  }
  v11 = sub_8147C(v4);
  HIDWORD(a3) = v4;
  v6 = *v5;
  v7 = *(_DWORD *)(v11 + 16);
  v4 = (_DWORD *)v11;
LABEL_9:
  result = a1;
  if ( v6 <= v7 )
    HIDWORD(a3) = 0;
  else
    LODWORD(a3) = 0;
  if ( v6 <= v7 )
  {
    *a1 = v4;
    a1[1] = HIDWORD(a3);
  }
  else
  {
    *(_QWORD *)a1 = a3;
  }
  return result;
}
// 55A62: variable 'a3' is possibly undefined
// 8147C: using guessed type int __fastcall sub_8147C(_DWORD);
