__int64 __fastcall sub_3EB500(int a1, __int64 *a2, int a3, int a4)
{
  __int64 v6; // r13
  __m128i v7; // xmm1
  _OWORD *v8; // rax
  __m128i v9; // xmm1
  int v10; // r9d
  _QWORD *v11; // rbx
  void *v12; // rdi
  __int64 v13; // rsi
  void (__fastcall ***v14)(void *, __int64); // rbx
  bool v15; // zf
  __int64 result; // rax
  __int64 *v17; // rbx
  unsigned __int64 v18; // rbp
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 *v21; // rbp
  __int64 v22; // rax
  __int64 v23; // r12
  __int64 *v24; // rbx
  __int64 *v25; // r13
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 *v28; // rbp
  __int64 v29; // rax
  __int64 *v30; // r12
  __int64 *v31; // rbx
  __int64 *v32; // r13
  __int64 v33; // rsi
  __int64 v34; // rdi
  __m128i v35; // [rsp+0h] [rbp-198h] BYREF
  __int64 v36; // [rsp+10h] [rbp-188h] BYREF
  _DWORD v37[4]; // [rsp+18h] [rbp-180h] BYREF
  _DWORD v38[4]; // [rsp+28h] [rbp-170h] BYREF
  void *v39; // [rsp+38h] [rbp-160h]
  __int64 v40; // [rsp+40h] [rbp-158h]
  int v41; // [rsp+48h] [rbp-150h]
  __int128 v42; // [rsp+50h] [rbp-148h]
  __int64 v43; // [rsp+60h] [rbp-138h]
  __int64 *v44; // [rsp+68h] [rbp-130h]
  __int64 v45; // [rsp+70h] [rbp-128h] BYREF
  __int64 v46; // [rsp+78h] [rbp-120h]
  void *v47; // [rsp+80h] [rbp-118h]
  __int64 v48; // [rsp+88h] [rbp-110h]
  __int64 v49; // [rsp+90h] [rbp-108h] BYREF
  __m128i v50; // [rsp+A0h] [rbp-F8h] BYREF
  __int64 v51; // [rsp+B0h] [rbp-E8h]
  __int64 v52[2]; // [rsp+B8h] [rbp-E0h] BYREF
  __int64 v53; // [rsp+C8h] [rbp-D0h]
  __int64 v54; // [rsp+D0h] [rbp-C8h]
  __int64 v55; // [rsp+D8h] [rbp-C0h]
  __int64 v56[2]; // [rsp+E0h] [rbp-B8h] BYREF
  void *s; // [rsp+F0h] [rbp-A8h]
  __int64 v58; // [rsp+F8h] [rbp-A0h]
  void *v59; // [rsp+100h] [rbp-98h]
  __int64 v60; // [rsp+108h] [rbp-90h]
  int v61; // [rsp+110h] [rbp-88h]
  __int64 v62; // [rsp+118h] [rbp-80h]
  __int64 v63; // [rsp+120h] [rbp-78h] BYREF
  __int64 (__fastcall **v64)(); // [rsp+128h] [rbp-70h]
  __int64 v65; // [rsp+138h] [rbp-60h]
  void *v66; // [rsp+140h] [rbp-58h]
  __int64 v67; // [rsp+150h] [rbp-48h]
  void *v68; // [rsp+158h] [rbp-40h]

  v6 = *a2;
  v7 = (__m128i)(unsigned __int64)*a2;
  v36 = v6;
  v35 = _mm_unpacklo_epi64(v7, v7);
  sub_1684300(v37, v6);
  sub_16669D0(v38, v6);
  v8 = (_OWORD *)sub_186B270(0x80u);
  *v8 = 0;
  v8[1] = 0;
  v8[2] = 0;
  v8[3] = 0;
  v8[4] = 0;
  v8[5] = 0;
  v8[6] = 0;
  v8[7] = 0;
  v39 = v8;
  v40 = 8;
  v41 = 0;
  v43 = v6;
  v44 = nullptr;
  v45 = v6;
  v46 = 0;
  v47 = nullptr;
  v48 = v6;
  v42 = 0;
  sub_1684300(&v49, v6);
  v9 = _mm_load_si128(&v35);
  v52[0] = v6;
  v56[0] = v6;
  v51 = 0;
  v52[1] = 0;
  v53 = 0;
  v54 = 0;
  v55 = 0;
  v56[1] = 0;
  s = &v63;
  v58 = 1;
  v59 = nullptr;
  v60 = 0;
  v61 = 1065353216;
  v62 = 0;
  v63 = 0;
  v64 = &off_1C62200;
  v65 = 0;
  v66 = nullptr;
  v67 = 0;
  v68 = nullptr;
  v50 = v9;
  sub_3F9520(
    (unsigned int)&v36,
    a1,
    (_DWORD)a2,
    a3,
    a4,
    v10,
    v35.m128i_i32[0],
    v35.m128i_i64[1],
    v36,
    v37[0],
    v37[2],
    v38[0],
    v38[2],
    (_DWORD)v39,
    v40,
    v41,
    v42,
    DWORD2(v42),
    v43,
    (_DWORD)v44,
    v45,
    v46,
    (_DWORD)v47,
    v48,
    v49);
  v64 = &off_1C62200;
  if ( v68 )
    sub_186B220(v68);
  if ( v66 )
    sub_186B220(v66);
  v11 = v59;
  if ( v59 )
  {
    do
    {
      v12 = v11;
      v11 = (_QWORD *)*v11;
      operator delete(v12, 0x18u);
    }
    while ( v11 );
  }
  memset(s, 0, 8 * v58);
  v60 = 0;
  v59 = nullptr;
  v13 = v58;
  if ( s != &v63 )
  {
    v13 = 8 * v58;
    operator delete(s, 8 * v58);
  }
  sub_2334C0(v56);
  if ( v55 )
    sub_186B220((void *)(v55 - 8));
  if ( v54 )
    sub_186B220((void *)(v54 - 8));
  if ( v53 )
    sub_186B220((void *)(v53 - 8));
  sub_2334C0(v52);
  sub_2334C0(&v50.m128i_i64[1]);
  v14 = (void (__fastcall ***)(void *, __int64))v47;
  if ( v47 )
  {
    v15 = (*((_DWORD *)v47 + 4))-- == 1;
    if ( v15 )
    {
      (**v14)(v14, v13);
      sub_186B220(v14);
    }
  }
  result = sub_2334C0(&v45);
  v17 = v44;
  if ( v44 )
  {
    result = *((unsigned int *)v44 - 1);
    v18 = (unsigned __int64)&v44[result];
    if ( (unsigned __int64)v44 >= v18 )
      goto LABEL_26;
    do
    {
      while ( 1 )
      {
        v19 = *v17;
        if ( *v17 )
        {
          v20 = v43;
          v15 = (*(_DWORD *)(v19 + 8))-- == 1;
          if ( v15 )
            break;
        }
        if ( (unsigned __int64)++v17 >= v18 )
          goto LABEL_25;
      }
      result = sub_15D7BC0(v20, v19);
      ++v17;
    }
    while ( (unsigned __int64)v17 < v18 );
LABEL_25:
    v17 = v44;
    if ( v44 )
LABEL_26:
      result = sub_186B220(v17 - 1);
  }
  v21 = *((__int64 **)&v42 + 1);
  if ( *((_QWORD *)&v42 + 1) )
  {
    v22 = *(unsigned int *)(*((_QWORD *)&v42 + 1) - 4LL);
    if ( (_DWORD)v22 )
    {
      v23 = *((_QWORD *)&v42 + 1) + 16 * v22;
      do
      {
        v24 = (__int64 *)v21[1];
        if ( v24 )
        {
          v25 = &v24[*((unsigned int *)v24 - 1)];
          if ( v24 >= v25 )
            goto LABEL_38;
          do
          {
            while ( 1 )
            {
              v26 = *v24;
              if ( *v24 )
              {
                v27 = *v21;
                v15 = (*(_DWORD *)(v26 + 8))-- == 1;
                if ( v15 )
                  break;
              }
              if ( ++v24 >= v25 )
                goto LABEL_37;
            }
            sub_15D7BC0(v27, v26);
            ++v24;
          }
          while ( v24 < v25 );
LABEL_37:
          v24 = (__int64 *)v21[1];
          if ( v24 )
LABEL_38:
            sub_186B220(v24 - 1);
        }
        v21 += 2;
      }
      while ( v21 != (__int64 *)v23 );
      v21 = *((__int64 **)&v42 + 1);
    }
    result = sub_186B220(v21 - 1);
  }
  v28 = (__int64 *)v42;
  if ( (_QWORD)v42 )
  {
    v29 = *(unsigned int *)(v42 - 4);
    if ( (_DWORD)v29 )
    {
      v30 = (__int64 *)(v42 + 16 * v29);
      do
      {
        v31 = (__int64 *)v28[1];
        if ( v31 )
        {
          v32 = &v31[*((unsigned int *)v31 - 1)];
          if ( v31 >= v32 )
            goto LABEL_53;
          do
          {
            while ( 1 )
            {
              v33 = *v31;
              if ( *v31 )
              {
                v34 = *v28;
                v15 = (*(_DWORD *)(v33 + 8))-- == 1;
                if ( v15 )
                  break;
              }
              if ( ++v31 >= v32 )
                goto LABEL_52;
            }
            sub_15D7BC0(v34, v33);
            ++v31;
          }
          while ( v31 < v32 );
LABEL_52:
          v31 = (__int64 *)v28[1];
          if ( v31 )
LABEL_53:
            sub_186B220(v31 - 1);
        }
        v28 += 2;
      }
      while ( v28 != v30 );
      v28 = (__int64 *)v42;
    }
    result = sub_186B220(v28 - 1);
  }
  if ( v39 )
    return sub_186B220(v39);
  return result;
}

