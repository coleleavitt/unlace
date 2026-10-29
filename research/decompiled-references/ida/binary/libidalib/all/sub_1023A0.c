__int64 __fastcall sub_1023A0(__int64 a1, __int64 *a2)
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
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // r13
  _QWORD *v32; // r15
  _QWORD *v33; // rdx
  _QWORD *v34; // rsi
  __int64 v35; // r14
  _BYTE *v36; // r8
  __int64 v37; // rdi
  __int64 v38; // rcx
  _QWORD *v39; // rax
  __int64 v40; // r12
  unsigned __int64 v41; // rsi
  _QWORD *v42; // rbx
  __int64 v43; // rax
  unsigned __int64 v44; // r15
  _QWORD *v45; // r13
  __int64 v46; // rdx
  __int64 v47; // rdx
  size_t v48; // rbp
  unsigned __int64 *v49; // rdi
  __int64 v50; // r12
  char v52; // [rsp+10h] [rbp-A8h]
  _QWORD *v53; // [rsp+10h] [rbp-A8h]
  unsigned __int8 v54; // [rsp+2Fh] [rbp-89h]
  __int64 v55; // [rsp+30h] [rbp-88h]
  _BYTE *v56; // [rsp+38h] [rbp-80h] BYREF
  unsigned __int64 *v57; // [rsp+40h] [rbp-78h] BYREF
  __int128 v58; // [rsp+48h] [rbp-70h]
  unsigned __int64 v59; // [rsp+78h] [rbp-40h]

  v59 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 1216) <= 1u )
  {
    if ( a2 )
      *a2 = -1;
    return 0;
  }
  v2 = *(_DWORD **)(a1 + 760);
  v4 = *(_BYTE **)(a1 + 1208);
  v52 = *(_BYTE *)(a1 + 1249);
  if ( v52 )
  {
    v13 = v2[7] * v2[6];
    v55 = *(_QWORD *)(a1 + 1208);
    v14 = v13;
    if ( v13 == qustrlen() )
    {
      v15 = 0;
      v53 = (_QWORD *)(a1 + 1264);
      v16 = a1 + 1312;
      if ( (int)v14 > 0 )
      {
        while ( 1 )
        {
          v17 = *(_QWORD **)(a1 + 1320);
          v18 = v15 + *(_QWORD *)(a1 + 1232);
          if ( v17 )
          {
            v19 = (_QWORD *)(a1 + 1312);
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
            if ( (_QWORD *)v16 != v19 && v18 >= v19[4] && (unsigned __int8)sub_101F50(a1) )
            {
              v22 = *(_QWORD **)(a1 + 1272);
              v23 = v54;
              v24 = v53;
              v25 = (_BYTE *)(v15 + *(_QWORD *)(a1 + 1232));
              v56 = v25;
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
              if ( v24 == v53 || (unsigned __int64)v25 < v24[4] )
              {
LABEL_38:
                v57 = (unsigned __int64 *)&v56;
                v28 = sub_FE790((_QWORD *)(a1 + 1256), v24, &v57);
                v23 = v54;
                v24 = v28;
              }
              v24[5] = v23;
            }
          }
          if ( skip_utf8() )
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
  v55 = -1;
  v5 = v2[9];
  if ( !v5 )
  {
    v56 = v4;
    v29 = asctoreal();
    if ( !*v56 )
    {
      if ( v29 == 1 && (unsigned int)ieee2cpu() == 1 )
        goto LABEL_64;
      goto LABEL_45;
    }
    v57 = nullptr;
    v47 = v56 - v4;
    v58 = 0;
    v48 = v56 - v4;
    if ( v56 != v4 )
    {
      v49 = nullptr;
      v50 = v47 + 1;
      if ( v47 != -1 )
      {
        v57 = (unsigned __int64 *)qvector_reserve();
        v49 = v57;
      }
      *(_QWORD *)&v58 = v50;
      memmove(v49, v4, v48);
      *((_BYTE *)v57 + v48) = 0;
      if ( !a2 )
        goto LABEL_92;
      goto LABEL_91;
    }
    if ( a2 )
    {
LABEL_91:
      *a2 = qustrlen();
LABEL_92:
      if ( v57 )
      {
        *(_QWORD *)&v58 = 0;
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
  v52 = v6 == 45;
  ++v4;
LABEL_10:
  v57 = (unsigned __int64 *)v4;
  v8 = 0;
  for ( i = 0; ; i = v10 + v7 * i )
  {
    utf8_char = get_utf8_char();
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
  v30 = -i;
  if ( !v52 )
    v30 = i;
  v55 = v30;
  if ( (unsigned __int8)getinf_flag() )
    memrev();
LABEL_64:
  if ( (unsigned int)nbits() - 1 > 7 )
  {
    v39 = *(_QWORD **)(a1 + 1272);
    v40 = v55;
    if ( v39 )
    {
      v41 = *(_QWORD *)(a1 + 1232);
      v42 = (_QWORD *)(a1 + 1264);
      do
      {
        if ( v39[4] >= v41 )
        {
          v42 = v39;
          v39 = (_QWORD *)v39[2];
        }
        else
        {
          v39 = (_QWORD *)v39[3];
        }
      }
      while ( v39 );
      if ( (_QWORD *)(a1 + 1264) != v42 && v41 >= v42[4] )
        goto LABEL_88;
    }
    else
    {
      v42 = (_QWORD *)(a1 + 1264);
    }
    v43 = operator new(0x30u);
    v44 = *(_QWORD *)(a1 + 1232);
    *(_QWORD *)(v43 + 40) = 0;
    v45 = (_QWORD *)v43;
    *(_QWORD *)(v43 + 32) = v44;
    v42 = sub_FE6C0((_QWORD *)(a1 + 1256), v42, v44);
    if ( v46 )
    {
      v42 = v45;
      std::_Rb_tree_insert_and_rebalance();
      ++*(_QWORD *)(a1 + 1296);
    }
    else if ( v45 )
    {
      operator delete(v45, 0x30u);
    }
LABEL_88:
    v42[5] = v40;
    return 1;
  }
  v31 = 0;
  v32 = (_QWORD *)(a1 + 1264);
  if ( *(int *)(*(_QWORD *)(a1 + 760) + 24LL) <= 0 )
    return 1;
  do
  {
    v33 = *(_QWORD **)(a1 + 1272);
    v34 = (_QWORD *)(a1 + 1264);
    v35 = *((unsigned __int8 *)&v55 + v31);
    v36 = (_BYTE *)(v31 + *(_QWORD *)(a1 + 1232));
    v56 = v36;
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
    if ( v34 == v32 || (unsigned __int64)v36 < v34[4] )
    {
LABEL_73:
      v57 = (unsigned __int64 *)&v56;
      v34 = sub_FE790((_QWORD *)(a1 + 1256), v34, &v57);
    }
    v34[5] = v35;
    ++v31;
  }
  while ( *(_DWORD *)(*(_QWORD *)(a1 + 760) + 24LL) > (int)v31 );
  return 1;
}

