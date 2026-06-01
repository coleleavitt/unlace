__int64 __fastcall sub_880690(__int64 a1, unsigned __int64 *a2)
{
  char **exception; // rbp
  __int64 v3; // rbx
  unsigned __int64 v5; // rax
  __int64 i; // r14
  __m128i v7; // xmm2
  bool v8; // al
  __m128i v9; // xmm0
  void *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r14
  __int64 v13; // rcx
  __int64 v14; // rdx
  bool v15; // dl
  void *v16; // r15
  __int64 v17; // rax
  __int64 v18; // rdx
  int *v19; // rsi
  int v20; // r14d
  _QWORD *v21; // r15
  __int64 v22; // rdx
  __m128i v23; // xmm1
  __m128i v24; // xmm0
  unsigned int v25; // eax
  unsigned int v26; // edx
  _QWORD *v27; // rdx
  bool v28; // cl
  char v29; // al
  void *v30; // r14
  void *v31; // r14
  __m128i si128; // xmm0
  __int64 v33; // rax
  __int64 v34; // rax
  char v35; // cl
  _QWORD *v36; // rax
  void *v37; // rbx
  void *v38; // rbx
  unsigned int v40; // esi
  unsigned int v41; // eax
  unsigned int v42; // esi
  unsigned int v43; // eax
  __int64 v44; // rax
  _BYTE *v45; // rdi
  unsigned int v46; // esi
  _DWORD *v47; // r8
  __int64 v48; // rax
  _BYTE *v49; // r9
  _BYTE *v50; // rax
  _QWORD *v51; // rdx
  char v52; // cl
  _QWORD *v53; // rax
  __m128i v54; // [rsp+0h] [rbp-138h] BYREF
  __m128i v55; // [rsp+10h] [rbp-128h] BYREF
  unsigned int v56; // [rsp+24h] [rbp-114h]
  _DWORD *v57; // [rsp+28h] [rbp-110h]
  bool v58; // [rsp+40h] [rbp-F8h]
  int v59; // [rsp+48h] [rbp-F0h] BYREF
  char v60; // [rsp+4Ch] [rbp-ECh]
  __int64 v61; // [rsp+50h] [rbp-E8h]
  int v62; // [rsp+58h] [rbp-E0h] BYREF
  char v63; // [rsp+5Ch] [rbp-DCh]
  __int64 v64; // [rsp+60h] [rbp-D8h]
  __m128i v65; // [rsp+68h] [rbp-D0h] BYREF
  __int64 v66; // [rsp+78h] [rbp-C0h]
  bool v67; // [rsp+80h] [rbp-B8h]
  int v68; // [rsp+88h] [rbp-B0h] BYREF
  char v69; // [rsp+8Ch] [rbp-ACh]
  __int64 v70; // [rsp+90h] [rbp-A8h]
  int v71; // [rsp+98h] [rbp-A0h] BYREF
  char v72; // [rsp+9Ch] [rbp-9Ch]
  __int64 v73; // [rsp+A0h] [rbp-98h]
  __int64 v74; // [rsp+A8h] [rbp-90h]
  __int64 v75; // [rsp+B0h] [rbp-88h]
  __int64 v76; // [rsp+B8h] [rbp-80h]
  __int64 v77; // [rsp+C0h] [rbp-78h] BYREF
  _QWORD v78[2]; // [rsp+C8h] [rbp-70h] BYREF
  _QWORD v79[3]; // [rsp+D8h] [rbp-60h] BYREF
  __m128i v80; // [rsp+F0h] [rbp-48h]

  v5 = a2[1];
  for ( i = v5 + 12LL * *((unsigned int *)a2 + 4); i != v5; v5 += 12LL )
  {
    if ( *(_DWORD *)(v5 + 4) == 2 )
      break;
  }
  v7 = (__m128i)v5;
  v8 = 0;
  v9 = _mm_unpacklo_epi64((__m128i)*a2, v7);
  if ( *a2 )
    v8 = *(_DWORD *)(*a2 - 4) != 0;
  v58 = v8;
  v60 &= 0xFCu;
  v63 &= 0xFCu;
  v10 = qword_1C7F2C0;
  v59 = 0;
  v61 = 0;
  v62 = 1;
  v64 = 0;
  if ( (*(_BYTE *)(&qword_1C7F280 + 1) & 1) != 0 )
  {
    v54.m128i_i64[0] = (__int64)qword_1C7F2C0;
    v55 = v9;
    sub_182C690(qword_1C7F2C0, &v59, &qword_1C7F280);
    v9 = _mm_load_si128(&v55);
    v10 = (void *)v54.m128i_i64[0];
  }
  else
  {
    v59 = qword_1C7F280;
  }
  if ( (qword_1C7F290 & 0x100000000LL) != 0 )
  {
    v54 = v9;
    sub_182C690(v10, &v62, &qword_1C7F290);
    v9 = _mm_load_si128(&v54);
  }
  else
  {
    v63 &= ~1u;
    v62 = qword_1C7F290;
  }
  v11 = *((unsigned int *)a2 + 4);
  v66 = i;
  v12 = *a2;
  v65 = v9;
  v13 = a2[1] + 12 * v11;
  if ( v12 )
  {
    v14 = *(unsigned int *)(v12 - 4);
    v12 += 40 * v14;
    v15 = (_DWORD)v14 != 0;
  }
  else
  {
    v15 = 0;
  }
  v69 &= 0xFCu;
  v16 = qword_1C7F2C0;
  v72 &= 0xFCu;
  v67 = v15;
  v68 = 0;
  v70 = 0;
  v71 = 1;
  v73 = 0;
  if ( (*(_BYTE *)(&qword_1C7F280 + 1) & 1) != 0 )
  {
    v54.m128i_i64[0] = v13;
    sub_182C690(qword_1C7F2C0, &v68, &qword_1C7F280);
    v13 = v54.m128i_i64[0];
  }
  else
  {
    v68 = qword_1C7F280;
  }
  if ( (qword_1C7F290 & 0x100000000LL) != 0 )
  {
    v54.m128i_i64[0] = v13;
    sub_182C690(v16, &v71, &qword_1C7F290);
    v13 = v54.m128i_i64[0];
  }
  else
  {
    v72 &= ~1u;
    v71 = qword_1C7F290;
  }
  v74 = v12;
  v75 = v13;
  v76 = v13;
  while ( 1 )
  {
    v28 = v58;
    if ( v58 )
    {
      v17 = v65.m128i_i64[0];
      if ( v65.m128i_i64[0] == v74 )
        break;
      v18 = *(unsigned int *)v65.m128i_i64[0];
      v19 = (int *)(v65.m128i_i64[0] + 8);
      if ( (_DWORD)v18 == -1 )
        goto LABEL_28;
      v20 = *(_DWORD *)(*(_QWORD *)(a1 + 208) + 4 * v18);
      if ( !v20 )
        goto LABEL_38;
      goto LABEL_21;
    }
    v33 = v65.m128i_i64[1];
    if ( v65.m128i_i64[1] == v75 )
      break;
    v18 = *(unsigned int *)(v65.m128i_i64[1] + 8);
    if ( (_DWORD)v18 != -1 )
    {
      v19 = &v59;
      v20 = *(_DWORD *)(*(_QWORD *)(a1 + 208) + 4 * v18);
      if ( !v20 )
      {
LABEL_38:
        sub_83BB30((int **)(a1 + 960), v19, *(_DWORD *)(*(_QWORD *)(a1 + 216) + 4 * v18));
        if ( v58 )
        {
LABEL_27:
          v17 = v65.m128i_i64[0];
LABEL_28:
          v65.m128i_i64[0] = v17 + 40;
          v29 = 1;
          goto LABEL_29;
        }
        goto LABEL_39;
      }
LABEL_21:
      if ( v20 == 1 )
      {
        v21 = *(_QWORD **)(a1 + 968);
        v22 = *(_QWORD *)(a1 + 224) + 16 * v18;
        v23 = _mm_loadl_epi64((const __m128i *)v22);
        v24 = _mm_loadl_epi64((const __m128i *)(v22 + 8));
        if ( v21 )
        {
          v25 = *(_DWORD *)(a1 + 992);
          v26 = *((_DWORD *)v21 - 1);
          if ( v25 < v26 )
          {
            v27 = &v21[3 * v25];
            *(_BYTE *)v27 = 1;
            v28 = v58;
            *(__m128i *)(v27 + 1) = _mm_unpacklo_epi64(v24, v23);
            goto LABEL_25;
          }
          if ( v26 == *((_DWORD *)v21 - 2) )
          {
            v40 = 3 * v26 + 1;
            v41 = v40 & 0xFFFFFFFE;
            v42 = v40 >> 1;
            v43 = 8 * (v42 + v41) + 8;
            if ( 24 * v26 + 8 >= v43 || v26 >= v42 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(&v77, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, &v77);
              sub_233E40((__int64)&v77);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v56 = v42;
            v55.m128i_i64[0] = v23.m128i_i64[0];
            v54.m128i_i64[0] = v24.m128i_i64[0];
            v44 = sub_186B270(v43);
            v45 = *(_BYTE **)(a1 + 968);
            v46 = v56;
            v47 = (_DWORD *)v44;
            v21 = (_QWORD *)(v44 + 8);
            v24 = _mm_loadl_epi64(&v54);
            v23 = _mm_loadl_epi64(&v55);
            if ( v45 )
            {
              v48 = *((unsigned int *)v45 - 1);
              v47[1] = v48;
              v49 = &v45[24 * v48];
              if ( v45 != v49 )
              {
                v50 = v45;
                v51 = v21;
                do
                {
                  v52 = *v50;
                  v50 += 24;
                  v51 += 3;
                  *((_BYTE *)v51 - 24) = v52;
                  *(v51 - 2) = *((_QWORD *)v50 - 2);
                  *(v51 - 1) = *((_QWORD *)v50 - 1);
                }
                while ( v49 != v50 );
              }
              v57 = v47;
              v56 = v46;
              v55.m128i_i64[0] = v23.m128i_i64[0];
              v54.m128i_i64[0] = v24.m128i_i64[0];
              sub_186B220(v45 - 8);
              v47 = v57;
              v46 = v56;
              v23 = _mm_loadl_epi64(&v55);
              v24 = _mm_loadl_epi64(&v54);
              v36 = &v21[3 * (unsigned int)v57[1]];
              v20 = v57[1] + 1;
            }
            else
            {
              *(_DWORD *)(v44 + 4) = 0;
              v36 = (_QWORD *)(v44 + 8);
            }
            *(_QWORD *)(a1 + 968) = v21;
            v28 = v58;
            *v47 = v46;
          }
          else
          {
            v20 = v26 + 1;
            v36 = &v21[3 * v26];
          }
        }
        else
        {
          v55.m128i_i64[0] = v23.m128i_i64[0];
          v54.m128i_i64[0] = v24.m128i_i64[0];
          v53 = (_QWORD *)sub_186B270(0x38u);
          v21 = v53 + 1;
          *v53 = 2;
          v28 = v58;
          *(_QWORD *)(a1 + 968) = v53 + 1;
          v24 = _mm_loadl_epi64(&v54);
          v36 = v53 + 1;
          v23 = _mm_loadl_epi64(&v55);
        }
        *(_BYTE *)v36 = 1;
        *(__m128i *)(v36 + 1) = _mm_unpacklo_epi64(v24, v23);
        *((_DWORD *)v21 - 1) = v20;
        v25 = *(_DWORD *)(a1 + 992);
LABEL_25:
        *(_DWORD *)(a1 + 992) = v25 + 1;
      }
      if ( v28 )
        goto LABEL_27;
LABEL_39:
      v33 = v65.m128i_i64[1];
    }
    v34 = v33 + 12;
    v65.m128i_i64[1] = v34;
    if ( v66 != v34 )
    {
      v35 = 0;
      while ( *(_DWORD *)(v34 + 4) != 2 )
      {
        v34 += 12;
        v35 = 1;
        if ( v66 == v34 )
        {
          v65.m128i_i64[1] = v66;
          v29 = 0;
          goto LABEL_29;
        }
        v3 = v34;
      }
      if ( v35 )
        v65.m128i_i64[1] = v3;
    }
    v29 = 0;
LABEL_29:
    LOBYTE(v77) = v29;
    v30 = qword_1C7F2C0;
    v78[0] = 0;
    v78[1] = 0;
    v79[0] = 1;
    v79[1] = 0;
    if ( (v60 & 1) != 0 )
      sub_182C690(qword_1C7F2C0, v78, &v59);
    else
      LODWORD(v78[0]) = v59;
    if ( (v63 & 1) != 0 )
    {
      sub_182C690(v30, v79, &v62);
    }
    else
    {
      BYTE4(v79[0]) &= ~1u;
      LODWORD(v79[0]) = v62;
    }
    v31 = qword_1C7F2C0;
    si128 = _mm_load_si128((const __m128i *)&v65.m128i_u64[1]);
    v79[2] = v65.m128i_i64[0];
    v80 = si128;
    sub_182CBA0(qword_1C7F2C0, v78);
    sub_182CBA0(v31, v79);
  }
  v37 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v68);
  sub_182CBA0(v37, &v71);
  v38 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v59);
  return sub_182CBA0(v38, &v62);
}

