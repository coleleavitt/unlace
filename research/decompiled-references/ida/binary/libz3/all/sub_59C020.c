__int64 __fastcall sub_59C020(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  int v6; // edx
  int v7; // eax
  _QWORD *v8; // rdi
  __int64 (__fastcall *v9)(); // r8
  int v10; // r8d
  int v11; // edx
  int v12; // r8d
  int v13; // edx
  int v14; // r8d
  int v15; // edx
  int v16; // r8d
  int v17; // edx
  int v18; // edx
  int v19; // r8d
  int v20; // r8d
  int v21; // edx
  int v22; // r8d
  int v23; // edx
  int v24; // edx
  int v25; // eax

  v5 = a3;
  v6 = *(_DWORD *)(*(_QWORD *)(a3 + 8) + 32LL);
  v7 = *(_DWORD *)(*(_QWORD *)(a2 + 8) + 32LL);
  if ( a4 && *(_DWORD *)(*(_QWORD *)(a4 + 8) + 32LL) == 4 )
  {
    if ( v7 == 4 )
      a2 = *(_QWORD *)(a2 + 64);
    if ( v6 == 4 )
      v5 = *(_QWORD *)(v5 + 64);
    a4 = *(_QWORD *)(a4 + 64);
  }
  else
  {
    if ( v7 == 4 )
    {
      a2 = *(_QWORD *)(a2 + 64);
      if ( v6 != 4 )
        goto LABEL_5;
    }
    else if ( v6 != 4 )
    {
      goto LABEL_5;
    }
    v5 = *(_QWORD *)(v5 + 64);
  }
LABEL_5:
  v8 = *(_QWORD **)(a1 + 8);
  v9 = *(__int64 (__fastcall **)())(*v8 + 16LL);
  if ( v9 != sub_59C020 )
    return ((__int64 (__fastcall *)(_QWORD *, __int64, __int64))v9)(v8, a2, v5);
  v10 = *(_DWORD *)(*(_QWORD *)(a2 + 8) + 32LL);
  v11 = *(_DWORD *)(*(_QWORD *)(v5 + 8) + 32LL);
  if ( a4 && *(_DWORD *)(*(_QWORD *)(a4 + 8) + 32LL) == 4 )
  {
    if ( v10 == 4 )
    {
      a2 = *(_QWORD *)(a2 + 64);
      if ( v11 != 4 )
        goto LABEL_58;
    }
    else if ( v11 != 4 )
    {
LABEL_58:
      a4 = *(_QWORD *)(a4 + 64);
      goto LABEL_10;
    }
    v5 = *(_QWORD *)(v5 + 64);
    goto LABEL_58;
  }
  if ( v10 == 4 )
  {
    a2 = *(_QWORD *)(a2 + 64);
    if ( v11 != 4 )
      goto LABEL_10;
  }
  else if ( v11 != 4 )
  {
    goto LABEL_10;
  }
  v5 = *(_QWORD *)(v5 + 64);
LABEL_10:
  v8 = (_QWORD *)v8[1];
  v9 = *(__int64 (__fastcall **)())(*v8 + 16LL);
  if ( v9 != sub_59C020 )
    return ((__int64 (__fastcall *)(_QWORD *, __int64, __int64))v9)(v8, a2, v5);
  v12 = *(_DWORD *)(*(_QWORD *)(a2 + 8) + 32LL);
  v13 = *(_DWORD *)(*(_QWORD *)(v5 + 8) + 32LL);
  if ( a4 && *(_DWORD *)(*(_QWORD *)(a4 + 8) + 32LL) == 4 )
  {
    if ( v12 == 4 )
    {
      a2 = *(_QWORD *)(a2 + 64);
      if ( v13 != 4 )
        goto LABEL_79;
    }
    else if ( v13 != 4 )
    {
LABEL_79:
      a4 = *(_QWORD *)(a4 + 64);
      goto LABEL_15;
    }
    v5 = *(_QWORD *)(v5 + 64);
    goto LABEL_79;
  }
  if ( v12 == 4 )
  {
    a2 = *(_QWORD *)(a2 + 64);
    if ( v13 != 4 )
      goto LABEL_15;
  }
  else if ( v13 != 4 )
  {
    goto LABEL_15;
  }
  v5 = *(_QWORD *)(v5 + 64);
LABEL_15:
  v8 = (_QWORD *)v8[1];
  v9 = *(__int64 (__fastcall **)())(*v8 + 16LL);
  if ( v9 != sub_59C020 )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v9)(v8, a2, v5);
  v14 = *(_DWORD *)(*(_QWORD *)(a2 + 8) + 32LL);
  v15 = *(_DWORD *)(*(_QWORD *)(v5 + 8) + 32LL);
  if ( a4 && *(_DWORD *)(*(_QWORD *)(a4 + 8) + 32LL) == 4 )
  {
    if ( v14 == 4 )
    {
      a2 = *(_QWORD *)(a2 + 64);
      if ( v15 != 4 )
        goto LABEL_84;
    }
    else if ( v15 != 4 )
    {
LABEL_84:
      a4 = *(_QWORD *)(a4 + 64);
      goto LABEL_20;
    }
    v5 = *(_QWORD *)(v5 + 64);
    goto LABEL_84;
  }
  if ( v14 == 4 )
  {
    a2 = *(_QWORD *)(a2 + 64);
    if ( v15 != 4 )
      goto LABEL_20;
  }
  else if ( v15 != 4 )
  {
    goto LABEL_20;
  }
  v5 = *(_QWORD *)(v5 + 64);
