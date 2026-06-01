/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46744E
// Address: 0x0046744E

//----- (0046744E) --------------------------------------------------------
int __usercall sub_46744E@<eax>(int a1@<ebx>, int *a2@<edi>, int a3, int a4, int a5, int a6)
{
  int v6; // esi
  _DWORD *v7; // eax
  int v8; // eax
  _DWORD *v10; // eax
  int v11; // [esp+10h] [ebp-20h]

  v6 = sub_467CCC(a3, a4, a5);
  v7 = sub_4667C5(a1, a2, v6);
  ++v7[6];
  while ( v6 != a6 )
  {
    if ( v6 <= -1 )
      goto LABEL_14;
    a2 = (int *)a5;
    if ( v6 >= *(_DWORD *)(a5 + 4) )
      goto LABEL_14;
    v8 = *(_DWORD *)(a5 + 8);
    v11 = *(_DWORD *)(v8 + 8 * v6);
    if ( *(_DWORD *)(v8 + 8 * v6 + 4) )
    {
      sub_467CE9(a3, a5, *(_DWORD *)(v8 + 8 * v6));
      sub_467610(*(_DWORD *)(*(_DWORD *)(a5 + 8) + 8 * v6 + 4), a3, 259);
    }
    v6 = v11;
  }
  if ( *((int *)sub_4667C5(a1, a2, v6) + 6) > 0 )
  {
    v10 = sub_4667C5(a1, a2, v6);
    --v10[6];
  }
  if ( v6 != a6 )
LABEL_14:
    sub_467F38(a1, a2, v6);
  return sub_467CE9(a3, a5, v6);
}
