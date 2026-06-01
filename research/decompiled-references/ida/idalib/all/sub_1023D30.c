int *__fastcall sub_1023D30(__int64 a1, __int64 a2, unsigned int a3)
{
  bool v3; // cc
  __int64 *v4; // rbp
  int v6; // r13d
  bool v7; // zf
  __int64 v8; // r9
  int *v9; // rax
  int *result; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // ebx
  unsigned int i; // ecx
  unsigned int v15; // ecx
  int v16; // esi
  __int64 v17; // rcx
  __int64 v18; // rdx
  int v19; // esi
  __int64 v20; // r8
  __int64 v21; // rdx
  int *v22; // [rsp+8h] [rbp-40h] BYREF
  int *v23; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v24[12]; // [rsp+18h] [rbp-30h] BYREF

  v3 = *(_DWORD *)(a1 + 568) <= 0x12Bu;
  *(_QWORD *)v24 = __PAIR64__(a3, a2);
  if ( v3 )
  {
    v4 = (__int64 *)(a1 + 560);
    v6 = a2;
    v7 = (unsigned __int8)sub_101E560((__int64 *)(a1 + 560), v24, &v22) == 0;
    v9 = v22;
    if ( !v7 )
      return v9 + 2;
    v16 = *(_DWORD *)(a1 + 568);
    v17 = *(unsigned int *)(a1 + 576);
    v23 = v22;
    v18 = (unsigned int)(v16 + 1);
    v19 = 2 * v17;
    v20 = (unsigned int)(4 * v18);
    if ( (unsigned int)v20 < 3 * (int)v17 )
    {
      if ( (int)v17 - *(_DWORD *)(a1 + 572) - (int)v18 > (unsigned int)v17 >> 3 )
        goto LABEL_11;
      v19 = v17;
    }
    sub_1023B90((__int64)v4, v19, v18, v17, v20, v8);
    sub_101E560(v4, v24, &v23);
    LODWORD(v18) = *(_DWORD *)(a1 + 568) + 1;
    v9 = v23;
LABEL_11:
    *(_DWORD *)(a1 + 568) = v18;
    if ( *v9 || v9[1] )
      --*(_DWORD *)(a1 + 572);
    v21 = *(_QWORD *)v24;
    v9[2] = v6;
    v9[3] = a3;
    *(_QWORD *)v9 = v21;
    v9[5] = 0;
    return v9 + 2;
  }
  v11 = *(unsigned int *)(a1 + 576);
  v12 = *(_QWORD *)(a1 + 560);
  if ( (_DWORD)v11 )
  {
    v13 = 1;
    for ( i = (v11 - 1) & (((0xBF58476D1CE4E5B9LL * (a3 | (unsigned __int64)(a2 << 32))) >> 31) ^ (484763065 * a3));
          ;
          i = (v11 - 1) & v15 )
    {
      v9 = (int *)(v12 + 32LL * i);
      if ( (_DWORD)a2 == *v9 && a3 == v9[1] )
        break;
      if ( !*v9 && !v9[1] )
        goto LABEL_15;
      v15 = v13 + i;
      ++v13;
    }
    if ( v9 != (int *)(v12 + 32 * v11) )
      return v9 + 2;
  }
LABEL_15:
  result = (int *)(a1 + 584);
  if ( *(_DWORD *)(a1 + 584) != (_DWORD)a2 || *(_DWORD *)(a1 + 588) != a3 )
  {
    *(_DWORD *)(a1 + 584) = a2;
    *(_DWORD *)(a1 + 588) = a3;
    *(_DWORD *)(a1 + 596) = 0;
  }
  return result;
}
