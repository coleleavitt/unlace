__int64 __fastcall sub_1FBB960(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v3)(__int64); // rax
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 *v9; // rbx
  __int64 *v10; // rbp
  __int64 v11; // rsi
  __int64 result; // rax
  __int64 *v13; // rbp
  __int64 *i; // r12
  __int64 v15; // rax
  __int64 v16; // r15
  __int64 v17; // rbx
  __int64 v18; // rsi

  sub_1FBAE50((__int64 *)a1, a2);
  v3 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL);
  if ( v3 == sub_6EE8D0 )
    v4 = *(_QWORD *)(a2 + 88);
  else
    v4 = v3(a2);
  sub_183F100(a1 + 32, v4);
  sub_1F9A760((__int64 *)(a1 + 8), *(__int64 **)(a2 + 96), v5, v6, v7, v8);
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned int *)(a2 + 80));
  v9 = *(__int64 **)(a2 + 72);
  v10 = &v9[*(unsigned int *)(a2 + 80)];
  while ( v10 != v9 )
  {
    v11 = *v9++;
    sub_1F92A90(*(_QWORD *)(a1 + 16), v11, *(_QWORD *)(a1 + 24));
  }
  sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_BYTE *)(a2 + 49) & 0x20) != 0);
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(_BYTE *)(a2 + 49) >> 7);
  sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_QWORD *)(a2 + 48) >> 16) & 1LL);
  sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_QWORD *)(a2 + 48) >> 17) & 1LL);
  sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_QWORD *)(a2 + 48) >> 18) & 1LL);
  sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_BYTE *)(a2 + 49) & 0x40) != 0);
  result = sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned int *)(a2 + 112));
  v13 = *(__int64 **)(a2 + 104);
  for ( i = &v13[2 * *(unsigned int *)(a2 + 112)]; i != v13; v13 += 2 )
  {
    sub_1F92A90(*(_QWORD *)(a1 + 16), *v13 & 0xFFFFFFFFFFFFFFF8LL, *(_QWORD *)(a1 + 24));
    v15 = (*v13 >> 1) & 1;
    if ( ((*v13 >> 1) & 2) != 0 )
      LODWORD(v15) = (*v13 >> 1) & 1 | 2;
    if ( v13[1] )
      LODWORD(v15) = v15 | 4;
    v16 = *(_QWORD *)(a1 + 24);
    v17 = (unsigned int)v15;
    result = *(unsigned int *)(v16 + 8);
    if ( result + 1 > (unsigned __int64)*(unsigned int *)(v16 + 12) )
    {
      sub_2237220(*(_QWORD *)(a1 + 24), v16 + 16, result + 1, 8);
      result = *(unsigned int *)(v16 + 8);
    }
    *(_QWORD *)(*(_QWORD *)v16 + 8 * result) = v17;
    ++*(_DWORD *)(v16 + 8);
    v18 = v13[1];
    if ( v18 )
      result = sub_183F100(a1 + 32, v18);
  }
  *(_DWORD *)(a1 + 224) = 79;
  return result;
}
