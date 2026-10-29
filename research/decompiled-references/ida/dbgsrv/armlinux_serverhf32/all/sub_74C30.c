/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_74C30
// Address: 0x00074C30

//----- (00074C30) --------------------------------------------------------
int __fastcall sub_74C30(int a1, __int64 a2, int a3)
{
  __int64 v4; // kr00_8
  __int64 v8; // kr18_8

  if ( !a1 )
    return -1;
  if ( *(int *)a1 <= 1 )
  {
    if ( !sub_7771C(*(_DWORD *)(a1 + 8)) )
      return sub_776D4(*(_DWORD *)(a1 + 8));
    return -1;
  }
  v4 = a2;
  if ( a3 == 1 )
  {
    v4 = a2 + *(_QWORD *)(a1 + 24);
LABEL_9:
    *(_QWORD *)(a1 + 24) = v4;
    return v4;
  }
  if ( a3 != 2 )
  {
    if ( a3 )
      return *(_DWORD *)(a1 + 24);
    goto LABEL_9;
  }
  v8 = a2 + *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 24) = v8;
  return v8;
}
