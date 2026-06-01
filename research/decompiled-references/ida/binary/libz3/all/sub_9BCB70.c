__int64 __fastcall sub_9BCB70(
        _QWORD *a1,
        unsigned int a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _BYTE *a7,
        unsigned int *a8)
{
  unsigned int *v9; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned int v13; // r14d
  __int64 v14; // r13
  void *v15; // rdi
  int v16; // eax
  int v17; // eax
  int v18; // eax
  __int64 result; // rax
  __int64 v20; // rcx
  unsigned int *v22; // [rsp+8h] [rbp-60h]
  char v23; // [rsp+8h] [rbp-60h]
  void *v26; // [rsp+20h] [rbp-48h]

  *a8 = -1;
  sub_9A5B20(a1, a2, a3, a5, a6);
  *a7 |= sub_8EB4E0(a1[2], *(_QWORD *)(a1[4] + 8LL * a2));
  if ( (*(_BYTE *)(a1[74] + 4LL * a2 + 3) & 0x40) == 0
    || (v20 = sub_999800((__int64)a1, a2), result = (*(_BYTE *)(v20 + 20) & 1) == 0, (*(_BYTE *)(v20 + 20) & 1) == 0)
    && (result = 0, *(_DWORD *)(v20 + 16) == 1) )
  {
    v9 = *(unsigned int **)(a1[73] + 16LL * a2);
    if ( v9 && &v9[2 * *(v9 - 1)] != v9 )
    {
      v22 = &v9[2 * *(v9 - 1)];
      do
      {
        v11 = *v9;
        if ( (_DWORD)v11 != -1 )
        {
          v12 = a1[71] + 24 * v11;
          v13 = *(_DWORD *)(v12 + 12);
          v14 = *(_QWORD *)v12 + 40LL * v9[1];
          if ( (unsigned __int8)sub_9B8610(a1, a3, v13, (int *)v14, a5, a6)
            || *a8 == -1
            && ((*(_BYTE *)(a6 + 4) & 1) != 0
             || *(_DWORD *)a6 != -1
             || (*(_BYTE *)(a6 + 20) & 1) != 0
             || *(_DWORD *)(a6 + 16) != 1) )
          {
            *a8 = v13;
            v15 = qword_1C7F2C0;
            if ( (*(_BYTE *)(v14 + 4) & 1) != 0 )
            {
              v26 = qword_1C7F2C0;
              sub_182C690(qword_1C7F2C0, a4, v14);
              v15 = v26;
            }
            else
            {
              v16 = *(_DWORD *)v14;
              *(_BYTE *)(a4 + 4) &= ~1u;
              *(_DWORD *)a4 = v16;
            }
            if ( (*(_BYTE *)(v14 + 20) & 1) != 0 )
            {
              sub_182C690(v15, a4 + 16, v14 + 16);
            }
            else
            {
              v17 = *(_DWORD *)(v14 + 16);
              *(_BYTE *)(a4 + 20) &= ~1u;
              *(_DWORD *)(a4 + 16) = v17;
            }
          }
          *a7 |= sub_8EB4E0(a1[2], *(_QWORD *)(a1[4] + 8LL * v13));
        }
        v9 += 2;
      }
      while ( v9 != v22 );
    }
    if ( (*(_BYTE *)(a6 + 4) & 1) != 0
      || *(_DWORD *)a6 != -1
      || (v23 = *(_BYTE *)(a6 + 20), result = (v23 & 1) == 0, (v23 & 1) != 0)
      || *(_DWORD *)(a6 + 16) != 1 )
    {
      LOBYTE(v18) = sub_3ED700((__int64)qword_1C7F2C0, a6, a5);
      return v18 ^ 1u;
    }
  }
  return result;
}

