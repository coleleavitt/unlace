__int64 __fastcall sub_102120(__int64 a1, __int64 *a2)
{
  _DWORD *v2; // rdx
  _BYTE *v4; // r12
  int v5; // ecx
  char v6; // al
  int v7; // r15d
  __int64 v8; // rbx
  __int64 i; // r12
  __int64 v10; // rax
  unsigned int utf8_char; // eax
  int v13; // ebx
  int v14; // r15d
  __int64 v15; // r12
  __int64 v16; // rax
  unsigned int v17; // esi
  __int64 v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // r9
  __int64 v23; // rdi
  unsigned int v24; // esi
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // r12
  __int64 v31; // r15
  __int64 v32; // rdx
  __int64 v33; // rsi
  __int64 v34; // r13
  unsigned int v35; // r8d
  __int64 v36; // rdi
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // r12
  unsigned int v40; // esi
  __int64 v41; // rbx
  __int64 v42; // rax
  unsigned int v43; // r15d
  void *v44; // r13
  __int64 v45; // rdx
  size_t v46; // rbx
  __int64 *v47; // rdi
  char v49; // [rsp+10h] [rbp-A8h]
  __int64 v50; // [rsp+10h] [rbp-A8h]
  unsigned __int8 v51; // [rsp+2Fh] [rbp-89h]
  __int64 v52; // [rsp+30h] [rbp-88h] BYREF
  _BYTE *v53; // [rsp+38h] [rbp-80h] BYREF
  __int64 *v54; // [rsp+40h] [rbp-78h] BYREF
  __int128 v55; // [rsp+48h] [rbp-70h]
  unsigned __int64 v56; // [rsp+78h] [rbp-40h]

  v56 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 1208) <= 1u )
  {
    if ( a2 )
      *a2 = -1;
    return 0;
  }
  v2 = *(_DWORD **)(a1 + 752);
  v4 = *(_BYTE **)(a1 + 1200);
  v49 = *(_BYTE *)(a1 + 1233);
  if ( v49 )
  {
    v13 = v2[7] * v2[6];
    v53 = *(_BYTE **)(a1 + 1200);
    if ( v13 == qustrlen() )
    {
      v14 = 0;
      v50 = a1 + 1248;
      v15 = a1 + 1296;
      if ( v13 > 0 )
      {
        while ( 1 )
        {
          v16 = *(_QWORD *)(a1 + 1304);
          v17 = v14 + *(_DWORD *)(a1 + 1224);
          if ( v16 )
          {
            v18 = a1 + 1296;
            do
            {
              while ( 1 )
              {
                v19 = *(_QWORD *)(v16 + 16);
                v20 = *(_QWORD *)(v16 + 24);
                if ( *(_DWORD *)(v16 + 32) < v17 )
                  break;
                v18 = v16;
                v16 = *(_QWORD *)(v16 + 16);
                if ( !v19 )
                  goto LABEL_28;
              }
              v16 = *(_QWORD *)(v16 + 24);
            }
            while ( v20 );
LABEL_28:
            if ( v15 != v18 && v17 >= *(_DWORD *)(v18 + 32) && (unsigned __int8)sub_101CF0(a1) )
            {
              v21 = *(_QWORD *)(a1 + 1256);
              v22 = v51;
              v23 = v50;
              v24 = v14 + *(_DWORD *)(a1 + 1224);
              LODWORD(v52) = v24;
              if ( !v21 )
                goto LABEL_38;
              do
              {
                while ( 1 )
                {
                  v25 = *(_QWORD *)(v21 + 16);
                  v26 = *(_QWORD *)(v21 + 24);
                  if ( *(_DWORD *)(v21 + 32) < v24 )
                    break;
                  v23 = v21;
                  v21 = *(_QWORD *)(v21 + 16);
                  if ( !v25 )
                    goto LABEL_36;
                }
                v21 = *(_QWORD *)(v21 + 24);
              }
              while ( v26 );
LABEL_36:
              if ( v23 == v50 || v24 < *(_DWORD *)(v23 + 32) )
              {
LABEL_38:
                v54 = &v52;
                v27 = sub_FE5D0((_QWORD *)(a1 + 1240), v23, (_DWORD **)&v54);
                v22 = v51;
                v23 = v27;
              }
              *(_QWORD *)(v23 + 40) = v22;
            }
          }
          if ( skip_utf8() )
            break;
          if ( v13 == ++v14 )
            return 1;
        }
        if ( a2 )
          *a2 = v14;
        return 0;
      }
      return 1;
    }
    goto LABEL_45;
  }
  v52 = -1;
  v5 = v2[9];
  if ( !v5 )
  {
    v53 = v4;
    v28 = asctoreal();
    if ( !*v53 )
    {
      if ( v28 == 1 && (unsigned int)ieee2cpu() == 1 )
        goto LABEL_64;
      goto LABEL_45;
    }
    v54 = nullptr;
    v55 = 0;
    v46 = v53 - v4;
    if ( v53 != v4 )
    {
      v47 = nullptr;
      if ( v46 != -1 )
      {
        v54 = (__int64 *)qvector_reserve();
        v47 = v54;
      }
      *(_QWORD *)&v55 = v46 + 1;
      memmove(v47, v4, v46);
      *((_BYTE *)v54 + v46) = 0;
      if ( !a2 )
        goto LABEL_92;
      goto LABEL_91;
    }
    if ( a2 )
    {
LABEL_91:
      *a2 = qustrlen();
LABEL_92:
      if ( v54 )
      {
        *(_QWORD *)&v55 = 0;
        qfree();
      }
    }
    return 0;
  }
  while ( 1 )
  {
    v6 = *v4;
    if ( *v4 != 32 )
      break;
    ++v4;
  }
  if ( ((v6 - 43) & 0xFD) != 0 )
  {
    if ( v5 == 1 )
    {
      if ( v2[10] )
        v7 = 10;
      else
        v7 = 16;
    }
    else
    {
      v7 = (unsigned int)(v5 - 2) < 3 ? 16 : 10;
    }
    goto LABEL_10;
  }
  if ( v5 != 1 || v2[10] != 1 )
  {
LABEL_45:
    if ( a2 )
      *a2 = 0;
    return 0;
  }
  v7 = 10;
  v49 = v6 == 45;
  ++v4;
