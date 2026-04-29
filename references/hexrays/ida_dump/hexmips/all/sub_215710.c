__int64 __fastcall sub_215710(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // edx
  __int64 v6; // rax
  _QWORD *v7; // rax
  __int64 v8; // r15
  unsigned __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // r12
  unsigned int v12; // r12d
  __int64 v13; // rbx
  unsigned __int64 v15; // rdi
  _QWORD *v16; // rax
  __int64 *v17; // rbx
  _DWORD v18[4]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v19; // [rsp+10h] [rbp-68h]
  __int64 v20[11]; // [rsp+20h] [rbp-58h] BYREF

  v20[3] = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  if ( !a3 )
  {
    if ( (*(_BYTE *)a1 & 1) == 0
      && (*(_BYTE *)(a2 + 25) & 1) == 0
      && (unsigned int)sub_1EBE40((__int64 *)(a1 + 432), (int *)a2, *(_DWORD *)(a2 + 88), 0) != -1 )
    {
      return 0;
    }
    v16 = *(_QWORD **)(a1 + 1280);
    if ( !v16 )
      return 2;
LABEL_28:
    v17 = (__int64 *)(*v16 & 0xFFFFFFFFFFFFFFFCLL);
    if ( !v17 )
    {
LABEL_38:
      v12 = 2;
      sub_214040((unsigned __int64 **)(a1 + 1280), v17);
      return v12;
    }
    while ( (*(_BYTE *)v17 & 2) == 0 )
    {
      while ( (int)sub_32B790(a2, v17 + 3) < 0 )
      {
        v17 = (__int64 *)v17[1];
        if ( (*(_BYTE *)v17 & 2) != 0 )
          return 2;
      }
      if ( (int)sub_32B790(v17 + 3, a2) >= 0 )
      {
        if ( *(__int64 **)(a1 + 1280) == v17 )
          return 2;
        goto LABEL_38;
      }
      v17 = (__int64 *)v17[2];
    }
    return 2;
  }
  v5 = *(_DWORD *)(a2 + 88);
  if ( v5 > *(_DWORD *)(a3 + 88)
    || (*(_BYTE *)a1 & 1) == 0
    && (*(_BYTE *)(a2 + 25) & 1) == 0
    && (unsigned int)sub_1EBE40((__int64 *)(a1 + 432), (int *)a2, v5, 0) != -1 )
  {
    return 0;
  }
  LODWORD(v20[0]) = 0;
  copy_argloc(v20, a3);
  v6 = *(_QWORD *)(a3 + 16);
  v18[0] = 0;
  v20[2] = v6;
  copy_argloc(v18, a2);
  v19 = *(_QWORD *)(a2 + 16);
  if ( !(unsigned int)sub_32B790(v18, v20) )
  {
    cleanup_argloc(v18);
    cleanup_argloc(v20);
    v16 = *(_QWORD **)(a1 + 1280);
    if ( !v16 )
      return 2;
    goto LABEL_28;
  }
  cleanup_argloc(v18);
  cleanup_argloc(v20);
  v7 = *(_QWORD **)(a1 + 1280);
  if ( !v7 )
  {
LABEL_9:
    v20[0] = a2;
    v10 = sub_214CC0((__m128i *)(a1 + 1280), a2, v20);
    v11 = v10 + 24;
    copy_argloc(v10 + 48, a3);
    *(_QWORD *)(v11 + 40) = *(_QWORD *)(a3 + 16);
    v12 = 1;
    goto LABEL_10;
  }
  v8 = 24;
  v9 = *v7 & 0xFFFFFFFFFFFFFFFCLL;
  if ( v9 )
  {
    while ( (*(_BYTE *)v9 & 2) == 0 )
    {
      v8 = v9 + 24;
      if ( (int)sub_32B790(a2, v9 + 24) >= 0 )
      {
        if ( (int)sub_32B790(v9 + 24, a2) >= 0 )
        {
          if ( *(_QWORD *)(a1 + 1280) == v9 )
            goto LABEL_9;
          goto LABEL_22;
        }
        v9 = *(_QWORD *)(v9 + 16);
      }
      else
      {
        v9 = *(_QWORD *)(v9 + 8);
      }
    }
    goto LABEL_9;
  }
LABEL_22:
  v15 = v9 + 48;
  v12 = 2;
  copy_argloc(v15, a3);
  *(_QWORD *)(v8 + 40) = *(_QWORD *)(a3 + 16);
LABEL_10:
  v13 = *(_QWORD *)(a1 + 1256);
  if ( 96LL * *(_QWORD *)(a1 + 1264) )
  {
    while ( (unsigned int)sub_32B790(v13, a2) )
    {
      v13 += 96;
      if ( v13 == *(_QWORD *)(a1 + 1256) + 96LL * *(_QWORD *)(a1 + 1264) )
        return v12;
    }
    if ( v13 && (*(_BYTE *)(v13 + 88) & 8) != 0 )
      *(_DWORD *)(a2 + 24) |= 0x200000u;
  }
  return v12;
}
