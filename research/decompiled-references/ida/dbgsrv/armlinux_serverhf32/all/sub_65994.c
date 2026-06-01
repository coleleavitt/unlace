/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_65994
// Address: 0x00065994

//----- (00065994) --------------------------------------------------------
int __fastcall sub_65994(int a1, int a2)
{
  _DWORD *v4; // r7
  int *v5; // r4
  _DWORD *v6; // r6
  int v7; // r0
  int result; // r0
  pthread_t v9; // r0
  int *v10; // r0

  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 44) + 8))(*(_DWORD *)(a1 + 44));
  v4 = *(_DWORD **)(a1 + 44);
  v5 = (int *)v4[4];
  v6 = v4 + 2;
  if ( v5 == v4 + 2 )
    goto LABEL_6;
  if ( a2 != v5[4] )
  {
    while ( 1 )
    {
      v7 = sub_81290((int)v5);
      v5 = (int *)v7;
      if ( (_DWORD *)v7 == v6 )
        break;
      if ( *(_DWORD *)(v7 + 16) == a2 )
        goto LABEL_8;
    }
LABEL_6:
    result = (*(int (__fastcall **)(_DWORD *))(*v4 + 12))(v4);
    if ( !a2 )
      return result;
    return (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 4))(a2);
  }
LABEL_8:
  v9 = v5[5];
  if ( v9 )
  {
    sub_79AAC(v9);
    v4 = *(_DWORD **)(a1 + 44);
    v6 = v4 + 2;
  }
  v10 = sub_81494(v5, v6);
  sub_80648(v10);
  --v4[6];
  result = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 44) + 12))(*(_DWORD *)(a1 + 44));
  if ( a2 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 4))(a2);
  return result;
}
