__int64 __fastcall sub_68ED80(__int64 *a1, __int64 a2, int a3, __int64 *a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rbx
  bool v9; // zf
  char v10; // al
  int v11; // r13d
  unsigned __int8 v12; // r14
  char v13; // r12
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rdx
  _DWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  char *v20; // rsi
  char *v21; // rdi
  __int64 v22; // r8
  __int64 v23; // r9
  char *v24; // rdi
  __int64 v25; // r12
  __int64 v26; // rax
  __int64 result; // rax
  __int64 v28; // rcx
  char *v29; // rdi
  __int64 v30; // rbp
  int v31; // r12d
  __int64 v32; // rax
  bool v33; // al
  __int64 v34; // r12
  __int64 v35; // rdi
  unsigned int v36; // ebp
  int v37; // edx
  unsigned __int64 v38; // rdx
  __int64 v39; // rcx
  void *v40; // rdi
  __int64 v41; // rax
  int v42; // r8d
  char *v43; // rdx
  void *v44; // rdi
  int tinfo_size; // r13d
  __int64 v46; // rax
  void *v47; // rdi
  unsigned int v48; // [rsp+8h] [rbp-D0h]
  unsigned int v50; // [rsp+24h] [rbp-B4h]
  bool v51; // [rsp+2Bh] [rbp-ADh]
  __int64 v52; // [rsp+38h] [rbp-A0h] BYREF
  void *v53; // [rsp+40h] [rbp-98h] BYREF
  __int128 v54; // [rsp+48h] [rbp-90h]
  __int64 v55; // [rsp+60h] [rbp-78h] BYREF
  void *v56; // [rsp+68h] [rbp-70h]
  __int128 v57; // [rsp+70h] [rbp-68h]
  void *v58; // [rsp+80h] [rbp-58h]
  __int128 v59; // [rsp+88h] [rbp-50h]
  unsigned __int64 v60; // [rsp+98h] [rbp-40h]

  v50 = (unsigned int)a4;
  v60 = __readfsqword(0x28u);
  v8 = *(_QWORD *)(a2 + 72);
  if ( v8 || (*(_DWORD *)(a2 + 24) & 1) != 0 )
    goto LABEL_24;
  v9 = *(_QWORD *)(a2 + 8) == 0;
  v53 = nullptr;
  v54 = 0;
  if ( !v9 )
  {
    v10 = (char)a4;
    a4 = &v55;
    v11 = 0;
    v12 = 0;
    v13 = 1;
    v51 = (v10 & 2) != 0;
    v14 = 0;
    while ( 1 )
    {
      v15 = *(_QWORD *)a2 + 80 * v14;
      if ( *(_DWORD *)v15 == 2 )
      {
        v16 = *(_QWORD *)(v15 + 8);
        v17 = *(_DWORD **)v16;
        v18 = *(_QWORD *)v16 + 24LL * *(_QWORD *)(v16 + 8);
        if ( v17 == (_DWORD *)v18 )
          goto LABEL_6;
        while ( *v17 == 1 )
        {
          v17 += 6;
          if ( (_DWORD *)v18 == v17 )
            goto LABEL_6;
        }
LABEL_12:
        LODWORD(v55) = 0;
        copy_argloc(&v55, v15);
        v19 = v54;
        v20 = (char *)v53;
        if ( *((_QWORD *)&v54 + 1) < (unsigned __int64)(v54 + 1) )
        {
          v53 = (void *)qvector_reserve(&v53, v53, v54 + 1, 16);
          v20 = (char *)v53;
          v19 = v54;
        }
        v21 = &v20[16 * v19];
        *(_DWORD *)v21 = 0;
        copy_argloc(v21, &v55);
        *(_QWORD *)&v54 = v54 + 1;
        cleanup_argloc(&v55);
        if ( v12 )
          v13 &= v51;
        v14 = ++v11;
        if ( (unsigned __int64)v11 >= *(_QWORD *)(a2 + 8) )
          goto LABEL_17;
      }
      else
      {
        if ( *(_DWORD *)v15 != 1 )
          goto LABEL_12;
LABEL_6:
        ++v11;
        v12 = 1;
        v14 = v11;
        if ( (unsigned __int64)v11 >= *(_QWORD *)(a2 + 8) )
          goto LABEL_17;
      }
    }
  }
  v12 = 0;
  v13 = 1;
LABEL_17:
  if ( a3 > 0 || !(unsigned __int8)sub_68B5A0(a1, a2, (__int64)&v53, v50) )
  {
    if ( sub_615160(*a1, 3, 4, (__int64)a4, a5, a6) )
    {
      if ( (unsigned int)(a3 + 1) > 1 )
        goto LABEL_20;
      if ( (_QWORD)v54 )
      {
        if ( (v50 & 8) != 0 )
        {
          result = 64;
LABEL_59:
          v29 = (char *)v53;
          v30 = v54;
          if ( v53 )
          {
LABEL_47:
            v31 = result;
            do
            {
              v32 = v8++;
              cleanup_argloc(&v29[16 * v32]);
              v29 = (char *)v53;
            }
            while ( v8 != v30 );
            LODWORD(result) = v31;
            goto LABEL_50;
          }
          return result;
        }
        if ( !(unsigned __int8)sub_68E480((__int64)a1, a2, &v53, v12, v50) )
        {
          v24 = (char *)v53;
          if ( !v53 )
            goto LABEL_31;
          v25 = v54;
          if ( !(_QWORD)v54 )
          {
            qfree(v53);
            goto LABEL_31;
          }
          goto LABEL_22;
        }
LABEL_77:
        result = 112;
        goto LABEL_45;
      }
      if ( (v50 & 8) == 0 )
      {
        result = (v50 & 1) == 0 ? 112 : 48;
        goto LABEL_56;
      }
LABEL_55:
      result = 64;
      goto LABEL_56;
    }
    v28 = v50;
    if ( (_QWORD)v54 )
    {
      if ( (v50 & 8) != 0 )
      {
        result = 208;
        goto LABEL_59;
      }
      if ( v13 )
      {
        if ( a3 == -1 )
          goto LABEL_74;
        if ( *(_DWORD *)(a1[2] + 4) )
          goto LABEL_72;
        goto LABEL_92;
      }
      v24 = (char *)v53;
      if ( v53 )
      {
        v25 = v54;
        do
        {
LABEL_22:
          v26 = v8++;
          cleanup_argloc(&v24[16 * v26]);
          v24 = (char *)v53;
        }
        while ( v8 != v25 );
        goto LABEL_23;
      }
LABEL_24:
      if ( a3 > 0 )
      {
        result = 224;
        if ( *(_DWORD *)(a2 + 56) == a3 )
          return result;
        return 16;
      }
LABEL_31:
      result = 240;
      if ( !a3 )
        return result;
      return 16;
    }
    if ( (v50 & 8) != 0 )
      goto LABEL_55;
    if ( a3 <= 0 )
    {
      if ( !v12 )
      {
LABEL_84:
        result = 16;
        goto LABEL_56;
      }
      if ( (v50 & 1) == 0 )
      {
LABEL_40:
        v24 = (char *)v53;
        if ( v53 )
        {
LABEL_23:
          *(_QWORD *)&v54 = 0;
          qfree(v24);
          goto LABEL_24;
        }
        goto LABEL_24;
      }
      result = 48;
    }
    else
    {
      if ( *(_DWORD *)(a2 + 56) != a3 )
      {
        if ( v12 )
        {
          if ( (v50 & 1) != 0 && a3 == 4 && *(_QWORD *)(a2 + 8) && (~*(_BYTE *)(*(_QWORD *)a2 + 72LL) & 6) == 0 )
          {
            if ( (getinf(57) & 0xF) == 6 )
            {
              result = 48;
              goto LABEL_45;
            }
            if ( !v13 )
              goto LABEL_20;
            if ( (_QWORD)v54 )
            {
              if ( *(_DWORD *)(a1[2] + 4) )
                goto LABEL_20;
LABEL_92:
              if ( !sub_615160(*a1, 3, 4, v28, v22, v23) )
              {
                v33 = *(_DWORD *)(a2 + 56) == a3;
LABEL_73:
                if ( !v33 )
                  goto LABEL_20;
LABEL_74:
                v34 = a1[2];
                if ( (getinf(57) & 0xF) != 1
                  && ((getinf(57) & 0xF) != 6
                   || (unsigned __int8)getinf_flag(3, 4)
                   || *(_DWORD *)(v34 + 4)
                   || *(_QWORD *)(a2 + 8) == 1) )
                {
LABEL_76:
                  if ( (unsigned __int8)sub_68E480((__int64)a1, a2, &v53, v12, v50) )
                    goto LABEL_77;
LABEL_20:
                  v24 = (char *)v53;
                  if ( !v53 )
                    goto LABEL_24;
                  v25 = v54;
                  if ( !(_QWORD)v54 )
                    goto LABEL_23;
                  goto LABEL_22;
                }
                v55 = 0;
                v56 = nullptr;
                v58 = nullptr;
                v57 = 0;
                v59 = 0;
                sub_375980(0x7D4u, &v55, 128);
                if ( HIDWORD(v55) && (_QWORD)v54 == (_QWORD)v57 )
                {
                  if ( (_QWORD)v54 )
                  {
                    v40 = v56;
                    v41 = 0;
                    v42 = 0;
                    while ( 1 )
                    {
                      v43 = (char *)v53 + 16 * v41;
                      if ( *(_DWORD *)v43 != 3 || *((unsigned __int16 *)v43 + 4) != *((_DWORD *)v56 + v41) )
                        break;
                      v41 = ++v42;
                      if ( v42 >= (unsigned __int64)v54 )
                        goto LABEL_114;
                    }
                    if ( v58 )
                    {
                      *(_QWORD *)&v59 = 0;
                      qfree(v58);
                      v40 = v56;
                      if ( !v56 )
                        goto LABEL_76;
LABEL_112:
                      *(_QWORD *)&v57 = 0;
                      qfree(v40);
                      goto LABEL_76;
                    }
LABEL_111:
                    if ( !v40 )
                      goto LABEL_76;
                    goto LABEL_112;
                  }
LABEL_114:
                  v52 = 0;
                  get_stock_tinfo(&v52, 7);
                  tinfo_size = get_tinfo_size(0, v52, 0);
                  clear_tinfo_t(&v52);
                  v46 = get_tinfo_size(0, *(_QWORD *)(*(_QWORD *)a2 + 64LL), 0);
                  v44 = v58;
                  if ( v46 == tinfo_size )
                  {
                    if ( v58 )
                    {
                      *(_QWORD *)&v59 = 0;
                      qfree(v58);
                      v47 = v56;
                      if ( !v56 )
                      {
LABEL_118:
                        result = 128;
                        goto LABEL_45;
                      }
                    }
                    else
                    {
                      v47 = v56;
                      if ( !v56 )
                        goto LABEL_118;
                    }
                    *(_QWORD *)&v57 = 0;
                    qfree(v47);
                    goto LABEL_118;
                  }
                }
                else
                {
                  v44 = v58;
                }
                if ( v44 )
                {
                  *(_QWORD *)&v59 = 0;
                  qfree(v44);
                }
                v40 = v56;
                goto LABEL_111;
              }
LABEL_72:
              v33 = a3 == 0;
              goto LABEL_73;
            }
          }
          goto LABEL_40;
        }
        goto LABEL_84;
      }
      result = 80;
    }
LABEL_56:
    v29 = (char *)v53;
    if ( v53 )
      goto LABEL_50;
    return result;
  }
  if ( !(unsigned __int8)getinf_flag(3, 4)
    || (netnode_check(&v55, "$ golang", 0, 0),
        v35 = (unsigned int)v55,
        v36 = netnode_altval((unsigned int)v55, 0, 65),
        v36 <= 0x74)
    || (v37 = *(_DWORD *)(get_ph(v35, nullptr) + 4), result = 176, v37)
    && ((v38 = (unsigned int)(v37 - 13), (unsigned int)v38 > 0x3B)
     || (v39 = 0x800000000000005LL, !_bittest64(&v39, v38))
     || v36 == 117) )
  {
    result = 256;
  }
LABEL_45:
  v29 = (char *)v53;
  if ( v53 )
  {
    v30 = v54;
    if ( (_QWORD)v54 )
      goto LABEL_47;
LABEL_50:
    v48 = result;
    *(_QWORD *)&v54 = 0;
    qfree(v29);
    return v48;
  }
  return result;
}

