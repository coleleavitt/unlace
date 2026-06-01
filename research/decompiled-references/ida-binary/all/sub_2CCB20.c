__int64 __fastcall sub_2CCB20(__int64 a1, _QWORD *a2)
{
  _DWORD *v2; // rdx
  _BYTE *v4; // rbx
  int v5; // ecx
  char v6; // al
  int v7; // r15d
  __int64 v8; // r12
  __int64 i; // rbx
  __int64 v10; // rax
  unsigned int utf8_char; // eax
  int v13; // eax
  __int64 v14; // r13
  __int64 v15; // r15
  __int64 v16; // r12
  _QWORD *v17; // rax
  unsigned __int64 v18; // rsi
  _QWORD *v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // rdx
  _QWORD *v22; // rax
  __int64 v23; // r9
  _QWORD *v24; // rdi
  _BYTE *v25; // rsi
  __int64 v26; // rcx
  __int64 v27; // rdx
  _QWORD *v28; // rax
  const char *v29; // rsi
  int v30; // eax
  __int64 v31; // rax
  __int64 v32; // r13
  _QWORD *v33; // rdx
  _QWORD *v34; // rsi
  __int64 v35; // r14
  _BYTE *v36; // r8
  __int64 v37; // rdi
  __int64 v38; // rcx
  _QWORD *v39; // rax
  __int64 v40; // r12
  _QWORD *v41; // r14
  unsigned __int64 v42; // rsi
  _QWORD *v43; // rbx
  _QWORD *v44; // rax
  unsigned __int64 v45; // r15
  _QWORD *v46; // r13
  _QWORD *v47; // rax
  _QWORD *v48; // rdx
  _BOOL8 v49; // rdi
  __int64 v50; // rdx
  size_t v51; // rbp
  const char *v52; // rdi
  unsigned __int64 *v53; // rdi
  __int64 v54; // r12
  char v56; // [rsp+10h] [rbp-A8h]
  _QWORD *v57; // [rsp+10h] [rbp-A8h]
  __int64 v58; // [rsp+18h] [rbp-A0h]
  unsigned __int8 v59; // [rsp+2Fh] [rbp-89h] BYREF
  __int64 v60; // [rsp+30h] [rbp-88h] BYREF
  _BYTE *v61; // [rsp+38h] [rbp-80h] BYREF
  unsigned __int64 *v62; // [rsp+40h] [rbp-78h] BYREF
  __int128 v63; // [rsp+48h] [rbp-70h]
  _BYTE v64[24]; // [rsp+60h] [rbp-58h] BYREF
  unsigned __int64 v65; // [rsp+78h] [rbp-40h]

  v65 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 1048) <= 1u )
  {
    if ( a2 )
      *a2 = -1;
    return 0;
  }
  v2 = *(_DWORD **)(a1 + 728);
  v4 = *(_BYTE **)(a1 + 1040);
  v56 = *(_BYTE *)(a1 + 1081);
  if ( v56 )
  {
    v13 = v2[7] * v2[6];
    v60 = *(_QWORD *)(a1 + 1040);
    v14 = v13;
    if ( v13 == qustrlen(v4) )
    {
      v15 = 0;
      v57 = (_QWORD *)(a1 + 1096);
      v16 = a1 + 1144;
      if ( (int)v14 > 0 )
      {
        while ( 1 )
        {
          v17 = *(_QWORD **)(a1 + 1152);
          v18 = v15 + *(_QWORD *)(a1 + 1064);
          if ( v17 )
          {
            v19 = (_QWORD *)(a1 + 1144);
            do
            {
              while ( 1 )
              {
                v20 = v17[2];
                v21 = v17[3];
                if ( v17[4] < v18 )
                  break;
                v19 = v17;
                v17 = (_QWORD *)v17[2];
                if ( !v20 )
                  goto LABEL_28;
              }
              v17 = (_QWORD *)v17[3];
            }
            while ( v21 );
LABEL_28:
            if ( (_QWORD *)v16 != v19 && v18 >= v19[4] && (unsigned __int8)sub_2CC6D0(a1, (const char *)&v59, v60) )
            {
              v22 = *(_QWORD **)(a1 + 1104);
              v23 = v59;
              v24 = v57;
              v25 = (_BYTE *)(v15 + *(_QWORD *)(a1 + 1064));
              v61 = v25;
              if ( !v22 )
                goto LABEL_38;
              do
              {
                while ( 1 )
                {
                  v26 = v22[2];
                  v27 = v22[3];
                  if ( v22[4] < (unsigned __int64)v25 )
                    break;
                  v24 = v22;
                  v22 = (_QWORD *)v22[2];
                  if ( !v26 )
                    goto LABEL_36;
                }
                v22 = (_QWORD *)v22[3];
              }
              while ( v27 );
LABEL_36:
              if ( v24 == v57 || (unsigned __int64)v25 < v24[4] )
              {
LABEL_38:
                v58 = v59;
                v62 = (unsigned __int64 *)&v61;
                v28 = sub_2C8600((_QWORD *)(a1 + 1088), v24, &v62);
                v23 = v58;
                v24 = v28;
              }
              v24[5] = v23;
            }
          }
          if ( skip_utf8(&v60, 1) )
            break;
          if ( v14 == ++v15 )
            return 1;
        }
        if ( a2 )
          *a2 = v15;
        return 0;
      }
      return 1;
    }
    goto LABEL_45;
  }
  v60 = -1;
  v5 = v2[9];
  if ( !v5 )
  {
    v61 = v4;
    v29 = v64;
    v30 = asctoreal(&v61, v64);
    if ( !*v61 )
    {
      if ( v30 == 1 && (unsigned int)ieee2cpu(&v60, v64, *(unsigned int *)(*(_QWORD *)(a1 + 728) + 24LL)) == 1 )
        goto LABEL_64;
      goto LABEL_45;
    }
    v62 = nullptr;
    v50 = v61 - v4;
    v63 = 0;
    v51 = v61 - v4;
    if ( v61 != v4 )
    {
      v53 = nullptr;
      v54 = v50 + 1;
      if ( v50 != -1 )
      {
        v62 = (unsigned __int64 *)qvector_reserve(&v62, 0, v50 + 1, 1);
        v53 = v62;
      }
      v29 = v4;
      *(_QWORD *)&v63 = v54;
      memmove(v53, v4, v51);
      *((_BYTE *)v62 + v51) = 0;
      if ( !a2 )
        goto LABEL_96;
      if ( (_QWORD)v63 )
      {
        v52 = (const char *)v62;
        goto LABEL_95;
      }
LABEL_94:
      v52 = &s1;
LABEL_95:
      *a2 = qustrlen(v52);
LABEL_96:
      if ( v62 )
      {
        *(_QWORD *)&v63 = 0;
        qfree(v62, v29);
      }
      return 0;
    }
    if ( a2 )
      goto LABEL_94;
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
  v56 = v6 == 45;
  ++v4;
LABEL_10:
  v62 = (unsigned __int64 *)v4;
  v8 = 0;
  for ( i = 0; ; i = v10 + v7 * i )
  {
    utf8_char = get_utf8_char(&v62);
    if ( utf8_char == -1 )
    {
LABEL_18:
      if ( a2 )
        *a2 = v8;
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
    ++v8;
  }
  v31 = -i;
  if ( !v56 )
    v31 = i;
  v60 = v31;
  if ( (unsigned __int8)getinf_flag(3, 32) )
    memrev(&v60, *(int *)(*(_QWORD *)(a1 + 728) + 24LL));
LABEL_64:
  if ( (unsigned int)nbits(*(_QWORD *)(a1 + 1064)) - 1 > 7 )
  {
    v39 = *(_QWORD **)(a1 + 1104);
    v40 = v60;
    v41 = (_QWORD *)(a1 + 1096);
    if ( v39 )
    {
      v42 = *(_QWORD *)(a1 + 1064);
      v43 = (_QWORD *)(a1 + 1096);
      do
      {
        if ( v39[4] >= v42 )
        {
          v43 = v39;
          v39 = (_QWORD *)v39[2];
        }
        else
        {
          v39 = (_QWORD *)v39[3];
        }
      }
      while ( v39 );
      if ( v41 != v43 && v42 >= v43[4] )
      {
LABEL_91:
        v43[5] = v40;
        return 1;
      }
    }
    else
    {
      v43 = (_QWORD *)(a1 + 1096);
    }
    v44 = (_QWORD *)operator new(0x30u);
    v45 = *(_QWORD *)(a1 + 1064);
    v44[5] = 0;
    v46 = v44;
    v44[4] = v45;
    v47 = sub_2C8500((_QWORD *)(a1 + 1088), v43, v45);
    v43 = v47;
    if ( v48 )
    {
      v49 = v47 || v41 == v48 || v45 < v48[4];
      v43 = v46;
      std::_Rb_tree_insert_and_rebalance(v49, v46, v48, a1 + 1096);
      ++*(_QWORD *)(a1 + 1128);
    }
    else if ( v46 )
    {
      operator delete(v46, 0x30u);
    }
    goto LABEL_91;
  }
  v32 = 0;
  if ( *(int *)(*(_QWORD *)(a1 + 728) + 24LL) <= 0 )
    return 1;
  do
  {
    v33 = *(_QWORD **)(a1 + 1104);
    v34 = (_QWORD *)(a1 + 1096);
    v35 = *((unsigned __int8 *)&v60 + v32);
    v36 = (_BYTE *)(v32 + *(_QWORD *)(a1 + 1064));
    v61 = v36;
    if ( !v33 )
      goto LABEL_73;
    do
    {
      while ( 1 )
      {
        v37 = v33[2];
        v38 = v33[3];
        if ( v33[4] < (unsigned __int64)v36 )
          break;
        v34 = v33;
        v33 = (_QWORD *)v33[2];
        if ( !v37 )
          goto LABEL_71;
      }
      v33 = (_QWORD *)v33[3];
    }
    while ( v38 );
LABEL_71:
    if ( v34 == (_QWORD *)(a1 + 1096) || (unsigned __int64)v36 < v34[4] )
    {
LABEL_73:
      v62 = (unsigned __int64 *)&v61;
      v34 = sub_2C8600((_QWORD *)(a1 + 1088), v34, &v62);
    }
    v34[5] = v35;
    ++v32;
  }
  while ( *(_DWORD *)(*(_QWORD *)(a1 + 728) + 24LL) > (int)v32 );
  return 1;
}
