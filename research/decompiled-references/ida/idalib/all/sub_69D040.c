__int64 __fastcall sub_69D040(__m128i *a1, __int64 *a2, __int64 a3, __m128i *a4)
{
  char v6; // dl
  char *v9; // rax
  unsigned __int64 v10; // rsi
  char *v11; // rax
  char v12; // dl
  char v13; // al
  unsigned int v14; // r12d
  char *v15; // rdi
  __int64 v16; // r13
  __int64 v17; // rbp
  __int64 v18; // rbx
  void *v19; // rax
  unsigned __int16 v21; // ax
  __m128i *v22; // rdi
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r8
  int v25; // ecx
  __m128i *v26; // r15
  __int64 v27; // rcx
  __int8 *v28; // rax
  unsigned __int64 v29; // r15
  __int8 *v30; // rsi
  void *v31; // rax
  char *v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rax
  __int64 v35; // r15
  void *v36; // rdx
  __int64 v37; // rcx
  __int8 *v38; // rax
  char *v39; // rdi
  __int64 v40; // rdx
  __int64 v41; // r15
  void *v42; // rcx
  __m128i *v43; // rax
  __m128i *v44; // rax
  __int64 v45; // [rsp-8h] [rbp-108h]
  int v46; // [rsp+0h] [rbp-100h]
  int v47; // [rsp+0h] [rbp-100h]
  __m128i *v48; // [rsp+0h] [rbp-100h]
  __int64 v49; // [rsp+0h] [rbp-100h]
  __int64 v50; // [rsp+0h] [rbp-100h]
  unsigned __int64 v51; // [rsp+0h] [rbp-100h]
  unsigned __int64 v52; // [rsp+0h] [rbp-100h]
  int v53; // [rsp+8h] [rbp-F8h]
  unsigned __int64 v54; // [rsp+8h] [rbp-F8h]
  __int64 v55; // [rsp+8h] [rbp-F8h]
  int v56; // [rsp+10h] [rbp-F0h]
  unsigned __int64 v57; // [rsp+10h] [rbp-F0h]
  __int64 v58; // [rsp+18h] [rbp-E8h] BYREF
  __int128 v59; // [rsp+20h] [rbp-E0h]
  __int64 v60; // [rsp+30h] [rbp-D0h]
  __int64 v61; // [rsp+38h] [rbp-C8h]
  __int128 v62; // [rsp+40h] [rbp-C0h]
  void *v63; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v64; // [rsp+60h] [rbp-A0h]
  void *ptr; // [rsp+70h] [rbp-90h] BYREF
  __int128 v66; // [rsp+78h] [rbp-88h]
  __int64 v67; // [rsp+88h] [rbp-78h]
  int v68; // [rsp+90h] [rbp-70h]
  void *v69; // [rsp+98h] [rbp-68h]
  __int128 v70; // [rsp+A0h] [rbp-60h]
  __int64 v71; // [rsp+B0h] [rbp-50h]
  __int16 v72; // [rsp+B8h] [rbp-48h]
  char v73; // [rsp+BAh] [rbp-46h]
  unsigned __int64 v74; // [rsp+C0h] [rbp-40h]

  v6 = 0;
  v74 = __readfsqword(0x28u);
  v72 = 104;
  v9 = (char *)a4->m128i_i64[0];
  v63 = nullptr;
  v73 = 0;
  LOBYTE(ptr) = 0;
  v64 = 0;
  if ( (unsigned __int64)v9 < a4->m128i_i64[1] )
    v6 = *v9++;
  a4->m128i_i64[0] = (__int64)v9;
  sub_69B280(a1, (__m128i *)&v63, v6, a3, a4);
  v10 = a4->m128i_u64[1];
  v11 = (char *)a4->m128i_i64[0];
  if ( a4->m128i_i64[0] >= v10 )
    goto LABEL_19;
  v12 = *v11;
  a4->m128i_i64[0] = (__int64)(v11 + 1);
  switch ( v12 )
  {
    case 1:
      if ( HIBYTE(v72) == 1 )
      {
        if ( ptr )
        {
          *(_QWORD *)&v66 = 0;
          qfree(ptr);
          ptr = nullptr;
          *((_QWORD *)&v66 + 1) = 0;
        }
        v67 = -1;
        v68 = -1;
        if ( v69 )
        {
          *(_QWORD *)&v70 = 0;
          qfree(v69);
          v69 = nullptr;
          *((_QWORD *)&v70 + 1) = 0;
        }
        v71 = -1;
      }
      else
      {
        if ( HIBYTE(v72) == 2 )
        {
          v39 = (char *)ptr;
          if ( ptr )
          {
            v40 = 0;
            v41 = 0;
            v50 = v66;
            if ( (_QWORD)v66 )
            {
              do
              {
                v42 = *(void **)&v39[v40];
                if ( v42 )
                {
                  *(_QWORD *)&v39[v40 + 8] = 0;
                  v55 = v40;
                  qfree(v42);
                  v39 = (char *)ptr;
                  v40 = v55;
                }
                ++v41;
                v40 += 56;
              }
              while ( v50 != v41 );
            }
            *(_QWORD *)&v66 = 0;
            qfree(v39);
          }
        }
        ptr = nullptr;
        v67 = -1;
        v68 = -1;
        v69 = nullptr;
        HIBYTE(v72) = 1;
        v66 = 0;
        v70 = 0;
      }
      sub_69B6D0(a1, (__m128i *)&ptr, a3, a4);
      goto LABEL_19;
    case 2:
      if ( HIBYTE(v72) == 2 )
      {
        v32 = (char *)ptr;
        if ( ptr )
        {
          v33 = v66;
          if ( (_QWORD)v66 )
          {
            v34 = 0;
            v35 = 0;
            do
            {
              v36 = *(void **)&v32[v34];
              if ( v36 )
              {
                *(_QWORD *)&v32[v34 + 8] = 0;
                v49 = v34;
                qfree(v36);
                v32 = (char *)ptr;
                v34 = v49;
              }
              ++v35;
              v34 += 56;
            }
            while ( v33 != v35 );
          }
          *(_QWORD *)&v66 = 0;
          qfree(v32);
          ptr = nullptr;
          v10 = a4->m128i_u64[1];
          *((_QWORD *)&v66 + 1) = 0;
        }
      }
      else
      {
        if ( HIBYTE(v72) == 1 )
        {
          if ( v69 )
          {
            *(_QWORD *)&v70 = 0;
            qfree(v69);
          }
          if ( ptr )
          {
            *(_QWORD *)&v66 = 0;
            qfree(ptr);
          }
          v10 = a4->m128i_u64[1];
        }
        ptr = nullptr;
        HIBYTE(v72) = 2;
        v66 = 0;
      }
      v21 = unpack_dw(a4, v10);
      v22 = (__m128i *)ptr;
      v23 = v66;
      v24 = v21;
      v25 = v21;
      v26 = (__m128i *)ptr;
      if ( v21 != (_QWORD)v66 )
      {
        v58 = 0;
        v59 = 0;
        v60 = -1;
        v61 = 0xFFFFFFFFLL;
        v62 = -1;
        if ( v21 >= (unsigned __int64)v66 )
        {
          if ( &v58 < ptr || &v58 >= (__int64 *)((char *)ptr + 56 * *((_QWORD *)&v66 + 1)) )
          {
            if ( *((_QWORD *)&v66 + 1) >= (unsigned __int64)v21
              || (v51 = v21,
                  v43 = (__m128i *)qvector_reserve(&ptr, ptr, v21, 56),
                  v23 = v66,
                  v24 = v51,
                  ptr = v43,
                  v26 = v43,
                  (unsigned __int64)v66 < v51) )
            {
              v37 = 56 * v23;
              do
              {
                v38 = &v26->m128i_i8[v37];
                ++v23;
                v37 += 56;
                *(_QWORD *)v38 = 0;
                *((_QWORD *)v38 + 3) = -1;
                *(_OWORD *)(v38 + 8) = 0;
                v26 = (__m128i *)ptr;
                *((_QWORD *)v38 + 4) = 0xFFFFFFFFLL;
                *(_OWORD *)(v38 + 40) = -1;
              }
              while ( v24 != v23 );
            }
          }
          else if ( *((_QWORD *)&v66 + 1) >= (unsigned __int64)v21
                 || (v52 = v21,
                     v44 = (__m128i *)qvector_reserve(&ptr, ptr, v21, 56),
                     v23 = v66,
                     v24 = v52,
                     ptr = v44,
                     v26 = v44,
                     (unsigned __int64)v66 < v52) )
          {
            v27 = 56 * v23;
            do
            {
              v28 = &v26->m128i_i8[v27];
              ++v23;
              v27 += 56;
              *(_QWORD *)v28 = 0;
              *((_QWORD *)v28 + 3) = -1;
              *(_OWORD *)(v28 + 8) = 0;
              v26 = (__m128i *)ptr;
              *((_QWORD *)v28 + 4) = 0xFFFFFFFFLL;
              *(_OWORD *)(v28 + 40) = -1;
            }
            while ( v24 != v23 );
          }
          *(_QWORD *)&v66 = v24;
LABEL_47:
          v48 = (__m128i *)((char *)v26 + 56 * v24);
          do
          {
            sub_69B780(a1, v26, a3, a4);
            v26 = (__m128i *)((char *)v26 + 56);
          }
          while ( v26 != v48 );
          if ( !a2 )
          {
LABEL_21:
            v13 = HIBYTE(v72);
            v14 = 1;
            if ( HIBYTE(v72) == 2 )
              goto LABEL_8;
            goto LABEL_22;
          }
LABEL_20:
          sub_69CE50(a2, (__int64)&v63);
          goto LABEL_21;
        }
        v29 = v21;
        do
        {
          v30 = &v22->m128i_i8[56 * v29];
          v31 = *(void **)v30;
          if ( *(_QWORD *)v30 )
          {
            *((_QWORD *)v30 + 1) = 0;
            v57 = v24;
            v54 = v23;
            v47 = v25;
            qfree(v31);
            v22 = (__m128i *)ptr;
            v24 = v57;
            v23 = v54;
            v25 = v47;
          }
          ++v29;
        }
        while ( v29 < v23 );
        *(_QWORD *)&v66 = v24;
        v26 = v22;
      }
      if ( (_WORD)v25 )
        goto LABEL_47;
LABEL_19:
      if ( !a2 )
        goto LABEL_21;
      goto LABEL_20;
    case 0:
      goto LABEL_19;
  }
  sub_84F5B0("bad try block type\n", v45, v46, v53, v56, v58, v59, SDWORD2(v59), v60, v61, v62, *((__int64 *)&v62 + 1));
  v13 = HIBYTE(v72);
  v14 = 0;
  if ( HIBYTE(v72) == 2 )
  {
LABEL_8:
    v15 = (char *)ptr;
    if ( !ptr )
      goto LABEL_23;
    v16 = v66;
    if ( (_QWORD)v66 )
    {
      v17 = 0;
      v18 = 0;
      do
      {
        v19 = *(void **)&v15[v17];
        if ( v19 )
        {
          *(_QWORD *)&v15[v17 + 8] = 0;
          qfree(v19);
          v15 = (char *)ptr;
        }
        ++v18;
        v17 += 56;
      }
      while ( v16 != v18 );
    }
    goto LABEL_29;
  }
LABEL_22:
  if ( v13 == 1 )
  {
    if ( v69 )
    {
      *(_QWORD *)&v70 = 0;
      qfree(v69);
    }
    v15 = (char *)ptr;
    if ( ptr )
    {
LABEL_29:
      *(_QWORD *)&v66 = 0;
      qfree(v15);
    }
  }
LABEL_23:
  HIBYTE(v72) = 0;
  if ( v63 )
  {
    *(_QWORD *)&v64 = 0;
    qfree(v63);
  }
  return v14;
}
