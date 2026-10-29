/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_54D58
// Address: 0x00054D58

//----- (00054D58) --------------------------------------------------------
int __fastcall sub_54D58(_DWORD *a1, unsigned int a2, int a3)
{
  _DWORD *v6; // r6
  int v7; // r0
  int *v8; // r4
  int (*v10)(); // r7
  int *v11; // r0

  v6 = a1 + 79;
  v7 = sub_54938(a1, a2, 1);
  if ( (_DWORD *)v7 == v6 )
    return 0;
  v8 = (int *)v7;
  if ( *(_DWORD *)(v7 + 20) != a2 || *(_DWORD *)(v7 + 48) != a3 )
    return 0;
  v10 = *(int (**)())(*a1 + 172);
  if ( v10 != sub_1507C )
    ((void (__fastcall *)(_DWORD *, int, _DWORD))v10)(a1, v7, 0);
  v11 = sub_81644(v8, v6);
  sub_809EC(v11);
  --a1[83];
  return 1;
}
