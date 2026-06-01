__int64 __fastcall sub_F3C1F0(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        __int64 a4,
        unsigned __int64 *a5,
        __int64 a6,
        unsigned __int8 a7)
{
  unsigned __int64 *v10; // r12
  __int64 v11; // rax
  unsigned __int64 *v12; // r15
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 *v17; // r15
  __int64 v18; // rax
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  int v25; // [rsp+8h] [rbp-40h]
  unsigned __int64 v26; // [rsp+8h] [rbp-40h]

  sub_993300(a1, a2);
  sub_993300(a1, SHIDWORD(a2));
  sub_993300(a1, a4);
  sub_993300(a1, SHIDWORD(a4));
  v10 = &a3[a4];
  if ( v10 != a3 )
  {
    v11 = *(unsigned int *)(a1 + 8);
    v12 = a3;
    do
    {
      v13 = *v12;
      if ( v11 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
      {
        v26 = *v12;
        sub_22134E0(a1, a1 + 16, v11 + 1, 4);
        v11 = *(unsigned int *)(a1 + 8);
        v13 = v26;
      }
      *(_DWORD *)(*(_QWORD *)a1 + 4 * v11) = v13;
      v14 = HIDWORD(v13);
      v15 = *(unsigned int *)(a1 + 12);
      v16 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
      *(_DWORD *)(a1 + 8) = v16;
      if ( v16 + 1 > v15 )
      {
        v25 = v14;
        sub_22134E0(a1, a1 + 16, v16 + 1, 4);
        *(_DWORD *)(*(_QWORD *)a1 + 4LL * *(unsigned int *)(a1 + 8)) = v25;
      }
      else
      {
        *(_DWORD *)(*(_QWORD *)a1 + 4 * v16) = v14;
      }
      ++v12;
      v11 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
      *(_DWORD *)(a1 + 8) = v11;
    }
    while ( v10 != v12 );
  }
  v17 = &a5[a6];
  sub_993300(a1, a6);
  sub_993300(a1, SHIDWORD(a6));
  if ( a5 != v17 )
  {
    v18 = *(unsigned int *)(a1 + 8);
    do
    {
      v19 = *a5;
      if ( v18 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
      {
        sub_22134E0(a1, a1 + 16, v18 + 1, 4);
        v18 = *(unsigned int *)(a1 + 8);
      }
      *(_DWORD *)(*(_QWORD *)a1 + 4 * v18) = v19;
      v20 = HIDWORD(v19);
      v21 = *(unsigned int *)(a1 + 12);
      v22 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
      *(_DWORD *)(a1 + 8) = v22;
      if ( v22 + 1 > v21 )
      {
        sub_22134E0(a1, a1 + 16, v22 + 1, 4);
        *(_DWORD *)(*(_QWORD *)a1 + 4LL * *(unsigned int *)(a1 + 8)) = v20;
      }
      else
      {
        *(_DWORD *)(*(_QWORD *)a1 + 4 * v22) = v20;
      }
      ++a5;
      v18 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
      *(_DWORD *)(a1 + 8) = v18;
    }
    while ( v17 != a5 );
  }
  return sub_993300(a1, a7);
}

