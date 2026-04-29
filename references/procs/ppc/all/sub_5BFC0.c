unsigned __int64 __fastcall sub_5BFC0(__int64 a1, __int64 *a2, __m128i **a3, const char *a4)
{
  __m128i *v4; // r12
  __m128i *v7; // rax
  __m128i *v9; // rcx
  __m128i *v10; // r9
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  __int16 v14; // ax
  __int16 v15; // ax
  __int64 v16; // rdi
  char v18; // r15
  unsigned __int16 v19; // r13
  unsigned __int64 v20; // r14
  __m128i *v21; // rax
  __int64 v22; // rdi
  __int16 v23; // ax
  unsigned __int64 v24; // r13
  __m128i *v25; // rax
  __int64 v26; // rcx
  unsigned __int64 v27; // rbp
  unsigned __int64 *v28; // rdx
  unsigned __int64 *v29; // rax
  __int64 v30; // rcx
  unsigned __int64 *v31; // rdx
  unsigned __int64 *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned __int64 *v36; // rax
  const char *v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // [rsp+8h] [rbp-68h] BYREF
  __int128 v43; // [rsp+10h] [rbp-60h]
  char v44; // [rsp+20h] [rbp-50h]
  unsigned __int64 v45; // [rsp+30h] [rbp-40h]

  v4 = nullptr;
  v7 = a3[1];
  v45 = __readfsqword(0x28u);
  v9 = *a3;
  v44 = 0;
  v43 = 0;
  v42 = 0;
  v7 = (__m128i *)(24LL * (_QWORD)v7);
  v10 = (__m128i *)((char *)v7 + (_QWORD)v9);
  if ( v7 )
  {
    v11 = -1;
    do
    {
      v12 = v9->m128i_u64[1];
      v13 = 2 * (v12 - (_QWORD)a4);
      if ( v12 < (unsigned __int64)a4 )
        v13 = (unsigned __int64)&a4[-v12];
      if ( v13 < v11 )
      {
        v11 = v13;
        v4 = v9;
      }
      v9 = (__m128i *)((char *)v9 + 24);
    }
    while ( v9 != v10 );
  }
  v14 = sub_35600(v4[1].m128i_u16[0]);
  if ( v14 != -1 && (v14 & 0x400) != 0 )
  {
    v18 = v14 & 0xF;
    if ( (v14 & 0xF) == 1 )
    {
      v19 = v14 & 0x800;
    }
    else
    {
      if ( v18 != 4 )
        goto LABEL_10;
      v19 = v14 & 0x800;
      if ( (v14 & 0x800) != 0 )
        goto LABEL_10;
    }
    v20 = v4->m128i_u64[1];
    a4 = (const char *)&v42;
    v21 = sub_59B80(a1, (__int64)&v42, v20);
    v4 = v21;
    if ( !v21 )
      goto LABEL_30;
    v22 = v21[1].m128i_u16[0];
    if ( (_DWORD)v22 == (v19 == 0) + 285 )
    {
      a4 = (const char *)*a2;
      v35 = a2[1];
      v28 = (unsigned __int64 *)(*a2 + 8 * v35);
      if ( (unsigned __int64 *)*a2 != v28 )
      {
        v36 = (unsigned __int64 *)*a2;
        while ( v20 != *v36 )
        {
          if ( v28 == ++v36 )
            goto LABEL_61;
        }
        if ( v28 != v36 )
        {
          v27 = v4->m128i_u64[1];
          v37 = (const char *)*a2;
          goto LABEL_57;
        }
      }
LABEL_61:
      if ( a2[2] < (unsigned __int64)(v35 + 1) )
      {
        v40 = qvector_reserve(a2, a4, v35 + 1, 8);
        v41 = a2[1];
        *a2 = v40;
        v28 = (unsigned __int64 *)(v40 + 8 * v41);
      }
      *v28 = v20;
      a4 = (const char *)*a2;
      v35 = a2[1] + 1;
      v28 = (unsigned __int64 *)(*a2 + 8 * v35);
      a2[1] = v35;
      v27 = v4->m128i_u64[1];
      if ( v28 == (unsigned __int64 *)a4 )
      {
        v37 = (const char *)v28;
      }
      else
      {
        v37 = a4;
LABEL_57:
        while ( *(_QWORD *)a4 != v27 )
        {
          a4 += 8;
          if ( v28 == (unsigned __int64 *)a4 )
            goto LABEL_59;
        }
        if ( v28 != (unsigned __int64 *)a4 )
          goto LABEL_30;
      }
LABEL_59:
      if ( a2[2] >= (unsigned __int64)(v35 + 1) )
        goto LABEL_38;
      a4 = v37;
      v33 = qvector_reserve(a2, v37, v35 + 1, 8);
      goto LABEL_49;
    }
    if ( !(_WORD)v22 && (v21[1].m128i_i8[2] & 0x20) != 0 )
    {
      a4 = (const char *)*a2;
      v30 = a2[1];
      v31 = (unsigned __int64 *)(*a2 + 8 * v30);
      if ( (unsigned __int64 *)*a2 == v31 )
        goto LABEL_45;
      v32 = (unsigned __int64 *)*a2;
      while ( v20 != *v32 )
      {
        if ( v31 == ++v32 )
          goto LABEL_45;
      }
      if ( v31 == v32 )
      {
LABEL_45:
        if ( a2[2] < (unsigned __int64)(v30 + 1) )
        {
          v38 = qvector_reserve(a2, a4, v30 + 1, 8);
          v39 = a2[1];
          *a2 = v38;
          v31 = (unsigned __int64 *)(v38 + 8 * v39);
        }
        *v31 = v20;
        ++a2[1];
      }
      goto LABEL_30;
    }
    v23 = sub_35600(v22);
    if ( v18 == 1 && v23 != -1 && (v23 & 0x400) != 0 && (v23 & 0xF) == 1 && v19 >> 11 != ((v23 & 0x800) != 0) )
    {
      v24 = v4->m128i_u64[1];
      a4 = (const char *)&v42;
      v25 = sub_59B80(a1, (__int64)&v42, v24);
      v4 = v25;
      if ( !v25 )
        goto LABEL_30;
      if ( (v25[1].m128i_i8[2] & 0x30) != 0 )
      {
        sub_594A0(a2, v20);
        a4 = (const char *)v24;
        sub_594A0(a2, v24);
        goto LABEL_30;
      }
    }
  }
LABEL_10:
  v15 = v4[1].m128i_i16[0];
  if ( v15 == 118 || v15 == 88 )
  {
    a4 = (const char *)*a2;
    v26 = a2[1];
    v27 = v4->m128i_u64[1];
    v28 = (unsigned __int64 *)(*a2 + 8 * v26);
    if ( (unsigned __int64 *)*a2 == v28 )
      goto LABEL_37;
    v29 = (unsigned __int64 *)*a2;
    while ( v27 != *v29 )
    {
      if ( v28 == ++v29 )
        goto LABEL_37;
    }
    if ( v29 == v28 )
    {
LABEL_37:
      if ( a2[2] >= (unsigned __int64)(v26 + 1) )
      {
LABEL_38:
        *v28 = v27;
        ++a2[1];
        goto LABEL_30;
      }
      v33 = qvector_reserve(a2, a4, v26 + 1, 8);
LABEL_49:
      v34 = a2[1];
      *a2 = v33;
      v28 = (unsigned __int64 *)(v33 + 8 * v34);
      goto LABEL_38;
    }
LABEL_30:
    v16 = v42;
    if ( !v42 )
      return v45 - __readfsqword(0x28u);
    goto LABEL_13;
  }
  v16 = v42;
  if ( v42 )
  {
LABEL_13:
    *(_QWORD *)&v43 = 0;
    qfree(v16, a4);
  }
  return v45 - __readfsqword(0x28u);
}
