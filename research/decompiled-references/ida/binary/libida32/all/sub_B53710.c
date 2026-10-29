unsigned __int64 __fastcall sub_B53710(__int64 a1)
{
  unsigned __int64 *v1; // rdx
  unsigned __int64 v2; // rbp
  unsigned __int64 v3; // rax
  char v4; // cl
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rbx
  unsigned int v7; // eax
  unsigned __int64 v9; // rbx
  unsigned int v10; // eax
  unsigned __int64 v11; // rbx
  unsigned int v12; // eax
  __int128 v13; // [rsp+0h] [rbp-28h] BYREF

  v1 = (unsigned __int64 *)(*(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a1 + 56) & 4) != 0 )
    v1 = (unsigned __int64 *)v1[4];
  if ( !v1 )
    return 0;
  v2 = *v1;
  v3 = (unsigned __int64)(v1 + 1);
  while ( (v2 & 7) == 0 )
  {
    if ( (v2 & 8) != 0 || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 > 1 )
    {
      if ( (v2 & 8) != 0 )
        break;
      v4 = *(_BYTE *)(*(_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      if ( v4 == 40 )
      {
        if ( !v2 )
          break;
        v9 = v3 + 8;
        v10 = sub_F487E0(*(_QWORD *)(v2 + 32));
        v2 = *(_QWORD *)(v2 + 32);
        v3 = v10 * ((v9 != 0) + (v9 - (v9 != 0)) / v10);
        continue;
      }
      v5 = 0;
      if ( v4 == 8 )
      {
LABEL_22:
        if ( !v2 )
          goto LABEL_15;
        v11 = v3 + 8;
        v12 = sub_F487E0(*(_QWORD *)(v2 + 40));
        v2 = *(_QWORD *)(v2 + 48);
        v3 = v12 * ((v11 != 0) + (v11 - (v11 != 0)) / v12);
        continue;
      }
    }
    else
    {
      if ( v2 )
        goto LABEL_16;
      v4 = MEMORY[0x10102464C458F];
      v5 = v3;
      if ( MEMORY[0x10102464C458F] == 40 )
        goto LABEL_15;
      if ( MEMORY[0x10102464C458F] == 8 )
        goto LABEL_22;
    }
    if ( v4 != 30 || !v2 )
      goto LABEL_15;
    v6 = v3 + 4;
    v7 = sub_F487E0(*(_QWORD *)(v2 + 24));
    v2 = *(_QWORD *)(v2 + 24);
    v3 = v7 * ((v6 != 0) + (v6 - (v6 != 0)) / v7);
  }
  v5 = 0;
LABEL_15:
  v3 = v5;
LABEL_16:
  *(_QWORD *)&v13 = v3;
  return _mm_loadh_ps((const double *)&v13).m128_u64[0];
}

