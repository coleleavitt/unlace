__int64 __fastcall sub_985980(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r12
  char v9; // dl
  unsigned int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 *v13; // rdi
  unsigned int v14; // r14d
  __int64 v15; // rax
  unsigned int v16; // r15d
  __int64 v17; // r13
  __int64 v18; // rax
  unsigned __int64 v19; // r14
  unsigned int v20; // r13d
  unsigned __int64 v21; // r15
  unsigned int v22; // r11d
  int v23; // r8d
  int i; // eax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rbx
  unsigned int v29; // esi
  unsigned int v30; // eax
  __int64 v31; // rdx
  unsigned __int64 v32; // r9
  __int64 v33; // rdx
  unsigned int v34; // esi
  unsigned int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rdx
  unsigned int v38; // [rsp+Ch] [rbp-ACh]
  void *v39; // [rsp+10h] [rbp-A8h]
  unsigned int v40; // [rsp+18h] [rbp-A0h]
  void *v41; // [rsp+20h] [rbp-98h] BYREF
  unsigned int v42; // [rsp+28h] [rbp-90h]
  void *v43; // [rsp+30h] [rbp-88h] BYREF
  unsigned int v44; // [rsp+38h] [rbp-80h]
  void *v45; // [rsp+40h] [rbp-78h] BYREF
  unsigned int v46; // [rsp+48h] [rbp-70h]
  void *v47; // [rsp+50h] [rbp-68h] BYREF
  unsigned int v48; // [rsp+58h] [rbp-60h]
  void *v49; // [rsp+60h] [rbp-58h] BYREF
  unsigned int v50; // [rsp+68h] [rbp-50h]
  __int64 v51; // [rsp+70h] [rbp-48h] BYREF
  unsigned int v52; // [rsp+78h] [rbp-40h]
  char v53; // [rsp+7Ch] [rbp-3Ch]

  if ( *(_DWORD *)(a2 + 16) != 2 )
    return 0;
  v6 = 8LL * ((*(_BYTE *)(a2 + 2) & 8) != 0) + 8;
  v7 = a2 + *(unsigned __int8 *)(a2 + 3);
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + v6) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                 & 0xFFFFFFFFFFFFFFF0LL);
  v9 = *(_BYTE *)(v8 + 16);
  switch ( v9 )
  {
    case 13:
      if ( (((*(_WORD *)(v8 + 18) >> 3) + 77) & 0x1FFu) > 0x13 )
        return 0;
      break;
    case 46:
      v26 = sub_B14A40(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + v6) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                                             + 8LL)
                                 & 0xFFFFFFFFFFFFFFF0LL));
      if ( (*(_BYTE *)(v26 + 74) & 1) == 0 && *(_QWORD *)(v26 + 128) <= 7u || *(char *)(sub_B14A40(v8) + 76) < 0 )
        return 0;
      v6 = 8LL * ((*(_BYTE *)(a2 + 2) & 8) != 0) + 8;
      v7 = a2 + *(unsigned __int8 *)(a2 + 3);
      break;
    case 10:
      break;
    default:
      return 0;
  }
  LOBYTE(v10) = sub_6B3140(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + v7 + 8) + 8LL) & 0xFFFFFFFFFFFFFFF0LL));
  v2 = v10;
  if ( !(_BYTE)v10 )
    return 0;
  v11 = sub_985340(
          *(__int64 **)(a1 + 192),
          *(_QWORD *)(a2 + 8LL * ((*(_BYTE *)(a2 + 2) & 8) != 0) + 8 + *(unsigned __int8 *)(a2 + 3)));
  v12 = *(unsigned __int8 *)(a2 + 3);
  v13 = *(__int64 **)(a1 + 192);
  v14 = v11;
  v51 = v11;
  v15 = sub_985340(v13, *(_QWORD *)(v12 + a2 + 8LL * ((*(_BYTE *)(a2 + 2) & 8) != 0) + 8 + 8));
  v16 = v15;
  v51 = v15;
  v17 = sub_A24BE0(v14);
  v18 = sub_A24BE0(v16);
  sub_97E960(
    (__int64)&v41,
    *(_QWORD *)(a1 + 184),
    v14,
    ((v17 + 7) & 0xFFFFFFFFFFFFFFF8LL) + ((v18 + 7) & 0xFFFFFFFFFFFFFFF8LL));
  v19 = (unsigned __int64)v41;
  sub_97E960((__int64)&v43, *(_QWORD *)(a1 + 184), v16, 0);
  v20 = v42;
  v21 = (unsigned __int64)v43;
  v38 = v44;
  v46 = v42;
  if ( v42 <= 0x40 )
  {
    v45 = nullptr;
    if ( !v42 )
    {
      v48 = 0;
      v27 = *(_QWORD *)(a2 + 8);
      v22 = 0;
LABEL_25:
      v47 = v45;
      goto LABEL_26;
    }
    v22 = v42;
    if ( v44 > 0x40 )
    {
      v23 = 0;
      for ( i = 0; i != v42; ++i )
      {
        v25 = 1LL << i;
        if ( (*(_QWORD *)v43 & (1LL << i)) != 0 )
        {
          if ( (v19 & (1LL << v23)) != 0 )
          {
            ++v23;
            v45 = (void *)(v25 | (unsigned __int64)v45);
          }
          else
          {
            ++v23;
            v45 = (void *)((unsigned __int64)v45 & ~v25);
          }
        }
      }
      goto LABEL_43;
    }
    goto LABEL_48;
  }
  sub_2585A50(&v45, 0, 0);
  v22 = v46;
  if ( v38 <= 0x40 )
  {
LABEL_48:
    v29 = 0;
    v30 = 0;
    do
    {
      v31 = 1LL << v30;
      if ( (v21 & (1LL << v30)) != 0 )
      {
        v32 = v19;
        if ( v20 > 0x40 )
          v32 = *(_QWORD *)(v19 + 8LL * (v29 >> 6));
        if ( (v32 & (1LL << v29)) != 0 )
        {
          if ( v22 > 0x40 )
          {
            *((_QWORD *)v45 + (v30 >> 6)) |= v31;
            ++v29;
            v22 = v46;
          }
          else
          {
            v45 = (void *)(v31 | (unsigned __int64)v45);
            ++v29;
          }
        }
        else
        {
          v33 = ~v31;
          if ( v22 > 0x40 )
          {
            *((_QWORD *)v45 + (v30 >> 6)) &= v33;
            ++v29;
            v22 = v46;
          }
          else
          {
            ++v29;
            v45 = (void *)((unsigned __int64)v45 & v33);
          }
        }
      }
      ++v30;
    }
    while ( v20 != v30 );
    goto LABEL_43;
  }
  v34 = 0;
  v35 = 0;
  do
  {
    v36 = 1LL << v35;
    if ( (*(_QWORD *)(v21 + 8LL * (v35 >> 6)) & (1LL << v35)) != 0 )
    {
      if ( (*(_QWORD *)(v19 + 8LL * (v34 >> 6)) & (1LL << v34)) != 0 )
      {
        if ( v22 > 0x40 )
        {
          *((_QWORD *)v45 + (v35 >> 6)) |= v36;
          ++v34;
          v22 = v46;
        }
        else
        {
          ++v34;
          v45 = (void *)((unsigned __int64)v45 | v36);
        }
      }
      else
      {
        v37 = ~v36;
        if ( v22 > 0x40 )
        {
          *((_QWORD *)v45 + (v35 >> 6)) &= v37;
          ++v34;
          v22 = v46;
        }
        else
        {
          ++v34;
          v45 = (void *)((unsigned __int64)v45 & v37);
        }
      }
    }
    ++v35;
  }
  while ( v20 != v35 );
  v2 = (unsigned __int8)v2;
