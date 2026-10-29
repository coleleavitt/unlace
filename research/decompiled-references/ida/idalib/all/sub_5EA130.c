__int64 __fastcall sub_5EA130(__int64 a1, __int64 a2, __int16 a3, unsigned int a4)
{
  unsigned int v4; // edx
  int v5; // eax
  int v6; // eax
  int v8; // eax
  unsigned int v9; // eax
  __int64 v10; // rdx

  v4 = a3 & 0xF000;
  v5 = *(_DWORD *)(a2 + 68);
  *(_DWORD *)(a1 + 748) = v5;
  if ( v4 == 49152 )
  {
    v5 = sub_60A100(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 1672LL), a4);
    *(_DWORD *)(a2 + 68) = v5;
    goto LABEL_17;
  }
  if ( (v5 & 0xFFFFFFF0) == 0x40 || (v5 & 0xFFFFFFF0) == 0xD0 )
  {
    if ( v4 == 0x8000 )
      return set_qerrno(1300);
    if ( v4 == 24576 )
    {
      v5 = sub_60A100(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 1672LL), 208);
      *(_DWORD *)(a2 + 68) = v5;
    }
    goto LABEL_17;
  }
  if ( v4 == 24576 )
  {
    v5 = sub_60A100(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 1672LL), 240);
    *(_DWORD *)(a2 + 68) = v5;
    goto LABEL_17;
  }
  if ( v4 > 0x6000 )
  {
    if ( v4 == 36864 )
    {
      v5 = sub_60A100(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 1672LL), 176);
      *(_DWORD *)(a2 + 68) = v5;
      goto LABEL_17;
    }
    if ( v4 > 0x9000 )
    {
      if ( v4 == 40960 )
      {
        v5 = sub_60A100(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 1672LL), 144);
        *(_DWORD *)(a2 + 68) = v5;
        goto LABEL_17;
      }
      if ( v4 == 45056 )
      {
        v5 = sub_60A100(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 1672LL), 256);
        *(_DWORD *)(a2 + 68) = v5;
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
        v5 = sub_60A100(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 1672LL), 224);
        *(_DWORD *)(a2 + 68) = v5;
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
    v5 = sub_60A100(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 1672LL), 80);
    *(_DWORD *)(a2 + 68) = v5;
    goto LABEL_17;
  }
  if ( v4 > 0x3000 )
  {
    if ( v4 == 0x4000 )
    {
      v5 = sub_60A100(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 1672LL), 112);
      *(_DWORD *)(a2 + 68) = v5;
      goto LABEL_17;
    }
    if ( v4 == 20480 )
    {
      v5 = sub_60A100(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 1672LL), 128);
      *(_DWORD *)(a2 + 68) = v5;
      goto LABEL_17;
    }
    goto LABEL_50;
  }
  if ( v4 == 4096 )
  {
    v5 = sub_60A100(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 1672LL), 48);
    *(_DWORD *)(a2 + 68) = v5;
    goto LABEL_17;
  }
  if ( v4 == 0x2000 )
  {
    v5 = sub_60A100(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 1672LL), 96);
    *(_DWORD *)(a2 + 68) = v5;
    goto LABEL_17;
  }
  if ( v4 )
    goto LABEL_50;
  if ( *(_BYTE *)(a2 + 72) )
  {
    v6 = *(_DWORD *)(a2 + 64);
    if ( v6 > 0 )
      return set_qerrno(77);
    goto LABEL_18;
  }
LABEL_17:
  *(_DWORD *)(a1 + 748) = v5;
  v6 = *(_DWORD *)(a2 + 64);
LABEL_18:
  if ( v6 )
    return 0;
  v8 = *(_DWORD *)(a1 + 748);
  if ( v8 == 128 )
  {
    v10 = *(_QWORD *)(a1 + 112);
    if ( (*(_QWORD *)(v10 + 40) & 0x180000000LL) != 0
      || *(char *)(a1 + 745) < 0 && *(_QWORD *)v10 && strstr(*(const char **)v10, "::") )
    {
      return 0;
    }
    return set_qerrno(1326);
  }
  else
  {
    v9 = v8 & 0xFFFFFFF0;
    if ( v9 != 64 && v9 != 208 )
      return 0;
    return set_qerrno(980);
  }
}
