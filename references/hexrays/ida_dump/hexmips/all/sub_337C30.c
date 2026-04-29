__int64 __fastcall sub_337C30(__int64 a1, __int64 a2, __int64 a3)
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
  __int64 v16; // r12
  int aflags; // eax
  unsigned int v18; // edx
  _QWORD *v19; // rcx
  unsigned int v20; // ecx
  __int64 v21; // rdx
  __int64 v22; // rsi
  unsigned __int64 *v23; // r8
  __int64 *v24; // rdx
  unsigned int v25; // ecx
  __int64 v26; // r11
  __int64 v27; // rdx
  __int64 v28; // rsi
  int v29; // r8d
  __int64 v30; // rdi
  __int64 v31; // r9
  __int64 v32; // rsi
  __int64 v33; // r12
  __int64 v34; // rdi
  int v35; // esi
  _QWORD *v36; // rdx
  unsigned __int64 **v37; // rcx
  _DWORD *v38; // rdx
  __int64 *v39; // rcx
  __int64 *v40; // rdx
  _DWORD *v41; // rcx

  if ( a2 == 94 )
  {
    v18 = *(_DWORD *)a3;
    if ( v18 > 0x2F )
    {
      v19 = *(_QWORD **)(a3 + 8);
      *(_QWORD *)(a3 + 8) = v19 + 1;
    }
    else
    {
      v19 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v18);
      *(_DWORD *)a3 = v18 + 8;
    }
    sub_3C8900(*(_QWORD *)(a1 + 16), *v19);
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
      v16 = *v15;
      sub_370320(*(_QWORD *)(a1 + 16), *v15, -1);
      aflags = get_aflags(v16);
      if ( (aflags & 0x42000000) == 0x40000000 || (aflags & 0xC2000000) == 0x80000000 )
        set_tinfo(v16, 0);
    }
    else if ( a2 == 86 )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 16) + 1416LL) |= 0x20u;
      *(_DWORD *)(*(_QWORD *)(a1 + 16) + 1416LL) |= 0x10u;
      sub_337570(*(_QWORD *)(a1 + 16) + 480LL, 31, 0);
      sub_337570(*(_QWORD *)(a1 + 16) + 480LL, 72, 0);
      v13 = *(_QWORD *)(a1 + 16);
      if ( (*(_BYTE *)(v13 + 1416) & 0x10) == 0 )
        sub_324F90(*(_QWORD *)(a1 + 16), 0);
      sub_CC7C0(v13);
      sub_CC760(v13);
      sub_36FB40(*(_QWORD *)(a1 + 16));
    }
    return 0;
  }
  if ( a2 == 95 )
  {
    v20 = *(_DWORD *)a3;
    if ( *(_DWORD *)a3 > 0x2Fu )
    {
      v37 = *(unsigned __int64 ***)(a3 + 8);
      v24 = (__int64 *)(v37 + 1);
      *(_QWORD *)(a3 + 8) = v37 + 1;
      v23 = *v37;
    }
    else
    {
      v21 = *(_QWORD *)(a3 + 16);
      v22 = v20 + 8;
      *(_DWORD *)a3 = v22;
      v23 = *(unsigned __int64 **)(v21 + v20);
      if ( (unsigned int)v22 <= 0x2F )
      {
        v24 = (__int64 *)(v22 + v21);
        *(_DWORD *)a3 = v20 + 16;
LABEL_29:
        sub_2B3F30(*(_QWORD *)(a1 + 16), v23, *v24);
        return 0;
      }
      v24 = *(__int64 **)(a3 + 8);
    }
    *(_QWORD *)(a3 + 8) = v24 + 1;
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
  v25 = *(_DWORD *)a3;
  v26 = *(_QWORD *)(v9 + 8);
  if ( *(_DWORD *)a3 > 0x2Fu )
  {
    v38 = *(_DWORD **)(a3 + 8);
    v39 = (__int64 *)(v38 + 2);
    *(_QWORD *)(a3 + 8) = v38 + 2;
    v29 = *v38;
LABEL_46:
    v40 = v39 + 1;
    *(_QWORD *)(a3 + 8) = v39 + 1;
    v31 = *v39;
LABEL_47:
    v41 = v40 + 1;
    *(_QWORD *)(a3 + 8) = v40 + 1;
    v33 = *v40;
LABEL_48:
    v36 = v41 + 2;
    *(_QWORD *)(a3 + 8) = v41 + 2;
    v35 = *v41;
LABEL_49:
    *(_QWORD *)(a3 + 8) = v36 + 1;
    return (int)sub_3C9060(*(_QWORD *)(a1 + 16), *v36, v26, v8, (unsigned __int8)v29, v31, v33, v35);
  }
  v27 = *(_QWORD *)(a3 + 16);
  v28 = v25 + 8;
  *(_DWORD *)a3 = v28;
  v29 = *(_DWORD *)(v27 + v25);
  if ( (unsigned int)v28 > 0x2F )
  {
    v39 = *(__int64 **)(a3 + 8);
    goto LABEL_46;
  }
  v30 = v25 + 16;
  *(_DWORD *)a3 = v30;
  v31 = *(_QWORD *)(v27 + v28);
  if ( (unsigned int)v30 > 0x2F )
  {
    v40 = *(__int64 **)(a3 + 8);
    goto LABEL_47;
  }
  v32 = v25 + 24;
  *(_DWORD *)a3 = v32;
  v33 = *(_QWORD *)(v27 + v30);
  if ( (unsigned int)v32 > 0x2F )
  {
    v41 = *(_DWORD **)(a3 + 8);
    goto LABEL_48;
  }
  v34 = v25 + 32;
  *(_DWORD *)a3 = v34;
  v35 = *(_DWORD *)(v27 + v32);
  if ( (unsigned int)v34 > 0x2F )
  {
    v36 = *(_QWORD **)(a3 + 8);
    goto LABEL_49;
  }
  v36 = (_QWORD *)(v34 + v27);
  *(_DWORD *)a3 = v25 + 40;
  return (int)sub_3C9060(*(_QWORD *)(a1 + 16), *v36, v26, v8, (unsigned __int8)v29, v31, v33, v35);
}