LABEL_10:
  v54 = (__int64 *)v4;
  v8 = 0;
  for ( i = 0; ; ++i )
  {
    utf8_char = get_utf8_char();
    if ( utf8_char == -1 )
    {
LABEL_18:
      if ( a2 )
        *a2 = i;
      return 0;
    }
    if ( !utf8_char )
      break;
    if ( v7 == 10 )
    {
      v10 = utf8_char - 48;
      if ( (unsigned int)v10 > 9 )
        goto LABEL_18;
    }
    else
    {
      if ( utf8_char > 0x60 )
      {
        utf8_char -= 32;
        if ( (unsigned int)(char)utf8_char > 0x7F || (unsigned int)((char)utf8_char - 48) > 9 && utf8_char > 0x46 )
          goto LABEL_18;
      }
      else
      {
        if ( utf8_char - 48 <= 9 )
        {
          v10 = utf8_char - 48;
          goto LABEL_16;
        }
        if ( utf8_char - 65 > 5 )
          goto LABEL_18;
      }
      v10 = utf8_char - 55;
    }
LABEL_16:
    v8 = v10 + v7 * v8;
  }
  v29 = -(int)v8;
  if ( !v49 )
    v29 = v8;
  v52 = v29;
  if ( (unsigned __int8)getinf_flag() )
    memrev();
LABEL_64:
  if ( (unsigned int)nbits() - 1 > 7 )
  {
    v38 = *(_QWORD *)(a1 + 1256);
    v39 = v52;
    if ( v38 )
    {
      v40 = *(_DWORD *)(a1 + 1224);
      v41 = a1 + 1248;
      do
      {
        if ( *(_DWORD *)(v38 + 32) >= v40 )
        {
          v41 = v38;
          v38 = *(_QWORD *)(v38 + 16);
        }
        else
        {
          v38 = *(_QWORD *)(v38 + 24);
        }
      }
      while ( v38 );
      if ( a1 + 1248 != v41 && v40 >= *(_DWORD *)(v41 + 32) )
        goto LABEL_88;
    }
    else
    {
      v41 = a1 + 1248;
    }
    v42 = operator new(0x30u);
    v43 = *(_DWORD *)(a1 + 1224);
    *(_QWORD *)(v42 + 40) = 0;
    v44 = (void *)v42;
    *(_DWORD *)(v42 + 32) = v43;
    v41 = sub_FE500((_QWORD *)(a1 + 1240), v41, v43);
    if ( v45 )
    {
      v41 = (__int64)v44;
      std::_Rb_tree_insert_and_rebalance();
      ++*(_QWORD *)(a1 + 1280);
    }
    else if ( v44 )
    {
      operator delete(v44, 0x30u);
    }
LABEL_88:
    *(_QWORD *)(v41 + 40) = v39;
    return 1;
  }
  v30 = 0;
  v31 = a1 + 1248;
  if ( *(int *)(*(_QWORD *)(a1 + 752) + 24LL) <= 0 )
    return 1;
  do
  {
    v32 = *(_QWORD *)(a1 + 1256);
    v33 = a1 + 1248;
    v34 = *((unsigned __int8 *)&v52 + v30);
    v35 = v30 + *(_DWORD *)(a1 + 1224);
    LODWORD(v53) = v35;
    if ( !v32 )
      goto LABEL_73;
    do
    {
      while ( 1 )
      {
        v36 = *(_QWORD *)(v32 + 16);
        v37 = *(_QWORD *)(v32 + 24);
        if ( *(_DWORD *)(v32 + 32) < v35 )
          break;
        v33 = v32;
        v32 = *(_QWORD *)(v32 + 16);
        if ( !v36 )
          goto LABEL_71;
      }
      v32 = *(_QWORD *)(v32 + 24);
    }
    while ( v37 );
LABEL_71:
    if ( v33 == v31 || v35 < *(_DWORD *)(v33 + 32) )
    {
LABEL_73:
      v54 = (__int64 *)&v53;
      v33 = sub_FE5D0((_QWORD *)(a1 + 1240), v33, (_DWORD **)&v54);
    }
    *(_QWORD *)(v33 + 40) = v34;
    ++v30;
  }
  while ( *(_DWORD *)(*(_QWORD *)(a1 + 752) + 24LL) > (int)v30 );
  return 1;
}

