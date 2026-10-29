__int64 __fastcall sub_165BD80(_QWORD *a1, __int64 a2)
{
  unsigned __int8 v2; // bl
  unsigned int v3; // r14d
  char v4; // bp
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rdi
  __int64 (__fastcall *v14)(unsigned __int64); // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  unsigned __int64 v20; // r15
  _QWORD *v21; // rdx
  unsigned int v22; // esi
  int v23; // edx
  __int64 v24; // rax
  _QWORD *v25; // rbx
  __int64 v26; // rcx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  void **v30; // rbp
  unsigned __int64 v31; // rax
  void **v32; // r12
  void **v33; // rbx
  void **v34; // rdi
  void **v35; // rdi
  void **v36; // rbx
  void **v37; // r12
  __int64 v38; // rdx
  unsigned __int64 v39; // rdx
  int v40; // eax
  __int64 v41; // rax
  __int64 v42; // r14
  __int64 v43; // rdx
  __int64 v44; // r14
  void *v45; // rdi
  _BYTE *v46; // rax
  void *v47; // [rsp+0h] [rbp-128h] BYREF
  __int64 v48; // [rsp+8h] [rbp-120h]
  unsigned __int64 v49; // [rsp+14h] [rbp-114h]
  int v50; // [rsp+1Ch] [rbp-10Ch]
  __m128i v51; // [rsp+20h] [rbp-108h] BYREF
  char v52[8]; // [rsp+30h] [rbp-F8h] BYREF
  unsigned __int64 v53; // [rsp+38h] [rbp-F0h]
  unsigned __int64 v54; // [rsp+40h] [rbp-E8h]
  __int64 v55; // [rsp+48h] [rbp-E0h]
  void *v56; // [rsp+50h] [rbp-D8h]
  unsigned __int64 v57; // [rsp+58h] [rbp-D0h]
  int v58; // [rsp+60h] [rbp-C8h]
  char v59; // [rsp+68h] [rbp-C0h]
  __int64 v60; // [rsp+70h] [rbp-B8h]
  __int64 v61; // [rsp+78h] [rbp-B0h]
  void *v62[2]; // [rsp+80h] [rbp-A8h] BYREF
  __int64 v63; // [rsp+90h] [rbp-98h]
  __int64 v64; // [rsp+98h] [rbp-90h] BYREF
  void *ptr; // [rsp+B8h] [rbp-70h]
  __int64 v66; // [rsp+C8h] [rbp-60h] BYREF

  v2 = (*(_BYTE *)(a2 + 29) >> 5) & 3;
  v3 = 0;
  v4 = (v2 == 0) | ((*(_BYTE *)(a1[29] + 46LL) >> 5) ^ 1) & 1;
  if ( !v4 )
  {
    v8 = sub_B8BF30(a2);
    v9 = *(_QWORD *)(a2 + 16);
    v10 = a2 | v2;
    v62[0] = (void *)v10;
    if ( (v9 & 4) != 0 )
      v11 = *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF8LL);
    else
      v11 = v9 & 0xFFFFFFFFFFFFFFF8LL;
    v62[0] = (void *)(a2 | v2);
    if ( v11 )
      v11 -= 64LL;
    v53 = v10 & 0xFFFFFFFFFFFFFFF8LL;
    v54 = v11;
    v12 = a1[31];
    v58 = 0;
    v55 = 0;
    v52[0] = v10 & 3 | v52[0] & 0xFC | 4;
    v56 = nullptr;
    v57 = v12 + 2448;
    v59 &= 0xFCu;
    v60 = 0;
    v13 = sub_1654A20(v10 & 0xFFFFFFFFFFFFFFF8LL);
    v14 = *(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v13 + 32LL);
    if ( v14 == sub_A01140 )
      v15 = sub_B70A60(v13);
    else
      v15 = v14(v13);
    v61 = v15;
    v58 = 2954;
    v16 = *(_QWORD *)(v8 + 56);
    if ( (v16 & 4) != 0 && (v17 = (__int64 *)(v16 & 0xFFFFFFFFFFFFFFF8LL), (v18 = *v17) != 0) )
    {
      v19 = v17[1];
      v51.m128i_i64[0] = v18;
      v51.m128i_i64[1] = v19;
      v20 = sub_E90530(v51.m128i_i64) >> 32;
      if ( v51.m128i_i64[0] )
      {
        *(__m128i *)v62 = _mm_load_si128(&v51);
        v21 = (_QWORD *)(*(_QWORD *)(v51.m128i_i64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL);
        if ( v21 )
        {
          v47 = v62[1];
          *(__m128 *)v62 = _mm_loadh_ps((const double *)&v47);
          while ( (v21[1] & 0xFFFFFFFFFFFFFFF8LL) != 0 )
          {
            v4 = 1;
            v21 = (_QWORD *)(v21[1] & 0xFFFFFFFFFFFFFFF8LL);
          }
          if ( v4 )
            v62[0] = v21;
        }
        v22 = sub_E90530((__int64 *)v62);
      }
      else
      {
        v22 = 0;
      }
    }
    else
    {
      v23 = *(_DWORD *)(v8 + 24);
      v24 = *(_QWORD *)(v8 + 160);
      v62[0] = *(void **)(v8 + 40);
      LODWORD(v62[1]) = v23;
      v63 = v24;
      LODWORD(v20) = sub_B85A10((__int64)v62);
      if ( !(_DWORD)v20 )
        LODWORD(v20) = v62[1];
      v22 = (unsigned int)v62[1];
    }
    v25 = v56;
    if ( v56 )
    {
      v26 = *((unsigned int *)v56 + 106);
      v27 = *((unsigned int *)v56 + 107);
      v28 = v26 + 1;
    }
    else
    {
      v39 = v57;
      v40 = *(_DWORD *)(v57 + 14976);
      if ( v40 )
      {
        v41 = (unsigned int)(v40 - 1);
        *(_DWORD *)(v57 + 14976) = v41;
        v25 = *(_QWORD **)(v39 + 8 * v41 + 14848);
        v42 = *((unsigned int *)v25 + 134);
        *(_BYTE *)v25 = 0;
        v43 = v25[66];
        *((_DWORD *)v25 + 106) = 0;
        v44 = v43 + (v42 << 6);
        if ( v43 == v44 )
        {
          v28 = 1;
          v26 = 0;
        }
        else
        {
          do
          {
            while ( 1 )
            {
              v44 -= 64;
              v45 = *(void **)(v44 + 24);
              if ( v45 == (void *)(v44 + 40) )
                break;
              v48 = v43;
              LODWORD(v47) = v22;
              operator delete(v45);
              v43 = v48;
              v22 = (unsigned int)v47;
              if ( v48 == v44 )
                goto LABEL_58;
            }
          }
          while ( v43 != v44 );
LABEL_58:
          v26 = *((unsigned int *)v25 + 106);
          v28 = v26 + 1;
        }
        *((_DWORD *)v25 + 134) = 0;
        v27 = *((unsigned int *)v25 + 107);
      }
      else
      {
        LODWORD(v47) = v22;
        v46 = (_BYTE *)operator new(0x3A0u);
        v28 = 1;
        v26 = 0;
        v25 = v46;
        *v46 = 0;
        *((_QWORD *)v46 + 12) = v46 + 112;
        *((_QWORD *)v46 + 16) = v46 + 144;
        *((_QWORD *)v46 + 20) = v46 + 176;
        *((_QWORD *)v46 + 24) = v46 + 208;
        *((_QWORD *)v46 + 28) = v46 + 240;
        *((_QWORD *)v46 + 32) = v46 + 272;
        *((_QWORD *)v46 + 36) = v46 + 304;
        *((_QWORD *)v46 + 40) = v46 + 336;
        *((_QWORD *)v46 + 44) = v46 + 368;
        *((_QWORD *)v46 + 48) = v46 + 400;
        *((_QWORD *)v46 + 52) = v46 + 432;
        *((_QWORD *)v46 + 13) = 0;
        v46[112] = 0;
        *((_QWORD *)v46 + 17) = 0;
        v46[144] = 0;
        *((_QWORD *)v46 + 21) = 0;
        v46[176] = 0;
        *((_QWORD *)v46 + 25) = 0;
        v46[208] = 0;
        *((_QWORD *)v46 + 29) = 0;
        v46[240] = 0;
        *((_QWORD *)v46 + 33) = 0;
        v46[272] = 0;
        *((_QWORD *)v46 + 37) = 0;
        v46[304] = 0;
        *((_QWORD *)v46 + 41) = 0;
        v46[336] = 0;
        *((_QWORD *)v46 + 45) = 0;
        v46[368] = 0;
        *((_QWORD *)v46 + 49) = 0;
        v46[400] = 0;
        *((_QWORD *)v46 + 53) = 0x800000000LL;
        v22 = (unsigned int)v47;
        *((_QWORD *)v46 + 66) = v46 + 544;
        *((_QWORD *)v46 + 67) = 0x600000000LL;
        v27 = 8;
      }
      v56 = v25;
    }
    v49 = __PAIR64__(v20, v22);
    LOBYTE(v50) = 1;
    if ( v28 > v27 )
    {
      sub_2237220(v25 + 52, v25 + 54, v28, 12);
      v26 = *((unsigned int *)v25 + 106);
    }
    v29 = v25[52] + 12 * v26;
    *(_QWORD *)v29 = v49;
    *(_DWORD *)(v29 + 8) = v50;
    ++*((_DWORD *)v25 + 106);
    sub_1655430((__int64)v62, a1[68]);
    v3 = dword_263D990[(unsigned int)sub_165BA60((__int64)a1, (__int64 *)v62, *(_DWORD *)(a2 + 24), (__int64)v52)];
    if ( ptr != &v66 )
      free(ptr);
    if ( v62[1] != &v64 )
      free(v62[1]);
    v30 = (void **)v56;
    if ( v56 )
    {
      v31 = v57;
      if ( v57 )
      {
        if ( (unsigned __int64)v56 < v57 || (unsigned __int64)v56 > v57 + 14848 )
        {
          v32 = *((void ***)v56 + 66);
          v33 = &v32[8 * (unsigned __int64)*((unsigned int *)v56 + 134)];
          if ( v32 != v33 )
          {
            do
            {
              while ( 1 )
              {
                v33 -= 8;
                v34 = (void **)v33[3];
                if ( v34 == v33 + 5 )
                  break;
                operator delete(v34);
                if ( v32 == v33 )
                  goto LABEL_36;
              }
            }
            while ( v32 != v33 );
LABEL_36:
            v33 = (void **)v30[66];
          }
          if ( v33 != v30 + 68 )
            free(v33);
          v35 = (void **)v30[52];
          v36 = v30 + 52;
          if ( v35 != v30 + 54 )
            free(v35);
          v37 = v30 + 12;
          do
          {
            while ( 1 )
            {
              v36 -= 4;
              if ( *v36 == v36 + 2 )
                break;
              operator delete(*v36);
              if ( v37 == v36 )
                goto LABEL_44;
            }
          }
          while ( v37 != v36 );
LABEL_44:
          operator delete(v30, 0x3A0u);
        }
        else
        {
          v38 = *(unsigned int *)(v57 + 14976);
          *(_DWORD *)(v57 + 14976) = v38 + 1;
          *(_QWORD *)(v31 + 8 * v38 + 14848) = v30;
        }
      }
    }
  }
  return v3;
}
