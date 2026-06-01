__int64 __fastcall sub_3716A0(__int64 a1, unsigned int a2, char a3)
{
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rbx
  int v7; // r14d
  int v8; // r13d
  __int64 v9; // rdi
  __int64 v10; // rdx
  _DWORD *v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  unsigned int v14; // ebx
  __int64 v16; // rax
  int v17; // edx
  unsigned __int64 v18; // rdx
  __int64 v19; // rsi
  bool v20; // dl
  __int64 v21; // rax
  int v22; // r13d
  __int64 v23; // rdx
  __int64 v24; // rdx
  char v25; // cl
  int v26; // eax
  char v27; // dl
  unsigned int v28; // esi
  unsigned int v29; // ebx
  int v30; // eax
  unsigned __int64 v31; // rax
  __int64 v32; // rdx
  int v33; // edx
  int v34; // eax
  int v35; // [rsp+4h] [rbp-84h]
  int v36; // [rsp+8h] [rbp-80h]

  v36 = a3 & 1;
  v6 = *(_QWORD *)(a1 + 464);
  v5 = (int)v6;
  v6 = (int)v6;
  if ( !(_DWORD)v6 )
  {
    LODWORD(v13) = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 936) + 56LL))(*(_QWORD *)(a1 + 936));
    v14 = v13;
    if ( a2 == 48 )
      goto LABEL_40;
    LODWORD(v5) = 0;
    v7 = 0;
    goto LABEL_29;
  }
  v7 = 0;
  v35 = a3 & 5;
  do
  {
    while ( 1 )
    {
      v8 = v6 - 1;
      v9 = sub_13D280((_QWORD *)a1, (int)v6 - 1);
      if ( *(_DWORD *)v9 == 2 )
        break;
      if ( (unsigned int)(*(_DWORD *)v9 - 3) > 1 )
        goto LABEL_4;
LABEL_5:
      if ( !--v6 )
        goto LABEL_12;
    }
    v10 = *(_QWORD *)(v9 + 8);
    v11 = *(_DWORD **)v10;
    v12 = *(_QWORD *)v10 + 24LL * *(_QWORD *)(v10 + 8);
    if ( *(_QWORD *)v10 == v12 )
    {
LABEL_4:
      ++v7;
      if ( !sub_1EEEF0(v9, *(_QWORD *)(a1 + 1504), (_BYTE *)(v9 + 80), 0xFFFFFFFF, a2) )
      {
        if ( v35 != 5 )
          return 0;
        while ( v5 >= v6 )
        {
          v16 = sub_13D280((_QWORD *)a1, --v5);
          v17 = *(_DWORD *)(v16 + 24);
          BYTE1(v17) &= 0x7Eu;
          *(_DWORD *)(v16 + 24) = v17 | 0x100000;
        }
        v18 = *(_QWORD *)(a1 + 464);
        if ( v18 < v8 )
        {
          v19 = *(_QWORD *)(a1 + 456);
          if ( *(_QWORD *)(a1 + 472) < (unsigned __int64)v8 )
          {
            v21 = qvector_reserve();
            v18 = *(_QWORD *)(a1 + 464);
            *(_QWORD *)(a1 + 456) = v21;
            v19 = v21;
          }
          memset((void *)(v19 + 4 * v18), 0, 4 * (v8 - v18));
          *(_QWORD *)(a1 + 464) = v8;
        }
        else if ( v8 != v18 )
        {
          *(_QWORD *)(a1 + 464) = v8;
        }
        v5 = v8;
        v7 = 0;
      }
      goto LABEL_5;
    }
    while ( (unsigned int)(*v11 - 3) > 1 )
    {
      v11 += 6;
      if ( (_DWORD *)v12 == v11 )
        goto LABEL_4;
    }
    --v6;
  }
  while ( v6 );
LABEL_12:
  LODWORD(v13) = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 936) + 56LL))(*(_QWORD *)(a1 + 936));
  v14 = v13;
  if ( a2 == 48 )
  {
    if ( v7 != (_DWORD)v5 )
      return 0;
LABEL_40:
    if ( *(int *)(a1 + 68) <= 0 || v36 )
      return (v14 | ((*(_BYTE *)(*(_QWORD *)(a1 + 1504) + 48LL) & 8) == 0)) ^ 1;
    return 0;
  }
