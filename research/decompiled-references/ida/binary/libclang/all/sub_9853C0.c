__int64 __fastcall sub_9853C0(__int64 a1, __int64 a2)
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
  unsigned int v22; // esi
  int v23; // edx
  int i; // eax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rbx
  unsigned int v29; // edx
  unsigned int v30; // eax
  unsigned __int64 v31; // r9
  __int64 v32; // rcx
  __int64 v33; // rcx
  unsigned int v34; // r8d
  unsigned int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rcx
  void *v39; // [rsp+0h] [rbp-A8h]
  unsigned int v40; // [rsp+8h] [rbp-A0h]
  unsigned int v41; // [rsp+Ch] [rbp-9Ch]
  void *v42; // [rsp+10h] [rbp-98h] BYREF
  unsigned int v43; // [rsp+18h] [rbp-90h]
  void *v44; // [rsp+20h] [rbp-88h] BYREF
  unsigned int v45; // [rsp+28h] [rbp-80h]
  void *v46; // [rsp+30h] [rbp-78h] BYREF
  unsigned int v47; // [rsp+38h] [rbp-70h]
  void *v48; // [rsp+40h] [rbp-68h] BYREF
  unsigned int v49; // [rsp+48h] [rbp-60h]
  void *v50; // [rsp+50h] [rbp-58h] BYREF
  unsigned int v51; // [rsp+58h] [rbp-50h]
  __int64 v52; // [rsp+60h] [rbp-48h] BYREF
  unsigned int v53; // [rsp+68h] [rbp-40h]
  char v54; // [rsp+6Ch] [rbp-3Ch]

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
  v52 = v11;
  v15 = sub_985340(v13, *(_QWORD *)(v12 + a2 + 8LL * ((*(_BYTE *)(a2 + 2) & 8) != 0) + 8 + 8));
  v16 = v15;
  v52 = v15;
  v17 = sub_A24BE0(v14);
  v18 = sub_A24BE0(v16);
  sub_97E960(
    (__int64)&v42,
    *(_QWORD *)(a1 + 184),
    v14,
    ((v17 + 7) & 0xFFFFFFFFFFFFFFF8LL) + ((v18 + 7) & 0xFFFFFFFFFFFFFFF8LL));
  v19 = (unsigned __int64)v42;
  sub_97E960((__int64)&v44, *(_QWORD *)(a1 + 184), v16, 0);
  v20 = v43;
  v21 = (unsigned __int64)v44;
  v40 = v45;
  v47 = v43;
  if ( v43 <= 0x40 )
  {
    v46 = nullptr;
    if ( !v43 )
    {
      v49 = 0;
      v27 = *(_QWORD *)(a2 + 8);
      v22 = 0;
LABEL_25:
      v48 = v46;
      goto LABEL_26;
    }
    v22 = v43;
    if ( v45 > 0x40 )
    {
      v23 = 0;
      for ( i = 0; i != v43; ++i )
      {
        if ( (*(_QWORD *)v44 & (1LL << i)) != 0 )
        {
          v25 = 1LL << v23;
          if ( ((1LL << i) & v19) != 0 )
          {
            v46 = (void *)(v25 | (unsigned __int64)v46);
            ++v23;
          }
          else
          {
            ++v23;
            v46 = (void *)((unsigned __int64)v46 & ~v25);
          }
        }
      }
      goto LABEL_42;
    }
    goto LABEL_47;
  }
  sub_2585A50(&v46, 0, 0);
  v22 = v47;
  if ( v40 <= 0x40 )
  {
LABEL_47:
    v29 = 0;
    v30 = 0;
    do
    {
      if ( (v21 & (1LL << v30)) != 0 )
      {
        v31 = v19;
        if ( v20 > 0x40 )
          v31 = *(_QWORD *)(v19 + 8LL * (v30 >> 6));
        v32 = 1LL << v29;
        if ( (v31 & (1LL << v30)) != 0 )
        {
          if ( v22 > 0x40 )
          {
            *((_QWORD *)v46 + (v29++ >> 6)) |= v32;
            v22 = v47;
          }
          else
          {
            ++v29;
            v46 = (void *)((unsigned __int64)v46 | v32);
          }
        }
        else
        {
          v33 = ~v32;
          if ( v22 > 0x40 )
          {
            *((_QWORD *)v46 + (v29++ >> 6)) &= v33;
            v22 = v47;
          }
          else
          {
            ++v29;
            v46 = (void *)((unsigned __int64)v46 & v33);
          }
        }
      }
      ++v30;
    }
    while ( v20 != v30 );
    goto LABEL_42;
  }
  v34 = 0;
  v35 = 0;
  do
  {
    v36 = v35 >> 6;
    if ( (*(_QWORD *)(v21 + 8 * v36) & (1LL << v35)) != 0 )
    {
      v37 = 1LL << v34;
      if ( (*(_QWORD *)(v19 + 8 * v36) & (1LL << v35)) != 0 )
      {
        if ( v22 > 0x40 )
        {
          *((_QWORD *)v46 + (v34++ >> 6)) |= v37;
          v22 = v47;
        }
        else
        {
          ++v34;
          v46 = (void *)(v37 | (unsigned __int64)v46);
        }
      }
      else
      {
        v38 = ~v37;
        if ( v22 > 0x40 )
        {
          *((_QWORD *)v46 + (v34++ >> 6)) &= v38;
          v22 = v47;
        }
        else
        {
          ++v34;
          v46 = (void *)((unsigned __int64)v46 & v38);
        }
      }
    }
    ++v35;
  }
  while ( v20 != v35 );
LABEL_42:
  v28 = *(_QWORD *)(a2 + 8);
  v49 = v22;
  v27 = v28;
  if ( v22 <= 0x40 )
    goto LABEL_25;
  sub_2585B30(&v48);
  v22 = v49;
  v27 = v28;
  v51 = v49;
  if ( v49 > 0x40 )
  {
    sub_2585B30(&v50);
    v54 = 1;
    v53 = v51;
    v41 = v51;
    v52 = (__int64)v50;
    v39 = v50;
    v51 = 0;
    sub_97E3E0(a1, (__int64)&v52, v28);
    if ( v41 > 0x40 && v39 )
      operator delete[](v39);
    goto LABEL_27;
  }
LABEL_26:
  v53 = v22;
  v51 = 0;
  v50 = v48;
  v52 = (__int64)v48;
  v54 = 1;
  sub_97E3E0(a1, (__int64)&v52, v27);
LABEL_27:
  if ( v51 > 0x40 && v50 )
    operator delete[](v50);
  if ( v49 > 0x40 && v48 )
    operator delete[](v48);
  if ( v47 > 0x40 && v46 )
    operator delete[](v46);
  if ( v40 > 0x40 && v21 )
    operator delete[]((void *)v21);
  if ( v20 > 0x40 && v19 )
    operator delete[]((void *)v19);
  return v2;
}

