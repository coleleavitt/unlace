__int64 __fastcall sub_98B200(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rax
  const char *v4; // r12
  unsigned __int64 v5; // rbx
  unsigned int *v6; // r12
  __int64 v7; // rax
  __int64 v8; // rdx
  const char **v9; // rax

  v2 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 40LL);
  if ( (v2 & 7) != 0 )
  {
    v7 = *(unsigned int *)(a1 + 24);
    v5 = 0;
    v4 = &byte_22F0C30;
    v8 = v7 + 1;
    if ( v7 + 1 <= (unsigned __int64)*(unsigned int *)(a1 + 28) )
      goto LABEL_5;
LABEL_7:
    sub_2237220(a1 + 16, a1 + 32, v8, 16);
    v7 = *(unsigned int *)(a1 + 24);
    goto LABEL_5;
  }
  v3 = v2 & 0xFFFFFFFFFFFFFFF8LL;
  v4 = &byte_22F0C30;
  v5 = v3;
  if ( v3 )
  {
    v6 = *(unsigned int **)(v3 + 16);
    v5 = *v6;
    v4 = (const char *)(v6 + 4);
  }
  v7 = *(unsigned int *)(a1 + 24);
  v8 = v7 + 1;
  if ( v7 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 28) )
    goto LABEL_7;
LABEL_5:
  v9 = (const char **)(*(_QWORD *)(a1 + 16) + 16 * v7);
  *v9 = v4;
  v9[1] = (const char *)v5;
  ++*(_DWORD *)(a1 + 24);
  return 1;
}
