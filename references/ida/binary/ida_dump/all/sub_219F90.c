__int64 __fastcall sub_219F90(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // edx
  __int64 v5; // rax
  _QWORD *v6; // rax
  __int64 v7; // r15
  unsigned __int64 v8; // r12
  __int64 v9; // r12
  unsigned int v10; // r12d
  __int64 v11; // rbx
  _QWORD *v13; // rax
  __int64 *v14; // rbx
  _DWORD v15[4]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v16; // [rsp+10h] [rbp-68h]
  __int64 v17[11]; // [rsp+20h] [rbp-58h] BYREF

  v17[3] = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  if ( !a3 )
  {
    if ( (*(_BYTE *)a1 & 1) == 0
      && (*(_BYTE *)(a2 + 25) & 1) == 0
      && (unsigned int)sub_1F06C0((__int64 *)(a1 + 432), (int *)a2, *(_DWORD *)(a2 + 88), 0) != -1 )
    {
      return 0;
    }
    v13 = *(_QWORD **)(a1 + 1280);
    if ( !v13 )
      return 2;
LABEL_28:
    v14 = (__int64 *)(*v13 & 0xFFFFFFFFFFFFFFFCLL);
    if ( !v14 )
    {
LABEL_38:
      v10 = 2;
      sub_2188C0((unsigned __int64 **)(a1 + 1280), v14);
      return v10;
    }
    while ( (*(_BYTE *)v14 & 2) == 0 )
    {
      while ( (int)sub_3307E0(a2, v14 + 3) < 0 )
      {
        v14 = (__int64 *)v14[1];
        if ( (*(_BYTE *)v14 & 2) != 0 )
          return 2;
      }
      if ( (int)sub_3307E0(v14 + 3, a2) >= 0 )
      {
        if ( *(__int64 **)(a1 + 1280) == v14 )
          return 2;
        goto LABEL_38;
      }
      v14 = (__int64 *)v14[2];
    }
    return 2;
  }
  v4 = *(_DWORD *)(a2 + 88);
  if ( v4 > *(_DWORD *)(a3 + 88)
    || (*(_BYTE *)a1 & 1) == 0
    && (*(_BYTE *)(a2 + 25) & 1) == 0
    && (unsigned int)sub_1F06C0((__int64 *)(a1 + 432), (int *)a2, v4, 0) != -1 )
  {
    return 0;
  }
  LODWORD(v17[0]) = 0;
  copy_argloc();
  v5 = *(_QWORD *)(a3 + 16);
  v15[0] = 0;
  v17[2] = v5;
  copy_argloc();
  v16 = *(_QWORD *)(a2 + 16);
  if ( !(unsigned int)sub_3307E0(v15, v17) )
  {
    cleanup_argloc();
    cleanup_argloc();
    v13 = *(_QWORD **)(a1 + 1280);
    if ( !v13 )
      return 2;
    goto LABEL_28;
  }
  cleanup_argloc();
  cleanup_argloc();
  v6 = *(_QWORD **)(a1 + 1280);
  if ( !v6 )
  {
LABEL_9:
    v17[0] = a2;
    v9 = sub_219540((__m128i *)(a1 + 1280), a2, v17) + 24;
    copy_argloc();
    *(_QWORD *)(v9 + 40) = *(_QWORD *)(a3 + 16);
    v10 = 1;
    goto LABEL_10;
  }
  v7 = 24;
  v8 = *v6 & 0xFFFFFFFFFFFFFFFCLL;
  if ( v8 )
  {
    while ( (*(_BYTE *)v8 & 2) == 0 )
    {
      v7 = v8 + 24;
      if ( (int)sub_3307E0(a2, v8 + 24) >= 0 )
      {
        if ( (int)sub_3307E0(v8 + 24, a2) >= 0 )
        {
          if ( *(_QWORD *)(a1 + 1280) == v8 )
            goto LABEL_9;
          goto LABEL_22;
        }
        v8 = *(_QWORD *)(v8 + 16);
      }
      else
      {
        v8 = *(_QWORD *)(v8 + 8);
      }
    }
    goto LABEL_9;
  }
LABEL_22:
  v10 = 2;
  copy_argloc();
  *(_QWORD *)(v7 + 40) = *(_QWORD *)(a3 + 16);
LABEL_10:
  v11 = *(_QWORD *)(a1 + 1256);
  if ( 96LL * *(_QWORD *)(a1 + 1264) )
  {
    while ( (unsigned int)sub_3307E0(v11, a2) )
    {
      v11 += 96;
      if ( v11 == *(_QWORD *)(a1 + 1256) + 96LL * *(_QWORD *)(a1 + 1264) )
        return v10;
    }
    if ( v11 && (*(_BYTE *)(v11 + 88) & 8) != 0 )
      *(_DWORD *)(a2 + 24) |= 0x200000u;
  }
  return v10;
}
