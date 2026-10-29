/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001D6B0
// Address: 0x000000014001D6B0

//----- (000000014001D6B0) ----------------------------------------------------
char __fastcall sub_14001D6B0(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v9; // r8
  int v10; // edx
  _QWORD *v11; // rsi
  unsigned __int64 *v12; // rcx
  unsigned __int64 v13; // r8
  __int64 v14; // rcx
  unsigned __int64 *v15; // rax
  unsigned __int64 *v16; // rdx

  if ( (a2 & *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL)) == a2 )
    return 0;
  v9 = *(_QWORD *)(a1 + 8);
  v10 = 0;
  v11 = (_QWORD *)(a1 + 8);
  if ( v9 )
  {
    v12 = *(unsigned __int64 **)a1;
    while ( a2 < *v12 || a2 >= v12[1] )
    {
      ++v10;
      v12 += 3;
      if ( v10 >= v9 )
      {
        v11 = (_QWORD *)(a1 + 8);
        goto LABEL_9;
      }
    }
  }
  else
  {
LABEL_9:
    v13 = v9 + 1;
    if ( v13 > *(_QWORD *)(a1 + 16) )
      *(_QWORD *)a1 = sub_14005ABE0(a1, *(void **)a1, v13, 0x18u);
    v14 = 3LL * *(_QWORD *)(a1 + 8);
    v15 = *(unsigned __int64 **)a1;
    v15[v14] = 0;
    v15[v14 + 1] = 0;
    v15[v14 + 2] = -1;
    ++*v11;
    v16 = &v15[v14];
    *v16 = a2;
    v16[1] = a2 + a3;
    v16[2] = a4;
  }
  return 1;
}
