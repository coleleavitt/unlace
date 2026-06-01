__int64 __fastcall sub_5CE340(__int64 a1, __int64 a2, __int16 a3, unsigned int a4)
{
  unsigned int v4; // edx
  __int64 v5; // rbp
  int v6; // eax
  int v7; // eax
  int v9; // eax
  unsigned int v10; // eax
  __int64 v11; // rdx

  v4 = a3 & 0xF000;
  v5 = a2;
  v6 = *(_DWORD *)(a2 + 68);
  *(_DWORD *)(a1 + 732) = v6;
  if ( v4 == 49152 )
  {
    a2 = a4;
    v6 = sub_5EE1D0(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 1480LL), a4);
    *(_DWORD *)(v5 + 68) = v6;
    goto LABEL_17;
  }
  if ( (v6 & 0xFFFFFFF0) == 0x40 || (v6 & 0xFFFFFFF0) == 0xD0 )
  {
    if ( v4 == 0x8000 )
      return set_qerrno(1300, a2);
    if ( v4 == 24576 )
    {
      a2 = 208;
      v6 = sub_5EE1D0(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 1480LL), 208);
      *(_DWORD *)(v5 + 68) = v6;
    }
    goto LABEL_17;
  }
  if ( v4 == 24576 )
  {
    a2 = 240;
    v6 = sub_5EE1D0(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 1480LL), 240);
    *(_DWORD *)(v5 + 68) = v6;
    goto LABEL_17;
  }
  if ( v4 > 0x6000 )
  {
    if ( v4 == 36864 )
    {
      a2 = 176;
      v6 = sub_5EE1D0(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 1480LL), 176);
      *(_DWORD *)(v5 + 68) = v6;
      goto LABEL_17;
    }
    if ( v4 > 0x9000 )
    {
      if ( v4 == 40960 )
      {
        a2 = 144;
        v6 = sub_5EE1D0(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 1480LL), 144);
        *(_DWORD *)(v5 + 68) = v6;
        goto LABEL_17;
      }
      if ( v4 == 45056 )
      {
        a2 = 256;
        v6 = sub_5EE1D0(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 1480LL), 256);
        *(_DWORD *)(v5 + 68) = v6;
        goto LABEL_17;
      }
    }
    else
    {
      if ( v4 == 28672 )
      {
        *(_BYTE *)(a2 + 186) |= 0x30u;
        goto LABEL_17;
      }
      if ( v4 == 0x8000 )
      {
        a2 = 224;
        v6 = sub_5EE1D0(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 1480LL), 224);
        *(_DWORD *)(v5 + 68) = v6;
        goto LABEL_17;
      }
    }
LABEL_50:
    if ( !under_debugger )
      interr(906);
    BUG();
  }
  if ( v4 == 12288 )
  {
    a2 = 80;
    v6 = sub_5EE1D0(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 1480LL), 80);
    *(_DWORD *)(v5 + 68) = v6;
    goto LABEL_17;
  }
  if ( v4 > 0x3000 )
  {
    if ( v4 == 0x4000 )
    {
      a2 = 112;
      v6 = sub_5EE1D0(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 1480LL), 112);
      *(_DWORD *)(v5 + 68) = v6;
      goto LABEL_17;
    }
    if ( v4 == 20480 )
    {
      a2 = 128;
      v6 = sub_5EE1D0(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 1480LL), 128);
      *(_DWORD *)(v5 + 68) = v6;
      goto LABEL_17;
    }
    goto LABEL_50;
  }
  if ( v4 == 4096 )
  {
    a2 = 48;
    v6 = sub_5EE1D0(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 1480LL), 48);
    *(_DWORD *)(v5 + 68) = v6;
    goto LABEL_17;
  }
  if ( v4 == 0x2000 )
  {
    a2 = 96;
    v6 = sub_5EE1D0(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 1480LL), 96);
    *(_DWORD *)(v5 + 68) = v6;
    goto LABEL_17;
  }
  if ( v4 )
    goto LABEL_50;
  if ( *(_BYTE *)(a2 + 72) )
  {
    v7 = *(_DWORD *)(a2 + 64);
    if ( v7 > 0 )
      return set_qerrno(77, a2);
    goto LABEL_18;
  }
LABEL_17:
  *(_DWORD *)(a1 + 732) = v6;
  v7 = *(_DWORD *)(v5 + 64);
LABEL_18:
  if ( v7 )
    return 0;
  v9 = *(_DWORD *)(a1 + 732);
  if ( v9 == 128 )
  {
    v11 = *(_QWORD *)(a1 + 104);
    if ( (*(_QWORD *)(v11 + 40) & 0x180000000LL) != 0 )
      return 0;
    if ( *(char *)(a1 + 729) < 0 )
    {
      if ( *(_QWORD *)v11 )
      {
        a2 = (__int64)"::";
        if ( strstr(*(const char **)v11, "::") )
          return 0;
      }
    }
    return set_qerrno(1326, a2);
  }
  else
  {
    v10 = v9 & 0xFFFFFFF0;
    if ( v10 != 64 && v10 != 208 )
      return 0;
    return set_qerrno(980, a2);
  }
}

