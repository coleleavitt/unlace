/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_35E28
// Address: 0x00035E28

//----- (00035E28) --------------------------------------------------------
int *__fastcall sub_35E28(int *a1, int a2, __int64 a3)
{
  int v4; // r4
  unsigned __int64 *v5; // r10
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r6
  int v8; // r0
  int v9; // r3
  bool v10; // cf
  int *result; // r0
  int v12; // r0

  v4 = *(_DWORD *)(a2 + 8);
  v5 = (unsigned __int64 *)a3;
  if ( v4 )
  {
    v6 = *(_QWORD *)a3;
    while ( 1 )
    {
      v7 = *(_QWORD *)(v4 + 16);
      v8 = 1;
      if ( v6 >= v7 )
      {
        v8 = 0;
        v9 = *(_DWORD *)(v4 + 12);
      }
      else
      {
        v9 = *(_DWORD *)(v4 + 8);
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
    v4 = a2 + 4;
  }
  if ( *(_DWORD *)(a2 + 12) == v4 )
  {
    *a1 = 0;
    a1[1] = v4;
    return a1;
  }
  v12 = sub_812CC(v4);
  HIDWORD(a3) = v4;
  v7 = *(_QWORD *)(v12 + 16);
  v4 = v12;
  v6 = *v5;
LABEL_9:
  v10 = HIDWORD(v7) >= HIDWORD(v6);
  result = a1;
  if ( HIDWORD(v7) == HIDWORD(v6) )
    v10 = (unsigned int)v7 >= (unsigned int)v6;
  if ( v10 )
    HIDWORD(a3) = 0;
  else
    LODWORD(a3) = 0;
  if ( v10 )
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
// 35E66: variable 'a3' is possibly undefined
// 812CC: using guessed type int __fastcall sub_812CC(_DWORD);
