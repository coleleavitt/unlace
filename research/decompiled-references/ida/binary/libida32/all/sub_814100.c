__int64 __fastcall sub_814100(__int64 a1, __int64 a2, char *a3, unsigned __int64 a4)
{
  __int64 v4; // rax
  unsigned __int64 v6; // r13
  __int64 v7; // rcx
  void *v8; // r12
  Elf64_Rela *v9; // rbp
  Elf64_Rela *v10; // rdx
  __int64 v11; // r15
  __int64 v12; // rdi
  __int64 v13; // rbp
  __int64 v15; // rdi
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rbp
  __int64 v18; // rax
  __int64 v19; // r12
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // rdi

  if ( a2 < 0 )
    goto LABEL_42;
  v4 = *(_QWORD *)(a1 + 40);
  v6 = a4;
  if ( v4 > a2 )
  {
    v15 = *(_QWORD *)(a1 + 32);
    if ( v15 )
    {
      v16 = v4 - a2;
      if ( v16 > a4 )
        v16 = a4;
      v17 = v16;
      if ( !(unsigned int)qfseek(v15, a2, 0) )
      {
        v18 = qfread(*(FILE **)(a1 + 32), a3);
        v19 = v18;
        if ( v18 == v6 )
          return v18;
        if ( v17 == v18 )
        {
          a3 += v18;
          v6 -= v18;
          goto LABEL_29;
        }
      }
      return -1;
    }
LABEL_42:
    set_qerrno(3, a2);
    return -1;
  }
  if ( v4 < a2 )
  {
    if ( *(_QWORD *)(a1 + 64) <= 0x3FFFFu )
    {
      *(_QWORD *)(a1 + 48) = qvector_reserve(a1 + 48, *(_QWORD *)(a1 + 48), &stru_40000, 1);
      v4 = *(_QWORD *)(a1 + 40);
    }
    *(_QWORD *)(a1 + 56) = &stru_40000;
    while ( a2 != v4 )
    {
      v7 = *(_QWORD *)(a1 + 8);
      v8 = *(void **)(a1 + 48);
      v9 = (Elf64_Rela *)(a2 - v4);
      if ( a2 - v4 > (unsigned __int64)&stru_40000 )
        v9 = &stru_40000;
      v10 = (Elf64_Rela *)(v7 - v4);
      if ( v7 - v4 > (unsigned __int64)v9 )
        v10 = v9;
      if ( !v7 )
        v10 = v9;
      v11 = qlread(*(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 48), v10);
      if ( v11 > 0 )
      {
        v12 = *(_QWORD *)(a1 + 32);
        if ( !v12 || !(unsigned int)qfseek(v12, *(_QWORD *)(a1 + 40), 0) && v11 == qfwrite(*(FILE **)(a1 + 32), v8) )
        {
          v4 = v11 + *(_QWORD *)(a1 + 40);
          *(_QWORD *)(a1 + 40) = v4;
          if ( v9 == (Elf64_Rela *)v11 )
            continue;
        }
      }
      return 0;
    }
  }
  v19 = 0;
LABEL_29:
  v20 = *(_QWORD *)(a1 + 8);
  if ( v20 )
  {
    v21 = v20 - *(_QWORD *)(a1 + 40);
    if ( v6 > v21 )
      v6 = v21;
  }
  v13 = qlread(*(_QWORD *)(a1 + 24), a3, v6);
  if ( v13 > 0 )
  {
    v22 = *(_QWORD *)(a1 + 32);
    if ( !v22 || !(unsigned int)qfseek(v22, *(_QWORD *)(a1 + 40), 0) && v13 == qfwrite(*(FILE **)(a1 + 32), a3) )
    {
      *(_QWORD *)(a1 + 40) += v13;
      v13 += v19;
      return v13;
    }
    v13 = -1;
  }
  if ( v19 > 0 )
    return v19;
  return v13;
}

