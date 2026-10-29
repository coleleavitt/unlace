__int64 __fastcall sub_37DB00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char *v8; // rax
  char v9; // al
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v14; // rax
  const char *v15; // r14
  const void **v16; // rbx
  __int64 v17; // r15
  __int64 v18; // rax
  size_t v19; // r15
  const void **v20; // rdi
  char *v21; // rbx
  __int64 v22; // rsi
  size_t v23; // rdx
  const void **v24; // rdi
  char *v25; // rax
  unsigned __int64 v26; // r9
  unsigned __int64 v27; // rdx
  char *v28; // r13
  __int64 v29; // rax
  size_t v30; // r9
  unsigned __int64 v31; // rax
  const void **v32; // rax
  const void **v33; // r13
  __int64 j; // r14
  char *v35; // rdx
  size_t v36; // r8
  size_t v37; // r15
  char *v38; // rsi
  char *v39; // r15
  const char *v40; // rdi
  __int64 named_type_tid; // rax
  __int64 v42; // r15
  int v43; // eax
  __int64 v44; // rcx
  char *v45; // rax
  unsigned __int64 v46; // r15
  char v47; // r14
  unsigned __int64 v48; // rbx
  char *v49; // rdx
  char *v50; // rax
  void *v51; // rdi
  __int64 v52; // r8
  __int64 v53; // rdx
  char *v54; // rax
  void *i; // [rsp+0h] [rbp-3C0h]
  unsigned __int64 v56; // [rsp+8h] [rbp-3B8h]
  char *v57; // [rsp+8h] [rbp-3B8h]
  size_t v58; // [rsp+18h] [rbp-3A8h]
  size_t v59; // [rsp+20h] [rbp-3A0h]
  size_t v60; // [rsp+30h] [rbp-390h]
  void *ptr; // [rsp+38h] [rbp-388h] BYREF
  __int128 v62; // [rsp+40h] [rbp-380h]
  char *s; // [rsp+58h] [rbp-368h] BYREF
  __int128 v64; // [rsp+60h] [rbp-360h]
  __int128 v65; // [rsp+78h] [rbp-348h] BYREF
  void *v66; // [rsp+88h] [rbp-338h]
  __int128 v67; // [rsp+90h] [rbp-330h]
  void *v68; // [rsp+A0h] [rbp-320h]
  __int128 v69; // [rsp+A8h] [rbp-318h]
  _OWORD v70[3]; // [rsp+B8h] [rbp-308h] BYREF
  char *v71; // [rsp+E8h] [rbp-2D8h]
  int v72; // [rsp+F0h] [rbp-2D0h]
  __int64 v73; // [rsp+F8h] [rbp-2C8h]
  char v74; // [rsp+100h] [rbp-2C0h]
  int v75; // [rsp+108h] [rbp-2B8h]
  _QWORD v76[33]; // [rsp+110h] [rbp-2B0h] BYREF
  __int128 v77; // [rsp+218h] [rbp-1A8h] BYREF
  __int64 v78; // [rsp+228h] [rbp-198h]
  __int64 v79; // [rsp+230h] [rbp-190h]
  __int64 v80; // [rsp+238h] [rbp-188h]
  char v81; // [rsp+240h] [rbp-180h] BYREF
  _QWORD v82[8]; // [rsp+380h] [rbp-40h] BYREF

  v82[0] = __readfsqword(0x28u);
  v8 = &v81;
  v78 = -1;
  v79 = 0;
  v80 = 0;
  v77 = -1;
  do
  {
    *(_WORD *)v8 = 0;
    v8 += 40;
    *((_WORD *)v8 - 19) = 0;
    *((_WORD *)v8 - 18) = 0;
    *((_DWORD *)v8 - 2) = 0;
    *((_WORD *)v8 - 17) = 0;
    *((_OWORD *)v8 - 2) = 0;
    *((_QWORD *)v8 - 2) = 0;
  }
  while ( v82 != (_QWORD *)v8 );
  if ( (int)decode_insn(&v77, *(_QWORD *)(a1 + 8), v82, 0, 0, a6, 0.0) <= 0 )
    goto LABEL_10;
  v9 = *(_BYTE *)(a1 + 64);
  v75 = 0;
  if ( v9 != 7 )
  {
    v10 = 0;
    if ( v9 == 2 )
    {
      v11 = *(_QWORD *)(a1 + 72);
      v10 = 1;
      v75 = 1;
      v76[0] = v11;
    }
LABEL_7:
    v12 = (unsigned __int8)op_stroff(&v77, *(unsigned int *)(a1 + 40), v76, v10, *(_QWORD *)(a1 + 104), 0.0);
    goto LABEL_11;
  }
  v14 = *(_QWORD *)(a1 + 80);
  v62 = 0;
  ptr = nullptr;
  if ( !v14 )
    goto LABEL_10;
  v15 = *(const char **)(a1 + 72);
  v56 = (unsigned __int64)&v15[v14 - 1];
  if ( (unsigned __int64)v15 >= v56 )
  {
    if ( v14 == 1 || v15[v14 - 2] != 46 )
      goto LABEL_10;
    v17 = 0;
    v16 = nullptr;
  }
  else
  {
    v16 = nullptr;
    v17 = 0;
    for ( i = nullptr; ; i = *((void **)&v62 + 1) )
    {
      v25 = strchr(v15, 46);
      v26 = v56;
      v27 = v17 + 1;
      v28 = v25;
      if ( v25 )
        v26 = (unsigned __int64)v25;
      v30 = v26 - (_QWORD)v15;
      if ( (unsigned __int64)i < v27 )
      {
        v59 = v30;
        ptr = (void *)qvector_reserve(&ptr, v16, v27, 24);
        v17 = v62;
        v16 = (const void **)ptr;
        v30 = v59;
      }
      v18 = 3 * v17;
      v19 = v30;
      v20 = &v16[v18];
      *(_OWORD *)(v20 + 1) = 0;
      *v20 = nullptr;
      *(_QWORD *)&v62 = v62 + 1;
      v21 = (char *)v20[1];
      if ( v21 )
      {
        --v21;
        v19 = (size_t)&v21[v30];
      }
      v22 = (__int64)*v20;
      v23 = v19 + 1;
      if ( v19 != -1 )
      {
        v60 = v30;
        v29 = qvector_reserve(v20, v22, v23, 1);
        v30 = v60;
        v22 = v29;
        v23 = v19 + 1;
        *v20 = (const void *)v29;
      }
      v20[1] = (const void *)v23;
      *(_BYTE *)(v22 + v19) = 0;
      memmove(&v21[(_QWORD)*v20], v15, v30);
      v16 = (const void **)ptr;
      v17 = v62;
      v24 = (const void **)ptr;
      if ( !v28 )
        break;
      v15 = v28 + 1;
      if ( (unsigned __int64)(v28 + 1) >= v56 )
        break;
    }
    v31 = *(_QWORD *)(a1 + 80);
    if ( v31 < 2 || *(_BYTE *)(*(_QWORD *)(a1 + 72) + v31 - 2) != 46 )
      goto LABEL_31;
  }
  if ( *((_QWORD *)&v62 + 1) < (unsigned __int64)(v17 + 1) )
  {
    ptr = (void *)qvector_reserve(&ptr, v16, v17 + 1, 24);
    v17 = v62;
    v16 = (const void **)ptr;
  }
  v32 = &v16[3 * v17];
  *v32 = nullptr;
  v16 = (const void **)ptr;
  *(_OWORD *)(v32 + 1) = 0;
  v24 = v16;
  v17 = v62 + 1;
  *(_QWORD *)&v62 = v62 + 1;
