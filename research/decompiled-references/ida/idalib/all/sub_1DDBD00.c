__int64 __fastcall sub_1DDBD00(
        __int64 *a1,
        unsigned __int64 *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        _BYTE *a6,
        __m128 a7,
        __m128 a8)
{
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // r14
  int v11; // eax
  __int64 v12; // r13
  __int64 v13; // rax
  char v14; // al
  __int64 v15; // r12
  int v16; // r13d
  unsigned __int16 *v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  int v23; // r14d
  int v24; // eax
  __int64 v25; // r12
  int v26; // r13d
  unsigned __int16 *v27; // rax
  _DWORD *v28; // rax
  __int64 v29; // rax
  __int64 v30; // r13
  int v31; // eax
  int v32; // r14d
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  unsigned __int16 *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  __int64 v43; // rcx
  unsigned __int64 v44; // rax
  __int64 v45; // rdx
  unsigned __int64 v46; // [rsp-10h] [rbp-108h]
  unsigned __int64 v47; // [rsp-8h] [rbp-100h]
  unsigned __int64 *v48; // [rsp+0h] [rbp-F8h]
  unsigned __int64 v49; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v50; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v51; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v52; // [rsp+8h] [rbp-F0h]
  char v53; // [rsp+17h] [rbp-E1h]
  __int64 v55; // [rsp+30h] [rbp-C8h]
  _DWORD *v56; // [rsp+40h] [rbp-B8h]
  char v57; // [rsp+5Ah] [rbp-9Eh] BYREF
  char v58; // [rsp+5Bh] [rbp-9Dh] BYREF
  int v59; // [rsp+5Ch] [rbp-9Ch] BYREF
  void *ptr; // [rsp+60h] [rbp-98h] BYREF
  __int64 v61; // [rsp+68h] [rbp-90h]
  _BYTE v62[40]; // [rsp+70h] [rbp-88h] BYREF
  __int128 v63; // [rsp+98h] [rbp-60h] BYREF
  __int64 v64; // [rsp+A8h] [rbp-50h]

  v53 = a4;
  if ( !(_DWORD)a3 )
    return 0;
  v48 = a2;
  v55 = (__int64)&a2[(unsigned int)(a3 - 1) + 1];
  while ( 1 )
  {
    while ( 1 )
    {
      v9 = *v48;
      if ( v53 )
        break;
      if ( (*(_WORD *)v9 & 0x1FF) == 0x16 )
        goto LABEL_5;
      v21 = (unsigned __int64)sub_1DC71F0(a1, *v48, a3, a4, a5, (__int64)a6, a7, a8);
LABEL_21:
      if ( v21 == 1 )
        return 1;
      v22 = v21 & 0xFFFFFFFFFFFFFFFELL;
      if ( *v48 != v22 && a6 )
        *a6 = 1;
      a4 = *(unsigned int *)(a5 + 8);
      if ( a4 + 1 > *(unsigned int *)(a5 + 12) )
      {
        v50 = v22;
        sub_2237220(a5, a5 + 16, a4 + 1, 8);
        a4 = *(unsigned int *)(a5 + 8);
        v22 = v50;
      }
      a3 = *(_QWORD *)a5;
      ++v48;
      *(_QWORD *)(*(_QWORD *)a5 + 8 * a4) = v22;
      ++*(_DWORD *)(a5 + 8);
      if ( (unsigned __int64 *)v55 == v48 )
        return 0;
    }
    if ( sub_BFDFF0(*v48) )
      break;
    v9 = *v48;
    if ( (*(_WORD *)*v48 & 0x1FF) != 0x16 )
    {
      v21 = sub_1DDC230(a1, *v48, 0);
      goto LABEL_21;
    }
LABEL_5:
    v10 = *(_QWORD *)(v9 + 24);
    ptr = v62;
    v61 = 0x200000000LL;
    v49 = v10;
    sub_1E4CA90(v10);
    v11 = *(_DWORD *)(v9 + 20);
    v57 = 1;
    v58 = 0;
    v12 = (unsigned int)v61;
    v59 = v11;
    v13 = sub_EEC8C0(v10, (__int64)&ptr, *(double *)a7.m128_u64);
    v14 = sub_1DDBB60(
            a1,
            *(_DWORD *)(v9 + 16),
            v13,
            (__int64)ptr,
            v12,
            (__int64)&v57,
            a7,
            a8,
            (__int64)&v58,
            (__int64)&v59);
    a3 = v46;
    a4 = v47;
    if ( v14 )
      goto LABEL_30;
    if ( v57 )
    {
      if ( a6 )
        *a6 = 1;
      if ( v59 != 1 )
      {
        v23 = 0;
        while ( 1 )
        {
          v25 = *a1;
          ++v23;
          v26 = *(_DWORD *)(*a1 + 12632);
          *(_DWORD *)(*a1 + 12632) = v23;
          v27 = sub_1DC71F0(a1, v49, a3, a4, a5, (__int64)a6, a7, a8);
          if ( v27 == (unsigned __int16 *)((char *)&dword_0 + 1) )
            break;
          v28 = (_DWORD *)((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFFELL);
          if ( (*v28 & 0x4000) != 0 )
          {
            v29 = sub_1E53EF0(*a1, v28);
            if ( v29 == 1 )
              break;
            v28 = (_DWORD *)(v29 & 0xFFFFFFFFFFFFFFFELL);
          }
          a4 = *(unsigned int *)(a5 + 8);
          if ( a4 + 1 <= *(unsigned int *)(a5 + 12) )
          {
            a3 = *(_QWORD *)a5;
          }
          else
          {
            v56 = v28;
            sub_2237220(a5, a5 + 16, a4 + 1, 8);
            a4 = *(unsigned int *)(a5 + 8);
            a3 = *(_QWORD *)a5;
            v28 = v56;
          }
          *(_QWORD *)(a3 + 8 * a4) = v28;
          v24 = v59;
          ++*(_DWORD *)(a5 + 8);
          *(_DWORD *)(v25 + 12632) = v26;
          if ( v23 == v24 - 1 )
            goto LABEL_48;
        }
        *(_DWORD *)(v25 + 12632) = v26;
        goto LABEL_30;
      }
LABEL_48:
      if ( v58 )
      {
        v30 = *a1;
        v31 = *(_DWORD *)(*a1 + 12632);
        *(_DWORD *)(*a1 + 12632) = 0;
        v32 = v31;
        sub_1DB8420((__m128i *)&v63, a1);
        v37 = sub_1DC71F0(a1, v49, v33, v34, v35, v36, a7, a8);
        if ( v37 == (unsigned __int16 *)((char *)&dword_0 + 1)
          || (v42 = sub_1E53EF0(*a1, (unsigned __int64)v37 & 0xFFFFFFFFFFFFFFFELL), v42 == 1) )
        {
          sub_1DB8040((__int64)a1, a1 + 4, v38, v39, v40, v41, v63, v64);
          *(_DWORD *)(v30 + 12632) = v32;
          goto LABEL_30;
        }
        v43 = *(unsigned int *)(a5 + 8);
        v44 = v42 & 0xFFFFFFFFFFFFFFFELL;
        if ( v43 + 1 > (unsigned __int64)*(unsigned int *)(a5 + 12) )
        {
          v52 = v44;
          sub_2237220(a5, a5 + 16, v43 + 1, 8);
          v43 = *(unsigned int *)(a5 + 8);
          v44 = v52;
        }
        v45 = *(_QWORD *)a5;
        *(_QWORD *)(v45 + 8 * v43) = v44;
        ++*(_DWORD *)(a5 + 8);
        sub_1DB8040((__int64)a1, a1 + 4, v45, v43, v40, v41, v63, v64);
        *(_DWORD *)(v30 + 12632) = v32;
      }
    }
    else
    {
      v15 = *a1;
      v16 = *(_DWORD *)(*a1 + 12632);
      *(_DWORD *)(*a1 + 12632) = 0;
      v17 = sub_1DC71F0(a1, v10, v46, v47, a5, (__int64)a6, a7, a8);
      if ( v17 == (unsigned __int16 *)((char *)&dword_0 + 1)
        || (v18 = sub_1E53EF0(*a1, (unsigned __int64)v17 & 0xFFFFFFFFFFFFFFFELL), v18 == 1) )
      {
        *(_DWORD *)(v15 + 12632) = v16;
LABEL_30:
        if ( ptr != v62 )
          free(ptr);
        return 1;
      }
      if ( a6 )
        *a6 = 1;
      a4 = *(unsigned int *)(a5 + 8);
      v19 = v18 & 0xFFFFFFFFFFFFFFFELL;
      if ( a4 + 1 > *(unsigned int *)(a5 + 12) )
      {
        v51 = v19;
        sub_2237220(a5, a5 + 16, a4 + 1, 8);
        a4 = *(unsigned int *)(a5 + 8);
        v19 = v51;
      }
      a3 = *(_QWORD *)a5;
      *(_QWORD *)(*(_QWORD *)a5 + 8 * a4) = v19;
      ++*(_DWORD *)(a5 + 8);
      *(_DWORD *)(v15 + 12632) = v16;
    }
    if ( ptr != v62 )
      free(ptr);
    if ( (unsigned __int64 *)v55 == ++v48 )
      return 0;
  }
  if ( !a6 )
    return 0;
  *a6 = 1;
  return 0;
}
