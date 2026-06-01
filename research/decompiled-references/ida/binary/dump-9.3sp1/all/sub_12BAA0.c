__int64 __fastcall sub_12BAA0(_QWORD *a1, __int64 a2, unsigned int *a3, unsigned int *a4, unsigned int a5, __int64 a6)
{
  __int64 v6; // r14
  unsigned __int64 v7; // rbx
  unsigned int *v10; // rbp
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // r14
  void *v14; // rax
  __int128 v15; // rdi
  unsigned __int64 v16; // r15
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // r10
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // r12
  __int64 v25; // rbx
  __int64 *v26; // rbp
  __int64 v27; // rdi
  unsigned __int64 i; // r15
  int v30; // edx
  __int64 v31; // rax
  _QWORD *v32; // r14
  __int64 v33; // rdi
  __int128 v34; // rdi
  size_t v35; // r10
  int v36; // edx
  char v37; // al
  char v38; // al
  __int16 v39; // ax
  __int64 v40; // rax
  int v41; // eax
  unsigned int v42; // edx
  unsigned __int64 v43; // r10
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rdi
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // [rsp+10h] [rbp-E8h]
  __int64 v52; // [rsp+10h] [rbp-E8h]
  __int64 nc; // [rsp+20h] [rbp-D8h]
  size_t n; // [rsp+20h] [rbp-D8h]
  size_t na; // [rsp+20h] [rbp-D8h]
  int nb; // [rsp+20h] [rbp-D8h]
  __int64 v60; // [rsp+38h] [rbp-C0h]
  __int64 v61; // [rsp+38h] [rbp-C0h]
  __int64 v62; // [rsp+40h] [rbp-B8h]
  char *v63; // [rsp+40h] [rbp-B8h]
  int v64; // [rsp+40h] [rbp-B8h]
  __int64 v65; // [rsp+40h] [rbp-B8h]
  char *v66; // [rsp+40h] [rbp-B8h]
  int v67; // [rsp+48h] [rbp-B0h]
  __int64 v68; // [rsp+48h] [rbp-B0h]
  int v69; // [rsp+48h] [rbp-B0h]
  char v70; // [rsp+5Fh] [rbp-99h]
  unsigned __int64 v71; // [rsp+60h] [rbp-98h] BYREF
  __int64 v72; // [rsp+68h] [rbp-90h]
  __int64 v73; // [rsp+70h] [rbp-88h] BYREF
  __int128 v74; // [rsp+78h] [rbp-80h]
  __int64 v75[2]; // [rsp+90h] [rbp-68h] BYREF
  void *src; // [rsp+A0h] [rbp-58h] BYREF
  __int128 v77; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v78; // [rsp+B8h] [rbp-40h]

  v78 = __readfsqword(0x28u);
  if ( !a3 )
  {
    LOBYTE(v6) = *(_QWORD *)(a6 + 16) == 0;
    return (unsigned int)v6;
  }
  v7 = a1[1];
  v73 = 0;
  v10 = a3;
  v74 = 0;
  if ( v7 )
  {
    v75[0] = 0;
    v75[1] = 0;
    src = nullptr;
    v77 = 0;
    v11 = qvector_reserve((__int64)&v73, 0, v7, 40);
    v12 = v74;
    v73 = v11;
    if ( (unsigned __int64)v74 < v7 )
    {
      while ( 1 )
      {
        v13 = v11 + 40 * v12;
        sub_64000((__int64 *)v13, (__int64)v75);
        *(_QWORD *)(v13 + 16) = 0;
        *(_OWORD *)(v13 + 24) = 0;
        if ( (_QWORD)v77 )
        {
          v51 = v77;
          nc = 16 * v77;
          v14 = (void *)qalloc_or_throw(16 * v77, (__int64)v75, 16 * v77, v77);
          *(_QWORD *)(v13 + 16) = v14;
          *(_QWORD *)(v13 + 32) = v51;
          memcpy(v14, src, nc);
          *(_QWORD *)(v13 + 24) = v51;
        }
        if ( v7 == ++v12 )
          break;
        v11 = v73;
      }
    }
    *(_QWORD *)&v74 = v7;
    if ( src )
    {
      *(_QWORD *)&v77 = 0;
      qfree((__int64)src);
    }
    v6 = 0;
    qfree(v75[0]);
    do
    {
      *(_QWORD *)&v15 = a2;
      *((_QWORD *)&v15 + 1) = v73 + 40 * v6;
      sub_123EA0(v15, *a1 + 16 * v6++, 1, 0xFFFF0000);
    }
    while ( v7 != v6 );
  }
  if ( *v10 == 1 )
    goto LABEL_52;
LABEL_14:
  sub_127A20((__int64)v75, a2, (__int64)v10, 1, a5, a6);
  v70 = 0;
  if ( v7 )
  {
    v16 = 0;
    while ( 1 )
    {
      v6 = v73 + 40 * v16;
      if ( !(unsigned __int8)sub_64780((_QWORD *)v6, v75) && !(unsigned __int8)sub_318470(v6 + 16, &src) )
        goto LABEL_34;
      if ( a4 != nullptr && a4 == v10 )
        goto LABEL_21;
      v19 = *v10;
      v20 = v16 & 7;
      *(&v70 + (v16 >> 3)) |= 1 << v20;
      v21 = *a1 + 16 * v16;
      v6 = *(_QWORD *)(*(_QWORD *)(a2 + 480) + 112LL);
      if ( (_DWORD)v19 == 62 )
      {
        if ( (*((_BYTE *)v10 + 5) & 0x10) != 0 )
          goto LABEL_21;
      }
      else if ( (unsigned int)v19 <= 0x3B )
      {
        v22 = 0xCFFFC0000000003LL;
        if ( _bittest64(&v22, v19) )
          goto LABEL_21;
        if ( *(_BYTE *)v21 != 1 && (unsigned __int8)(*(_BYTE *)v21 - 5) > 1u || (v20 = a5) != 0 )
        {
LABEL_57:
          if ( (signed int)v10[17] < *(_DWORD *)(v21 + 4) )
            goto LABEL_21;
          n = *a1 + 16 * v16;
          if ( !(unsigned __int8)sub_32ED70(v19) || !sub_1255D0((unsigned __int8 *)n, v6, (__int64)(v10 + 16), a5) )
            goto LABEL_21;
          v72 = 0;
          v71 = 0xFFFFFFFF00000000LL;
          sub_1262E0((__int64)&v71, (unsigned __int8 *)v10);
          v35 = n;
          v36 = *(_DWORD *)(n + 4);
          if ( SHIDWORD(v71) > v36 )
          {
            if ( !(unsigned __int8)sub_12AB50((unsigned __int8 *)&v71, v6, v36, 0) )
            {
              sub_11CDA0((__int64)&v71);
LABEL_21:
              LODWORD(v6) = 0;
LABEL_22:
              if ( src )
              {
                *(_QWORD *)&v77 = 0;
                qfree((__int64)src);
              }
              qfree(v75[0]);
              goto LABEL_25;
            }
            v35 = n;
            v36 = *(_DWORD *)(n + 4);
          }
          v37 = *(_BYTE *)v35;
          *(_BYTE *)v35 = v71;
          LOBYTE(v71) = v37;
          v38 = *(_BYTE *)(v35 + 1);
          *(_BYTE *)(v35 + 1) = BYTE1(v71);
          BYTE1(v71) = v38;
          v39 = *(_WORD *)(v35 + 2);
          *(_WORD *)(v35 + 2) = WORD1(v71);
          WORD1(v71) = v39;
          *(_DWORD *)(v35 + 4) = HIDWORD(v71);
          v40 = *(_QWORD *)(v35 + 8);
          HIDWORD(v71) = v36;
          *(_QWORD *)(v35 + 8) = v72;
          v72 = v40;
          sub_11CDA0((__int64)&v71);
          goto LABEL_34;
        }
        if ( (_DWORD)v19 == 4 )
          goto LABEL_69;
        goto LABEL_68;
      }
      if ( *(_BYTE *)v21 == 1 || (unsigned __int8)(*(_BYTE *)v21 - 5) > 1u || a5 )
        goto LABEL_57;
LABEL_68:
      if ( (unsigned int)(v19 - 10) > 1 )
        goto LABEL_57;
LABEL_69:
      na = *a1 + 16 * v16;
      v41 = sub_121CD0(v6, (__int64)(v10 + 16), na, v20, v17, v18);
      if ( !v41 )
        goto LABEL_21;
      v42 = *v10;
      v43 = na;
      if ( *v10 == 10 )
      {
        if ( v41 == 3 )
          goto LABEL_21;
        v64 = v41;
        if ( (unsigned int *)na == v10 + 8 )
          goto LABEL_34;
        v46 = na;
        v68 = na;
        nb = *(_DWORD *)(na + 4);
        sub_11CDA0(v46);
        sub_123A40(v68, (unsigned __int8 *)v10 + 32, v47, v48);
        v43 = v68;
        if ( v64 != 2 )
          goto LABEL_34;
      }
      else
      {
        if ( v42 == 11 )
        {
          if ( v41 == 2 )
            goto LABEL_21;
          nb = *(_DWORD *)(na + 4);
          if ( (unsigned int *)v43 != v10 + 8 )
          {
            v69 = v41;
            v65 = v43;
            sub_11CDA0(v43);
            sub_123A40(v65, (unsigned __int8 *)v10 + 32, v49, v50);
            v43 = v65;
            v41 = v69;
          }
LABEL_88:
          if ( v41 == 3 && nb < *(_DWORD *)(v43 + 4) && nb > 0 )
          {
            v66 = (char *)v43;
            v61 = *((_QWORD *)v10 + 3);
            if ( !(unsigned __int8)sub_127850(v43, v6, nb, 0) )
              sub_1207E0(v66, v6, 11, v61, nb);
          }
          goto LABEL_34;
        }
        if ( v42 != 4 )
        {
          if ( !under_debugger )
            sub_383060(52668);
          BUG();
        }
        nb = *(_DWORD *)(na + 4);
        if ( (unsigned int *)v43 != v10 + 8 )
        {
          v67 = v41;
          v62 = v43;
          sub_11CDA0(v43);
          sub_123A40(v62, (unsigned __int8 *)v10 + 32, v44, v45);
          v41 = v67;
          v43 = v62;
        }
        if ( v41 != 2 )
          goto LABEL_88;
      }
      if ( *(_DWORD *)(v43 + 4) > nb && nb > 0 )
      {
        v63 = (char *)v43;
        v60 = *((_QWORD *)v10 + 3);
        if ( !(unsigned __int8)sub_1272B0(v43, v6, nb, 0) )
          sub_1207E0(v63, v6, 10, v60, nb);
      }
LABEL_34:
      if ( v7 == ++v16 )
      {
        if ( v70 )
        {
          if ( *(_QWORD *)(a6 + 16) )
          {
            LODWORD(v6) = (*(__int64 (__fastcall **)(__int64, _QWORD *))(a6 + 24))(a6, a1);
            if ( (_BYTE)v6 )
              goto LABEL_22;
          }
        }
        if ( a4 == v10 || !*((_QWORD *)v10 + 2) )
          goto LABEL_96;
        for ( i = 0; i != v7; ++i )
        {
          while ( 1 )
          {
            v30 = (unsigned __int8)*(&v70 + (i >> 3));
            if ( _bittest(&v30, i & 7) )
              break;
            if ( v7 == ++i )
              goto LABEL_48;
          }
          v31 = 40 * i;
          v32 = (_QWORD *)(40 * i + v73);
          v33 = v32[2];
          v32[1] = 0;
          if ( v33 )
          {
            v32[3] = 0;
            qfree(v33);
            v32[2] = 0;
            v31 = 40 * i;
            v32[4] = 0;
            v32 = (_QWORD *)(40 * i + v73);
          }
          *((_QWORD *)&v34 + 1) = v32;
          *(_QWORD *)&v34 = a2;
          v52 = v31;
          sub_123EA0(v34, *a1 + 16 * i, 1, 0xFFFF0000);
          v6 = v73 + v52;
          if ( (unsigned __int8)sub_64780((_QWORD *)(v73 + v52), v75) || (unsigned __int8)sub_318470(v6 + 16, &src) )
            goto LABEL_21;
        }
LABEL_48:
        v10 = *((unsigned int **)v10 + 2);
LABEL_49:
        if ( src )
        {
          *(_QWORD *)&v77 = 0;
          qfree((__int64)src);
        }
        qfree(v75[0]);
        if ( *v10 == 1 )
        {
LABEL_52:
          LODWORD(v6) = 0;
          goto LABEL_25;
        }
        goto LABEL_14;
      }
    }
  }
  if ( a4 != v10 )
  {
    v10 = *((unsigned int **)v10 + 2);
    if ( v10 )
      goto LABEL_49;
  }
LABEL_96:
  if ( src )
  {
    *(_QWORD *)&v77 = 0;
    qfree((__int64)src);
  }
  qfree(v75[0]);
  LOBYTE(v6) = *(_QWORD *)(a6 + 16) == 0;
LABEL_25:
  v23 = v73;
  if ( v73 )
  {
    v24 = v74;
    if ( (_QWORD)v74 )
    {
      v25 = 0;
      do
      {
        v26 = (__int64 *)(v23 + 40 * v25);
        v27 = v26[2];
        if ( v27 )
        {
          v26[3] = 0;
          qfree(v27);
        }
        ++v25;
        qfree(*v26);
        v23 = v73;
      }
      while ( v24 != v25 );
    }
    *(_QWORD *)&v74 = 0;
    qfree(v23);
  }
  return (unsigned int)v6;
}