LABEL_29:
  if ( a2 <= 0x10 )
  {
    LODWORD(v13) = getinf();
    v20 = (_DWORD)v13 == 176;
    if ( (_DWORD)v13 != 256 )
    {
      if ( (_DWORD)v13 == 176 )
        goto LABEL_45;
      goto LABEL_33;
    }
LABEL_62:
    if ( v20 )
      goto LABEL_45;
    goto LABEL_63;
  }
  v20 = a2 == 176;
  if ( a2 == 256 )
    goto LABEL_62;
  if ( a2 != 176 )
    goto LABEL_32;
LABEL_45:
  v13 = getinf();
  if ( v13 <= 0x397 )
  {
    LODWORD(v13) = getinf_flag();
    if ( !(_BYTE)v13
      || (netnode_check(), LODWORD(v13) = netnode_altval(), v22 = v13, (unsigned int)v13 <= 0x74)
      || (LODWORD(v13) = *(_DWORD *)(get_ph() + 4), (_DWORD)v13)
      && ((v13 = (unsigned int)(v13 - 13), (unsigned int)v13 > 0x3B)
       || (v23 = 0x800000000000005LL, !_bittest64(&v23, v13))
       || v22 == 117) )
    {
LABEL_63:
      if ( v7 != (_DWORD)v5 )
        return 0;
      if ( *(int *)(a1 + 68) > 0 && !v36 )
        return 0;
    }
  }
LABEL_32:
  if ( a2 == 176 )
  {
    if ( (_BYTE)v14 )
      return 0;
    if ( (unsigned __int64)getinf() > 0x397
      || (unsigned __int8)getinf_flag()
      && (netnode_check(), v29 = netnode_altval(), v29 > 0x74)
      && ((v30 = *(_DWORD *)(get_ph() + 4)) == 0
       || (v31 = (unsigned int)(v30 - 13), (unsigned int)v31 <= 0x3B)
       && (v32 = 0x800000000000005LL, _bittest64(&v32, v31))
       && v29 != 117) )
    {
      if ( !(unsigned __int8)sub_370720(a1, 0xB0u, a3) )
        return 0;
    }
    return sub_36D050(a1, a2);
  }
LABEL_33:
  if ( a2 > 0xB0 )
  {
    if ( a2 == 240 )
      return ((unsigned __int8)v36 ^ 1) & (v14 ^ 1);
    if ( a2 <= 0xF0 )
    {
      if ( a2 == 208 )
      {
        if ( !(_BYTE)v14 )
          return 0;
      }
      else
      {
        v14 = (unsigned __int8)v36 ^ 1;
        if ( a2 != 224 )
          return 0;
      }
      return v14;
    }
    if ( a2 != 256 )
      return 0;
    return sub_36D050(a1, a2);
  }
  if ( a2 == 64 )
  {
    if ( !(_BYTE)v14 )
      return 0;
    v27 = a3;
    v28 = 64;
    return sub_370720(a1, v28, v27);
  }
  if ( a2 > 0x40 )
  {
    if ( a2 != 112 )
    {
      if ( a2 <= 0x70 )
      {
        if ( ((a2 - 80) & 0xFFFFFFEF) != 0 )
          return 0;
        LOBYTE(v13) = v7 != (_DWORD)v5;
        return (v14 | (unsigned int)v13) ^ 1;
      }
      if ( (a2 & 0xFFFFFFEF) != 0x80 )
        return 0;
    }
    if ( (_BYTE)v14 )
      return 0;
    if ( *(_DWORD *)(a1 + 68) != -1 && *(_BYTE *)(*(_QWORD *)(a1 + 1496) + 144LL) != 1 && !v36 )
    {
      v33 = sub_36EC70(a1);
      v34 = *(_DWORD *)(a1 + 68);
      if ( v34 != v33 )
      {
        if ( !v34 )
          sub_CFF70();
        return 0;
      }
    }
    v27 = a3;
    v28 = a2;
    return sub_370720(a1, v28, v27);
  }
  if ( a2 != 16 )
  {
    if ( a2 != 32 )
      return 0;
    goto LABEL_38;
  }
  v24 = *(_QWORD *)(a1 + 1496);
  v25 = *(_BYTE *)(v24 + 129);
  v26 = v25 & 0xF0;
  if ( (v25 & 0xF0) == 0xC0 )
    v26 = *(_DWORD *)(v24 + 140);
  if ( v26 != 128 || (_DWORD)v5 - v7 == 1 )
  {
LABEL_38:
    if ( !(_BYTE)v14 )
    {
      LOBYTE(v14) = (_DWORD)v5 == 0;
      v14 &= sub_36D050(a1, a2);
      return v14;
    }
    return 0;
  }
  return 0;
}
