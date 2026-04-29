__int64 __fastcall sub_DC510(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rax
  _DWORD *v4; // rdx
  __int64 v5; // r14
  __int64 v6; // r13
  unsigned __int64 v7; // r12
  __int64 v8; // r15
  unsigned __int64 v9; // rbp
  int v10; // eax
  __int64 v11; // rax
  _QWORD v12[9]; // [rsp+0h] [rbp-48h] BYREF

  v12[1] = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 120) & 0x10) != 0
    || *(_DWORD *)a2 != 4
    || *(_BYTE *)(a2 + 32) != 1
    || *(_DWORD *)(a1 + 132) != *(_DWORD *)(a2 + 40) )
  {
    return 0;
  }
  if ( *(_BYTE *)(a2 + 64) != 1 )
    goto LABEL_19;
  v3 = *(_DWORD **)(a1 + 56);
  v4 = &v3[*(_QWORD *)(a1 + 64)];
  if ( v3 != v4 )
  {
    while ( *(_DWORD *)(a2 + 72) != *v3 )
    {
      if ( v4 == ++v3 )
        goto LABEL_20;
    }
    if ( v4 != v3 )
    {
LABEL_19:
      if ( !(unsigned __int8)sub_32BED0(a2 + 64, v12) )
        return 0;
      v5 = *(_QWORD *)(a1 + 32);
      v6 = *(_QWORD *)(a1 + 40);
      v7 = v12[0];
      v8 = *(_QWORD *)(v5 + 64);
      v9 = sub_1CD070(v8, *(_QWORD *)(v6 + 24));
      v10 = *(_DWORD *)(v6 + 4);
      if ( (v10 & 0x20) != 0 )
        v9 += *(int *)(*(_QWORD *)(v8 + 1504) + 80LL);
      if ( (v10 & 0x40) != 0 )
        v9 += *(int *)(*(_QWORD *)(v5 + 64) + 116LL);
      v11 = sub_CF1E0(*(_QWORD *)(a1 + 32));
      if ( v11 > 0 && v7 >= v9 && v11 + v9 - 1 >= v7 )
        return 0;
    }
  }
LABEL_20:
  *(_BYTE *)(a1 + 141) = 1;
  return 1;
}
