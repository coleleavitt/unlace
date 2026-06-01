void __fastcall sub_16654E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  const char *v10; // rsi
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbp
  unsigned __int64 v17; // rbp
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 *v23; // rax
  __int64 v24; // rbp
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rsi
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 *v31; // rax
  __int64 v32; // r13
  size_t v33; // r14
  const char *v34; // rax
  size_t v35; // rdx
  size_t v36; // r14
  const char *v37; // rax
  size_t v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rdi
  unsigned __int64 v42; // rdi
  __int64 v43; // rdx
  unsigned __int64 *v44; // rax
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // rax
  unsigned __int64 *v48; // rax
  __int64 *v49; // rdx
  unsigned __int64 v50; // rcx
  unsigned __int64 v51; // rax
  __int64 *i; // rax
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rsi
  __int64 v56; // rax
  __int64 v57; // rdx

  if ( !(unsigned int)sub_B76070(a2, a2, a3, a4) )
    return;
  if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x26 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
    v8 = (unsigned int)*(unsigned __int8 *)(v7 + 16) - 25;
    if ( (unsigned int)v8 > 1 )
      v7 = sub_F63050(v7, a2, v8, v6);
    v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v9 + 16) == 13 && ((*(_WORD *)(v9 + 18) >> 3) & 0x1FF) == 0x1B3 )
      return;
  }
  v10 = nullptr;
  v11 = sub_B75A50(a2, 0);
  if ( v11 )
  {
    if ( v11 > 0x27E )
    {
      if ( v11 < 0x3C5 || v11 > 0x3C6 && v11 != 1498 )
        return;
    }
    else if ( v11 < 0x27D && v11 != 134 && v11 != 201 && v11 != 121 )
    {
      return;
    }
    v23 = *(__int64 **)(a2 + 120);
    v24 = *v23;
    if ( (*(_BYTE *)(*v23 + 29) & 1) != 0 )
    {
      v44 = sub_B8C3D0(*v23, 0, v12, v13, v14, v15);
      v45 = *v44;
      v46 = *v44 + 8LL * *((unsigned int *)v44 + 2);
      if ( *v44 >= v46 )
      {
        if ( v45 != v46 )
        {
          while ( *(_WORD *)(*(_QWORD *)v46 + 36LL) != 67 )
          {
            v46 += 8LL;
            if ( v45 == v46 )
              goto LABEL_24;
          }
          return;
        }
      }
      else
      {
        v47 = *v44;
        while ( *(_WORD *)(*(_QWORD *)v47 + 36LL) != 67 )
        {
          v47 += 8LL;
          if ( v46 == v47 )
            goto LABEL_24;
        }
        if ( v46 != v47 )
          return;
      }
    }
LABEL_24:
    v25 = v24;
    v28 = sub_B320D0(
            *(_QWORD *)(a1 + 248),
            ((unsigned __int64)*(unsigned int *)(a2 + 24) << 32) | *(unsigned int *)(a2 + 24),
            0);
    goto LABEL_25;
  }
  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 35 > 3 )
    return;
  v16 = *(_QWORD *)(sub_B8C1B0(a2 + 72) + 16);
  if ( (v16 & 4) != 0 )
    v17 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v17 = v16 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v17 )
    v17 -= 64LL;
  if ( !sub_B8EC80(v17) )
    return;
  v22 = *(_QWORD *)(v17 + 40);
  if ( (v22 & 7) != 0 || (v22 & 0xFFFFFFFFFFFFFFF8LL) == 0 || (*(_BYTE *)(a2 + 28) & 0x7F) != 0x26 )
    return;
  v31 = *(__int64 **)(a2 + 120);
  v32 = *v31;
  if ( (*(_BYTE *)(*v31 + 29) & 1) == 0 )
    goto LABEL_32;
  v48 = sub_B8C3D0(*v31, 0, v18, v19, v20, v21);
  v49 = (__int64 *)*v48;
  v50 = *v48 + 8LL * *((unsigned int *)v48 + 2);
  if ( *v48 >= v50 )
  {
    if ( v49 != (__int64 *)v50 )
    {
      if ( *(_WORD *)(*(_QWORD *)v50 + 36LL) == 67 )
        return;
      for ( i = (__int64 *)(v50 + 8); i != v49; ++i )
      {
        v53 = *i;
        if ( *(_WORD *)(v53 + 36) == 67 )
          return;
      }
    }
    goto LABEL_32;
  }
  v51 = *v48;
  while ( *(_WORD *)(*(_QWORD *)v51 + 36LL) != 67 )
  {
    v51 += 8LL;
    if ( v50 == v51 )
      goto LABEL_32;
  }
  if ( v50 == v51 )
  {
LABEL_32:
    v33 = j__strlen("basic_string_view");
    v34 = sub_995750(v17);
    if ( v35 == v33
      && (!v35 || (v10 = "basic_string_view", !memcmp(v34, "basic_string_view", v35)))
      && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v32 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                              & 0xFFFFFFFFFFFFFFF0LL)
                  + 16LL) == 42 )
    {
      v56 = *(unsigned int *)(a2 + 24);
      v55 = v56 << 32;
    }
    else
    {
      v36 = j__strlen("span");
      v37 = sub_995750(v17);
      if ( v38 != v36 )
        return;
      if ( v38 )
      {
        v10 = "span";
        if ( memcmp(v37, "span", v38) )
          return;
      }
      v40 = *(_QWORD *)(*(_QWORD *)(v32 + 48) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v40 + 16) != 43 )
      {
        v57 = *(_QWORD *)(*(_QWORD *)(v40 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v57 + 16) != 43 )
          return;
        v40 = sub_F63050(*(_QWORD *)(*(_QWORD *)(v32 + 48) & 0xFFFFFFFFFFFFFFF0LL), v10, v57, v39);
        if ( !v40 )
          return;
      }
      while ( 1 )
      {
        v41 = *(_QWORD *)(v40 + 32);
        if ( (*(_BYTE *)(v40 + 18) & 0x10) == 0 )
          break;
        v42 = v41 & 0xFFFFFFFFFFFFFFF0LL;
        v40 = *(_QWORD *)v42;
        v43 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v42 + 16LL) - 43;
        if ( (unsigned int)v43 > 1 )
          v40 = sub_F63050(v40, v10, v43, v39);
      }
      v54 = *(_QWORD *)(v41 & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v54 + 16) == 40 )
        v54 = *(_QWORD *)(sub_F64990(v41) & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v54 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
        return;
      v55 = *(unsigned int *)(a2 + 24);
      v56 = v55 << 32;
    }
    v25 = v32;
    v28 = sub_B320D0(*(_QWORD *)(a1 + 248), v56 | v55, 0);
LABEL_25:
    sub_B8CC60(v25, v28, v26, v27, v29, v30);
  }
}
