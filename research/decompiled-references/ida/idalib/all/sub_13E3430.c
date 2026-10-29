__int64 __fastcall sub_13E3430(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  unsigned __int8 *v5; // r15
  unsigned int v6; // esi
  unsigned int v7; // ebx
  char *v8; // rdx
  char v9; // al
  char v10; // bp
  unsigned int v11; // ecx
  __int64 v12; // rdi
  bool v13; // cc
  bool v14; // al
  __int64 v15; // r12
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  char v18; // cl
  unsigned __int8 *v19; // r13
  __int64 v20; // rbp
  unsigned int v21; // ebx
  __int64 v22; // rax
  __int64 v23; // rbp
  __int64 v24; // rdi
  void *v25; // rax
  __int64 i; // r12
  unsigned int v27; // eax
  void *v28; // rdx
  __int64 v29; // rdx
  bool v30; // cf
  bool v32; // r12
  unsigned int v33; // r14d
  bool v34; // al
  bool v35; // r12
  void *v36; // rax
  char v38; // [rsp+12h] [rbp-76h]
  char v39; // [rsp+13h] [rbp-75h]
  unsigned __int8 v40; // [rsp+13h] [rbp-75h]
  unsigned int v41; // [rsp+14h] [rbp-74h]
  __int64 v42; // [rsp+18h] [rbp-70h]
  void *v43; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v44; // [rsp+28h] [rbp-60h]
  void *v45; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v46; // [rsp+38h] [rbp-50h]
  void *v47; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v48; // [rsp+48h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 48);
  v5 = *(unsigned __int8 **)(a1 + 40);
  v41 = a3;
  v6 = *(_DWORD *)(a1 + 64);
  v39 = *(_BYTE *)(a1 + 68);
  v7 = (*(_BYTE *)(a1 + 69) == 0) + v4 - (_DWORD)v5 - 1;
  if ( v39 )
  {
    if ( v6 == 16 )
    {
      while ( 1 )
      {
        v8 = (char *)(v5 + 1);
        if ( (*v5 & 0xDF) == 0x50 )
          break;
        ++v5;
      }
      v10 = v5[1];
      if ( v10 != 45 )
      {
        v11 = v4 - (_DWORD)v8;
        LODWORD(v12) = v11;
        goto LABEL_77;
      }
    }
    else
    {
      v8 = (char *)(v5 + 1);
      if ( (*v5 & 0xDF) != 0x45 )
      {
        do
        {
          v5 = (unsigned __int8 *)v8;
          v9 = *v8++;
        }
        while ( (v9 & 0xDF) != 0x45 );
      }
      v10 = v5[1];
      if ( v10 != 45 )
      {
        v11 = v4 - (_DWORD)v8;
        v12 = v11;
        v13 = v6 <= 8;
        if ( v6 != 8 )
        {
LABEL_7:
          if ( !v13 )
          {
            v14 = v11 <= 0x13;
            if ( v6 == 10 )
              goto LABEL_9;
            if ( v6 == 16 )
            {
LABEL_77:
              v15 = 0;
              if ( (unsigned int)v12 > 0x10 )
                goto LABEL_10;
              goto LABEL_78;
            }
            return sub_13E3A00(v12);
          }
          if ( v6 != 2 )
            return sub_13E3A00(v12);
          v14 = v11 <= 0x40;
LABEL_9:
          v15 = 0;
          if ( !v14 )
            goto LABEL_10;
LABEL_78:
          sub_220A550(&v47, 64, v8, v11, 10);
          v15 = (__int64)v47;
          if ( v48 > 0x40 )
          {
            v15 = *(_QWORD *)v47;
            operator delete[](v47);
          }
          v6 = *(_DWORD *)(a1 + 64);
          v39 = 0;
LABEL_10:
          a3 = v41;
          v16 = -v15;
          if ( v10 != 45 )
            v16 = v15;
          v42 = v16;
          if ( v6 == 10 )
            goto LABEL_13;
          goto LABEL_19;
        }
LABEL_95:
        v14 = v11 <= 0x15;
        goto LABEL_9;
      }
    }
    v8 = (char *)(v5 + 2);
    v10 = 45;
    v11 = v4 - ((_DWORD)v5 + 2);
    v12 = v11;
    v13 = v6 <= 8;
    if ( v6 != 8 )
      goto LABEL_7;
    goto LABEL_95;
  }
  v42 = 0;
  v15 = 0;
  a3 = (unsigned int)a3;
  if ( v6 == 10 )
  {
LABEL_13:
    v17 = a3 + 4 * (v15 + v7);
    goto LABEL_20;
  }
LABEL_19:
  v17 = v15 + a3 + 4 * v7;
LABEL_20:
  v18 = v39;
  v44 = v17;
  if ( v17 > 0xFFFFFFFF )
    v18 = 1;
  v40 = v18;
  if ( (unsigned int)v17 > 0x40 )
  {
    sub_2205470(&v43, 0, 0);
    v6 = *(_DWORD *)(a1 + 64);
  }
  else
  {
    v43 = nullptr;
  }
  if ( !*(_BYTE *)(a1 + 68) )
    v5 = *(unsigned __int8 **)(a1 + 48);
  v19 = *(unsigned __int8 **)(a1 + 40);
  v20 = 0;
  if ( v5 > v19 )
  {
    v38 = 0;
    do
    {
      while ( 1 )
      {
        v22 = *v19;
        if ( (_BYTE)v22 != 46 )
          break;
        ++v19;
        v38 = 1;
        if ( v5 == v19 )
          goto LABEL_33;
      }
      v21 = word_23E43C0[v22];
      sub_2209C80(&v43);
      sub_2205A20(&v43, v21);
      if ( v38 )
        --v20;
      ++v19;
      v6 = *(_DWORD *)(a1 + 64);
    }
    while ( v5 != v19 );
  }
LABEL_33:
  if ( v6 == 16 )
    v20 *= 4;
  v23 = v42 + v20;
  if ( v44 > 0x40 )
  {
    sub_220A130(&v43, v41);
    v6 = *(_DWORD *)(a1 + 64);
  }
  else
  {
    v24 = 0;
    if ( v41 != v44 )
      v24 = (_QWORD)v43 << v41;
    v25 = (void *)(v24 & (0xFFFFFFFFFFFFFFFFLL >> -(char)v44));
    if ( !v44 )
      v25 = nullptr;
    v43 = v25;
  }
  if ( v23 <= 0 )
  {
    if ( v23 )
    {
      v33 = v44;
      do
      {
        if ( v33 > 0x40 )
          v34 = (unsigned int)sub_2206780(&v43) == v33;
        else
          v34 = v43 == nullptr;
        if ( v34 )
          break;
        sub_2207A50(&v47, &v43, 8LL * (v6 != 16) + 2);
        if ( v44 > 0x40 && v43 )
          operator delete[](v43);
        v33 = v48;
        v43 = v47;
        v44 = v48;
        ++v23;
      }
      while ( v23 );
    }
  }
  else
  {
    for ( i = 0; i != v23; ++i )
      sub_2209C80(&v43);
  }
  v27 = *(_DWORD *)(a2 + 8);
  v46 = v27;
  if ( v27 <= 0x40 )
  {
    v28 = (void *)(0xFFFFFFFFFFFFFFFFLL >> -(char)v27);
    if ( !v27 )
      v28 = nullptr;
    v45 = v28;
    v29 = v44;
    v30 = v44 < v27;
    if ( v44 <= v27 )
      goto LABEL_48;
LABEL_84:
    sub_2206CD0(&v47, &v45, v29);
    v35 = (int)sub_2205DB0(&v43, &v47) > 0;
    if ( v48 > 0x40 && v47 )
      operator delete[](v47);
    sub_2206A40(&v47, &v43);
    if ( *(_DWORD *)(a2 + 8) > 0x40u && *(_QWORD *)a2 )
      operator delete[](*(void **)a2);
    v40 |= v35;
    *(_QWORD *)a2 = v47;
    *(_DWORD *)(a2 + 8) = v48;
    goto LABEL_52;
  }
  sub_2205470(&v45, -1, 1);
  v29 = v44;
  v27 = *(_DWORD *)(a2 + 8);
  v30 = v44 < v27;
  if ( v44 > v27 )
    goto LABEL_84;
LABEL_48:
  if ( v30 )
  {
    sub_2206CD0(&v47, &v43, v46);
    v32 = (int)sub_2205DB0(&v47, &v45) > 0;
    if ( v48 > 0x40 && v47 )
      operator delete[](v47);
    sub_2206CD0(&v47, &v43, *(unsigned int *)(a2 + 8));
    if ( *(_DWORD *)(a2 + 8) > 0x40u && *(_QWORD *)a2 )
      operator delete[](*(void **)a2);
    v40 |= v32;
    *(_QWORD *)a2 = v47;
    *(_DWORD *)(a2 + 8) = v48;
  }
  else if ( (unsigned int)v29 <= 0x40 && v27 <= 0x40 )
  {
    v36 = v43;
    *(_DWORD *)(a2 + 8) = v29;
    *(_QWORD *)a2 = v36;
  }
  else
  {
    sub_22056A0(a2, &v43);
  }
LABEL_52:
  if ( v46 > 0x40 && v45 )
    operator delete[](v45);
  if ( v44 > 0x40 )
  {
    if ( v43 )
      operator delete[](v43);
  }
  return v40;
}
