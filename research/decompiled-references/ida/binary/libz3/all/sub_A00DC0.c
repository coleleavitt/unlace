__int64 __fastcall sub_A00DC0(
        _QWORD *a1,
        unsigned int a2,
        char a3,
        __int64 a4,
        int *a5,
        __int64 a6,
        _BYTE *a7,
        unsigned int *a8)
{
  __int64 v8; // r14
  char v10; // al
  __int64 v11; // rdx
  unsigned int *v12; // rbx
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned int v16; // r14d
  __int64 v17; // r13
  void *v18; // rdi
  int v19; // eax
  int v20; // eax
  int *v22; // rax
  unsigned int *v24; // [rsp+10h] [rbp-68h]
  void *v27; // [rsp+30h] [rbp-48h]

  v8 = (__int64)a1;
  *a8 = -1;
  sub_9F7E80(a1, a2, a3, a5, (int *)a6);
  v10 = sub_8EB4E0(a1[2], *(_QWORD *)(a1[4] + 8LL * a2));
  v11 = a2;
  *a7 |= v10;
  if ( (*(_BYTE *)(a1[90] + 4LL * a2 + 3) & 0x40) != 0 )
  {
    v22 = sub_9AD4F0((__int64)a1, a2);
    if ( *v22 )
      return 0;
    if ( (v22[13] & 1) != 0 )
      return 0;
    v11 = a2;
    if ( v22[12] != 1 || v22[16] )
      return 0;
  }
  v12 = *(unsigned int **)(a1[89] + 16 * v11);
  if ( v12 && &v12[2 * *(v12 - 1)] != v12 )
  {
    v24 = &v12[2 * *(v12 - 1)];
    do
    {
      v14 = *v12;
      if ( (_DWORD)v14 != -1 )
      {
        v15 = a1[87] + 24 * v14;
        v16 = *(_DWORD *)(v15 + 12);
        v17 = *(_QWORD *)v15 + 40LL * v12[1];
        if ( (unsigned __int8)sub_9FFC40(a1, a3, v16, (int *)v17, (__int64)a5, a6)
          || *a8 == -1
          && (*(_DWORD *)a6
           || (*(_BYTE *)(a6 + 36) & 1) != 0
           || *(_DWORD *)(a6 + 32) != -1
           || (*(_BYTE *)(a6 + 52) & 1) != 0
           || *(_DWORD *)(a6 + 48) != 1
           || *(_DWORD *)(a6 + 64)) )
        {
          *a8 = v16;
          v18 = qword_1C7F2C0;
          if ( (*(_BYTE *)(v17 + 4) & 1) != 0 )
          {
            v27 = qword_1C7F2C0;
            sub_182C690(qword_1C7F2C0, a4, v17);
            v18 = v27;
          }
          else
          {
            v19 = *(_DWORD *)v17;
            *(_BYTE *)(a4 + 4) &= ~1u;
            *(_DWORD *)a4 = v19;
          }
          if ( (*(_BYTE *)(v17 + 20) & 1) != 0 )
          {
            sub_182C690(v18, a4 + 16, v17 + 16);
          }
          else
          {
            v20 = *(_DWORD *)(v17 + 16);
            *(_BYTE *)(a4 + 20) &= ~1u;
            *(_DWORD *)(a4 + 16) = v20;
          }
        }
        *a7 |= sub_8EB4E0(a1[2], *(_QWORD *)(a1[4] + 8LL * v16));
      }
      v12 += 2;
    }
    while ( v12 != v24 );
    v8 = (__int64)a1;
  }
  return sub_9B5AB0(v8, (__int64)a5, a6);
}

