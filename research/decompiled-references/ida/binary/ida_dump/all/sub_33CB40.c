__int64 __fastcall sub_33CB40(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // edx
  unsigned __int64 *v6; // rcx
  _QWORD *v7; // rsi
  unsigned __int64 v8; // r10
  __int64 v9; // rdi
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v13; // r12
  unsigned int v14; // edx
  _QWORD *v15; // rcx
  int aflags; // eax
  unsigned int v17; // edx
  _QWORD *v18; // rcx
  unsigned int v19; // ecx
  __int64 v20; // rdx
  unsigned __int64 *v21; // r8
  unsigned int v22; // ecx
  __int64 v23; // r11
  __int64 v24; // rdx
  __int64 v25; // rsi
  int v26; // r8d
  __int64 v27; // rdi
  __int64 v28; // r9
  __int64 v29; // rsi
  __int64 v30; // r12
  __int64 v31; // rdi
  int v32; // esi
  _QWORD *v33; // rdx
  unsigned __int64 **v34; // rcx
  unsigned __int64 **v35; // rdx
  _DWORD *v36; // rdx
  __int64 *v37; // rcx
  __int64 *v38; // rdx
  _DWORD *v39; // rcx

  if ( a2 == 94 )
  {
    v17 = *(_DWORD *)a3;
    if ( v17 > 0x2F )
    {
      v18 = *(_QWORD **)(a3 + 8);
      *(_QWORD *)(a3 + 8) = v18 + 1;
    }
    else
    {
      v18 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v17);
      *(_DWORD *)a3 = v17 + 8;
    }
    sub_3CD800(*(_QWORD *)(a1 + 16), *v18);
    return 0;
  }
  if ( a2 <= 94 )
  {
    if ( a2 == 28 )
    {
      v14 = *(_DWORD *)a3;
      if ( v14 > 0x2F )
      {
        v15 = *(_QWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v15 + 1;
      }
      else
      {
        v15 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v14);
        *(_DWORD *)a3 = v14 + 8;
      }
      sub_375220(*(_QWORD *)(a1 + 16), *v15, -1);
      aflags = get_aflags();
      if ( (aflags & 0x42000000) == 0x40000000 || (aflags & 0xC2000000) == 0x80000000 )
        set_tinfo();
    }
    else if ( a2 == 86 )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 16) + 1416LL) |= 0x20u;
      *(_DWORD *)(*(_QWORD *)(a1 + 16) + 1416LL) |= 0x10u;
      sub_33C480(*(_QWORD *)(a1 + 16) + 480LL, 31, 0);
      sub_33C480(*(_QWORD *)(a1 + 16) + 480LL, 72, 0);
      v13 = *(_QWORD *)(a1 + 16);
      if ( (*(_BYTE *)(v13 + 1416) & 0x10) == 0 )
        sub_329DA0(*(_QWORD *)(a1 + 16), 0);
      sub_D09C0(v13);
      sub_D0960(v13);
      sub_374A40(*(_QWORD *)(a1 + 16));
    }
    return 0;
  }
  if ( a2 == 95 )
  {
    v19 = *(_DWORD *)a3;
    if ( *(_DWORD *)a3 > 0x2Fu )
    {
      v34 = *(unsigned __int64 ***)(a3 + 8);
      v35 = v34 + 1;
      *(_QWORD *)(a3 + 8) = v34 + 1;
      v21 = *v34;
    }
    else
    {
      v20 = *(_QWORD *)(a3 + 16);
      *(_DWORD *)a3 = v19 + 8;
      v21 = *(unsigned __int64 **)(v20 + v19);
      if ( v19 + 8 <= 0x2F )
      {
        *(_DWORD *)a3 = v19 + 16;
LABEL_29:
        sub_2B87B0(*(_QWORD *)(a1 + 16), v21);
        return 0;
      }
      v35 = *(unsigned __int64 ***)(a3 + 8);
    }
    *(_QWORD *)(a3 + 8) = v35 + 1;
    goto LABEL_29;
  }
  if ( a2 != 96 )
    return 0;
  v5 = *(_DWORD *)a3;
  if ( v5 > 0x2F )
  {
    v6 = *(unsigned __int64 **)(a3 + 8);
    *(_QWORD *)(a3 + 8) = v6 + 1;
  }
  else
  {
    v6 = (unsigned __int64 *)(*(_QWORD *)(a3 + 16) + v5);
    *(_DWORD *)a3 = v5 + 8;
  }
  v7 = *(_QWORD **)(*(_QWORD *)(a1 + 16) + 1432LL);
  if ( !v7 )
    return 0;
  v8 = *v6;
  v9 = 24;
  v10 = *v7 & 0xFFFFFFFFFFFFFFFCLL;
  if ( v10 )
  {
    while ( (*(_BYTE *)v10 & 2) == 0 )
    {
      while ( 1 )
      {
        v11 = *(_QWORD *)(v10 + 24);
        v9 = v10 + 24;
        if ( v8 >= v11 )
          break;
        v10 = *(_QWORD *)(v10 + 8);
        if ( (*(_BYTE *)v10 & 2) != 0 )
          return 0;
      }
      if ( v11 >= v8 )
      {
        if ( v7 == (_QWORD *)v10 )
          return 0;
        goto LABEL_31;
      }
      v10 = *(_QWORD *)(v10 + 16);
    }
    return 0;
  }
