__int64 __fastcall sub_DDD10(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rcx
  char v5; // bp
  int v6; // eax
  __int64 v7; // rax
  __int64 *v8; // rax
  __int64 v10; // rdx
  char v11; // al
  __int64 v12; // r15
  unsigned int v13; // r14d
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r13
  char v17; // al
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // [rsp+18h] [rbp-50h]
  _QWORD v21[9]; // [rsp+20h] [rbp-48h] BYREF

  v2 = *(_QWORD **)(a1 + 48);
  v21[1] = __readfsqword(0x28u);
  *(_BYTE *)(a1 + 142) = 0;
  *(_WORD *)(a1 + 140) = 0;
  if ( (unsigned __int64)(int)a2 >= v2[1] )
    return 0;
  *(_DWORD *)(a1 + 124) = a2;
  *(_DWORD *)(a1 + 128) = *(_DWORD *)(*v2 + 4LL * (int)a2);
  *(_DWORD *)(a1 + 132) = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 4LL * (int)a2);
  if ( sub_DBC70(a1) )
    return 1;
  v5 = *(_BYTE *)(a1 + 141);
  if ( v5 )
    goto LABEL_5;
  v6 = *(_DWORD *)(a1 + 120);
  if ( (v6 & 0x10) != 0 )
    goto LABEL_5;
  v10 = *(_QWORD *)(a1 + 40);
  if ( (v6 & 4) != 0
    || (v11 = sub_1D2A70(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 480LL), *(_QWORD *)(v10 + 24)),
        v10 = *(_QWORD *)(a1 + 40),
        !v11)
    || *(_DWORD *)v10 != 57 )
  {
    v12 = *(_QWORD *)(v10 + 24);
    v13 = *(_DWORD *)(a1 + 128);
    v14 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 480LL);
    v15 = v12 + 1;
    v20 = v12 + 1;
    v16 = *(_QWORD *)(v14 + 112);
    if ( *(char *)(*(_QWORD *)(v14 + 8) + 10LL) >= 0 || (LOBYTE(v21[0]) = 1, v19 = sub_CFF70(), v15 = v12 + 1, v19 != 1) )
      v20 = -1;
    v17 = sub_32E840(v21, v16, v13, v12, v15, 0);
    if ( !v17 )
    {
      if ( v20 == -1 )
        goto LABEL_35;
      v17 = sub_32E840(v21, v16, v13, v20, v20 + 1, 0);
    }
    if ( (v17 & 2) != 0 )
    {
      *(_QWORD *)(a1 + 112) = v21[0];
      if ( v17 == 2 )
        return 0;
      v10 = *(_QWORD *)(a1 + 40);
      goto LABEL_27;
    }
LABEL_35:
    *(_QWORD *)(a1 + 112) = -1;
    v10 = *(_QWORD *)(a1 + 40);
    goto LABEL_27;
  }
  if ( *(_BYTE *)(v10 + 48) == 1 && *(_DWORD *)(a1 + 132) == *(_DWORD *)(v10 + 56) )
    return 0;
LABEL_27:
  a2 = *(_QWORD *)(a1 + 32);
  v18 = sub_DC7D0(a1, a2, *(_QWORD *)(v10 + 16), *(_QWORD *)(v10 + 24));
  if ( v18 == 1 )
  {
    *(_DWORD *)(a1 + 136) = -1;
    return 1;
  }
  if ( !v18 || *(_BYTE *)(a1 + 141) )
  {
LABEL_5:
    v7 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 16) = 0;
    *(_BYTE *)(a1 + 24) = 0;
    v8 = (__int64 *)sub_670E0(*(_QWORD **)(v7 + 64), a2, v3, v4);
    if ( (int)sub_6F590((__int64 *)a1, v8, *(_DWORD *)(*(_QWORD *)(a1 + 32) + 72LL), 1) <= 0 )
    {
      if ( (*(_BYTE *)(a1 + 120) & 6) != 0 )
        return 0;
      if ( !v5 || !*(_BYTE *)(a1 + 140) )
      {
        if ( !(unsigned __int8)sub_DBA20(a1) )
          return 0;
        goto LABEL_32;
      }
    }
    return 1;
  }
  if ( (*(_BYTE *)(a1 + 120) & 6) != 0 || v18 != 3 )
    return 0;
LABEL_32:
  *(_DWORD *)(*(_QWORD *)(a1 + 80) + 4LL * *(int *)(a1 + 124)) = *(_DWORD *)(a1 + 124) + 1;
  return 0;
}
