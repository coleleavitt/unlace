__int64 __fastcall sub_7F8D0(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 v3; // rbp
  unsigned __int64 v4; // r13
  __int64 v5; // rdx
  size_t v6; // rax
  __int64 result; // rax
  __int64 v8; // r13
  _QWORD *v9; // rbp
  __int64 v10; // r15
  size_t v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // r12
  _QWORD *v15; // rcx
  _QWORD *v16; // rbp
  _QWORD *i; // r15
  size_t v18; // rax
  __int64 v19; // r13
  __int64 v20; // rax
  __int64 v21; // rdx
  int v22; // edx
  size_t v23; // r13
  size_t v24; // rdx
  __int64 v25; // r13
  unsigned __int64 v26; // rdx
  size_t v27; // r9
  __int64 v28; // r8
  size_t v29; // r10
  char *v30; // rsi
  const char *v31; // rsi
  _BYTE *v32; // rax
  size_t v33; // r14
  size_t v34; // r9
  size_t v35; // r14
  char *v36; // rsi
  unsigned int v37; // [rsp+8h] [rbp-100h]
  __int64 v38; // [rsp+10h] [rbp-F8h]
  unsigned int v39; // [rsp+10h] [rbp-F8h]
  unsigned int v40; // [rsp+10h] [rbp-F8h]
  __int64 v41; // [rsp+10h] [rbp-F8h]
  size_t v42; // [rsp+10h] [rbp-F8h]
  __int64 v43; // [rsp+18h] [rbp-F0h]
  __int64 v44; // [rsp+18h] [rbp-F0h]
  size_t v45; // [rsp+28h] [rbp-E0h]
  int v46; // [rsp+34h] [rbp-D4h]
  unsigned __int64 v47; // [rsp+38h] [rbp-D0h]
  size_t v48; // [rsp+40h] [rbp-C8h]
  size_t v49; // [rsp+48h] [rbp-C0h]
  __int64 v50; // [rsp+50h] [rbp-B8h]
  __int64 v51; // [rsp+58h] [rbp-B0h]
  void *v52; // [rsp+60h] [rbp-A8h] BYREF
  size_t n[3]; // [rsp+68h] [rbp-A0h]
  void *src; // [rsp+80h] [rbp-88h] BYREF
  __int128 v55; // [rsp+88h] [rbp-80h]
  char *v56; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v57; // [rsp+A8h] [rbp-60h]
  _BYTE v58[10]; // [rsp+BEh] [rbp-4Ah] BYREF
  _QWORD v59[8]; // [rsp+C8h] [rbp-40h] BYREF

  v2 = (__int64 *)(a1 + 72);
  v59[0] = __readfsqword(0x28u);
  v3 = a2;
  sub_78DB0((__int64 *)(a1 + 72), *(_DWORD *)(a2 + 8));
  v4 = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 == -1 )
  {
    sub_76D40(v2, 2);
  }
  else
  {
    if ( v4 >= *(_QWORD *)(a1 + 64) )
    {
      sub_76D40(v2, 0);
      v5 = v4 - *(_QWORD *)(a1 + 64);
    }
    else
    {
      sub_76D40(v2, 1);
      v5 = *(_QWORD *)(a1 + 64) + ~v4;
    }
    v6 = pack_dq(v58, v59, v5) - (_QWORD)v58;
    if ( v6 )
      sub_78480(v2, v58, v6);
  }
  sub_78DB0(v2, *(_DWORD *)(a2 + 12) + 1);
  switch ( *(_DWORD *)(a2 + 8) )
  {
    case 'F':
    case 'H':
    case 'J':
    case 'K':
    case 'L':
    case 'N':
    case 'O':
    case 'P':
    case 'T':
      return 0;
    case 'G':
      return sub_7D900(a1, a2, *(_QWORD *)(a2 + 24));
    case 'I':
      sub_76D40(v2, *(_QWORD *)(*(_QWORD *)(a2 + 24) + 72LL) == 0);
      return 0;
    case 'M':
      sub_7D730((_QWORD *)a1, (__int64 *)(*(_QWORD *)(a2 + 24) + 64LL));
      sub_78DB0(v2, *(_DWORD *)(*(_QWORD *)(a2 + 24) + 120LL));
      v12 = *(_QWORD *)(a2 + 24);
      v13 = *(_QWORD *)(v12 + 120);
      v14 = *(_QWORD *)(v12 + 112);
      if ( v14 == v14 + 56 * v13 )
        goto LABEL_26;
      v43 = v14 + 56 * v13;
      v38 = v3;
      while ( 1 )
      {
        sub_78DB0(v2, *(_DWORD *)(v14 + 40));
        v15 = *(_QWORD **)(v14 + 32);
        v16 = &v15[*(_QWORD *)(v14 + 40)];
        for ( i = v15; v16 != i; ++i )
        {
          v18 = pack_dq(v58, v59, *i) - (_QWORD)v58;
          if ( v18 )
            sub_78480(v2, v58, v18);
        }
        result = sub_251E00(a1, v14, v38);
        if ( (_DWORD)result )
          break;
        v14 += 56;
        if ( v14 == v43 )
        {
          v3 = v38;
          v12 = *(_QWORD *)(v38 + 24);
LABEL_26:
          result = sub_251E00(a1, v12, v3);
          if ( !(_DWORD)result )
            *(_DWORD *)(a1 + 8) |= 1u;
          return result;
        }
      }
      return result;
    case 'Q':
      sub_78DB0(v2, **(_DWORD **)(a2 + 24));
      return 0;
    case 'R':
      v8 = *(_QWORD *)(a2 + 24);
      sub_78DB0(v2, *(_DWORD *)(v8 + 8));
      v9 = *(_QWORD **)v8;
      v10 = *(_QWORD *)v8 + 8LL * *(_QWORD *)(v8 + 8);
      if ( *(_QWORD *)v8 != v10 )
      {
        do
        {
          v11 = pack_dq(v58, v59, *v9 - *(_QWORD *)(a1 + 64)) - (_QWORD)v58;
          if ( v11 )
            sub_78480(v2, v58, v11);
          ++v9;
        }
        while ( (_QWORD *)v10 != v9 );
      }
      return 0;
    case 'S':
      v19 = *(_QWORD *)(a2 + 24);
      result = sub_7D900(a1, a2, v19);
      if ( (_DWORD)result )
        return result;
      sub_78DB0(v2, *(unsigned __int8 *)(v19 + 64));
      sub_78DB0(v2, *(_DWORD *)(v19 + 48));
      sub_78DB0(v2, *(_DWORD *)(v19 + 56));
      sub_78DB0(v2, *(_DWORD *)(v19 + 32));
      v20 = *(_QWORD *)(v19 + 24);
      v21 = 48LL * *(_QWORD *)(v19 + 32);
      v51 = v20 + v21;
      if ( v20 + v21 == v20 )
        return 0;
      v44 = *(_QWORD *)(v19 + 24);
      v22 = 0;
LABEL_33:
      v46 = v22 + 1;
      v52 = nullptr;
      *(_OWORD *)n = 0;
      sub_67E30((__int64 *)&v52, (__int64)"catch[%d].", v22);
      sub_7DF40((__int64)&src, "block.size");
      v23 = n[0];
      v56 = nullptr;
      v57 = 0;
      if ( n[0] )
      {
        v56 = (char *)qalloc_or_throw(n[0]);
        *((_QWORD *)&v57 + 1) = v23;
        memcpy(v56, v52, v23);
        *(_QWORD *)&v57 = v23;
        if ( !(_QWORD)v55 )
          goto LABEL_35;
        v35 = v55 - 1;
        if ( (_QWORD)v55 == 1 )
          goto LABEL_35;
        --v23;
        v34 = v55 - 1 + v23;
        v24 = v55 + v23;
      }
      else
      {
        v24 = v55;
        if ( !(_QWORD)v55 )
          goto LABEL_35;
        v34 = v55 - 1;
        if ( (_QWORD)v55 == 1 )
          goto LABEL_35;
        v35 = v55 - 1;
      }
      v36 = v56;
      if ( *((_QWORD *)&v57 + 1) < v24 )
      {
        v45 = v34;
        v42 = v24;
        v56 = (char *)qvector_reserve(&v56, v56, v24, 1);
        v34 = v45;
        v36 = v56;
        v24 = v42;
      }
      *(_QWORD *)&v57 = v24;
      v36[v34] = 0;
      memcpy(&v56[v23], src, v35);
LABEL_35:
      result = sub_7D900(a1, v3, v44);
      if ( v56 )
      {
        v39 = result;
        *(_QWORD *)&v57 = 0;
        qfree(v56);
        result = v39;
      }
      if ( src )
      {
        v40 = result;
        *(_QWORD *)&v55 = 0;
        qfree(src);
        result = v40;
      }
      if ( (_DWORD)result )
        goto LABEL_63;
      sub_7DF40((__int64)&src, "catchexprs.size");
      sub_7F7D0((__int64)&v56, (__int64)&v52, (__int64)&src);
      sub_78DB0(v2, *(_DWORD *)(v44 + 32));
      if ( v56 )
      {
        *(_QWORD *)&v57 = 0;
        qfree(v56);
      }
      if ( src )
      {
        *(_QWORD *)&v55 = 0;
        qfree(src);
      }
      v25 = *(_QWORD *)(v44 + 24);
      v41 = v25 + 88LL * *(_QWORD *)(v44 + 32);
      if ( v41 == v25 )
        goto LABEL_65;
      break;
    default:
      if ( !under_debugger )
        sub_37EEE0(52344);
      BUG();
  }
  do
  {
    v55 = 0;
    src = nullptr;
    v32 = (_BYTE *)qvector_reserve(&src, 0, 10, 1);
    src = v32;
    *(_QWORD *)&v55 = 10;
    *(_QWORD *)v32 = 0x7079745F656B6166LL;
    v32[8] = 101;
    *((_BYTE *)src + 9) = 0;
    v33 = n[0];
    v56 = nullptr;
    v57 = 0;
    if ( n[0] )
    {
      v56 = (char *)qalloc_or_throw(n[0]);
      *((_QWORD *)&v57 + 1) = v33;
      memcpy(v56, v52, v33);
      *(_QWORD *)&v57 = v33;
    }
    v26 = v55;
    if ( (_QWORD)v55 )
    {
      v27 = v55 - 1;
      if ( (_QWORD)v55 != 1 )
      {
        v28 = v57;
        v29 = v55 - 1;
        if ( (_QWORD)v57 )
        {
          v28 = v57 - 1;
          v29 = v27 + v57 - 1;
          v26 = v55 + v57 - 1;
        }
        v30 = v56;
        if ( *((_QWORD *)&v57 + 1) < v26 )
        {
          v50 = v28;
          v49 = v55 - 1;
          v48 = v29;
          v47 = v26;
          v56 = (char *)qvector_reserve(&v56, v56, v26, 1);
          v28 = v50;
          v30 = v56;
          v27 = v49;
          v29 = v48;
          v26 = v47;
        }
        *(_QWORD *)&v57 = v26;
        v30[v29] = 0;
        memcpy(&v56[v28], src, v27);
      }
    }
    v31 = s1;
    if ( *(_QWORD *)(v25 + 72) )
      v31 = *(const char **)(v25 + 64);
    sub_78E10(v2, v31);
    if ( v56 )
    {
      *(_QWORD *)&v57 = 0;
      qfree(v56);
    }
    if ( src )
    {
      *(_QWORD *)&v55 = 0;
      qfree(src);
    }
    result = sub_251E00(a1, v25, v3);
    if ( (_DWORD)result )
    {
LABEL_63:
      if ( v52 )
      {
        v37 = result;
        n[0] = 0;
        qfree(v52);
        return v37;
      }
      return result;
    }
    v25 += 88;
  }
  while ( v41 != v25 );
LABEL_65:
  if ( v52 )
  {
    n[0] = 0;
    qfree(v52);
  }
  v44 += 48;
  if ( v51 != v44 )
  {
    v22 = v46;
    goto LABEL_33;
  }
  return 0;
}
