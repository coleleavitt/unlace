__int64 __fastcall sub_1D000(__int64 a1, unsigned __int64 a2)
{
  bool v3; // zf
  unsigned __int64 *v5; // rdx
  unsigned __int64 *v6; // rax
  __int64 i; // r12
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rax
  _QWORD v17[7]; // [rsp+0h] [rbp-38h] BYREF

  v3 = *(_BYTE *)(a1 + 2800) == 0;
  v17[1] = __readfsqword(0x28u);
  if ( v3 )
  {
    netnode_check(v17, "$ elfsegmmap", 0, 0);
    if ( (unsigned __int8)netnode_exist(v17) )
    {
      for ( i = netnode_supfirst(v17[0], 65); i != -1; i = netnode_supnext(v13, i, 65) )
      {
        v14 = *(_QWORD *)(a1 + 2760);
        v15 = *(_QWORD *)(a1 + 2752);
        if ( *(_QWORD *)(a1 + 2768) < (unsigned __int64)(v14 + 1) )
        {
          v16 = qvector_reserve(a1 + 2752, v15, v14 + 1, 24);
          v14 = *(_QWORD *)(a1 + 2760);
          *(_QWORD *)(a1 + 2752) = v16;
          v15 = v16;
        }
        v9 = v15 + 24 * v14;
        *(_OWORD *)v9 = 0;
        ++*(_QWORD *)(a1 + 2760);
        *(_QWORD *)v9 = i;
        v10 = netnode_altval(v17[0], i, 115);
        v11 = v17[0];
        *(_QWORD *)(v9 + 8) = i + v10;
        v12 = netnode_altval(v11, i, 65);
        v13 = v17[0];
        *(_QWORD *)(v9 + 16) = v12;
      }
    }
    *(_BYTE *)(a1 + 2800) = 1;
  }
  v5 = *(unsigned __int64 **)(a1 + 2752);
  v6 = &v5[3 * *(_QWORD *)(a1 + 2760)];
  if ( v6 == v5 )
    return a2;
  while ( a2 < *v5 || a2 >= v5[1] )
  {
    v5 += 3;
    if ( v6 == v5 )
      return a2;
  }
  return v5[2] + a2 - *v5;
}
