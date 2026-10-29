unsigned __int64 __fastcall sub_13F4300(__int64 *a1, unsigned __int64 *a2)
{
  __int64 v2; // r15
  __int64 v3; // rbp
  unsigned __int64 v4; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  int v7; // r12d
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  int v10; // ebp
  unsigned int v11; // r12d
  unsigned __int64 *v12; // rbx
  double v14[3]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 *v15; // [rsp+18h] [rbp-40h]

  v2 = *a1;
  v3 = *((unsigned int *)a1 + 4);
  *(_QWORD *)&v14[0] = *a1 + 32 * v3;
  if ( !(_DWORD)v3 )
    goto LABEL_13;
  v4 = *a2;
  while ( 1 )
  {
    v5 = *(_QWORD *)(v4 + 8);
    if ( !v5 )
    {
LABEL_6:
      v7 = -1916529075;
      goto LABEL_8;
    }
    v6 = v5 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v5 & 4) == 0 )
      break;
    v4 = v5 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v6 )
      goto LABEL_6;
  }
  v8 = HIDWORD(v6);
  v9 = 0x9DDFEA08EB382D69LL * (v8 ^ (((8 * v5) & 0x7FFFFFFC0LL) - 0xAE502812AA7333LL));
  v7 = -348639895
     * ((-348639895 * (v9 ^ v8 ^ (v9 >> 47)))
      ^ ((unsigned int)((0x9DDFEA08EB382D69LL * (v9 ^ v8 ^ (v9 >> 47))) >> 32) >> 15));
LABEL_8:
  LODWORD(v15) = 1;
  v10 = v3 - 1;
  v11 = v10 & v7;
  while ( 1 )
  {
    v12 = (unsigned __int64 *)(v2 + 32LL * v11);
    if ( sub_FEE490(*a2, *v12) )
      break;
    if ( sub_FEE490(*v12, 0xFFFFFFFFFFFFF000LL) )
      goto LABEL_13;
    v11 = v10 & ((_DWORD)v15 + v11);
    LODWORD(v15) = (_DWORD)v15 + 1;
  }
  if ( !v12 )
LABEL_13:
    v12 = *(unsigned __int64 **)&v14[0];
  v15 = v12;
  return _mm_loadh_ps(v14).m128_u64[0];
}
