/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001D5D0
// Address: 0x000000014001D5D0

//----- (000000014001D5D0) ----------------------------------------------------
char __fastcall sub_14001D5D0(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4)
{
  int v5; // r10d
  unsigned __int64 v6; // rcx
  _QWORD *v10; // rsi
  unsigned __int64 *v11; // r9
  __int64 v12; // rcx
  unsigned __int64 *v13; // rax
  unsigned __int64 *v14; // rdx

  v5 = 0;
  v6 = *(_QWORD *)(a1 + 8);
  v10 = (_QWORD *)(a1 + 8);
  if ( v6 )
  {
    v11 = *(unsigned __int64 **)a1;
    while ( a2 < *v11 || a2 >= v11[1] )
    {
      ++v5;
      v11 += 3;
      if ( v5 >= v6 )
      {
        v10 = (_QWORD *)(a1 + 8);
        goto LABEL_7;
      }
    }
    return 0;
  }
  else
  {
LABEL_7:
    if ( v6 + 1 > *(_QWORD *)(a1 + 16) )
      *(_QWORD *)a1 = sub_14005ABE0(a1, *(void **)a1, v6 + 1, 0x18u);
    v12 = 3LL * *(_QWORD *)(a1 + 8);
    v13 = *(unsigned __int64 **)a1;
    v13[v12] = 0;
    v13[v12 + 1] = 0;
    v13[v12 + 2] = -1;
    ++*v10;
    v14 = &v13[v12];
    *v14 = a2;
    v14[1] = a2 + a3;
    v14[2] = a4;
    return 1;
  }
}
