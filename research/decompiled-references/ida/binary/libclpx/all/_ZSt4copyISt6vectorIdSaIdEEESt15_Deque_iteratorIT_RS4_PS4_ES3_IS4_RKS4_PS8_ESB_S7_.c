_QWORD *__fastcall std::copy<std::vector<double>>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        int a13,
        __int64 a14)
{
  _QWORD *v14; // r12
  __int64 v15; // rdx
  __int64 v16; // r13
  __int64 v17; // r15
  __int64 v18; // rdx
  __int64 v19; // r14
  signed __int64 v20; // rbp
  bool v21; // cc
  unsigned __int64 v22; // rbp
  char *v23; // rbx
  char *v24; // r12
  char *v25; // r13
  _BYTE *v26; // rdi
  signed __int64 v27; // rbx
  unsigned __int64 v28; // rsi
  _BYTE *v29; // rax
  size_t v30; // rdx
  char *v31; // rsi
  char *v32; // r8
  __int64 v33; // rsi
  unsigned __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdi
  __int64 v37; // rsi
  __int64 v38; // rax
  __int64 *v39; // rdx
  __int64 v41; // rdx
  signed __int64 v42; // [rsp+8h] [rbp-90h]
  signed __int64 v43; // [rsp+10h] [rbp-88h]
  __int64 v44; // [rsp+18h] [rbp-80h]
  __int64 v45; // [rsp+28h] [rbp-70h]
  _QWORD *v47; // [rsp+38h] [rbp-60h]
  __int64 v48; // [rsp+40h] [rbp-58h]
  __int64 v49; // [rsp+48h] [rbp-50h]
  char *v50; // [rsp+50h] [rbp-48h]

  v14 = a2;
  v45 = a9;
  v44 = a7;
  v49 = a10;
  v15 = a2[2];
  v16 = *a2;
  v42 = 0xAAAAAAAAAAAAAAABLL * ((a9 - a7) >> 3)
      + 21 * (((a14 - a10) >> 3) - 1)
      - 0x5555555555555555LL * ((a11 - a12) >> 3);
  if ( v42 <= 0 )
  {
    v36 = a2[1];
    goto LABEL_40;
  }
  v17 = *a2;
  do
  {
    v18 = v15 - v17;
    v19 = v44;
    v20 = 0xAAAAAAAAAAAAAAABLL * ((v45 - v44) >> 3);
    if ( (__int64)(0xAAAAAAAAAAAAAAABLL * (v18 >> 3)) <= v20 )
      v20 = 0xAAAAAAAAAAAAAAABLL * (v18 >> 3);
    if ( v20 > v42 )
      v20 = v42;
    v43 = v20;
    v48 = 24 * v20;
    v21 = 24 * v20 <= 0;
    v22 = 0xAAAAAAAAAAAAAAABLL * ((24 * v20) >> 3);
    if ( !v21 )
    {
      v47 = v14;
      while ( 1 )
      {
        if ( v19 == v17 )
          goto LABEL_12;
        v24 = *(char **)(v19 + 8);
        v25 = *(char **)v19;
        v26 = *(_BYTE **)v17;
        v27 = (signed __int64)&v24[-*(_QWORD *)v19];
        v28 = v27 >> 3;
        if ( v27 >> 3 > (unsigned __int64)((__int64)(*(_QWORD *)(v17 + 16) - *(_QWORD *)v17) >> 3) )
        {
          v32 = nullptr;
          if ( v28 )
          {
            if ( v28 > 0x1FFFFFFFFFFFFFFFLL )
              std::__throw_bad_alloc();
            v32 = (char *)operator new(*(_QWORD *)(v19 + 8) - *(_QWORD *)v19);
          }
          if ( v24 != v25 )
            v32 = (char *)memmove(v32, v25, v27);
          if ( *(_QWORD *)v17 )
          {
            v50 = v32;
            operator delete(*(void **)v17);
            v32 = v50;
          }
          v23 = &v32[v27];
          *(_QWORD *)v17 = v32;
          *(_QWORD *)(v17 + 16) = v23;
          goto LABEL_11;
        }
        v29 = *(_BYTE **)(v17 + 8);
        v30 = v29 - v26;
        if ( v28 <= (v29 - v26) >> 3 )
        {
          if ( v24 == v25 )
            goto LABEL_20;
          memmove(v26, *(const void **)v19, *(_QWORD *)(v19 + 8) - *(_QWORD *)v19);
          v23 = (char *)(*(_QWORD *)v17 + v27);
        }
        else
        {
          v31 = &v25[v30];
          if ( v25 != &v25[v30] )
          {
            memmove(v26, *(const void **)v19, v30);
            v29 = *(_BYTE **)(v17 + 8);
            v26 = *(_BYTE **)v17;
            v24 = *(char **)(v19 + 8);
            v31 = &v29[*(_QWORD *)v19 - *(_QWORD *)v17];
          }
          if ( v24 == v31 )
          {
LABEL_20:
            v23 = &v26[v27];
            goto LABEL_11;
          }
          memmove(v29, v31, v24 - v31);
          v23 = (char *)(*(_QWORD *)v17 + v27);
        }
LABEL_11:
        *(_QWORD *)(v17 + 8) = v23;
LABEL_12:
        v19 += 24;
        v17 += 24;
        if ( !--v22 )
        {
          v14 = v47;
          v17 = *v47;
          break;
        }
      }
    }
    v33 = v43 - 0x5555555555555555LL * ((v44 - a8) >> 3);
    if ( v33 < 0 )
    {
      v34 = ~(~v33 / 0x15uLL);
      goto LABEL_33;
    }
    if ( v33 > 20 )
    {
      v34 = v33 / 21;
LABEL_33:
      v35 = *(_QWORD *)(v49 + 8 * v34);
      v49 += 8 * v34;
      a8 = v35;
      v45 = v35 + 504;
      v44 = v35 + 24 * (v33 - 21 * v34);
      goto LABEL_34;
    }
    v44 += v48;
LABEL_34:
    v36 = v14[1];
    v37 = v43 - 0x5555555555555555LL * ((v17 - v36) >> 3);
    if ( v37 < 0 )
    {
      v41 = ((unsigned __int64)~v37 * (unsigned __int128)0x8618618618618619LL) >> 64;
      v38 = ~((v41 + ((unsigned __int64)(~v37 - v41) >> 1)) >> 4);
      goto LABEL_37;
    }
    if ( v37 > 20 )
    {
      v38 = v37 / 21;
LABEL_37:
      v39 = (__int64 *)(v14[3] + 8 * v38);
      v36 = *v39;
      v14[3] = v39;
      v15 = v36 + 504;
      v17 = v36 + 24 * (v37 - 21 * v38);
      v14[1] = v36;
      v14[2] = v36 + 504;
      *v14 = v17;
      goto LABEL_38;
    }
    v17 += v48;
    v15 = v14[2];
    *v14 = v17;
LABEL_38:
    v42 -= v43;
  }
  while ( v42 > 0 );
  v16 = v17;
LABEL_40:
  a1[1] = v36;
  *a1 = v16;
  a1[2] = v15;
  a1[3] = v14[3];
  return a1;
}