LABEL_31:
  if ( !v17 )
  {
    if ( v24 )
LABEL_9:
      qfree(v24);
    goto LABEL_10;
  }
  s = nullptr;
  v33 = &v24[3 * v17];
  v64 = 0;
  if ( v33 == v24 )
  {
LABEL_94:
    if ( v24 )
      goto LABEL_91;
    goto LABEL_65;
  }
  for ( j = 0; ; j = v64 )
  {
    if ( !j )
    {
      v35 = (char *)v16[1];
      if ( !v35 )
        goto LABEL_66;
      v36 = (size_t)(v35 - 1);
      if ( v35 == (_BYTE *)&dword_0 + 1 )
        goto LABEL_66;
      v37 = (size_t)(v35 - 1);
      goto LABEL_37;
    }
    v39 = s;
    v45 = strchr(s, 46);
    if ( v45 && v45 - v39 != -1 )
    {
      v66 = nullptr;
      v68 = nullptr;
      v71 = (char *)&dword_0 + 1;
      v72 = -1;
      v73 = 0;
      v74 = 0;
      v65 = 0;
      v67 = 0;
      v69 = 0;
      v70[0] = 0;
      if ( get_udm_by_fullname(&v65, v39) < 0 || (v70[0] & 0x100) == 0 || !get_tinfo_pdata(&s, *(_QWORD *)&v70[0], 0) )
      {
        clear_tinfo_t(v70);
        if ( v68 )
        {
          *(_QWORD *)&v69 = 0;
          qfree(v68);
        }
        if ( v66 )
        {
          *(_QWORD *)&v67 = 0;
          qfree(v66);
        }
        goto LABEL_57;
      }
      clear_tinfo_t(v70);
      if ( v68 )
      {
        *(_QWORD *)&v69 = 0;
        qfree(v68);
      }
      if ( v66 )
      {
        *(_QWORD *)&v67 = 0;
        qfree(v66);
      }
      j = v64;
      v39 = s;
      if ( (unsigned __int64)v64 > 1 )
      {
LABEL_76:
        v52 = j - 1;
        v53 = j + 1;
        v54 = v39;
        if ( *((_QWORD *)&v64 + 1) < (unsigned __int64)(j + 1) )
        {
          v54 = (char *)qvector_reserve(&s, v39, v53, 1);
          v52 = j - 1;
          v53 = j + 1;
          s = v54;
        }
        *(_QWORD *)&v64 = v53;
        v54[v52] = 46;
        s[j] = 0;
        j = v64;
      }
      v35 = (char *)v16[1];
      if ( !v35 )
        goto LABEL_40;
      goto LABEL_80;
    }
    if ( j != 1 )
      goto LABEL_76;
    v35 = (char *)v16[1];
    if ( !v35 )
    {
LABEL_41:
      v40 = v39;
      goto LABEL_42;
    }
LABEL_80:
    v37 = (size_t)(v35 - 1);
    if ( v35 == (_BYTE *)&dword_0 + 1 )
      goto LABEL_40;
    if ( j )
    {
      --j;
      v36 = v37 + j;
      v35 += j;
    }
    else
    {
      v36 = (size_t)(v35 - 1);
    }
LABEL_37:
    v38 = s;
    if ( *((_QWORD *)&v64 + 1) < (unsigned __int64)v35 )
    {
      v58 = v36;
      v57 = v35;
      s = (char *)qvector_reserve(&s, s, v35, 1);
      v36 = v58;
      v38 = s;
      v35 = v57;
    }
    *(_QWORD *)&v64 = v35;
    v38[v36] = 0;
    memcpy(&s[j], *v16, v37);
    j = v64;
LABEL_40:
    v39 = s;
    if ( j )
      goto LABEL_41;
LABEL_66:
    v40 = haystack;
LABEL_42:
    named_type_tid = get_named_type_tid(v40);
    v42 = named_type_tid;
    if ( named_type_tid == -1 )
      goto LABEL_57;
    *(_QWORD *)&v65 = 0;
    if ( !(unsigned __int8)get_type_by_tid(&v65, named_type_tid) )
    {
LABEL_69:
      clear_tinfo_t(&v65);
LABEL_57:
      if ( s )
      {
        *(_QWORD *)&v64 = 0;
        qfree(s);
        v24 = (const void **)ptr;
        if ( !ptr )
          goto LABEL_10;
      }
      else
      {
        v24 = (const void **)ptr;
        if ( !ptr )
          goto LABEL_10;
      }
      v46 = v62;
      v47 = 0;
      if ( !(_QWORD)v62 )
        goto LABEL_9;
      goto LABEL_60;
    }
    v43 = v75;
    v44 = 0;
    if ( !v75 )
      goto LABEL_45;
    if ( (get_tinfo_property(v65, 2) & 0x3F) == 0x1D )
    {
      v44 = v75;
      v43 = v75;
      if ( (unsigned __int64)v75 > 0x1F )
        goto LABEL_69;
LABEL_45:
      v76[v44] = v42;
      v75 = v43 + 1;
    }
    v16 += 3;
    clear_tinfo_t(&v65);
    if ( v33 == v16 )
      break;
  }
  if ( !s )
  {
    v24 = (const void **)ptr;
    goto LABEL_94;
  }
  *(_QWORD *)&v64 = 0;
  qfree(s);
  v24 = (const void **)ptr;
  if ( !ptr )
    goto LABEL_65;
LABEL_91:
  v46 = v62;
  v47 = 1;
  if ( !(_QWORD)v62 )
  {
    qfree(v24);
    goto LABEL_65;
  }
LABEL_60:
  v48 = 0;
  v49 = (char *)v24;
  do
  {
    v50 = &v49[24 * v48];
    v51 = *(void **)v50;
    if ( *(_QWORD *)v50 )
    {
      *((_QWORD *)v50 + 1) = 0;
      qfree(v51);
      v49 = (char *)ptr;
    }
    ++v48;
  }
  while ( v48 < v46 );
  *(_QWORD *)&v62 = 0;
  qfree(v49);
  if ( v47 )
  {
LABEL_65:
    v10 = (unsigned int)v75;
    goto LABEL_7;
  }
LABEL_10:
  v12 = 0;
LABEL_11:
  *(_QWORD *)(a2 + 8) = v12;
  return 0;
}
