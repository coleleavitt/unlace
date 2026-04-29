__int64 __fastcall sub_29E610(
        __int64 a1,
        int *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 (__fastcall ***a5)(_QWORD, __int64))
{
  int v8; // eax
  int v10; // esi
  unsigned __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // r14
  unsigned __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // r14
  __int64 v20; // rdi
  int v21; // edx
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  char v26; // r8
  __int64 v27; // rdx
  int v28; // ebp
  int v29; // r12d
  __int64 v30; // rax
  char tinfo_property; // al
  __int64 v32; // r14
  __int64 v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // r15
  int *v36; // rcx
  unsigned int v37; // ebp
  __int64 v38; // rbp
  int v39; // eax
  unsigned int v41; // ebp
  int v42; // r12d
  __int64 v43; // r14
  int *v44; // rdi
  __int64 v45; // rax
  char *v46; // rax
  char v47; // al
  int v48; // edx
  int v49; // edx
  __int64 v50; // [rsp+8h] [rbp-90h]
  char v51; // [rsp+8h] [rbp-90h]
  __int64 v52; // [rsp+8h] [rbp-90h]
  char *v53; // [rsp+10h] [rbp-88h]
  int *v55; // [rsp+20h] [rbp-78h] BYREF
  __int128 v56; // [rsp+28h] [rbp-70h]
  char *s1; // [rsp+40h] [rbp-58h] BYREF
  __int128 v58; // [rsp+48h] [rbp-50h]
  unsigned __int64 v59; // [rsp+58h] [rbp-40h]

  v8 = *(_DWORD *)(a4 + 40) & 0x68;
  v59 = __readfsqword(0x28u);
  *a2 = v8;
  v10 = *(_DWORD *)(a4 + 36);
  if ( *(_DWORD *)(a4 + 32) != v10 )
    *a2 = ((*(_DWORD *)(a4 + 32) > v10) + 1) | v8;
  v11 = *(_QWORD *)(a4 + 16);
  if ( !v11 )
    return 0;
  v12 = *(_QWORD *)(a4 + 8);
  v13 = v12 + 32 * v11;
  if ( v12 != v13 )
  {
    do
    {
      v14 = v12;
      v12 += 32;
      sub_297870(v14, a3, *(_DWORD *)(a4 + 40));
    }
    while ( v13 != v12 );
    v11 = *(_QWORD *)(a4 + 16);
    v15 = *(_QWORD *)(a4 + 8);
    v16 = 32 * v11;
    v13 = v15 + 32 * v11;
    if ( v15 != v13 )
    {
      if ( v16 >> 5 )
      {
        _BitScanReverse64(&v17, v16 >> 5);
        v50 = *(_QWORD *)(a4 + 8);
        sub_29D7A0(v15, v15 + v16, 2LL * (int)v17);
        v18 = v50;
        if ( v16 > 512 )
        {
          v19 = v50 + 512;
          sub_29BE30(v50, v50 + 512);
          do
          {
            v20 = v19;
            v19 += 32;
            sub_29BC30(v20);
          }
          while ( v13 != v19 );
          v13 = *(_QWORD *)(a4 + 8);
          v11 = *(_QWORD *)(a4 + 16);
          goto LABEL_12;
        }
      }
      else
      {
        v52 = *(_QWORD *)(a4 + 8);
        sub_29D7A0(v15, v15 + v16, -2);
        v18 = v52;
      }
      sub_29BE30(v18, v13);
      v13 = *(_QWORD *)(a4 + 8);
      v11 = *(_QWORD *)(a4 + 16);
    }
LABEL_12:
    if ( !v11 )
      goto LABEL_22;
  }
  v21 = 0;
  v22 = -1;
  v23 = 0;
  do
  {
    v24 = v13 + 32 * v23;
    if ( *(_DWORD *)v24 == 2 )
    {
      v25 = *(_QWORD *)(v24 + 8);
      if ( *(_DWORD *)v25 == 3 )
      {
        if ( *(_QWORD *)(v25 + 8) )
        {
          if ( (_DWORD)v22 != -1 )
            goto LABEL_22;
          v22 = v21;
        }
      }
    }
    v23 = ++v21;
  }
  while ( v21 < v11 );
  if ( (_DWORD)v22 != -1 )
    sub_29AC80(v13 + 32 * v22, *(_QWORD *)(a3 + 1504));
LABEL_22:
  v26 = *(_BYTE *)(a4 + 40);
  v56 = 0;
  v55 = nullptr;
  sub_298EA0(a3, (__int64 *)&v55, (__int64 *)(a4 + 8), a5, (v26 & 8) == 0);
  v27 = v56;
  if ( (unsigned __int64)v56 <= 1 )
  {
    v36 = v55;
    goto LABEL_34;
  }
  v51 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  do
  {
    while ( 1 )
    {
      s1 = nullptr;
      v32 = v30;
      v58 = 0;
      v33 = *(_QWORD *)(a4 + 8) + 32LL * v55[v30];
      v34 = *(_QWORD *)(v33 + 16);
      v35 = v33;
      if ( (v34 & 0x100) == 0 )
        goto LABEL_24;
      if ( !get_tinfo_pdata(&s1, *(_QWORD *)(v33 + 16), 2) )
      {
        v34 = *(_QWORD *)(v35 + 16);
LABEL_24:
        tinfo_property = get_tinfo_property(v34, 2);
        if ( (tinfo_property & 0x3E) != 0 && ((tinfo_property & 0xFu) <= 8 || (tinfo_property & 0x3F) == 0x2D) )
          v51 |= !(*(_BYTE *)(*(_QWORD *)(a4 + 8) + 32LL * v55[v32] + 4) >> 7);
        if ( s1 )
        {
          *(_QWORD *)&v58 = 0;
          qfree(s1);
        }
        goto LABEL_29;
      }
      if ( !(_QWORD)v58 || (v53 = s1, strcmp(s1, "LPVOID")) )
      {
        v47 = get_tinfo_property(*(_QWORD *)(v35 + 16), 2);
        v48 = v29;
        v29 |= 2u;
        v34 = *(_QWORD *)(v35 + 16);
        v49 = v48 | 1;
        if ( (unsigned __int8)((v47 & 0xF) - 10) <= 2u )
          v29 = v49;
        goto LABEL_24;
      }
      if ( v53 )
        break;
LABEL_29:
      ++v28;
      v27 = v56;
      v30 = v28;
      if ( v28 >= (unsigned __int64)v56 )
        goto LABEL_47;
    }
    *(_QWORD *)&v58 = 0;
    ++v28;
    qfree(v53);
    v27 = v56;
    v30 = v28;
  }
  while ( v28 < (unsigned __int64)v56 );
LABEL_47:
  v36 = v55;
  if ( v29 )
  {
    v41 = v27 - 1;
    if ( (int)v27 - 1 >= 0 )
    {
      v42 = v29 & 2;
      v43 = v41;
      while ( 1 )
      {
        v44 = &v36[v43];
        v45 = *(_QWORD *)(*(_QWORD *)(a4 + 8) + 32LL * v36[v43] + 16);
        if ( (*(_BYTE *)(*(_QWORD *)(a4 + 8) + 32LL * v36[v43] + 16) & 0xF) != 0xA )
          goto LABEL_50;
        if ( !v42 )
        {
          s1 = nullptr;
          v46 = (char *)get_tinfo_property(v45, 10);
          s1 = v46;
          if ( (_BYTE)v46
            && (((unsigned __int8)v46 & 0xE) != 0 || ((unsigned __int8)v46 & 0x30) == 0)
            && ((unsigned __int8)v46 & 0x3F) != 1 )
          {
            clear_tinfo_t(&s1);
            v36 = v55;
LABEL_50:
            if ( !v51 )
              goto LABEL_53;
            v44 = &v36[v43];
            if ( *(char *)(*(_QWORD *)(a4 + 8) + 32LL * v36[v43] + 4) >= 0 )
              goto LABEL_53;
            goto LABEL_52;
          }
          clear_tinfo_t(&s1);
          v44 = &v55[v43];
        }
LABEL_52:
        memmove(v44, v44 + 1, 4 * v56 - 4 - v43 * 4);
        *(_QWORD *)&v56 = v56 - 1;
        v36 = v55;
LABEL_53:
        --v41;
        --v43;
        if ( v41 == -1 )
        {
          v27 = v56;
          break;
        }
      }
    }
  }
LABEL_34:
  v37 = 0;
  if ( v27 )
  {
    v38 = 32LL * *v36;
    copy_tinfo_t(a1, v38 + *(_QWORD *)(a4 + 8) + 16);
    v39 = *(_DWORD *)(*(_QWORD *)(a4 + 8) + v38 + 4);
    if ( (v39 & 4) != 0 )
    {
      *a2 |= 4u;
      v39 = *(_DWORD *)(*(_QWORD *)(a4 + 8) + v38 + 4);
    }
    v36 = v55;
    if ( (v39 & 0x80u) != 0 )
      *a2 |= 0x80u;
    v37 = 1;
  }
  if ( v36 )
  {
    *(_QWORD *)&v56 = 0;
    qfree(v36);
  }
  return v37;
}