LABEL_31:
  v22 = *(_DWORD *)a3;
  v23 = *(_QWORD *)(v9 + 8);
  if ( *(_DWORD *)a3 > 0x2Fu )
  {
    v36 = *(_DWORD **)(a3 + 8);
    v37 = (__int64 *)(v36 + 2);
    *(_QWORD *)(a3 + 8) = v36 + 2;
    v26 = *v36;
LABEL_46:
    v38 = v37 + 1;
    *(_QWORD *)(a3 + 8) = v37 + 1;
    v28 = *v37;
LABEL_47:
    v39 = v38 + 1;
    *(_QWORD *)(a3 + 8) = v38 + 1;
    v30 = *v38;
LABEL_48:
    v33 = v39 + 2;
    *(_QWORD *)(a3 + 8) = v39 + 2;
    v32 = *v39;
LABEL_49:
    *(_QWORD *)(a3 + 8) = v33 + 1;
    return (int)sub_3CDF60(*(_QWORD *)(a1 + 16), *v33, v23, v8, (unsigned __int8)v26, v28, v30, v32);
  }
  v24 = *(_QWORD *)(a3 + 16);
  v25 = v22 + 8;
  *(_DWORD *)a3 = v25;
  v26 = *(_DWORD *)(v24 + v22);
  if ( (unsigned int)v25 > 0x2F )
  {
    v37 = *(__int64 **)(a3 + 8);
    goto LABEL_46;
  }
  v27 = v22 + 16;
  *(_DWORD *)a3 = v27;
  v28 = *(_QWORD *)(v24 + v25);
  if ( (unsigned int)v27 > 0x2F )
  {
    v38 = *(__int64 **)(a3 + 8);
    goto LABEL_47;
  }
  v29 = v22 + 24;
  *(_DWORD *)a3 = v29;
  v30 = *(_QWORD *)(v24 + v27);
  if ( (unsigned int)v29 > 0x2F )
  {
    v39 = *(_DWORD **)(a3 + 8);
    goto LABEL_48;
  }
  v31 = v22 + 32;
  *(_DWORD *)a3 = v31;
  v32 = *(_DWORD *)(v24 + v29);
  if ( (unsigned int)v31 > 0x2F )
  {
    v33 = *(_QWORD **)(a3 + 8);
    goto LABEL_49;
  }
  v33 = (_QWORD *)(v31 + v24);
  *(_DWORD *)a3 = v22 + 40;
  return (int)sub_3CDF60(*(_QWORD *)(a1 + 16), *v33, v23, v8, (unsigned __int8)v26, v28, v30, v32);
}
