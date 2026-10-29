/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_55A94
// Address: 0x00055A94

//----- (00055A94) --------------------------------------------------------
int *__fastcall sub_55A94(int *a1, _DWORD *a2, int a3, int *a4)
{
  int v8; // r6
  int v9; // r3
  int v10; // r3
  int v11; // r0
  __int64 v12; // r2
  int v13; // r0

  if ( (_DWORD *)a3 == a2 + 1 )
  {
    HIDWORD(v12) = a2[5];
    if ( !HIDWORD(v12) )
      goto LABEL_14;
    HIDWORD(v12) = a2[4];
    if ( *(_DWORD *)(HIDWORD(v12) + 16) >= *a4 )
      goto LABEL_14;
    goto LABEL_17;
  }
  v8 = *a4;
  v9 = *(_DWORD *)(a3 + 16);
  if ( *a4 < v9 )
  {
    v10 = a2[3];
    if ( v10 == a3 )
    {
      *a1 = v10;
      a1[1] = v10;
      return a1;
    }
    v11 = sub_8147C(a3);
    HIDWORD(v12) = *(_DWORD *)(v11 + 16);
    if ( v8 > SHIDWORD(v12) )
    {
      if ( *(_DWORD *)(v11 + 12) )
      {
        *a1 = a3;
        a1[1] = a3;
      }
      else
      {
        *a1 = 0;
        a1[1] = v11;
      }
      return a1;
    }
LABEL_14:
    LODWORD(v12) = a4;
    sub_55A30(a1, (int)a2, v12);
    return a1;
  }
  if ( *a4 <= v9 )
  {
    *a1 = a3;
    a1[1] = 0;
    return a1;
  }
  HIDWORD(v12) = a2[4];
  if ( HIDWORD(v12) == a3 )
  {
LABEL_17:
    LODWORD(v12) = 0;
    *(_QWORD *)a1 = v12;
    return a1;
  }
  v13 = sub_81440(a3);
  HIDWORD(v12) = *(_DWORD *)(v13 + 16);
  if ( v8 >= SHIDWORD(v12) )
    goto LABEL_14;
  if ( *(_DWORD *)(a3 + 12) )
  {
    *a1 = v13;
    a1[1] = v13;
  }
  else
  {
    *a1 = 0;
    a1[1] = a3;
  }
  return a1;
}
// 8147C: using guessed type int __fastcall sub_8147C(_DWORD);
