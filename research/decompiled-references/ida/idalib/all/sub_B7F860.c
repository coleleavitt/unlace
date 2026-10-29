__int64 __fastcall sub_B7F860(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  int v9; // eax
  __int64 *v10; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16[4]; // [rsp+8h] [rbp-20h] BYREF

  v1 = 0;
  v2 = *(_QWORD *)(sub_B8C330(a1) + 2320);
  if ( (*(_BYTE *)(v2 + 1) & 8) == 0 || (*(_BYTE *)(v2 + 105) & 2) == 0 || (*(_BYTE *)(a1 + 28) & 0x7Fu) - 34 > 5 )
    return v1;
  v6 = *(_QWORD *)(a1 + 152);
  if ( v6 )
  {
    v7 = (v6 >> 1) & 3;
    if ( v7 == 2 )
    {
      v8 = v6 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v8 )
      {
        v9 = ((*(__int64 *)(v8 + 16) >> 1) & 3) + 1;
        goto LABEL_10;
      }
    }
  }
  v10 = (__int64 *)sub_B77930(a1);
  if ( v10 )
  {
    v9 = ((*v10 >> 1) & 3) + 1;
LABEL_10:
    v16[0] = 0;
    if ( (unsigned int)(v9 - 3) <= 1 )
      return 0;
    goto LABEL_14;
  }
  v16[0] = 0;
LABEL_14:
  v1 = sub_B7F5F0((_QWORD *)a1, v16, v7, v3, v4, v5);
  if ( !(_BYTE)v1 || (*(_BYTE *)(v16[0] + 82) & 1) == 0 )
    return 0;
  if ( (*(_BYTE *)(v16[0] + 29) & 1) != 0 )
  {
    v12 = sub_B8C3D0(v16[0]);
    v13 = *(_QWORD *)v12;
    v14 = *(_QWORD *)v12 + 8LL * *(unsigned int *)(v12 + 8);
    if ( v13 >= v14 )
    {
      if ( v13 == v14 )
        return v1;
      while ( *(_WORD *)(*(_QWORD *)v14 + 36LL) != 221 )
      {
        v14 += 8LL;
        if ( v13 == v14 )
          return v1;
      }
    }
    else
    {
      v15 = v13;
      while ( 1 )
      {
        v13 = v15;
        if ( *(_WORD *)(*(_QWORD *)v15 + 36LL) == 221 )
          break;
        v15 += 8LL;
        if ( v14 == v15 )
          return v1;
      }
    }
    LOBYTE(v1) = v13 == v14;
  }
  return v1;
}
