unsigned __int64 __fastcall sub_378600(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v5; // rax
  __int64 v6; // rcx
  __int64 *v7; // rdi
  bool v8; // zf
  const char *v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned __int64 v17; // r14
  __int64 v18; // r13
  __int64 *v19; // r12
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // r13
  __int64 v23; // r12
  __int64 *v24; // r14
  __int64 *v25; // rbp
  __int64 v26; // rsi
  __int64 v27; // rax
  int v28; // edx
  int v29; // eax
  const char *v30; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  unsigned __int64 v34; // [rsp+0h] [rbp-80h]
  __int64 v35; // [rsp+8h] [rbp-78h] BYREF
  __int128 v36; // [rsp+10h] [rbp-70h]
  __int64 v37; // [rsp+20h] [rbp-60h]
  __int128 v38; // [rsp+28h] [rbp-58h]
  __int64 v39; // [rsp+38h] [rbp-48h]
  unsigned __int64 v40; // [rsp+40h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  *(_QWORD *)a1 = &stru_86F6A0;
  *(_QWORD *)(a1 + 8) = 0x3FF000004LL;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 48) = 2;
  *(_DWORD *)(a1 + 72) = -1;
  *(_QWORD *)(a1 + 56) = a1 + 232;
  *(_QWORD *)(a1 + 64) = &off_867900;
  v5 = (_QWORD *)(a1 + 80);
  *(_OWORD *)(a1 + 16) = -1;
  do
  {
    *v5 = 0;
    v5 += 3;
    *((_OWORD *)v5 - 1) = 0;
  }
  while ( (_QWORD *)(a1 + 176) != v5 );
  *(_DWORD *)(a1 + 176) = 0;
  v6 = *(unsigned int *)(a1 + 12);
  if ( ((*(_DWORD *)(a1 + 12) >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(a1 + 11) != 0xFF )
    {
      if ( !under_debugger )
        interr(3449, ((*(_DWORD *)(a1 + 12) >> 19) & 0x3Fu) - 1, a3, v6, 0.0);
      BUG();
    }
    *(_BYTE *)(a1 + 11) = ((*(_DWORD *)(a1 + 12) >> 19) & 0x3F) - 1;
    *(_DWORD *)(a1 + 12) = v6 & 0xFE07FFFF;
  }
  *(_QWORD *)(a1 + 184) = 0;
  v7 = (__int64 *)(a1 + 208);
  *(_QWORD *)(a1 + 208) = 0;
  *(_OWORD *)(a1 + 192) = 0;
  *(_OWORD *)(a1 + 216) = 0;
  v8 = *(_QWORD *)(a3 + 8) == 0;
  *(_QWORD *)a1 = path_details_chooser_t___vtable;
  v9 = &s1;
  if ( !v8 )
    v9 = *(const char **)a3;
  sub_169A50(v7, (__int64)"Path details: %s", v9);
  v10 = *(_QWORD *)(a2 + 24);
  v11 = *(_QWORD *)(a1 + 192);
  v34 = v10;
  if ( v10 == v11 )
  {
LABEL_23:
    *(_QWORD *)(a1 + 232) = 0x2800000008LL;
    if ( !v34 )
      goto LABEL_30;
    goto LABEL_24;
  }
  v39 = 0;
  v35 = 0;
  v37 = 0;
  v36 = 0;
  v38 = 0;
  if ( v10 < v11 )
  {
    v17 = v10;
    v18 = 56 * v10;
    do
    {
      v19 = (__int64 *)(v18 + *(_QWORD *)(a1 + 184));
      v20 = v19[3];
      if ( v20 )
      {
        v19[4] = 0;
        qfree(v20, "Path details: %s");
      }
      v21 = *v19;
      if ( *v19 )
      {
        v19[1] = 0;
        qfree(v21, "Path details: %s");
      }
      ++v17;
      v18 += 56;
    }
    while ( v17 < v11 );
    *(_QWORD *)(a1 + 192) = v34;
    goto LABEL_23;
  }
  v12 = *(_QWORD *)(a1 + 184);
  v13 = *(_QWORD *)(a1 + 200);
  v14 = a1 + 184;
  if ( (unsigned __int64)&v35 < v12 || (unsigned __int64)&v35 >= v12 + 56 * v13 )
  {
    if ( v13 >= v34
      || (v12 = qvector_reserve(v14, *(_QWORD *)(a1 + 184), v34, 56),
          v11 = *(_QWORD *)(a1 + 192),
          *(_QWORD *)(a1 + 184) = v12,
          v11 < v34) )
    {
      v15 = 56 * v11;
      while ( 1 )
      {
        v16 = v15 + v12;
        ++v11;
        v15 += 56;
        *(_QWORD *)v16 = 0;
        *(_QWORD *)(v16 + 24) = 0;
        *(_QWORD *)(v16 + 48) = 0;
        *(_OWORD *)(v16 + 8) = 0;
        *(_OWORD *)(v16 + 32) = 0;
        if ( v34 == v11 )
          break;
        v12 = *(_QWORD *)(a1 + 184);
      }
    }
  }
  else if ( v13 >= v34
         || (v12 = qvector_reserve(v14, *(_QWORD *)(a1 + 184), v34, 56),
             v11 = *(_QWORD *)(a1 + 192),
             *(_QWORD *)(a1 + 184) = v12,
             v11 < v34) )
  {
    v32 = 56 * v11;
    while ( 1 )
    {
      v33 = v32 + v12;
      ++v11;
      v32 += 56;
      *(_QWORD *)v33 = 0;
      *(_QWORD *)(v33 + 24) = 0;
      *(_QWORD *)(v33 + 48) = 0;
      *(_OWORD *)(v33 + 8) = 0;
      *(_OWORD *)(v33 + 32) = 0;
      if ( v34 == v11 )
        break;
      v12 = *(_QWORD *)(a1 + 184);
    }
  }
  *(_QWORD *)(a1 + 192) = v34;
  *(_QWORD *)(a1 + 232) = 0x2800000008LL;
LABEL_24:
  v22 = 0;
  v23 = 0;
  do
  {
    v24 = (__int64 *)(*(_QWORD *)(a2 + 16) + 8 * v23);
    v25 = (__int64 *)(v22 + *(_QWORD *)(a1 + 184));
    v26 = *v24;
    v25[6] = *v24;
    sub_375590(v25, v26);
    get_ea_name(v25 + 3, *v24, 0, 0);
    v27 = v25[1];
    v28 = v27 - 1;
    v8 = v27 == 0;
    v29 = 0;
    if ( !v8 )
      v29 = v28;
    if ( *(_DWORD *)(a1 + 232) < v29 )
      *(_DWORD *)(a1 + 232) = v29;
    ++v23;
    v22 += 56;
  }
  while ( v23 != v34 );
LABEL_30:
  v30 = &s1;
  if ( *(_QWORD *)(a1 + 216) )
    v30 = *(const char **)(a1 + 208);
  *(_QWORD *)(a1 + 40) = v30;
  return v40 - __readfsqword(0x28u);
}