LABEL_43:
  v28 = *(_QWORD *)(a2 + 8);
  v48 = v22;
  v27 = v28;
  if ( v22 <= 0x40 )
    goto LABEL_25;
  sub_2585B30(&v47);
  v22 = v48;
  v27 = v28;
  v50 = v48;
  if ( v48 > 0x40 )
  {
    sub_2585B30(&v49);
    v53 = 1;
    v52 = v50;
    v40 = v50;
    v51 = (__int64)v49;
    v39 = v49;
    v50 = 0;
    sub_97E3E0(a1, (__int64)&v51, v28);
    if ( v40 > 0x40 && v39 )
      operator delete[](v39);
    goto LABEL_27;
  }
LABEL_26:
  v52 = v22;
  v50 = 0;
  v49 = v47;
  v51 = (__int64)v47;
  v53 = 1;
  sub_97E3E0(a1, (__int64)&v51, v27);
LABEL_27:
  if ( v50 > 0x40 && v49 )
    operator delete[](v49);
  if ( v48 > 0x40 && v47 )
    operator delete[](v47);
  if ( v46 > 0x40 && v45 )
    operator delete[](v45);
  if ( v38 > 0x40 && v21 )
    operator delete[]((void *)v21);
  if ( v20 > 0x40 && v19 )
    operator delete[]((void *)v19);
  return v2;
}

