__int64 __fastcall sub_369E20(__int64 a1, unsigned int a2, char a3)
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
  __int64 v22; // rdi
  int v23; // r13d
  __int64 v24; // rdx
  __int64 v25; // rdx
  char v26; // cl
  int v27; // eax
  char v28; // dl
  unsigned int v29; // esi
  __int64 v30; // rdi
  unsigned int v31; // ebx
  int v32; // eax
  unsigned __int64 v33; // rax
  __int64 v34; // rdx
  int v35; // edx
  int v36; // eax
  int v37; // [rsp+4h] [rbp-84h]
  int v38; // [rsp+8h] [rbp-80h]
  __int64 v40; // [rsp+10h] [rbp-78h] BYREF
  __int64 v41; // [rsp+18h] [rbp-70h]
  __int128 v42; // [rsp+20h] [rbp-68h]
  __int64 v43; // [rsp+30h] [rbp-58h]
  __int128 v44; // [rsp+38h] [rbp-50h]
  unsigned __int64 v45; // [rsp+48h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  v38 = a3 & 1;
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
  v37 = a3 & 5;
  do
  {
    while ( 1 )
    {
      v8 = v6 - 1;
      v9 = sub_136BC0((_QWORD *)a1, (int)v6 - 1);
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
      if ( !sub_1E7B70(v9, *(_QWORD *)(a1 + 1504), (_BYTE *)(v9 + 80), 0xFFFFFFFF, a2) )
      {
        if ( v37 != 5 )
          return 0;
        while ( v5 >= v6 )
        {
          v16 = sub_136BC0((_QWORD *)a1, --v5);
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
            v21 = qvector_reserve(a1 + 456, v19, v8, 4);
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
    if ( *(int *)(a1 + 68) <= 0 || v38 )
      return (v14 | ((*(_BYTE *)(*(_QWORD *)(a1 + 1504) + 48LL) & 8) == 0)) ^ 1;
    return 0;
  }
LABEL_29:
  if ( a2 <= 0x10 )
  {
    LODWORD(v13) = getinf(99);
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
  v13 = getinf(88);
  if ( v13 <= 0x397 )
  {
    LODWORD(v13) = getinf_flag(3, 4);
    if ( !(_BYTE)v13
      || (netnode_check(&v40, "$ golang", 0, 0),
          v22 = v40,
          LODWORD(v13) = netnode_altval(v40, 0, 65),
          v23 = v13,
          (unsigned int)v13 <= 0x74)
      || (LODWORD(v13) = *(_DWORD *)(get_ph(v22) + 4), (_DWORD)v13)
      && ((v13 = (unsigned int)(v13 - 13), (unsigned int)v13 > 0x3B)
       || (v24 = 0x800000000000005LL, !_bittest64(&v24, v13))
       || v23 == 117) )
    {
LABEL_63:
      if ( v7 != (_DWORD)v5 )
        return 0;
      if ( *(int *)(a1 + 68) > 0 && !v38 )
        return 0;
    }
  }
LABEL_32:
  if ( a2 == 176 )
  {
    if ( (_BYTE)v14 )
      return 0;
    if ( (unsigned __int64)getinf(88) > 0x397
      || (unsigned __int8)getinf_flag(3, 4)
      && (netnode_check(&v40, "$ golang", 0, 0), v30 = v40, v31 = netnode_altval(v40, 0, 65), v31 > 0x74)
      && ((v32 = *(_DWORD *)(get_ph(v30) + 4)) == 0
       || (v33 = (unsigned int)(v32 - 13), (unsigned int)v33 <= 0x3B)
       && (v34 = 0x800000000000005LL, _bittest64(&v34, v33))
       && v31 != 117) )
    {
      if ( !(unsigned __int8)sub_368EA0(a1, 0xB0u, a3) )
        return 0;
    }
    return sub_3657D0(a1, a2);
  }
LABEL_33:
  if ( a2 > 0xB0 )
  {
    if ( a2 == 240 )
      return ((unsigned __int8)v38 ^ 1) & (v14 ^ 1);
    if ( a2 <= 0xF0 )
    {
      if ( a2 == 208 )
      {
        if ( !(_BYTE)v14 )
          return 0;
      }
      else
      {
        v14 = (unsigned __int8)v38 ^ 1;
        if ( a2 != 224 )
          return 0;
      }
      return v14;
    }
    if ( a2 != 256 )
      return 0;
    return sub_3657D0(a1, a2);
  }
  if ( a2 == 64 )
  {
    if ( !(_BYTE)v14 )
      return 0;
    v28 = a3;
    v29 = 64;
    return sub_368EA0(a1, v29, v28);
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
    if ( *(_DWORD *)(a1 + 68) != -1 && *(_BYTE *)(*(_QWORD *)(a1 + 1496) + 144LL) != 1 && !v38 )
    {
      v35 = sub_3673F0(a1);
      v36 = *(_DWORD *)(a1 + 68);
      if ( v36 != v35 )
      {
        if ( v36 )
          return 0;
        v40 = 0;
        v41 = 0;
        v43 = 0;
        v42 = 0;
        v44 = 0;
        sub_C98B0(0x7D4u, &v40, a2);
        if ( !HIDWORD(v40) || SHIDWORD(v40) > (int)v5 - v7 )
        {
          if ( v43 )
          {
            *(_QWORD *)&v44 = 0;
            qfree(v43);
          }
          if ( !v41 )
            return 0;
          v14 = 0;
          *(_QWORD *)&v42 = 0;
          qfree(v41);
          return v14;
        }
        if ( v43 )
        {
          *(_QWORD *)&v44 = 0;
          qfree(v43);
        }
        if ( v41 )
        {
          *(_QWORD *)&v42 = 0;
          qfree(v41);
        }
      }
    }
    v28 = a3;
    v29 = a2;
    return sub_368EA0(a1, v29, v28);
  }
  if ( a2 != 16 )
  {
    if ( a2 != 32 )
      return 0;
    goto LABEL_38;
  }
  v25 = *(_QWORD *)(a1 + 1496);
  v26 = *(_BYTE *)(v25 + 129);
  v27 = v26 & 0xF0;
  if ( (v26 & 0xF0) == 0xC0 )
    v27 = *(_DWORD *)(v25 + 140);
  if ( v27 != 128 || (_DWORD)v5 - v7 == 1 )
  {
LABEL_38:
    if ( !(_BYTE)v14 )
    {
      LOBYTE(v14) = (_DWORD)v5 == 0;
      v14 &= sub_3657D0(a1, a2);
      return v14;
    }
    return 0;
  }
  return 0;
}
