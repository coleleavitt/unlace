unsigned __int64 __fastcall sub_1E424C0(
        __int64 *a1,
        __int64 a2,
        char a3,
        double a4,
        __m128 a5,
        double a6,
        double a7,
        double a8,
        double a9,
        __m128 a10,
        __m128i a11)
{
  unsigned int v13; // r13d
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rsi
  unsigned int v16; // edx
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned __int64 v20; // r12
  __int32 v21; // edx
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  int v31; // r12d
  __int64 *v32; // rdi
  __int64 v33; // rcx
  double v34; // xmm4_8
  double v35; // xmm5_8
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  unsigned __int64 *v40; // rax
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rdx
  void *v45; // rdi
  void *v46; // rcx
  void *v47; // rax
  __int64 v48; // rdi
  __int64 v49; // rax
  __int64 v50; // r9
  __int32 v51; // r13d
  __int64 v52; // r12
  int v53; // eax
  __int64 v54; // r13
  unsigned __int64 v55; // rdx
  unsigned __int8 v56; // cl
  void **v57; // rdx
  int v58; // r9d
  __int64 v59; // rcx
  int v60; // r9d
  int v61; // eax
  __int64 v62; // rax
  unsigned __int64 v63; // rdx
  unsigned __int64 v64; // rax
  __int64 v65; // rcx
  int v66; // r15d
  __int64 v67; // rax
  unsigned int v68; // [rsp+8h] [rbp-140h]
  __int32 v69; // [rsp+8h] [rbp-140h]
  int v70; // [rsp+8h] [rbp-140h]
  int v71; // [rsp+10h] [rbp-138h]
  int v72; // [rsp+10h] [rbp-138h]
  char v73; // [rsp+2Eh] [rbp-11Ah] BYREF
  char v74; // [rsp+2Fh] [rbp-119h] BYREF
  __m128i v75; // [rsp+30h] [rbp-118h] BYREF
  __int64 v76; // [rsp+40h] [rbp-108h]
  __m128i v77; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v78; // [rsp+60h] [rbp-E8h] BYREF
  _BYTE v79[24]; // [rsp+68h] [rbp-E0h] BYREF
  void *v80[2]; // [rsp+80h] [rbp-C8h] BYREF
  void *v81[2]; // [rsp+90h] [rbp-B8h] BYREF
  __int128 v82; // [rsp+A0h] [rbp-A8h]

  v13 = *(_DWORD *)(a2 + 60);
  v14 = *a1;
  v15 = *(_QWORD *)(a2 + 64);
  if ( v13 && !a3 )
  {
    v77.m128i_i64[0] = (__int64)&v78;
    v77.m128i_i64[1] = 0x200000000LL;
    sub_1E4CA00(v14, v15);
    v46 = *(void **)(a2 + 40);
    v47 = *(void **)(a2 + 80);
    v48 = *a1;
    LODWORD(v80[1]) = *(_DWORD *)(a2 + 24);
    v80[0] = v46;
    v81[0] = v47;
    sub_1E4CA40(v48, v80, &v77);
    v49 = *(_QWORD *)a2;
    v50 = a1[4];
    v51 = v77.m128i_i32[2];
    v73 = 1;
    v74 = 0;
    v52 = *a1;
    v75.m128i_i32[0] = 0;
    v71 = v50;
    v69 = v77.m128i_i32[0];
    v53 = (*(__int64 (__fastcall **)(__int64))(v49 + 16))(a2);
    LODWORD(v48) = v52;
    v20 = 0;
    if ( (unsigned __int8)sub_1E54D70(
                            v48,
                            *(_DWORD *)(a2 + 60),
                            v53,
                            v69,
                            v51,
                            v71,
                            (__int64)&v73,
                            (__int64)&v74,
                            (__int64)&v75) )
      goto LABEL_46;
    v54 = *a1;
    if ( !v73 )
    {
      v66 = *(_DWORD *)(v54 + 12632);
      *(_DWORD *)(v54 + 12632) = 0;
      v67 = sub_1E424C0(a1, a2, 1);
      *(_DWORD *)(v54 + 12632) = v66;
      v20 = v67;
      goto LABEL_46;
    }
    v55 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
      v55 = *(_QWORD *)v55;
    v56 = *(_BYTE *)(v55 + 8) & 0x7F;
    if ( v56 <= 0x12u )
    {
      if ( ((1LL << v56) & 0x40182) == 0 )
        goto LABEL_31;
    }
    else if ( ((v56 + 94) & 0x7Fu) > 5 )
    {
LABEL_31:
      v57 = v81;
      v58 = 0;
      v59 = 0;
      v80[0] = v81;
      v80[1] = (void *)0x800000000LL;
      if ( v75.m128i_i32[0] == 1 )
      {
LABEL_42:
        v20 = sub_183D840(v54, a2, v57, v59);
        if ( sub_1DFEFF0(a2) )
          sub_1DC20B0(*(_QWORD *)(*a1 + 11280), a2, v20, v65);
      }
      else
      {
        while ( 1 )
        {
          v60 = v58 + 1;
          v61 = *(_DWORD *)(v54 + 12632);
          *(_DWORD *)(v54 + 12632) = v60;
          v70 = v60;
          v72 = v61;
          v62 = sub_1E424C0(a1, a2, 1);
          v58 = v70;
          v20 = v62;
          if ( !v62 )
            break;
          v63 = LODWORD(v80[1]) + 1LL;
          if ( v63 > HIDWORD(v80[1]) )
          {
            sub_2237220(v80, v81, v63, 8);
            v58 = v70;
            *((_QWORD *)v80[0] + LODWORD(v80[1])) = v20;
            v59 = (unsigned int)++LODWORD(v80[1]);
            *(_DWORD *)(v54 + 12632) = v72;
            if ( v75.m128i_i32[0] - 1 == v70 )
            {
LABEL_41:
              v54 = *a1;
              v57 = (void **)v80[0];
              goto LABEL_42;
            }
          }
          else
          {
            *((_QWORD *)v80[0] + LODWORD(v80[1])) = v62;
            v59 = (unsigned int)++LODWORD(v80[1]);
            *(_DWORD *)(v54 + 12632) = v72;
            if ( v75.m128i_i32[0] - 1 == v70 )
              goto LABEL_41;
          }
          v54 = *a1;
        }
        *(_DWORD *)(v54 + 12632) = v72;
      }
      if ( v80[0] != v81 )
        free(v80[0]);
LABEL_46:
      v45 = (void *)v77.m128i_i64[0];
      if ( (__int64 *)v77.m128i_i64[0] == &v78 )
        return v20;
      goto LABEL_24;
    }
    if ( (unsigned int)(v75.m128i_i32[0] - 1) > 1 )
    {
      v20 = 0;
      sub_168B9F0((__int64)v80, (__int64 *)(v54 + 8), *(_DWORD *)(a2 + 60), 0x151Eu, 0);
      sub_15F7200(v80);
      goto LABEL_46;
    }
    goto LABEL_31;
  }
  v16 = 0;
  v17 = 0;
  if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 0x3F )
  {
    v16 = v13;
    v17 = a2;
  }
  v68 = v16;
  v18 = sub_1DEB190(v14, v15, *(void **)(a2 + 72), a1[4]);
  v20 = v18;
  if ( v18 )
  {
    *(_OWORD *)v80 = 0;
    *(_OWORD *)v81 = 0;
    v82 = 0;
    sub_15AB8B0((__int64)v80, v18, v19);
    v21 = *(_DWORD *)(a2 + 24);
    v22 = *(_QWORD *)(a2 + 80);
    v23 = *a1;
    v24 = a1[4];
    v77.m128i_i64[0] = *(_QWORD *)(a2 + 40);
    v77.m128i_i32[2] = v21;
    v78 = v22;
    sub_1DD8EB0(&v75, v23, &v77, v24, v25, v26, (__m128)0LL, a5);
    if ( *(_DWORD *)(a2 + 60) && (v31 = 0, *(_DWORD *)(*a1 + 12632)) )
    {
      v30 = *(unsigned __int8 *)(a2 + 29);
      if ( (v30 & 1) != 0 )
      {
LABEL_16:
        v40 = sub_B8C3D0(a2, v23, v30, v27, v28, v29);
        v41 = *v40;
        v42 = *v40 + 8LL * *((unsigned int *)v40 + 2);
        if ( *v40 < v42 )
        {
          v64 = *v40;
          while ( *(_WORD *)(*(_QWORD *)v64 + 36LL) != 391 )
          {
            v64 += 8LL;
            if ( v42 == v64 )
              goto LABEL_22;
          }
        }
        else
        {
          if ( v41 == v42 )
          {
LABEL_22:
            LOBYTE(v30) = *(_BYTE *)(a2 + 29);
            goto LABEL_8;
          }
          if ( *(_WORD *)(*(_QWORD *)v42 + 36LL) != 391 )
          {
            v43 = v42 + 8;
            do
            {
              v44 = v43;
              if ( v41 == v43 )
                goto LABEL_22;
              v43 += 8LL;
            }
            while ( *(_WORD *)(*(_QWORD *)v44 + 36LL) != 391 );
          }
        }
        LOBYTE(v30) = *(_BYTE *)(a2 + 29);
      }
    }
    else
    {
      v30 = *(unsigned __int8 *)(a2 + 29);
      v31 = *(_DWORD *)(a2 + 60);
      if ( (v30 & 1) != 0 )
        goto LABEL_16;
    }
LABEL_8:
    v32 = (__int64 *)*a1;
    v77.m128i_i64[1] = (__int64)v79;
    v78 = 0x200000000LL;
    v33 = *(unsigned int *)(a2 + 56);
    v77.m128i_i64[0] = 0;
    v20 = (unsigned __int64)sub_185AD60(
                              v32,
                              nullptr,
                              ((unsigned __int8)v30 >> 5) & 3,
                              v33,
                              v17 != 0,
                              v68,
                              (__int64)v80,
                              (const __m128i)0LL,
                              v75.m128i_i64[0],
                              v75.m128i_i32[2],
                              v76,
                              v31,
                              (char)&v77);
    if ( (_BYTE *)v77.m128i_i64[1] != v79 )
      free((void *)v77.m128i_i64[1]);
    if ( v20 )
    {
      sub_1E40A90(*a1, (__int64 *)a1[4], a2, v20, 0, nullptr, (__m128)0LL, a5, a6, a7, v34, v35, a10, a11);
      sub_A96260(*(_QWORD *)(*a1 + 248), v20, a2, v36, v37, v38);
    }
    if ( !HIDWORD(v81[1]) )
      return v20;
    v45 = v81[0];
LABEL_24:
    free(v45);
  }
  return v20;
}
