__int64 __fastcall sub_6CB0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rax
  __int64 v7; // rdi
  int v8; // esi
  int v9; // edx
  int v10; // ecx
  __int64 v11; // rdi
  int v12; // eax
  __int64 v13; // rdx
  int v14; // r12d
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rax
  int v17; // r13d
  __int64 v18; // rax
  int v19; // r13d
  __int64 v20; // rdx
  bool v21; // cf
  unsigned __int64 v22; // rdx
  int v23; // eax
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  int v30; // [rsp+4h] [rbp-44h] BYREF
  unsigned __int64 v31; // [rsp+8h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 48);
  v31 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 64) = v4;
  if ( v4 >= 0xFFFFFFFFFFFFFFFCLL
    || (a3 = v4 + 4, v3 < v4 + 4)
    || (v7 = *(_QWORD *)(a1 + 40),
        v8 = *(_DWORD *)(v7 + v4),
        *(_QWORD *)(a1 + 56) = a3,
        *(_DWORD *)a1 = v8,
        a2 = v4 + 8,
        v3 < v4 + 8)
    || a2 < a3
    || (v9 = *(_DWORD *)(v7 + v4 + 4), *(_QWORD *)(a1 + 56) = a2, *(_DWORD *)(a1 + 4) = v9, a3 = v4 + 10, v3 < v4 + 10)
    || a3 < a2 )
  {
    sub_54E0((__int64)"Error reading page table 1\n", a2, a3, v3);
    return 0;
  }
  v10 = *(unsigned __int16 *)(v7 + v4 + 8);
  v11 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 56) = a3;
  *(_WORD *)(a1 + 8) = v10;
  if ( v11 )
  {
    *(_QWORD *)(a1 + 24) = 0;
    qfree(v11);
    v12 = *(unsigned __int16 *)(a1 + 8);
    v13 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 32) = 0;
    v14 = 2 * v12 + 10;
    v15 = v13 + 1;
    v16 = 0;
    v30 = v14;
    v17 = v14;
LABEL_11:
    if ( v16 < v15 )
    {
      v29 = v15;
      v15 = 0;
      v18 = qvector_reserve(a1 + 16, 0, v29, 4);
      v13 = *(_QWORD *)(a1 + 24);
      *(_QWORD *)(a1 + 16) = v18;
    }
    else
    {
      v18 = 0;
    }
    *(_DWORD *)(v18 + 4 * v13) = v17;
    goto LABEL_14;
  }
  v16 = *(_QWORD *)(a1 + 32);
  v13 = *(_QWORD *)(a1 + 24);
  v14 = 2 * v10 + 10;
  v30 = v14;
  v17 = v14;
  v15 = v13 + 1;
  if ( (unsigned __int64)&v30 >= 4 * v16 )
    goto LABEL_11;
  if ( v16 < v15 )
  {
    v15 = 0;
    v28 = qvector_reserve(a1 + 16, 0, v13 + 1, 4);
    v13 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 16) = v28;
    v11 = v28;
  }
  *(_DWORD *)(v11 + 4 * v13) = v14;
LABEL_14:
  ++*(_QWORD *)(a1 + 24);
  v19 = 0;
  if ( *(_WORD *)(a1 + 8) )
  {
    while ( 1 )
    {
      v20 = *(_QWORD *)(a1 + 56);
      v21 = __CFADD__(v20, 2);
      v22 = v20 + 2;
      if ( *(_QWORD *)(a1 + 48) < v22 || v21 )
        break;
      v15 = *(_QWORD *)(a1 + 16);
      v23 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 40) + *(_QWORD *)(a1 + 56));
      *(_QWORD *)(a1 + 56) = v22;
      v24 = *(_QWORD *)(a1 + 32);
      v14 += v23;
      v25 = *(_QWORD *)(a1 + 24);
      v30 = v14;
      if ( v24 < v25 + 1 )
      {
        v27 = qvector_reserve(a1 + 16, v15, v25 + 1, 4);
        *(_QWORD *)(a1 + 16) = v27;
        v15 = v27;
        v25 = *(_QWORD *)(a1 + 24);
      }
      *(_DWORD *)(v15 + 4 * v25) = v14;
      v26 = *(unsigned __int16 *)(a1 + 8);
      ++v19;
      ++*(_QWORD *)(a1 + 24);
      if ( v26 <= v19 )
        return 1;
    }
    sub_54E0((__int64)"Error reading page table 2\n", v15, v22, v21);
    return 0;
  }
  return 1;
}
