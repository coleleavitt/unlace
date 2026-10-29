__int64 __fastcall sub_99C080(_QWORD *a1, _WORD *a2)
{
  unsigned int v2; // r12d
  __int64 v3; // r8
  __int64 *v4; // rax
  __int64 v5; // rbp
  __int64 v7; // rdi
  __int64 v9; // rdx
  unsigned int v10; // eax
  _QWORD *v11; // rsi
  _WORD *v12; // r8
  unsigned __int64 v13; // r13
  _QWORD *v14; // rdx
  int v16; // esi
  int v17; // r10d
  _WORD *v18; // r8
  __m128 v19[3]; // [rsp+0h] [rbp-38h] BYREF

  v3 = a1[41];
  v4 = *(__int64 **)(v3 + 40);
  LOBYTE(v2) = ((1LL << *a2) & *(_QWORD *)(v3 + 8 * ((unsigned __int64)(*a2 & 0x1FF) >> 6))) != 0;
  if ( !v4 )
    return v2;
  if ( (_WORD *)a1[45] != a2 )
  {
    v5 = *v4;
    a1[45] = a2;
    if ( !v5 )
      return v2;
    v7 = *(unsigned int *)(v5 + 16);
    v9 = *(_QWORD *)v5;
    if ( (_DWORD)v7 )
    {
      v10 = (v7 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
      v11 = (_QWORD *)(v9 + 16LL * v10);
      v12 = (_WORD *)*v11;
      if ( a2 == (_WORD *)*v11 )
      {
LABEL_6:
        sub_986FD0(v19, v11, (_QWORD *)(16 * v7 + v9), v5, 1);
        v13 = v19[0].m128_u64[0];
        goto LABEL_7;
      }
      v16 = 1;
      if ( v12 != (_WORD *)-4096LL )
      {
        do
        {
          v17 = v16 + 1;
          v10 = (v7 - 1) & (v16 + v10);
          v11 = (_QWORD *)(v9 + 16LL * v10);
          v18 = (_WORD *)*v11;
          if ( a2 == (_WORD *)*v11 )
            goto LABEL_6;
          v16 = v17;
        }
        while ( v18 != (_WORD *)-4096LL );
      }
    }
    sub_986FD0(v19, (_QWORD *)(v9 + 16LL * (unsigned int)v7), (_QWORD *)(v9 + 16LL * (unsigned int)v7), v5, 1);
    v13 = v19[0].m128_u64[0];
LABEL_7:
    v14 = (_QWORD *)(*(_QWORD *)v5 + 16LL * *(unsigned int *)(v5 + 16));
    sub_986FD0(v19, v14, v14, v5, 1);
    if ( v19[0].m128_u64[0] == v13 )
    {
      a1[44] = 0;
    }
    else
    {
      a1[44] = v13;
      return 1;
    }
    return v2;
  }
  if ( a1[44] )
    return 1;
  return v2;
}
