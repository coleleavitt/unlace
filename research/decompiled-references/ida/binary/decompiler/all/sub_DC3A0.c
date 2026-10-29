__int64 __fastcall sub_DC3A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v4; // rax
  _DWORD *v5; // rdx
  _DWORD *v6; // rcx
  __int64 v7; // r13
  __int64 v8; // r15
  unsigned __int64 v9; // r12
  __int64 v10; // r14
  unsigned __int64 v11; // rbp
  int v12; // eax
  __int64 v13; // rax
  _QWORD v14[9]; // [rsp+0h] [rbp-48h] BYREF

  v14[1] = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 104);
  if ( !v2 )
    return 0;
  if ( sub_122660(a2, *(unsigned int *)(a1 + 132), v2, 0, 0, 1) )
    return 0;
  if ( (*(_BYTE *)(a1 + 120) & 0x10) != 0 )
    return 0;
  v4 = *(_QWORD *)(a1 + 104);
  if ( *(_DWORD *)v4 != 4 || *(_BYTE *)(v4 + 32) != 1 || *(_DWORD *)(a1 + 132) != *(_DWORD *)(v4 + 40) )
    return 0;
  if ( *(_BYTE *)(v4 + 64) != 1 )
    goto LABEL_21;
  v5 = *(_DWORD **)(a1 + 56);
  v6 = &v5[*(_QWORD *)(a1 + 64)];
  if ( v5 != v6 )
  {
    while ( *(_DWORD *)(v4 + 72) != *v5 )
    {
      if ( v6 == ++v5 )
        goto LABEL_22;
    }
    if ( v6 != v5 )
    {
LABEL_21:
      if ( !(unsigned __int8)sub_32BED0(v4 + 64, v14) )
        return 0;
      v7 = *(_QWORD *)(a1 + 32);
      v8 = *(_QWORD *)(a1 + 40);
      v9 = v14[0];
      v10 = *(_QWORD *)(v7 + 64);
      v11 = sub_1CD070(v10, *(_QWORD *)(v8 + 24));
      v12 = *(_DWORD *)(v8 + 4);
      if ( (v12 & 0x20) != 0 )
        v11 += *(int *)(*(_QWORD *)(v10 + 1504) + 80LL);
      if ( (v12 & 0x40) != 0 )
        v11 += *(int *)(*(_QWORD *)(v7 + 64) + 116LL);
      v13 = sub_CF1E0(*(_QWORD *)(a1 + 32));
      if ( v13 > 0 && v9 >= v11 && v13 + v11 - 1 >= v9 )
        return 0;
    }
  }
LABEL_22:
  *(_BYTE *)(a1 + 141) = 1;
  return 1;
}
