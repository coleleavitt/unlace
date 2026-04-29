__int64 __fastcall sub_83310(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 v3; // rbp
  size_t v4; // rax
  __int64 result; // rax
  __int64 *v6; // r13
  __int64 v7; // rbp
  __int64 v8; // r15
  size_t v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // r12
  __int64 v13; // rcx
  __int64 v14; // rbp
  __int64 i; // r15
  size_t v16; // rax
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // rdx
  int v20; // edx
  __int64 v21; // rdx
  __int64 v22; // rcx
  size_t v23; // r13
  unsigned __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r13
  unsigned __int64 v27; // rdx
  size_t v28; // r9
  __int64 v29; // r8
  size_t v30; // r10
  char *v31; // rsi
  const char *v32; // rsi
  _BYTE *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  size_t v36; // r14
  size_t v37; // r9
  size_t v38; // r14
  char *v39; // rsi
  unsigned int v40; // [rsp+8h] [rbp-100h]
  __int64 v41; // [rsp+10h] [rbp-F8h]
  unsigned int v42; // [rsp+10h] [rbp-F8h]
  unsigned int v43; // [rsp+10h] [rbp-F8h]
  __int64 v44; // [rsp+10h] [rbp-F8h]
  unsigned __int64 v45; // [rsp+10h] [rbp-F8h]
  __int64 v46; // [rsp+18h] [rbp-F0h]
  __int64 v47; // [rsp+18h] [rbp-F0h]
  size_t v48; // [rsp+28h] [rbp-E0h]
  int v49; // [rsp+34h] [rbp-D4h]
  unsigned __int64 v50; // [rsp+38h] [rbp-D0h]
  size_t v51; // [rsp+40h] [rbp-C8h]
  size_t v52; // [rsp+48h] [rbp-C0h]
  __int64 v53; // [rsp+50h] [rbp-B8h]
  __int64 v54; // [rsp+58h] [rbp-B0h]
  void *v55; // [rsp+60h] [rbp-A8h] BYREF
  size_t n[3]; // [rsp+68h] [rbp-A0h]
  void *src; // [rsp+80h] [rbp-88h] BYREF
  __int128 v58; // [rsp+88h] [rbp-80h]
  char *v59; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v60; // [rsp+A8h] [rbp-60h]
  _BYTE v61[10]; // [rsp+BEh] [rbp-4Ah] BYREF
  unsigned __int64 v62; // [rsp+C8h] [rbp-40h]

  v2 = (__int64 *)(a1 + 72);
  v62 = __readfsqword(0x28u);
  v3 = a2;
  sub_7C7F0((__int64 *)(a1 + 72));
  if ( *(_QWORD *)a2 == -1 )
  {
    sub_7A780(v2, 2);
  }
  else
  {
    if ( *(_QWORD *)a2 >= *(_QWORD *)(a1 + 64) )
      sub_7A780(v2, 0);
    else
      sub_7A780(v2, 1);
    v4 = pack_dq() - (_QWORD)v61;
    if ( v4 )
      sub_7BEC0(v2, v61, v4);
  }
  sub_7C7F0(v2);
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
      return sub_81340(a1, a2, *(_QWORD ***)(a2 + 24));
    case 'I':
      sub_7A780(v2, *(_QWORD *)(*(_QWORD *)(a2 + 24) + 72LL) == 0);
      return 0;
    case 'M':
      sub_81170((_QWORD *)a1, *(_QWORD *)(a2 + 24) + 64LL);
      sub_7C7F0(v2);
      v10 = *(_QWORD *)(a2 + 24);
      v11 = *(_QWORD *)(v10 + 120);
      v12 = *(_QWORD *)(v10 + 112);
      if ( v12 == v12 + 56 * v11 )
        goto LABEL_26;
      v46 = v12 + 56 * v11;
      v41 = v3;
      while ( 1 )
      {
        sub_7C7F0(v2);
        v13 = *(_QWORD *)(v12 + 32);
        v14 = v13 + 8LL * *(_QWORD *)(v12 + 40);
        for ( i = v13; v14 != i; i += 8 )
        {
          v16 = pack_dq() - (_QWORD)v61;
          if ( v16 )
            sub_7BEC0(v2, v61, v16);
        }
        result = sub_255A80(a1, v12, v41);
        if ( (_DWORD)result )
          break;
        v12 += 56;
        if ( v12 == v46 )
        {
          v3 = v41;
          v10 = *(_QWORD *)(v41 + 24);
LABEL_26:
          result = sub_255A80(a1, v10, v3);
          if ( !(_DWORD)result )
            *(_DWORD *)(a1 + 8) |= 1u;
          return result;
        }
      }
      return result;
    case 'Q':
      sub_7C7F0(v2);
      return 0;
    case 'R':
      v6 = *(__int64 **)(a2 + 24);
      sub_7C7F0(v2);
      v7 = *v6;
      v8 = *v6 + 8 * v6[1];
      if ( *v6 != v8 )
      {
        do
        {
          v9 = pack_dq() - (_QWORD)v61;
          if ( v9 )
            sub_7BEC0(v2, v61, v9);
          v7 += 8;
        }
        while ( v8 != v7 );
      }
      return 0;
    case 'S':
      v17 = *(_QWORD *)(a2 + 24);
      result = sub_81340(a1, a2, (_QWORD **)v17);
      if ( (_DWORD)result )
        return result;
      sub_7C7F0(v2);
      sub_7C7F0(v2);
      sub_7C7F0(v2);
      sub_7C7F0(v2);
      v18 = *(_QWORD *)(v17 + 24);
      v19 = 48LL * *(_QWORD *)(v17 + 32);
      v54 = v18 + v19;
      if ( v18 + v19 == v18 )
        return 0;
      v47 = *(_QWORD *)(v17 + 24);
      v20 = 0;
LABEL_33:
      v49 = v20 + 1;
      v55 = nullptr;
      *(_OWORD *)n = 0;
      sub_6B870((__int64 *)&v55);
      sub_81980((__int64)&src, "block.size");
      v23 = n[0];
      v59 = nullptr;
      v60 = 0;
      if ( n[0] )
      {
        v59 = (char *)qalloc_or_throw(n[0], (__int64)"block.size", v21, v22);
        *((_QWORD *)&v60 + 1) = v23;
        memcpy(v59, v55, v23);
        *(_QWORD *)&v60 = v23;
        if ( !(_QWORD)v58 )
          goto LABEL_35;
        v38 = v58 - 1;
        if ( (_QWORD)v58 == 1 )
          goto LABEL_35;
        --v23;
        v37 = v58 - 1 + v23;
        v24 = v58 + v23;
      }
      else
      {
        v24 = v58;
        if ( !(_QWORD)v58 )
          goto LABEL_35;
        v37 = v58 - 1;
        if ( (_QWORD)v58 == 1 )
          goto LABEL_35;
        v38 = v58 - 1;
      }
      v39 = v59;
      if ( *((_QWORD *)&v60 + 1) < v24 )
      {
        v48 = v37;
        v45 = v24;
        v59 = (char *)qvector_reserve((__int64)&v59, (__int64)v59, v24, 1);
        v37 = v48;
        v39 = v59;
        v24 = v45;
      }
      *(_QWORD *)&v60 = v24;
      v39[v37] = 0;
      memcpy(&v59[v23], src, v38);
LABEL_35:
      result = sub_81340(a1, v3, (_QWORD **)v47);
      if ( v59 )
      {
        v42 = result;
        *(_QWORD *)&v60 = 0;
        qfree((__int64)v59);
        result = v42;
      }
      if ( src )
      {
        v43 = result;
        *(_QWORD *)&v58 = 0;
        qfree((__int64)src);
        result = v43;
      }
      if ( (_DWORD)result )
        goto LABEL_63;
      sub_81980((__int64)&src, "catchexprs.size");
      sub_83210((__int64)&v59, (__int64)&v55, (__int64)&src, v25);
      sub_7C7F0(v2);
      if ( v59 )
      {
        *(_QWORD *)&v60 = 0;
        qfree((__int64)v59);
      }
      if ( src )
      {
        *(_QWORD *)&v58 = 0;
        qfree((__int64)src);
      }
      v26 = *(_QWORD *)(v47 + 24);
      v44 = v26 + 88LL * *(_QWORD *)(v47 + 32);
      if ( v44 == v26 )
        goto LABEL_65;
      break;
    default:
      if ( !under_debugger )
        sub_383060(52344);
      BUG();
  }
  do
  {
    v58 = 0;
    src = nullptr;
    v33 = (_BYTE *)qvector_reserve((__int64)&src, 0, 10, 1);
    src = v33;
    *(_QWORD *)&v58 = 10;
    *(_QWORD *)v33 = 0x7079745F656B6166LL;
    v33[8] = 101;
    *((_BYTE *)src + 9) = 0;
    v36 = n[0];
    v59 = nullptr;
    v60 = 0;
    if ( n[0] )
    {
      v59 = (char *)qalloc_or_throw(n[0], 0, v34, v35);
      *((_QWORD *)&v60 + 1) = v36;
      memcpy(v59, v55, v36);
      *(_QWORD *)&v60 = v36;
    }
    v27 = v58;
    if ( (_QWORD)v58 )
    {
      v28 = v58 - 1;
      if ( (_QWORD)v58 != 1 )
      {
        v29 = v60;
        v30 = v58 - 1;
        if ( (_QWORD)v60 )
        {
          v29 = v60 - 1;
          v30 = v28 + v60 - 1;
          v27 = v58 + v60 - 1;
        }
        v31 = v59;
        if ( *((_QWORD *)&v60 + 1) < v27 )
        {
          v53 = v29;
          v52 = v58 - 1;
          v51 = v30;
          v50 = v27;
          v59 = (char *)qvector_reserve((__int64)&v59, (__int64)v59, v27, 1);
          v29 = v53;
          v31 = v59;
          v28 = v52;
          v30 = v51;
          v27 = v50;
        }
        *(_QWORD *)&v60 = v27;
        v31[v30] = 0;
        memcpy(&v59[v29], src, v28);
      }
    }
    v32 = s1;
    if ( *(_QWORD *)(v26 + 72) )
      v32 = *(const char **)(v26 + 64);
    sub_7C850(v2, v32);
    if ( v59 )
    {
      *(_QWORD *)&v60 = 0;
      qfree((__int64)v59);
    }
    if ( src )
    {
      *(_QWORD *)&v58 = 0;
      qfree((__int64)src);
    }
    result = sub_255A80(a1, v26, v3);
    if ( (_DWORD)result )
    {
LABEL_63:
      if ( v55 )
      {
        v40 = result;
        n[0] = 0;
        qfree((__int64)v55);
        return v40;
      }
      return result;
    }
    v26 += 88;
  }
  while ( v44 != v26 );
LABEL_65:
  if ( v55 )
  {
    n[0] = 0;
    qfree((__int64)v55);
  }
  v47 += 48;
  if ( v54 != v47 )
  {
    v20 = v49;
    goto LABEL_33;
  }
  return 0;
}
