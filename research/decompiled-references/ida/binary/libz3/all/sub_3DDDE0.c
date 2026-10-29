__int64 __fastcall sub_3DDDE0(__int64 *a1, __int64 a2, _DWORD *a3, __int64 a4, int a5, unsigned __int64 a6)
{
  _DWORD *v6; // r14
  __int64 v7; // rbx
  unsigned int v8; // ecx
  unsigned int **v9; // rdx
  char *p_ptr; // r12
  char *v11; // rcx
  char *v12; // r15
  unsigned int v13; // ebp
  unsigned int v14; // esi
  __int64 v15; // rdx
  __int64 v16; // r13
  const void **v17; // rdx
  size_t v18; // rbp
  unsigned __int64 v19; // rax
  const void *v20; // r9
  int v21; // edx
  __int64 v22; // r13
  const void *v23; // rdi
  const void *v24; // r15
  size_t v25; // r12
  char *v26; // rax
  char *v27; // r14
  __int64 result; // rax
  unsigned int v29; // ecx
  unsigned int v30; // edx
  unsigned int v31; // esi
  unsigned int *v32; // r13
  __int64 v33; // rdx
  __int64 v34; // rax
  const void **v35; // rdi
  size_t v36; // rsi
  const void *v37; // r10
  void *v38; // rdi
  char *v39; // r12
  size_t v40; // rbp
  const void *v41; // rbx
  char *v42; // rax
  char *v43; // r13
  __int64 v44; // r12
  __int64 v45; // rdi
  __int64 v46; // rcx
  __int64 *v47; // rcx
  __int64 v48; // rbp
  char *v49; // rdi
  unsigned __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rbp
  char *v53; // rdi
  unsigned __int64 v54; // rax
  __int64 v55; // rsi
  __int64 v56; // rsi
  __int64 v57; // rdx
  __int64 v58; // rdi
  char *v59; // r12
  char *v60; // r15
  int v61; // [rsp+0h] [rbp-1D8h]
  int c; // [rsp+4h] [rbp-1D4h]
  int ca; // [rsp+4h] [rbp-1D4h]
  __int64 *v64; // [rsp+8h] [rbp-1D0h]
  char *v65; // [rsp+10h] [rbp-1C8h]
  __int64 v66; // [rsp+18h] [rbp-1C0h]
  __int64 v67; // [rsp+20h] [rbp-1B8h]
  __int64 v68; // [rsp+28h] [rbp-1B0h]
  _BYTE *v69; // [rsp+30h] [rbp-1A8h]
  __int64 v70; // [rsp+38h] [rbp-1A0h]
  __int64 v71; // [rsp+40h] [rbp-198h] BYREF
  _DWORD *v72; // [rsp+48h] [rbp-190h] BYREF
  void *v73; // [rsp+50h] [rbp-188h] BYREF
  char *v74; // [rsp+58h] [rbp-180h]
  __int64 v75; // [rsp+60h] [rbp-178h] BYREF
  int v76; // [rsp+68h] [rbp-170h]
  __m128i s; // [rsp+70h] [rbp-168h] BYREF
  int v78; // [rsp+80h] [rbp-158h]
  int v79; // [rsp+88h] [rbp-150h]
  void *v80; // [rsp+90h] [rbp-148h] BYREF
  int v81[2]; // [rsp+98h] [rbp-140h]
  _DWORD *ptr; // [rsp+A0h] [rbp-138h] BYREF
  void *v83; // [rsp+A8h] [rbp-130h]
  int v84; // [rsp+B0h] [rbp-128h]
  __int64 v85; // [rsp+B8h] [rbp-120h]

  v6 = a3;
  v7 = a2;
  v64 = a1;
  if ( a3[2] > 1u )
  {
    v8 = *a3;
    if ( *a3 < *(_DWORD *)(a2 + 8) )
    {
      v56 = *(_QWORD *)(a2 + 16);
      v57 = v8 >> 5;
      result = *(_DWORD *)(v56 + 4 * v57) & (unsigned int)(1 << v8);
      if ( (*(_DWORD *)(v56 + 4 * v57) & (1 << v8)) != 0 )
        return result;
    }
    sub_3D2BC0(v7, v6);
  }
  LODWORD(v9) = 0;
  p_ptr = (char *)&ptr;
  ptr = v6;
  v65 = (char *)&ptr;
  v80 = &ptr;
  LODWORD(v83) = 0;
  *(_QWORD *)v81 = 0x1000000001LL;
  while ( 1 )
  {
    while ( 1 )
    {
      LODWORD(v11) = *((unsigned __int16 *)v6 + 2);
      v12 = &p_ptr[16 * (unsigned int)v9];
      if ( (_WORD)v11 == 1 )
        goto LABEL_30;
      if ( (_WORD)v11 != 2 )
        break;
      v29 = v6[18];
      v30 = *((_DWORD *)v12 + 2);
      v31 = v29 + v6[19] + 1;
      if ( v30 >= v31 )
        goto LABEL_29;
      if ( v30 )
      {
LABEL_46:
        a6 = v30 - 1;
        if ( v29 < v30 )
          a6 = (unsigned int)a6 - v29;
        ++v30;
        v32 = *(unsigned int **)&v6[4 * (unsigned int)v6[5] + 20 + 2 * a6];
        *((_DWORD *)v12 + 2) = v30;
        if ( v32[2] <= 1 )
          goto LABEL_49;
      }
      else
      {
        v32 = *((unsigned int **)v6 + 3);
        v30 = 1;
        *((_DWORD *)v12 + 2) = 1;
        if ( v32[2] <= 1 )
          goto LABEL_49;
      }
      if ( *v32 < *(_DWORD *)(v7 + 8) )
      {
        a6 = *(_QWORD *)(v7 + 16);
        if ( (*(_DWORD *)(a6 + 4LL * (*v32 >> 5)) & (1 << *v32)) != 0 )
        {
          if ( v30 >= v31 )
          {
LABEL_29:
            LODWORD(v9) = v81[0] - 1;
LABEL_30:
            v81[0] = (int)v9;
            goto LABEL_31;
          }
          v29 = v6[18];
          goto LABEL_46;
        }
      }
      sub_3D2BC0(v7, v32);
LABEL_49:
      v33 = (unsigned int)v81[0];
      if ( v81[0] >= (unsigned int)v81[1] )
      {
        v48 = (unsigned int)(2 * v81[1]);
        p_ptr = (char *)sub_186B270(16 * v48);
        v49 = (char *)v80;
        v50 = 0;
        v33 = (unsigned int)v81[0];
        v51 = 16LL * (unsigned int)v81[0];
        if ( v81[0] )
        {
          do
          {
            *(__m128i *)&p_ptr[v50] = _mm_loadu_si128((const __m128i *)&v49[v50]);
            v50 += 16LL;
          }
          while ( v50 != v51 );
        }
        if ( v49 != v65 && v49 )
        {
          sub_186B220(v49);
          v33 = (unsigned int)v81[0];
        }
        v80 = p_ptr;
        v81[1] = v48;
      }
      else
      {
        p_ptr = (char *)v80;
      }
      v9 = (unsigned int **)&p_ptr[16 * v33];
      *((_DWORD *)v9 + 2) = 0;
      v34 = (unsigned int)v81[0];
      *v9 = v32;
      v81[0] = v34 + 1;
      LODWORD(v9) = v34;
LABEL_52:
      v6 = *(_DWORD **)&p_ptr[16 * v34];
    }
    if ( (_WORD)v11 )
    {
      sub_1872CE0("");
      sub_1873130(114, 100);
    }
    v13 = v6[6];
    v14 = *((_DWORD *)v12 + 2);
    if ( v14 < v13 )
    {
      while ( 1 )
      {
        v15 = v14++;
        v16 = *(_QWORD *)&v6[2 * v15 + 8];
        *((_DWORD *)v12 + 2) = v14;
        if ( *(_DWORD *)(v16 + 8) > 1u )
        {
          if ( *(_DWORD *)v16 < *(_DWORD *)(v7 + 8) )
          {
            a6 = *(_QWORD *)(v7 + 16);
            LODWORD(v11) = *(_DWORD *)(a6 + 4LL * (*(_DWORD *)v16 >> 5)) & (1 << *(_DWORD *)v16);
            if ( (_DWORD)v11 )
              goto LABEL_18;
          }
          sub_3D2BC0(v7, (unsigned int *)v16);
        }
        LODWORD(v11) = *(unsigned __int16 *)(v16 + 4);
        if ( (_WORD)v11 == 1 )
          goto LABEL_17;
        if ( (_WORD)v11 == 2 )
        {
          v46 = (unsigned int)v81[0];
          if ( v81[0] >= (unsigned int)v81[1] )
          {
            v52 = (unsigned int)(2 * v81[1]);
            p_ptr = (char *)sub_186B270(16 * v52);
            v53 = (char *)v80;
            v54 = 0;
            v46 = (unsigned int)v81[0];
            v55 = 16LL * (unsigned int)v81[0];
            if ( v81[0] )
            {
              do
              {
                *(__m128i *)&p_ptr[v54] = _mm_loadu_si128((const __m128i *)&v53[v54]);
                v54 += 16LL;
              }
              while ( v55 != v54 );
            }
            if ( v53 != v65 && v53 )
            {
              sub_186B220(v53);
              v46 = (unsigned int)v81[0];
            }
            v80 = p_ptr;
            v81[1] = v52;
          }
          else
          {
            p_ptr = (char *)v80;
          }
          v47 = (__int64 *)&p_ptr[16 * v46];
          *((_DWORD *)v47 + 2) = 0;
          v34 = (unsigned int)v81[0];
          *v47 = v16;
          v81[0] = v34 + 1;
          LODWORD(v9) = v34;
          goto LABEL_52;
        }
        if ( (_WORD)v11 )
        {
          sub_1872CE0("");
          sub_1873130(114, 73);
        }
        if ( *(_DWORD *)(v16 + 24) )
        {
          s.m128i_i64[0] = v16;
          s.m128i_i32[2] = 0;
          sub_3DCD80((char **)&v80, &s);
          p_ptr = (char *)v80;
          LODWORD(v9) = v81[0] - 1;
          v34 = (unsigned int)(v81[0] - 1);
          goto LABEL_52;
        }
        sub_180CE20(
          (int)&v73,
          *(_DWORD *)(v16 + 16) + 16,
          v15,
          (int)v11,
          a5,
          a6,
          v61,
          v64,
          (int)v65,
          v66,
          v67,
          v68,
          (int)v69,
          v70,
          v71,
          (int)v72,
          (int)v73,
          (int)v74,
          v75,
          v76,
          s.m128i_i32[0],
          s.m128i_i32[2],
          v78,
          v79,
          (int)v80,
          v81[0],
          (int)ptr,
          v83,
          v84,
          v85);
        LODWORD(a6) = (_DWORD)v73;
        v35 = (const void **)v64[1];
        v36 = (size_t)v35[1];
        if ( !v36 )
          break;
        v11 = v74;
        if ( v74 )
        {
          v37 = *v35;
          if ( (unsigned __int64)v74 >= v36 )
          {
            ca = *(char *)*v35;
            v38 = v73;
            v39 = &v74[(_QWORD)v73];
            v68 = v16;
            v69 = v73;
            v66 = (__int64)v12;
            LODWORD(v67) = v13;
            v40 = 1 - v36;
            v70 = v7;
            v41 = v37;
            while ( 1 )
            {
              if ( !&v11[v40] || (v42 = (char *)memchr(v38, ca, (size_t)&v11[v40]), (v43 = v42) == nullptr) )
              {
LABEL_63:
                v13 = v67;
                v44 = -1;
                v16 = v68;
                a6 = (unsigned __int64)v69;
                v7 = v70;
                goto LABEL_64;
              }
              if ( !memcmp(v42, v41, v36) )
                break;
              v38 = v43 + 1;
              v11 = (char *)(v39 - (v43 + 1));
              if ( (unsigned __int64)v11 < v36 )
                goto LABEL_63;
            }
            a6 = (unsigned __int64)v69;
            v59 = v43;
            v13 = v67;
            v16 = v68;
            v7 = v70;
            v44 = v59 - v69;
LABEL_64:
            v11 = (char *)&v75;
            if ( (__int64 *)a6 != &v75 )
              operator delete((void *)a6, v75 + 1);
            if ( v44 == -1 )
              goto LABEL_17;
            goto LABEL_67;
          }
        }
        if ( v73 != &v75 )
        {
          operator delete(v73, v75 + 1);
          v14 = *((_DWORD *)v12 + 2);
          goto LABEL_18;
        }
LABEL_17:
        v14 = *((_DWORD *)v12 + 2);
LABEL_18:
        if ( v14 >= v13 )
        {
          LODWORD(v9) = v81[0] - 1;
          goto LABEL_20;
        }
      }
      if ( v73 != &v75 )
        operator delete(v73, v75 + 1);
LABEL_67:
      v71 = v16;
      v45 = *v64;
      ++*(_DWORD *)(v16 + 8);
      sub_3D5D00((_QWORD *)(v45 + 8), &v71);
      goto LABEL_17;
    }
LABEL_20:
    sub_180CE20(
      (int)&s,
      *((_QWORD *)v6 + 2) + 16,
      (int)v9,
      (int)v11,
      a5,
      a6,
      v61,
      v64,
      (int)v65,
      (__int64)&s,
      v67,
      v68,
      (int)v69,
      v70,
      v71,
      (int)v72,
      (int)v73,
      (int)v74,
      v75,
      v76,
      s.m128i_i32[0],
      s.m128i_i32[2],
      v78,
      v79,
      (int)v80,
      (int)v9,
      (int)ptr,
      v83,
      v84,
      v85);
    v17 = (const void **)v64[1];
    v18 = (size_t)v17[1];
    if ( !v18 )
    {
      sub_233E40(v66);
      goto LABEL_90;
    }
    v19 = s.m128i_u64[1];
    if ( s.m128i_i64[1] )
    {
      v20 = *v17;
      v21 = *(char *)*v17;
      v22 = s.m128i_i64[0] + s.m128i_i64[1];
      if ( s.m128i_i64[1] >= v18 )
        break;
    }
    sub_233E40(v66);
    LODWORD(v9) = v81[0];
    p_ptr = (char *)v80;
LABEL_31:
    if ( !(_DWORD)v9 )
      goto LABEL_35;
LABEL_32:
    v9 = (unsigned int **)(unsigned int)((_DWORD)v9 - 1);
    v6 = *(_DWORD **)&p_ptr[16 * (_QWORD)v9];
  }
  c = v21;
  v23 = (const void *)s.m128i_i64[0];
  v24 = v20;
  v67 = s.m128i_i64[0];
  v68 = (__int64)v6;
  v25 = 1 - v18;
  while ( 1 )
  {
    if ( !(v25 + v19) || (v26 = (char *)memchr(v23, c, v25 + v19), (v27 = v26) == nullptr) )
    {
LABEL_28:
      sub_233E40(v66);
      goto LABEL_34;
    }
    if ( !memcmp(v26, v24, v18) )
      break;
    v23 = v27 + 1;
    v19 = v22 - (_QWORD)(v27 + 1);
    if ( v19 < v18 )
      goto LABEL_28;
  }
  v60 = v27;
  v6 = (_DWORD *)v68;
  sub_233E40(v66);
  if ( &v60[-v67] != (char *)-1LL )
  {
LABEL_90:
    v72 = v6;
    v58 = *v64;
    ++v6[2];
    sub_3D5D00((_QWORD *)(v58 + 8), &v72);
  }
LABEL_34:
  LODWORD(v9) = v81[0];
  p_ptr = (char *)v80;
  if ( v81[0] )
    goto LABEL_32;
LABEL_35:
  result = (__int64)v65;
  if ( p_ptr != v65 )
  {
    if ( p_ptr )
      return sub_186B220(p_ptr);
  }
  return result;
}

