void __fastcall sub_BB420(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v3; // rbx
  unsigned int *v4; // r12
  unsigned __int64 v5; // rdx
  unsigned int *v6; // rbx
  unsigned int v7; // r14d
  int v8; // r12d
  __int64 v9; // rdi
  int v10; // eax
  unsigned int v11; // r13d
  unsigned int *v12; // r15
  __int64 v13; // rdi
  unsigned int *v14; // [rsp+0h] [rbp-48h]
  unsigned int *v15; // [rsp+8h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 712);
  if ( v1 <= 1 )
    return;
  v3 = 4 * v1;
  v4 = *(unsigned int **)(a1 + 704);
  v15 = &v4[v1];
  if ( v4 == v15 )
    return;
  if ( !(v3 >> 2) )
  {
    sub_B9970((char *)v4, v15, -2, a1);
    goto LABEL_21;
  }
  _BitScanReverse64(&v5, v3 >> 2);
  sub_B9970((char *)v4, v15, 2LL * (int)v5, a1);
  if ( v3 <= 64 )
  {
LABEL_21:
    sub_B8490((char *)v4, v15, a1);
    return;
  }
  v14 = v4 + 16;
  sub_B8490((char *)v4, v4 + 16, a1);
  do
  {
    v6 = v14;
    v7 = *v14;
    while ( 1 )
    {
      v11 = *(v6 - 1);
      v12 = v6;
      v13 = sub_331180(a1, v7);
      if ( v13 != *(_QWORD *)(a1 + 56) || (v8 = 1000, *(_DWORD *)(a1 + 76) != 4) )
        v8 = sub_174C80(v13);
      v9 = sub_331180(a1, v11);
      if ( v9 != *(_QWORD *)(a1 + 56) || (v10 = 1000, *(_DWORD *)(a1 + 76) != 4) )
        v10 = sub_174C80(v9);
      --v6;
      if ( v10 <= v8 )
        break;
      v6[1] = *v6;
    }
    ++v14;
    *v12 = v7;
  }
  while ( v15 != v14 );
}
