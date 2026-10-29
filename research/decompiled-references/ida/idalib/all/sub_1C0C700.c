__int64 __fastcall sub_1C0C700(
        __m128 *a1,
        char *a2,
        _DWORD **a3,
        unsigned __int64 a4,
        __m128 a5,
        __m128 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v8; // eax
  __int64 v11; // rbx
  unsigned int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _DWORD *v16; // rdx
  unsigned __int64 v17; // r15
  __int64 v18; // r14
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  unsigned int v23; // eax
  unsigned int v24; // eax
  unsigned __int64 *v26; // rax
  unsigned __int64 v27; // rdi
  char *v28; // rax
  char *v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rdx
  char **v32; // r14
  char **v33; // r15
  __int64 v34; // rbp
  __int64 v35; // r12
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rdx
  char *v41; // [rsp-10h] [rbp-138h]
  __int64 v42; // [rsp-8h] [rbp-130h]
  __int64 v43; // [rsp+0h] [rbp-128h]
  __int64 v44; // [rsp+8h] [rbp-120h]
  unsigned __int64 v45; // [rsp+8h] [rbp-120h]
  __int64 v46; // [rsp+8h] [rbp-120h]
  __int64 v47; // [rsp+10h] [rbp-118h]
  _DWORD *v48; // [rsp+10h] [rbp-118h]
  __int64 v51; // [rsp+28h] [rbp-100h]
  __int64 v52; // [rsp+38h] [rbp-F0h]
  unsigned int v53; // [rsp+40h] [rbp-E8h]
  int v54; // [rsp+44h] [rbp-E4h]
  char *v55; // [rsp+48h] [rbp-E0h] BYREF
  __m128i v56; // [rsp+50h] [rbp-D8h] BYREF
  char v57; // [rsp+61h] [rbp-C7h]
  void *ptr; // [rsp+70h] [rbp-B8h]
  _BYTE v59[168]; // [rsp+80h] [rbp-A8h] BYREF

  v8 = *(_DWORD *)(a8 + 8);
  v55 = a2;
  if ( v8 <= 1 )
    return 0;
  v52 = 8LL * (v8 - 1) + 8;
  v43 = 0;
  v54 = a4 - 1;
LABEL_4:
  while ( 2 )
  {
    v11 = *(_QWORD *)(*(_QWORD *)a8 + v43);
    v12 = sub_FDE930((__int64 *)&v55);
    if ( *(_DWORD *)(v11 + 104) >= v12 )
      v12 = *(_DWORD *)(v11 + 104);
    v53 = v12;
    v51 = v12;
    if ( v12 > a4 )
      goto LABEL_3;
    if ( v12 )
    {
      v16 = *a3;
      if ( (**a3 & 0x10000) != 0 )
        goto LABEL_3;
      v17 = 0;
      v18 = 8LL * (v12 - 1);
      while ( 1 )
      {
        v19 = *(_QWORD *)(*(_QWORD *)(v11 + 96) + v17);
        v20 = *(_QWORD *)(*((_QWORD *)v16 + 1) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v20 + 16) == 13 && ((*(_WORD *)(v20 + 18) >> 3) & 0x1FF) == 0x1F8 )
        {
          if ( (*(_BYTE *)(v19 + 29) & 1) == 0 )
            goto LABEL_20;
          v48 = v16;
          v46 = *(_QWORD *)(*(_QWORD *)(v11 + 96) + v17);
          v26 = sub_B8C3D0(v46, (__int64)a2, (__int64)v16, v19, v14, v15);
          v19 = v46;
          v16 = v48;
          a2 = (char *)*v26;
          v27 = *v26 + 8LL * *((unsigned int *)v26 + 2);
          if ( *v26 >= v27 )
          {
            if ( a2 == (char *)v27 )
              goto LABEL_20;
            if ( *(_WORD *)(*(_QWORD *)v27 + 36LL) != 97 )
            {
              v29 = (char *)(v27 + 8);
              while ( a2 != v29 )
              {
                v30 = *(_QWORD *)v29;
                v29 += 8;
                if ( *(_WORD *)(v30 + 36) == 97 )
                  goto LABEL_21;
              }
LABEL_20:
              a2 = (char *)v16;
              v44 = v19;
              v21 = sub_19D0DD0(a1[46].m128_i64[0], (__int64)v16);
              v19 = v44;
              v16 = (_DWORD *)v21;
            }
          }
          else
          {
            v28 = (char *)*v26;
            while ( 1 )
            {
              a2 = *(char **)v28;
              if ( *(_WORD *)(*(_QWORD *)v28 + 36LL) == 97 )
                break;
              v28 += 8;
              if ( (char *)v27 == v28 )
                goto LABEL_20;
            }
            if ( (char *)v27 == v28 )
              goto LABEL_20;
          }
        }
LABEL_21:
        v22 = *(_QWORD *)(v19 + 48);
        if ( v22 == *(_QWORD *)(a1[15].m128_u64[1] + 19104) )
          goto LABEL_3;
        if ( (*(_WORD *)v16 & 0x1FF) == 0x35 )
        {
          sub_1BF6540(
            &v56,
            a1,
            (unsigned __int64)v16,
            v22,
            0,
            1u,
            a5,
            a6,
            (*(_BYTE *)(a1[14].m128_u64[1] + 107) & 4) != 0);
          a2 = v41;
        }
        else if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF0LL)
                                                                           + 8LL)
                                                               & 0xFFFFFFFFFFFFFFF0LL)
                                                   + 16LL)
                - 43 > 1 )
        {
          a2 = (char *)a1;
          sub_1BEC140(
            &v56,
            (__int64)a1,
            (unsigned __int64)v16,
            v22,
            0,
            0,
            a5,
            a6,
            1u,
            0,
            (*(_BYTE *)(a1[14].m128_u64[1] + 107) & 4) != 0,
            0);
        }
        else
        {
          v47 = v22;
          v45 = (unsigned __int64)v16;
          v23 = sub_EEB7E0(
                  (unsigned __int64)v16,
                  (*(_BYTE *)(a1[14].m128_u64[1] + 107) & 4) != 0,
                  *(double *)a5.m128_u64);
          a2 = (char *)a1;
          sub_1BF3150(&v56, a1, v45, v47, v23, 0, a5, a6, 0);
          v13 = v42;
        }
        if ( (v56.m128i_i32[0] & 0x7FFFFFFF) == 5 || (v56.m128i_i32[0] & 0x7FFFFFFF) == 0 && v57 == 29 )
        {
          if ( (v56.m128i_i32[0] & 0x7FFFFFFF) == 3 && ptr != v59 )
          {
            free(ptr);
            v43 += 8;
            if ( v52 == v43 )
              return 0;
            goto LABEL_4;
          }
          goto LABEL_3;
        }
        if ( (v56.m128i_i32[0] & 0x7FFFFFFF) != 3 || ptr == v59 )
        {
          if ( v18 == v17 )
            break;
        }
        else
        {
          free(ptr);
          if ( v18 == v17 )
            break;
        }
        v17 += 8LL;
        v16 = a3[v17 / 8];
        if ( (*v16 & 0x10000) != 0 )
          goto LABEL_3;
      }
    }
    if ( (*(_BYTE *)(v11 + 58) & 4) != 0 )
    {
      if ( (unsigned int)a4 <= v53 )
        return v11;
      a2 = (char *)a3[v51];
      if ( (*(_DWORD *)a2 & 0x10000) == 0 )
      {
        v31 = v53 + 1;
        v32 = (char **)&a3[v31];
        v33 = (char **)&(&a3[v31])[v54 - v53];
        do
        {
          if ( sub_192BE00((__int64)a1, a2, 2, nullptr, v14, v15, a5, a6) == 1 )
            break;
          if ( v33 == v32 )
            return v11;
          a2 = *v32++;
        }
        while ( (*(_DWORD *)a2 & 0x10000) == 0 );
      }
      goto LABEL_3;
    }
    if ( v51 != a4 )
    {
LABEL_3:
      v43 += 8;
      if ( v52 == v43 )
        return 0;
      continue;
    }
    break;
  }
  if ( !v53 )
  {
    v24 = *(_DWORD *)(a8 + 8);
    if ( v24 > 1 )
    {
      v34 = 0;
      v35 = 8LL * (v24 - 1) + 8;
      while ( 1 )
      {
        v36 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a8 + v34) + 80LL) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v36 + 16) == 34
          || (v40 = *(_QWORD *)(*(_QWORD *)(v36 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v40 + 16) == 34)
          && (v36 = sub_F63050(
                      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a8 + v34) + 80LL) & 0xFFFFFFFFFFFFFFF0LL),
                      a2,
                      v40,
                      v13)) != 0 )
        {
          v37 = *(_QWORD *)(*(_QWORD *)(v36 + 32) & 0xFFFFFFFFFFFFFFF0LL);
          v38 = (unsigned int)*(unsigned __int8 *)(v37 + 16) - 35;
          if ( (unsigned int)v38 > 1 )
            v37 = sub_F63050(v37, a2, v38, v13);
          if ( !(*(_BYTE *)(v37 + 19) >> 2) )
          {
            v39 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v37 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(v39 + 16) == 13 && ((*(_WORD *)(v39 + 18) >> 3) & 0x1FF) == 0x1E9 )
              break;
          }
        }
        v34 += 8;
        if ( v35 == v34 )
          return v11;
      }
      return *(_QWORD *)(*(_QWORD *)a8 + v34);
    }
  }
  return v11;
}
