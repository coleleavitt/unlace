unsigned __int64 __fastcall sub_1403890(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r13
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // rbp
  __int64 v7; // rax
  int v8; // r13d
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // rax
  unsigned int v11; // r13d
  unsigned __int64 *v12; // r15
  int v14; // [rsp+Ch] [rbp-3Ch]

  v2 = a2;
  v3 = a2;
  while ( 1 )
  {
    v4 = *(_QWORD *)(a2 + 8);
    if ( !v4 )
      break;
    a2 = v4 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v4 & 4) == 0 || !a2 )
      goto LABEL_5;
  }
  a2 = 0;
LABEL_5:
  sub_1402D90(a1, a2);
  v5 = *(unsigned int *)(a1 + 384);
  if ( !(_DWORD)v5 )
    return 0;
  v6 = *(_QWORD *)(a1 + 368);
  while ( 1 )
  {
    v7 = *(_QWORD *)(v2 + 8);
    if ( !v7 )
    {
LABEL_10:
      v8 = -1916529075;
      goto LABEL_12;
    }
    v2 = v7 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v7 & 4) == 0 )
      break;
    if ( !v2 )
      goto LABEL_10;
  }
  v9 = HIDWORD(v2);
  v10 = 0x9DDFEA08EB382D69LL * (v9 ^ (((8 * v7) & 0x7FFFFFFC0LL) - 0xAE502812AA7333LL));
  v8 = -348639895
     * ((-348639895 * (v10 ^ v9 ^ (v10 >> 47)))
      ^ ((unsigned int)((0x9DDFEA08EB382D69LL * (v10 ^ v9 ^ (v10 >> 47))) >> 32) >> 15));
LABEL_12:
  v14 = 1;
  v11 = (v5 - 1) & v8;
  while ( 1 )
  {
    v12 = (unsigned __int64 *)(v6 + 32LL * v11);
    if ( sub_FEE490(v3, *v12) )
      break;
    if ( sub_FEE490(*v12, 0xFFFFFFFFFFFFF000LL) )
      return 0;
    v11 = (v5 - 1) & (v14 + v11);
    ++v14;
  }
  if ( v12 && v12 != (unsigned __int64 *)(v6 + 32 * v5) )
    return v12[1];
  else
    return 0;
}