LABEL_20:
  v8 = (_QWORD *)v8[1];
  v9 = *(__int64 (__fastcall **)())(*v8 + 16LL);
  if ( v9 != sub_59C020 )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v9)(v8, a2, v5);
  v16 = *(_DWORD *)(*(_QWORD *)(a2 + 8) + 32LL);
  v17 = *(_DWORD *)(*(_QWORD *)(v5 + 8) + 32LL);
  if ( a4 && *(_DWORD *)(*(_QWORD *)(a4 + 8) + 32LL) == 4 )
  {
    if ( v16 == 4 )
    {
      a2 = *(_QWORD *)(a2 + 64);
      if ( v17 != 4 )
        goto LABEL_61;
    }
    else if ( v17 != 4 )
    {
LABEL_61:
      a4 = *(_QWORD *)(a4 + 64);
      goto LABEL_25;
    }
    v5 = *(_QWORD *)(v5 + 64);
    goto LABEL_61;
  }
  if ( v16 == 4 )
  {
    a2 = *(_QWORD *)(a2 + 64);
    if ( v17 != 4 )
      goto LABEL_25;
  }
  else if ( v17 != 4 )
  {
    goto LABEL_25;
  }
  v5 = *(_QWORD *)(v5 + 64);
LABEL_25:
  v8 = (_QWORD *)v8[1];
  v9 = *(__int64 (__fastcall **)())(*v8 + 16LL);
  if ( v9 != sub_59C020 )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v9)(v8, a2, v5);
  v18 = *(_DWORD *)(*(_QWORD *)(a2 + 8) + 32LL);
  v19 = *(_DWORD *)(*(_QWORD *)(v5 + 8) + 32LL);
  if ( a4 && *(_DWORD *)(*(_QWORD *)(a4 + 8) + 32LL) == 4 )
  {
    if ( v18 == 4 )
    {
      a2 = *(_QWORD *)(a2 + 64);
      if ( v19 != 4 )
        goto LABEL_68;
    }
    else if ( v19 != 4 )
    {
LABEL_68:
      a4 = *(_QWORD *)(a4 + 64);
      goto LABEL_30;
    }
    v5 = *(_QWORD *)(v5 + 64);
    goto LABEL_68;
  }
  if ( v18 == 4 )
  {
    a2 = *(_QWORD *)(a2 + 64);
    if ( v19 != 4 )
      goto LABEL_30;
  }
  else if ( v19 != 4 )
  {
    goto LABEL_30;
  }
  v5 = *(_QWORD *)(v5 + 64);
