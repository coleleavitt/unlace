__int64 __fastcall sub_67FD0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  int v5; // r12d
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rax
  int v11; // eax
  int v12; // edx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  char v19; // [rsp+11h] [rbp-37h]
  char v20; // [rsp+12h] [rbp-36h]

  v4 = *(_DWORD *)(a1 + 64);
  v5 = a3;
  if ( v4 > 0 )
  {
    a3 = *(_QWORD *)(a1 + 528);
    v6 = *(_QWORD *)(a3 + 8LL * (v4 - 1));
    if ( v5 )
    {
      if ( *(_QWORD *)(v6 + 40) == -1 )
      {
        v16 = *(_QWORD *)(v6 + 56);
        if ( v16 )
          v17 = *(_QWORD *)(v16 + 24) + 1LL;
        else
          v17 = *(_QWORD *)(v6 + 32);
        *(_QWORD *)(v6 + 40) = v17;
      }
      goto LABEL_9;
    }
    if ( *(_QWORD *)(v6 + 32) != a2 )
    {
      if ( *(_QWORD *)(v6 + 40) != -1 )
        goto LABEL_9;
      v7 = *(_QWORD *)(v6 + 56);
      if ( !v7 )
      {
        v8 = *(_QWORD *)(v6 + 32);
        LODWORD(a3) = *(_DWORD *)(v6 + 24);
        goto LABEL_7;
      }
LABEL_6:
      LODWORD(a3) = *(_DWORD *)(v6 + 24);
      v8 = *(_QWORD *)(v7 + 24) + 1LL;
LABEL_7:
      a3 &= 2u;
      *(_QWORD *)(v6 + 40) = v8;
      if ( (_DWORD)a3 || *(_QWORD *)(v6 + 32) != a2 )
        goto LABEL_9;
LABEL_35:
      if ( (*(_BYTE *)(a1 + 5) & 0x20) == 0 )
      {
        if ( !under_debugger )
          sub_383060(50666);
        BUG();
      }
      goto LABEL_9;
    }
    v7 = *(_QWORD *)(v6 + 56);
    if ( v7 )
    {
      if ( *(_QWORD *)(v6 + 40) != -1 )
      {
        if ( (*(_BYTE *)(v6 + 24) & 2) != 0 )
          goto LABEL_9;
        goto LABEL_35;
      }
      goto LABEL_6;
    }
    a3 = *(unsigned int *)(v6 + 24);
    if ( (a3 & 2) == 0 )
      return v6;
    if ( *(_QWORD *)(v6 + 40) == -1 )
    {
      v8 = a2;
      goto LABEL_7;
    }
  }
LABEL_9:
  if ( (*(_BYTE *)a1 & 4) != 0 )
  {
    v6 = j__qalloc_or_throw(728, a2, a3, a4);
    sub_330B10(v6, *(_QWORD *)(a1 + 1496));
    *(_QWORD *)(v6 + 536) = 0;
    *(_QWORD *)v6 = off_4DBB48;
    *(_QWORD *)(v6 + 528) = off_4EBC98;
    *(_BYTE *)(v6 + 560) = 0;
    *(_QWORD *)(v6 + 564) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v6 + 576) = 0;
    *(_QWORD *)(v6 + 600) = 0;
    *(_QWORD *)(v6 + 624) = 0;
    *(_QWORD *)(v6 + 648) = 0;
    *(_DWORD *)(v6 + 672) = 0;
    *(_QWORD *)(v6 + 680) = 0;
    *(_QWORD *)(v6 + 704) = 0;
    *(_OWORD *)(v6 + 544) = 0;
    *(_OWORD *)(v6 + 584) = 0;
    *(_OWORD *)(v6 + 608) = 0;
    *(_OWORD *)(v6 + 632) = 0;
    *(_OWORD *)(v6 + 656) = 0;
    *(_OWORD *)(v6 + 688) = 0;
    *(_OWORD *)(v6 + 712) = 0;
  }
  else
  {
    v6 = j__qalloc_or_throw(528, a2, a3, a4);
    sub_330B10(v6, *(_QWORD *)(a1 + 1496));
  }
  v9 = *(_DWORD *)(a1 + 64);
  *(_QWORD *)(v6 + 64) = a1;
  *(_QWORD *)(v6 + 416) = a1;
  *(_DWORD *)(v6 + 72) = v9;
  *(_QWORD *)(v6 + 448) = a1;
  *(_QWORD *)(v6 + 328) = *(_QWORD *)(a1 + 152);
  v10 = *(_QWORD *)(a1 + 168);
  *(_QWORD *)(v6 + 32) = a2;
  *(_QWORD *)(v6 + 336) = v10;
  v11 = *(_DWORD *)(v6 + 24);
  v12 = v11;
  LOBYTE(v12) = v11 | 0x80;
  *(_DWORD *)(v6 + 24) = v12;
  if ( v5 )
  {
    LOBYTE(v11) = v11 | 0x82;
    *(_DWORD *)(v6 + 24) = v11;
  }
  else if ( (unsigned __int8)xrefblk_t_first_to() )
  {
    while ( 1 )
    {
      if ( v20 )
      {
        if ( v19 == 19 )
        {
          v18 = sub_330F80(a1);
          if ( (unsigned __int8)sub_332920(a1 + 8, v18) )
            break;
        }
      }
      if ( !(unsigned __int8)xrefblk_t_next_to() )
        goto LABEL_13;
    }
    *(_DWORD *)(v6 + 24) |= 0x10000u;
  }
LABEL_13:
  v13 = *(_QWORD *)(a1 + 520);
  v14 = 0;
  if ( v13 )
  {
    do
    {
      v14 = v13;
      v13 = *(_QWORD *)(v13 + 8);
    }
    while ( v13 );
    *(_QWORD *)(v14 + 8) = v6;
  }
  *(_QWORD *)(v6 + 16) = v14;
  *(_QWORD *)(v6 + 8) = 0;
  if ( !*(_QWORD *)(a1 + 520) )
    *(_QWORD *)(a1 + 520) = v6;
  ++*(_DWORD *)(a1 + 64);
  sub_653E0(a1);
  return v6;
}
