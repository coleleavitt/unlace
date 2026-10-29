__int64 __fastcall sub_7F4820(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  __int64 v8; // r12
  __int64 v9; // rbx
  __int64 v10; // r12
  unsigned int v11; // r12d
  __int64 *v13; // rbx
  _QWORD *v14; // rax
  __int64 v15; // r14
  __int64 v16; // r9
  __int64 v17[6]; // [rsp+8h] [rbp-30h] BYREF

  if ( !(unsigned __int8)sub_7ECC20(a1, *(_QWORD *)(a2 + 184)) )
    return 0;
  v6 = *(_QWORD *)(a2 + 160);
  if ( !v6 )
    goto LABEL_5;
  v7 = v6 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v6 & 4) != 0 )
  {
    if ( !v7 )
LABEL_5:
      BUG();
    v7 = *(_QWORD *)v7;
    v8 = *(unsigned int *)(v7 + 8);
  }
  else
  {
    v8 = *(unsigned int *)(v7 + 8);
  }
  if ( (_DWORD)v8 )
  {
    v9 = v7 + 16;
    v10 = v9 + 32 * v8;
    while ( (unsigned __int8)sub_7EF520(a1, v9, v2, v3, v4, v5) )
    {
      v9 += 32;
      if ( v9 == v10 )
        goto LABEL_13;
    }
    return 0;
  }
LABEL_13:
  if ( !(unsigned __int8)sub_7F0270(a1, a2, v2, v3, v4, v5) )
    return 0;
  v11 = sub_7E1600(a1, a2 + 64);
  if ( !(_BYTE)v11 )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v13 = nullptr;
    v14 = sub_79A2B0(a2);
    v15 = *v14 + 8LL * *((unsigned int *)v14 + 2);
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v13 = (__int64 *)*sub_79A2B0(a2);
    if ( (__int64 *)v15 != v13 )
    {
      while ( 1 )
      {
        v16 = *a1;
        v17[0] = *v13;
        if ( !(unsigned __int8)sub_7F2380((__int64)a1, v17[0], v17[0], v17, a1, v16) )
          break;
        if ( (__int64 *)v15 == ++v13 )
          return v11;
      }
      return 0;
    }
  }
  return v11;
}