LABEL_30:
  v8 = (_QWORD *)v8[1];
  v9 = *(__int64 (__fastcall **)())(*v8 + 16LL);
  if ( v9 != sub_59C020 )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v9)(v8, a2, v5);
  v20 = *(_DWORD *)(*(_QWORD *)(a2 + 8) + 32LL);
  v21 = *(_DWORD *)(*(_QWORD *)(v5 + 8) + 32LL);
  if ( a4 && *(_DWORD *)(*(_QWORD *)(a4 + 8) + 32LL) == 4 )
  {
    if ( v20 == 4 )
    {
      a2 = *(_QWORD *)(a2 + 64);
      if ( v21 != 4 )
        goto LABEL_93;
    }
    else if ( v21 != 4 )
    {
LABEL_93:
      a4 = *(_QWORD *)(a4 + 64);
      goto LABEL_35;
    }
    v5 = *(_QWORD *)(v5 + 64);
    goto LABEL_93;
  }
  if ( v20 == 4 )
  {
    a2 = *(_QWORD *)(a2 + 64);
    if ( v21 != 4 )
      goto LABEL_35;
  }
  else if ( v21 != 4 )
  {
    goto LABEL_35;
  }
  v5 = *(_QWORD *)(v5 + 64);
LABEL_35:
  v8 = (_QWORD *)v8[1];
  v9 = *(__int64 (__fastcall **)())(*v8 + 16LL);
  if ( v9 != sub_59C020 )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v9)(v8, a2, v5);
  v22 = *(_DWORD *)(*(_QWORD *)(a2 + 8) + 32LL);
  v23 = *(_DWORD *)(*(_QWORD *)(v5 + 8) + 32LL);
  if ( a4 && *(_DWORD *)(*(_QWORD *)(a4 + 8) + 32LL) == 4 )
  {
    if ( v22 == 4 )
    {
      a2 = *(_QWORD *)(a2 + 64);
      if ( v23 != 4 )
        goto LABEL_100;
    }
    else if ( v23 != 4 )
    {
LABEL_100:
      a4 = *(_QWORD *)(a4 + 64);
      goto LABEL_40;
    }
    v5 = *(_QWORD *)(v5 + 64);
    goto LABEL_100;
  }
  if ( v22 == 4 )
  {
    a2 = *(_QWORD *)(a2 + 64);
    if ( v23 != 4 )
      goto LABEL_40;
  }
  else if ( v23 != 4 )
  {
    goto LABEL_40;
  }
  v5 = *(_QWORD *)(v5 + 64);
LABEL_40:
  v8 = (_QWORD *)v8[1];
  v9 = *(__int64 (__fastcall **)())(*v8 + 16LL);
  if ( v9 == sub_59C020 )
  {
    v24 = *(_DWORD *)(*(_QWORD *)(a2 + 8) + 32LL);
    v25 = *(_DWORD *)(*(_QWORD *)(v5 + 8) + 32LL);
    if ( !a4 || *(_DWORD *)(*(_QWORD *)(a4 + 8) + 32LL) != 4 )
    {
      if ( v24 == 4 )
      {
        a2 = *(_QWORD *)(a2 + 64);
        if ( v25 != 4 )
          return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)v8[1] + 16LL))(v8[1], a2, v5);
      }
      else if ( v25 != 4 )
      {
        return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)v8[1] + 16LL))(v8[1], a2, v5);
      }
      v5 = *(_QWORD *)(v5 + 64);
      return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)v8[1] + 16LL))(v8[1], a2, v5);
    }
    if ( v24 == 4 )
    {
      a2 = *(_QWORD *)(a2 + 64);
      if ( v25 != 4 )
        return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)v8[1] + 16LL))(v8[1], a2, v5);
    }
    else if ( v25 != 4 )
    {
      return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)v8[1] + 16LL))(v8[1], a2, v5);
    }
    v5 = *(_QWORD *)(v5 + 64);
    return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)v8[1] + 16LL))(v8[1], a2, v5);
  }
  return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v9)(v8, a2, v5);
}

