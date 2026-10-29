void __fastcall sub_ADECD0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 *v3; // rbx
  __int64 *v4; // r14
  __int64 v5; // rcx
  __int64 *v6; // rbx
  __int64 *v7; // r14
  __int64 v8; // rcx
  __int64 *v9; // rbx
  __int64 *v10; // r13
  __int64 v11; // rcx

  v2 = a1 + 8;
  sub_ADE7F0(a1 + 8, 0, 0, *(_QWORD *)(a2 + 40), a1);
  v3 = *(__int64 **)(a2 + 64);
  v4 = &v3[*(unsigned int *)(a2 + 56)];
  while ( v4 != v3 )
  {
    v5 = *v3++;
    sub_ADE7F0(v2, 0, 0, v5, a1);
  }
  v6 = *(__int64 **)(a2 + 80);
  v7 = &v6[*(unsigned int *)(a2 + 72)];
  while ( v6 != v7 )
  {
    v8 = *v6++;
    sub_ADE7F0(v2, 0, 0, v8, a1);
  }
  v9 = *(__int64 **)(a2 + 96);
  v10 = &v9[*(unsigned int *)(a2 + 88)];
  while ( v9 != v10 )
  {
    v11 = *v9++;
    sub_ADE7F0(v2, 0, 0, v11, a1);
  }
}
