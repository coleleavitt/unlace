__int64 __fastcall sub_5FA4C0(__int64 a1, __int64 a2, double a3, double a4)
{
  __int64 v4; // rdx
  __int64 v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 *v9; // r15
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // r14
  int v13; // r13d
  int v14; // r9d
  char v15; // dl
  char v16; // al
  char v17; // dl
  int v18; // ebp
  int v19; // ecx
  int v20; // ecx
  __int64 v21; // rdx
  const char *v22; // rsi
  __int64 v23; // r15
  __int64 v24; // r13
  char *v25; // rbp
  char *v26; // r14
  __int64 v27; // rsi
  __int64 v28; // r15
  __int64 i; // rbp
  char *v30; // rax
  void *v31; // rdi
  void *v32; // rdi
  __int64 v33; // rdx
  int v34; // eax
  unsigned __int8 v36; // al
  __int64 v37; // rdx
  int v38; // ebp
  __int64 *v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rdx
  const char *v44; // rsi
  __int64 v45; // [rsp+8h] [rbp-90h]
  __int64 v46; // [rsp+18h] [rbp-80h] BYREF
  void *ptr; // [rsp+20h] [rbp-78h] BYREF
  __int128 v48; // [rsp+28h] [rbp-70h]
  __int64 v49; // [rsp+48h] [rbp-50h]
  int v50; // [rsp+50h] [rbp-48h]
  unsigned __int64 v51; // [rsp+58h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 128);
  v51 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(v4 + 80) & 1) != 0 )
  {
    ptr = nullptr;
    v48 = 0;
    if ( (unsigned int)sub_5FA1B0(a1, (__int64)&ptr, v4, (__m128i)0LL, a4) )
    {
      if ( ptr )
      {
        *(_QWORD *)&v48 = 0;
        qfree(ptr);
      }
      return 0xFFFFFFFFLL;
    }
    a2 = *(_QWORD *)(a1 + 128);
    sub_5EBB70((_QWORD *)a1, a2, (__int64)&ptr);
    if ( ptr )
    {
      *(_QWORD *)&v48 = 0;
      qfree(ptr);
    }
    v4 = *(_QWORD *)(a1 + 128);
  }
  v6 = *(_QWORD *)(v4 + 48);
  if ( (getinf(57) & 0xF) == 6 )
  {
    while ( (*(_BYTE *)(v6 + 48) & 0xC0) == 0 )
    {
      if ( (*(_BYTE *)(v6 + 52) & 7) != 0 )
        v7 = (unsigned int)(1 << ((*(_BYTE *)(v6 + 52) & 7) - 1));
      else
        v7 = (unsigned __int8)getinf(61);
      v8 = 1LL << (8 * (unsigned __int8)v7 - 1);
      if ( (unsigned __int64)(8 * (int)v7 - 1) >= 0x40 )
        v8 = 0;
      v9 = *(__int64 **)(*(_QWORD *)(a1 + 128) + 56LL);
      v10 = v9[1];
      if ( !v10 )
        break;
      v11 = *v9;
      v12 = 0;
      v13 = 0;
      while ( 1 )
      {
        if ( (v8 & *(_QWORD *)v11) != 0 )
        {
          v14 = *(unsigned __int8 *)(v11 + 9);
          v13 |= 2 - v14;
          if ( (v13 & ((2 - v14) ^ 3)) != 0 )
            break;
        }
        if ( *(unsigned __int8 *)(v11 + 8) > (int)v7 && *(_QWORD *)v11 != (int)*(_QWORD *)v11 )
          break;
        ++v12;
        v11 += 16;
        if ( v12 == v10 )
          goto LABEL_18;
      }
      v15 = *(_BYTE *)(v6 + 52);
      v16 = v15 & 7;
      if ( (v15 & 7) == 0 )
      {
        v36 = getinf(61);
        v16 = log2ceil(v36, v7, v37);
        v15 = *(_BYTE *)(v6 + 52);
      }
      v17 = (v16 + 1) | v15 & 0xF8;
      *(_BYTE *)(v6 + 52) = v17;
      if ( v12 == v9[1] || (v17 & 7u) > 5 )
      {
LABEL_18:
        if ( (v13 & 2) != 0 )
          *(_DWORD *)(v6 + 48) |= 0x40u;
        break;
      }
    }
  }
  else if ( (getinf(57) & 0xF) != 1 && (*(_BYTE *)(v6 + 48) & 0xC0) == 0 )
  {
    v38 = (unsigned __int8)getinf(61);
    v39 = *(__int64 **)(*(_QWORD *)(a1 + 128) + 56LL);
    v40 = v39[1];
    if ( v40 )
    {
      v41 = *v39;
      v42 = v41 + 16 * v40;
      do
      {
        if ( v38 < *(unsigned __int8 *)(v41 + 8) )
          v38 = *(unsigned __int8 *)(v41 + 8);
        v41 += 16;
      }
      while ( v41 != v42 );
    }
    if ( (unsigned __int8)getinf(61) < v38 && v38 <= 8 && (v38 & (v38 - 1)) == 0 )
      *(_BYTE *)(v6 + 52) = (log2ceil(v38, a2, v43) + 1) | *(_BYTE *)(v6 + 52) & 0xF8;
  }
  v18 = *(_DWORD *)(a1 + 744) & 0x400;
  if ( v18 )
    goto LABEL_33;
  if ( (*(_BYTE *)(v6 + 52) & 7) != 0 )
    v19 = 1 << ((*(_BYTE *)(v6 + 52) & 7) - 1);
  else
    v19 = (unsigned __int8)getinf(61);
  v45 = -1;
  v20 = 8 * v19;
  if ( v20 <= 63 )
    v45 = (1LL << v20) - 1;
  if ( !*(_QWORD *)(v6 + 8) )
  {
LABEL_33:
    v24 = *(_QWORD *)(a1 + 128);
    v50 = -1;
    ptr = nullptr;
    v49 = 1;
    v25 = *(char **)(v24 + 128);
    v26 = &v25[24 * *(_QWORD *)(v24 + 136)];
    if ( v25 != v26 )
    {
      do
      {
        v27 = (__int64)v25;
        v25 += 24;
        value_repr_t__parse_value_repr((__int64)&ptr, v27, *(_BYTE *)(v24 + 186));
      }
      while ( v26 != v25 );
      v24 = *(_QWORD *)(a1 + 128);
      v26 = *(char **)(v24 + 128);
    }
    if ( v26 )
    {
      v28 = *(_QWORD *)(v24 + 136);
      if ( v28 )
      {
        for ( i = 0; i != v28; ++i )
        {
          v30 = &v26[24 * i];
          v31 = *(void **)v30;
          if ( *(_QWORD *)v30 )
          {
            *((_QWORD *)v30 + 1) = 0;
            qfree(v31);
          }
          v26 = *(char **)(v24 + 128);
        }
      }
      *(_QWORD *)(v24 + 136) = 0;
      qfree(v26);
      *(_QWORD *)(v24 + 128) = 0;
      *(_QWORD *)(v24 + 144) = 0;
    }
    v32 = *(void **)(v24 + 152);
    if ( v32 )
    {
      *(_QWORD *)(v24 + 160) = 0;
      qfree(v32);
      *(_QWORD *)(v24 + 152) = 0;
      *(_QWORD *)(v24 + 168) = 0;
    }
    enum_type_data_t__set_value_repr(v6, &ptr);
    v33 = *(_QWORD *)(a1 + 176);
    v34 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 168) + v33 - 1);
    if ( v33 )
      *(_QWORD *)(a1 + 176) = v33 - 1;
    *(_DWORD *)(a1 + 220) = v34;
    sub_5E83D0((_QWORD *)a1);
    return 0;
  }
  else
  {
    v21 = 0;
    while ( 1 )
    {
      v22 = haystack;
      v23 = *(_QWORD *)v6 + 56 * v21;
      if ( *(_QWORD *)(v23 + 8) )
        v22 = *(const char **)v23;
      if ( (unsigned int)get_named_type(
                           *(_QWORD *)(a1 + 248),
                           (_DWORD)v22,
                           74,
                           (unsigned int)&ptr,
                           0,
                           0,
                           0,
                           0,
                           (__int64)&v46)
        && (!(unsigned __int8)sub_5EC2E0(a1, ptr) || ((v46 ^ *(_QWORD *)(v23 + 48)) & v45) != 0) )
      {
        break;
      }
      v21 = ++v18;
      if ( (unsigned __int64)v18 >= *(_QWORD *)(v6 + 8) )
        goto LABEL_33;
    }
    v44 = haystack;
    if ( *(_QWORD *)(v23 + 8) )
      v44 = *(const char **)v23;
    set_error_string(0, v44);
    return set_qerrno(52);
  }
}
