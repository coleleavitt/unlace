_QWORD *__fastcall sub_D0DD30(_QWORD *a1, __int64 a2, char ***a3)
{
  _QWORD *v6; // rbx
  char **v7; // rax
  _QWORD *v8; // r15
  char *v9; // rdx
  char *v10; // rcx
  __int64 v11; // rcx
  _QWORD *v12; // r13
  size_t v13; // r14
  size_t v14; // r10
  size_t v15; // r11
  int v16; // eax
  bool v17; // sf
  signed __int64 v18; // rax
  signed __int64 v19; // rax
  _QWORD *v20; // rbp
  signed __int64 v22; // rax
  __int64 v23; // rax
  size_t v24; // rcx
  _QWORD *v25; // r9
  size_t v26; // rdx
  int v27; // eax
  __int64 v28; // rcx
  _QWORD *v29; // rdx
  bool v30; // al
  __int64 v31; // rax
  size_t v32; // r11
  size_t v33; // rcx
  size_t v34; // rdx
  int v35; // eax
  signed __int64 v36; // rax
  size_t v37; // rbp
  size_t v38; // rdx
  int v39; // eax
  bool v40; // sf
  __int64 v41; // rbp
  size_t v42; // r10
  unsigned int v43; // esi
  unsigned __int64 v44; // rcx
  unsigned int v45; // esi
  unsigned int v46; // esi
  unsigned int v47; // edi
  __int64 v48; // r8
  void *s1; // [rsp+8h] [rbp-60h]
  _QWORD *s1a; // [rsp+8h] [rbp-60h]
  _QWORD *s1b; // [rsp+8h] [rbp-60h]
  size_t n; // [rsp+10h] [rbp-58h]
  size_t nc; // [rsp+10h] [rbp-58h]
  size_t na; // [rsp+10h] [rbp-58h]
  size_t nb; // [rsp+10h] [rbp-58h]
  size_t v56; // [rsp+18h] [rbp-50h]
  __int64 v57; // [rsp+20h] [rbp-48h]
  size_t v58; // [rsp+20h] [rbp-48h]

  v6 = (_QWORD *)operator new(0x48u);
  v7 = *a3;
  v8 = v6 + 6;
  v6[4] = v6 + 6;
  v9 = (char *)(v7 + 2);
  if ( *v7 != (char *)(v7 + 2) )
  {
    v6[4] = *v7;
    v6[6] = v7[2];
LABEL_3:
    v10 = v7[1];
    goto LABEL_4;
  }
  v10 = v7[1];
  v43 = (_DWORD)v10 + 1;
  if ( (unsigned int)((_DWORD)v10 + 1) >= 8 )
  {
    v6[6] = v7[2];
    *(_QWORD *)((char *)v8 + v43 - 8) = *(_QWORD *)&v9[v43 - 8];
    v44 = (unsigned __int64)(v6 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v45 = ((_DWORD)v8 - v44 + v43) & 0xFFFFFFF8;
    if ( v45 >= 8 )
    {
      v46 = v45 & 0xFFFFFFF8;
      v47 = 0;
      do
      {
        v48 = v47;
        v47 += 8;
        *(_QWORD *)(v44 + v48) = *(_QWORD *)(v9 - ((char *)v8 - v44) + v48);
      }
      while ( v47 < v46 );
    }
    goto LABEL_3;
  }
  if ( (v43 & 4) != 0 )
  {
    *((_DWORD *)v6 + 12) = *((_DWORD *)v7 + 4);
    *(_DWORD *)((char *)v8 + v43 - 4) = *(_DWORD *)&v9[v43 - 4];
    v10 = v7[1];
  }
  else if ( (_DWORD)v10 != -1 )
  {
    *((_BYTE *)v6 + 48) = *((_BYTE *)v7 + 16);
    if ( (v43 & 2) == 0 )
      goto LABEL_3;
    *(_WORD *)((char *)v8 + v43 - 2) = *(_WORD *)&v9[v43 - 2];
    v10 = v7[1];
  }
LABEL_4:
  v6[5] = v10;
  v11 = a2;
  *((_BYTE *)v7 + 16) = 0;
  *v7 = v9;
  v12 = (_QWORD *)v6[4];
  v7[1] = nullptr;
  v13 = v6[5];
  v6[8] = 0;
  if ( a1 + 1 == (_QWORD *)a2 )
  {
    if ( !a1[5] )
      goto LABEL_36;
    v25 = (_QWORD *)a1[4];
    v37 = v25[5];
    v38 = v37;
    if ( v13 <= v37 )
      v38 = v13;
    if ( v38 )
    {
      s1b = (_QWORD *)a1[4];
      v39 = memcmp((const void *)v25[4], v12, v38);
      v25 = s1b;
      v40 = v39 < 0;
      if ( v39 )
        goto LABEL_59;
      v41 = v37 - v13;
      if ( v41 > 0x7FFFFFFF )
        goto LABEL_36;
      if ( v41 < (__int64)0xFFFFFFFF80000000LL )
        goto LABEL_60;
    }
    else
    {
      v41 = v37 - v13;
      if ( v41 > 0x7FFFFFFF )
        goto LABEL_36;
      if ( v41 < (__int64)0xFFFFFFFF80000000LL )
      {
LABEL_77:
        v30 = 0;
        goto LABEL_39;
      }
    }
    v40 = (int)v41 < 0;
LABEL_59:
    if ( !v40 )
      goto LABEL_36;
LABEL_60:
    v11 = 0;
    goto LABEL_38;
  }
  v14 = *(_QWORD *)(a2 + 40);
  v15 = v14;
  s1 = *(void **)(a2 + 32);
  if ( v13 <= v14 )
    v15 = v13;
  if ( !v15 )
  {
    v22 = v13 - v14;
    if ( (__int64)(v13 - v14) > 0x7FFFFFFF || v22 >= (__int64)0xFFFFFFFF80000000LL && (int)v22 >= 0 )
      goto LABEL_14;
    goto LABEL_24;
  }
  v57 = *(_QWORD *)(a2 + 40);
  n = v15;
  v16 = memcmp(v12, *(const void **)(a2 + 32), v15);
  v17 = v16 < 0;
  if ( v16 )
    goto LABEL_12;
  v18 = v13 - v57;
  if ( (__int64)(v13 - v57) > 0x7FFFFFFF )
    goto LABEL_13;
  if ( v18 < (__int64)0xFFFFFFFF80000000LL )
  {
LABEL_24:
    if ( a1[3] == a2 )
      goto LABEL_41;
    v23 = std::_Rb_tree_decrement();
    v24 = *(_QWORD *)(v23 + 40);
    v25 = (_QWORD *)v23;
    v26 = v24;
    if ( v13 <= v24 )
      v26 = v13;
    if ( !v26
      || (nc = *(_QWORD *)(v23 + 40),
          s1a = (_QWORD *)v23,
          v27 = memcmp(*(const void **)(v23 + 32), v12, v26),
          v25 = s1a,
          v24 = nc,
          !v27) )
    {
      v28 = v24 - v13;
      if ( v28 > 0x7FFFFFFF )
        goto LABEL_36;
      if ( v28 < (__int64)0xFFFFFFFF80000000LL )
        goto LABEL_33;
      v27 = v28;
    }
    if ( v27 >= 0 )
      goto LABEL_36;
LABEL_33:
    if ( v25[3] )
      goto LABEL_41;
    goto LABEL_77;
  }
  v17 = (int)v18 < 0;
LABEL_12:
  if ( v17 )
    goto LABEL_24;
LABEL_13:
  LODWORD(v19) = memcmp(s1, v12, n);
  v15 = n;
  v11 = a2;
  v14 = v57;
  if ( (_DWORD)v19 )
    goto LABEL_16;
LABEL_14:
  v19 = v14 - v13;
  if ( (__int64)(v14 - v13) <= 0x7FFFFFFF )
  {
    if ( v19 < (__int64)0xFFFFFFFF80000000LL )
    {
LABEL_42:
      na = v15;
      if ( a1[4] != a2 )
      {
        v31 = std::_Rb_tree_increment();
        v32 = na;
        v33 = *(_QWORD *)(v31 + 40);
        v25 = (_QWORD *)v31;
        v34 = v33;
        if ( v13 <= v33 )
          v34 = v13;
        if ( v34
          && (v58 = na,
              v56 = *(_QWORD *)(v31 + 40),
              nb = v31,
              v35 = memcmp(v12, *(const void **)(v31 + 32), v34),
              v25 = (_QWORD *)nb,
              v33 = v56,
              v32 = v58,
              v35) )
        {
          if ( v35 < 0 )
          {
            v11 = nb;
            if ( !*(_QWORD *)(a2 + 24) )
            {
LABEL_63:
              if ( v32 )
                memcmp(v12, s1, v32);
              goto LABEL_41;
            }
            goto LABEL_38;
          }
        }
        else
        {
          v36 = v13 - v33;
          if ( (__int64)(v13 - v33) <= 0x7FFFFFFF && (v36 < (__int64)0xFFFFFFFF80000000LL || (int)v36 < 0) )
          {
            v11 = (__int64)v25;
            if ( !*(_QWORD *)(a2 + 24) )
              goto LABEL_63;
            goto LABEL_37;
          }
        }
LABEL_36:
        v11 = sub_D0DBF0((__int64)a1, v12, v13);
        v25 = v29;
LABEL_37:
        if ( !v25 )
          goto LABEL_17;
        goto LABEL_38;
      }
      v25 = (_QWORD *)a2;
      v11 = 0;
LABEL_38:
      v30 = v11 != 0;
LABEL_39:
      if ( v25 != a1 + 1 && !v30 )
      {
        v42 = v25[5];
        v32 = v42;
        s1 = (void *)v25[4];
        if ( v13 <= v42 )
          v32 = v13;
        goto LABEL_63;
      }
LABEL_41:
      v20 = v6;
      std::_Rb_tree_insert_and_rebalance();
      ++a1[5];
      return v20;
    }
LABEL_16:
    if ( (int)v19 >= 0 )
      goto LABEL_17;
    goto LABEL_42;
  }
LABEL_17:
  v20 = (_QWORD *)v11;
  if ( v12 != v8 )
    operator delete(v12, v6[6] + 1LL);
  operator delete(v6, 0x48u);
  return v20;
}

