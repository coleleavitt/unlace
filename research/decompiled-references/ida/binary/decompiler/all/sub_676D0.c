__int64 __fastcall sub_676D0(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax
  __int64 v5; // rax
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rax
  int v9; // eax
  int v10; // edx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rax
  char v17; // [rsp+11h] [rbp-37h]
  char v18; // [rsp+12h] [rbp-36h]

  v3 = *(_DWORD *)(a1 + 64);
  if ( v3 <= 0 )
    goto LABEL_7;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8LL * (v3 - 1));
  if ( *(_QWORD *)(v5 + 40) == -1 )
  {
    v14 = *(_QWORD *)(v5 + 56);
    if ( v14 )
      v15 = *(_QWORD *)(v14 + 24) + 1LL;
    else
      v15 = *(_QWORD *)(v5 + 32);
    *(_QWORD *)(v5 + 40) = v15;
    if ( a3 )
      goto LABEL_7;
  }
  else if ( a3 )
  {
    goto LABEL_7;
  }
  if ( (*(_BYTE *)(v5 + 24) & 2) == 0 && *(_QWORD *)(v5 + 32) == a2 && (*(_BYTE *)(a1 + 5) & 0x20) == 0 )
  {
    if ( !under_debugger )
      sub_37EA20(50666);
    BUG();
  }
LABEL_7:
  if ( (*(_BYTE *)a1 & 4) != 0 )
  {
    v6 = j__qalloc_or_throw();
    sub_32D670(v6, *(_QWORD *)(a1 + 1496));
    *(_QWORD *)(v6 + 536) = 0;
    *(_QWORD *)v6 = off_4DB348;
    *(_QWORD *)(v6 + 528) = off_4EADD8;
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
    v6 = j__qalloc_or_throw();
    sub_32D670(v6, *(_QWORD *)(a1 + 1496));
  }
  v7 = *(_DWORD *)(a1 + 64);
  *(_QWORD *)(v6 + 64) = a1;
  *(_QWORD *)(v6 + 416) = a1;
  *(_DWORD *)(v6 + 72) = v7;
  *(_QWORD *)(v6 + 448) = a1;
  *(_QWORD *)(v6 + 328) = *(_QWORD *)(a1 + 152);
  v8 = *(_QWORD *)(a1 + 168);
  *(_QWORD *)(v6 + 32) = a2;
  *(_QWORD *)(v6 + 336) = v8;
  v9 = *(_DWORD *)(v6 + 24);
  v10 = v9;
  LOBYTE(v10) = v9 | 0x80;
  *(_DWORD *)(v6 + 24) = v10;
  if ( (a3 & 2) != 0 )
  {
    LOBYTE(v9) = v9 | 0x82;
    *(_DWORD *)(v6 + 24) = v9;
  }
  else if ( (unsigned __int8)xrefblk_t_first_to() )
  {
    while ( 1 )
    {
      if ( v18 )
      {
        if ( v17 == 19 )
        {
          v16 = sub_32DAE0(a1);
          if ( (unsigned __int8)sub_32F4A0(a1 + 8, v16) )
            break;
        }
      }
      if ( !(unsigned __int8)xrefblk_t_next_to() )
        goto LABEL_11;
    }
    *(_DWORD *)(v6 + 24) |= 0x10000u;
  }
LABEL_11:
  v11 = *(_QWORD *)(a1 + 520);
  v12 = 0;
  if ( v11 )
  {
    do
    {
      v12 = v11;
      v11 = *(_QWORD *)(v11 + 8);
    }
    while ( v11 );
    *(_QWORD *)(v12 + 8) = v6;
  }
  *(_QWORD *)(v6 + 16) = v12;
  *(_QWORD *)(v6 + 8) = 0;
  if ( !*(_QWORD *)(a1 + 520) )
    *(_QWORD *)(a1 + 520) = v6;
  ++*(_DWORD *)(a1 + 64);
  sub_64AE0(a1);
  return v6;
}
