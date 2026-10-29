__m128 *__fastcall sub_F5D5B0(__m128 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // r12
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r13
  unsigned __int64 v17; // r12
  __int64 v18; // rax
  __int64 v19; // r12
  __int64 *v20; // r12
  __int64 v21; // rdi
  _QWORD *v22; // r13
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  _QWORD *v27; // rax
  unsigned __int64 v29; // r13
  __int64 v30; // rax
  unsigned __int64 v31; // r12
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax

  v8 = *(_QWORD *)(*(_QWORD *)(a4 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v8 + 16) - 25 > 1 )
    v8 = sub_F3F310(*(_QWORD *)(*(_QWORD *)(a4 + 48) & 0xFFFFFFFFFFFFFFF0LL));
  v9 = *(_QWORD *)(*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v9 + 16) - 25 > 1 )
    v9 = sub_F3F310(v9);
  v10 = *(_QWORD *)&byte_8[*(_QWORD *)(v9 + 24) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
      | ((unsigned __int8)*(_QWORD *)&byte_8[*(_QWORD *)(v9 + 24) & 0xFFFFFFFFFFFFFFF0LL]
       | (unsigned __int8)*(_QWORD *)(v9 + 24))
      & 7;
  v11 = *(_QWORD *)&byte_8[*(_QWORD *)(v8 + 24) & 0xFFFFFFFFFFFFFFF0LL];
  v12 = v11 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v11 | *(_BYTE *)(v8 + 24)) & 7;
  if ( v12 == v10 )
    goto LABEL_13;
  v13 = v10 & 0xFFFFFFFFFFFFFFF0LL;
  v14 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
  v15 = *(unsigned __int8 *)(v14 + 16);
  if ( (_DWORD)v15 == 43 || (_DWORD)v15 == 44 )
  {
    if ( !v13 )
      v14 = 0x10102464C457FLL;
    while ( 1 )
    {
      v16 = *(_QWORD *)(v14 + 32);
      if ( (*(_BYTE *)(v14 + 18) & 0x10) == 0 )
        break;
      while ( 1 )
      {
        v29 = v16 & 0xFFFFFFFFFFFFFFF0LL;
        v14 = *(_QWORD *)v29;
        if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v29 + 16LL) - 43 <= 1 )
          break;
        v30 = sub_F3F310(v14);
        v16 = *(_QWORD *)(v30 + 32);
        if ( (*(_BYTE *)(v30 + 18) & 0x10) == 0 )
          goto LABEL_19;
      }
    }
LABEL_19:
    v31 = v12 & 0xFFFFFFFFFFFFFFF0LL;
    if ( !v31 || (v32 = *(_QWORD *)v31, (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v31 + 16LL) - 43 > 1) )
      v32 = 0x10102464C457FLL;
    while ( 1 )
    {
      v33 = *(_QWORD *)(v32 + 32);
      if ( (*(_BYTE *)(v32 + 18) & 0x10) == 0 )
        break;
      while ( 1 )
      {
        v32 = *(_QWORD *)(v33 & 0xFFFFFFFFFFFFFFF0LL);
        if ( (unsigned int)*(unsigned __int8 *)(v32 + 16) - 43 <= 1 )
          break;
        v34 = sub_F3F310(v32);
        v33 = *(_QWORD *)(v34 + 32);
        if ( (*(_BYTE *)(v34 + 18) & 0x10) == 0 )
          goto LABEL_24;
      }
    }
LABEL_24:
    v19 = v33;
  }
  else
  {
    v16 = *(_QWORD *)(v14 + 32);
    v17 = v12 & 0xFFFFFFFFFFFFFFF0LL;
    if ( !v17 || (v18 = *(_QWORD *)v17, *(_BYTE *)(*(_QWORD *)v17 + 16LL) != 42) )
      v18 = 0x10102464C457FLL;
    v19 = *(_QWORD *)(v18 + 32);
  }
  v20 = (__int64 *)(v19 & 0xFFFFFFFFFFFFFFF0LL);
  v21 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (v21 & 0xFFFFFFFFFFFFFFF0LL) == (*v20 & 0xFFFFFFFFFFFFFFF0LL) )
  {
LABEL_13:
    a1[1].m128_u64[0] = 0;
    *a1 = 0;
    return a1;
  }
  else
  {
    v22 = sub_F3D1D0(v21, a2, v21 & 0xFFFFFFFFFFFFFFF0LL, v15, a5, a6);
    v27 = sub_F3D1D0(*v20, a2, v23, v24, v25, v26);
    sub_F5D3E0(a1, a2, (__int64)v27, (__int64)v22);
    return a1;
  }
}

