unsigned __int64 __fastcall sub_A5E390(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // r8
  __int64 v10; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r15
  char v14; // cl
  char v15; // si
  char v16; // cl
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // [rsp+8h] [rbp-40h]

  v7 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  v8 = a2;
  v9 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL) != *(_QWORD *)(*(_QWORD *)(a2
                                                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                                                    + 8LL) )
  {
    v8 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
       | ((unsigned __int8)a2 | (unsigned __int8)*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL]) & 7;
    v7 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL;
  }
  v10 = *(_QWORD *)(a1 + 2352);
  *(_QWORD *)(a1 + 2432) += 48LL;
  result = (v10 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  if ( *(_QWORD *)(a1 + 2360) >= result + 48 && v10 )
  {
    *(_QWORD *)(a1 + 2352) = result + 48;
    v12 = (v10 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    v13 = result;
  }
  else
  {
    v18 = sub_962430(a1 + 2352, 48, 48, 4, v9, a6);
    v9 = a2 & 0xFFFFFFFFFFFFFFF0LL;
    v12 = v18;
    v13 = v18;
    result = v18 & 0xFFFFFFFFFFFFFFF0LL;
  }
  v14 = *(_BYTE *)(*(_QWORD *)v9 + 17LL);
  *(_QWORD *)v12 = v12;
  *(_BYTE *)(v12 + 16) = 30;
  *(_QWORD *)(v12 + 24) = a2;
  v15 = v14 & 0x1F;
  *(_QWORD *)(v12 + 32) = a3;
  if ( !v7 )
    v8 = v12 & 0xFFFFFFFFFFFFFFF0LL;
  v16 = *(_BYTE *)(v12 + 17) & 0xE0;
  *(_QWORD *)(v12 + 8) = v8;
  *(_BYTE *)(v12 + 17) = v15 | v16;
  *(_WORD *)(v12 + 17) &= 0xF81Fu;
  v17 = *(unsigned int *)(a1 + 16);
  if ( v17 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 20) )
  {
    v19 = result;
    sub_22134E0(a1 + 8, a1 + 24, v17 + 1, 8);
    v17 = *(unsigned int *)(a1 + 16);
    result = v19;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v17) = v13;
  ++*(_DWORD *)(a1 + 16);
  return result;
}

