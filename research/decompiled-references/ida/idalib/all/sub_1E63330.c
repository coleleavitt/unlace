__int64 __fastcall sub_1E63330(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 *v7; // r13
  __int64 v9; // rbp
  bool v10; // zf
  _QWORD *v11; // rax
  __int64 v12; // r12
  __int64 v13; // rdx
  unsigned __int64 v14; // r15
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *i; // rbp
  int v21; // r12d
  char v22; // r15
  unsigned int v23; // eax
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdi
  void (*v31)(); // rax
  unsigned int v32; // eax
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned int v35; // r12d
  unsigned __int64 v36; // rsi
  __int64 v37; // rdx
  unsigned __int8 v38; // al
  __int64 v39; // rcx
  __int64 v40; // rbp
  _BYTE *v41; // r15
  __int64 v42; // r12
  unsigned int v43; // edx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  unsigned int v48; // edx
  __int64 v49; // r9
  _QWORD *v51; // r13
  _QWORD *v52; // rbp
  __m128i v53; // xmm0
  _QWORD *v54; // r13
  _QWORD *j; // rbp
  unsigned int v56; // edx
  __int64 v57; // rdi
  __int64 (*v58)(); // rax
  __int64 *v59; // rax
  __int64 *v60; // rax
  unsigned __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 **v66; // rax
  __m128i v67; // [rsp+0h] [rbp-118h] BYREF
  void (__fastcall ***v68)(_QWORD, __int64, _QWORD, __int64); // [rsp+10h] [rbp-108h] BYREF
  int v69[4]; // [rsp+1Ch] [rbp-FCh] BYREF
  unsigned __int8 v70; // [rsp+2Fh] [rbp-E9h]
  __int64 v71; // [rsp+30h] [rbp-E8h] BYREF
  _BYTE *v72; // [rsp+38h] [rbp-E0h]
  _BYTE *v73; // [rsp+40h] [rbp-D8h]
  unsigned __int64 v74; // [rsp+48h] [rbp-D0h] BYREF
  __m128 v75; // [rsp+50h] [rbp-C8h] BYREF
  __m128 v76; // [rsp+60h] [rbp-B8h]
  __int64 v77; // [rsp+70h] [rbp-A8h]
  void (__fastcall ****v78)(_QWORD, __int64, _QWORD, __int64); // [rsp+78h] [rbp-A0h]
  __int64 v79; // [rsp+80h] [rbp-98h]
  __int64 v80; // [rsp+88h] [rbp-90h]

  v6 = a3;
  v7 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v9 = *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v69[0] = a2;
  v10 = *(_BYTE *)(v9 + 16) == 33;
  v67.m128i_i32[0] = (int)a4;
  v68 = (void (__fastcall ***)(_QWORD, __int64, _QWORD, __int64))a5;
  if ( v10 )
    goto LABEL_7;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 33 )
    goto LABEL_23;
  v9 = sub_F63050(v9, a2, a3, a4);
  if ( v9 )
  {
LABEL_7:
    v11 = sub_F61C10(v9);
    v12 = (__int64)v11;
    if ( v11 )
    {
      if ( !(unsigned __int8)sub_B8E180((unsigned __int64)(v11 + 8)) )
      {
        v13 = *(_QWORD *)(v12 + 48);
        if ( v13 )
        {
          a3 = v13 & 0xFFFFFFFFFFFFFFF0LL;
          v14 = a3;
        }
        else
        {
          v14 = sub_A7AA70(*(_QWORD *)(a1 + 248), v12, 0, (__int64)a4, a5, a6);
        }
        if ( *(char *)(*(_QWORD *)(a1 + 232) + 108LL) < 0 && (*(_BYTE *)(v12 + 74) & 2) == 0 )
        {
          v75.m128_i32[2] = 4160;
          v75.m128_u64[0] = (unsigned __int64)off_2BC6500;
          if ( (unsigned __int8)sub_1E63C20(a1, (unsigned int)v69[0], v14, v67.m128i_u32[0], &v75) )
            return 1;
        }
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL) + 340LL) == 10 )
        {
          sub_1E63330(a1, (unsigned int)v69[0], v14, 1, 0);
          v15 = sub_F61C10(v9)[13];
          for ( i = sub_7052B0((__int64 *)(v15 + 96), v15, v16, v17, v18, v19); sub_B97450((__int64)i); i = nullptr )
          {
            while ( (i[12] & 3) == 0 )
            {
              v15 = (__int64)i;
              i = sub_7052B0(i + 12, (__int64)i, a3, (__int64)a4, a5, a6);
              if ( !sub_B97450((__int64)i) )
                goto LABEL_12;
            }
          }
LABEL_12:
          if ( (*((_BYTE *)i + 29) & 1) == 0 )
            goto LABEL_13;
          v59 = sub_B8C3D0((__int64)i, v15, a3, (__int64)a4, a5, a6);
          a3 = *v59;
          a4 = (__int64 *)(*v59 + 8LL * *((unsigned int *)v59 + 2));
          if ( *v59 < (unsigned __int64)a4 )
          {
            v60 = (__int64 *)*v59;
            while ( 1 )
            {
              a3 = *v60;
              if ( *(_WORD *)(*v60 + 36) == 248 )
                break;
              if ( a4 == ++v60 )
                goto LABEL_13;
            }
            if ( a4 != v60 )
              goto LABEL_22;
            goto LABEL_13;
          }
          if ( (__int64 *)a3 == a4 )
          {
LABEL_13:
            v21 = *(_DWORD *)(a1 + 840);
            if ( v21 == 1 )
            {
              v22 = 0;
              v21 = 0;
            }
            else if ( v21 )
            {
              v22 = 0;
              if ( v21 == 2 )
              {
                v21 = 1;
              }
              else if ( v21 != 3 )
              {
                v21 = 0;
              }
            }
            else
            {
              v22 = 1;
              v21 = sub_E777E0((__int64)i, v15, a3, (__int64)a4, a5, a6);
            }
            v23 = *(_DWORD *)(a1 + 848);
            if ( v23 )
              v24 = ((unsigned __int64)v23 << 32) | v23;
            else
              v24 = (*(__int64 (__fastcall **)(_QWORD *))(*i + 16LL))(i);
            v25 = sub_B32020(*(_QWORD *)(a1 + 248), v22, v24, v21);
            sub_B8CC60((__int64)i, v25, v26, v27, v28, v29);
            v30 = *(_QWORD *)(a1 + 256);
            a3 = (__int64)nullsub_155;
            v31 = *(void (**)())(*(_QWORD *)v30 + 112LL);
            if ( v31 != nullsub_155 )
              ((void (__fastcall *)(__int64, _QWORD *))v31)(v30, i);
            goto LABEL_22;
          }
          if ( *(_WORD *)(*a4 + 36) != 248 )
          {
            v66 = (__int64 **)(a4 + 1);
            do
            {
              a4 = (__int64 *)v66;
              if ( v66 == (__int64 **)a3 )
                goto LABEL_13;
              a4 = *v66++;
            }
            while ( *((_WORD *)a4 + 18) != 248 );
          }
        }
      }
    }
  }
LABEL_22:
  v9 = *v7;
LABEL_23:
  v71 = 0;
  LOBYTE(v32) = sub_F62670(v9, &v71, a3, (__int64)a4, a5, a6);
  v35 = v32;
  if ( (_BYTE)v32 || v67.m128i_i32[0] != 1 && sub_F58260(*v7) )
  {
    v37 = v71;
    if ( v71 )
    {
      if ( (*(_BYTE *)(v71 + 28) & 0x7F) == 0x3E || (sub_1CB7B70(a1, v69[0], v71), (v37 = v71) != 0) )
      {
        v38 = *(_BYTE *)(v37 + 28) & 0x7F;
        v39 = (unsigned int)v38 - 58;
        if ( (unsigned int)v39 <= 4 )
        {
          v40 = 0;
          v41 = (_BYTE *)v37;
          if ( v38 == 20 )
            v40 = v37;
LABEL_35:
          if ( *(char *)(v37 + 28) < 0 )
            return 1;
          v42 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 18360LL);
          if ( v42 )
          {
            if ( v41 && (char)v41[72] < 0 )
              (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v42 + 160LL))(v42, v41);
            if ( v40 && *(char *)(v40 + 56) < 0 )
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v42 + 168LL))(v42, v40);
            if ( !sub_F62670(*v7, nullptr, v37, v39, v33, v34) )
              return (unsigned int)sub_1E63330(a1, (unsigned int)v69[0], v6, v67.m128i_u32[0], v68);
          }
          if ( v41 )
          {
            if ( (v41[28] & 0x7Fu) - 59 <= 2 )
            {
              v72 = v41;
              v70 = 0;
              if ( !(unsigned __int8)sub_B8E180((unsigned __int64)(v41 + 64)) )
              {
                if ( (v72[28] & 0x7Fu) - 60 > 1 )
                {
                  v73 = nullptr;
                  v61 = sub_B971E0((__int64)v72);
                  v74 = v61;
                  if ( (v72[74] & 2) != 0 || !v61 || ((*(__int64 *)sub_B97210((__int64)v72) >> 1) & 3) == 1 )
                    goto LABEL_49;
                  v67.m128i_i64[1] = (__int64)v69;
                  v77 = a1;
                  v75 = _mm_loadh_ps((const double *)&v67.m128i_i64[1]);
                  v67.m128i_i64[1] = (__int64)&v74;
                  v78 = &v68;
                  v76 = _mm_loadh_ps((const double *)&v67.m128i_i64[1]);
                  sub_15F0FC0(a1, v69[0], (__int64 (__fastcall *)(__int64))sub_1E5D840, (__int64)&v75);
                }
                else
                {
                  v73 = v72;
                  if ( (v72[180] & 7) != 0 )
                    goto LABEL_49;
                  v67.m128i_i64[1] = (__int64)v69;
                  v77 = a1;
                  v75 = _mm_loadh_ps((const double *)&v67.m128i_i64[1]);
                  v67.m128i_i64[1] = (__int64)&v68;
                  v76 = _mm_loadh_ps((const double *)&v67.m128i_i64[1]);
                  sub_15F0FC0(a1, v69[0], (__int64 (__fastcall *)(__int64))sub_1E5D7F0, (__int64)&v75);
                }
                if ( v68 )
                {
                  v35 = v70;
                  if ( v70 )
                    return v35;
                }
                if ( !sub_F62670(*v7, nullptr, v62, v63, v64, v65) )
                  return (unsigned int)sub_1E63330(a1, (unsigned int)v69[0], v6, v67.m128i_u32[0], v68);
              }
            }
LABEL_49:
            if ( v68 )
            {
              (**v68)(v68, a1, (unsigned int)v69[0], v6);
              if ( (char)v41[28] >= 0 )
              {
                v43 = *((_DWORD *)v41 + 6);
                if ( v43 )
                {
                  sub_168B9F0(
                    (__int64)&v75,
                    (__int64 *)(a1 + 8),
                    v43,
                    (*((_QWORD *)v41 + 9) & 0x20000LL) == 0 ? 107 : 118,
                    0);
                  v74 = sub_A7AC20(*(_QWORD *)(a1 + 248), (__int64)v41, v44, v45, v46, v47);
                  sub_162B6D0((__int64)&v75, (__int64 *)&v74);
                  sub_15F7200(&v75);
                }
              }
              goto LABEL_73;
            }
            return 1;
          }
LABEL_71:
          if ( v68 )
          {
            (**v68)(v68, a1, (unsigned int)v69[0], v6);
LABEL_73:
            if ( v40 )
            {
              if ( *(char *)(v40 + 28) >= 0 )
              {
                v56 = *(_DWORD *)(v40 + 24);
                if ( v56 )
                {
                  sub_168B9F0((__int64)&v75, (__int64 *)(a1 + 8), v56, 0x1769u, 0);
                  sub_15F7200(&v75);
                }
              }
            }
            v57 = *(_QWORD *)(a1 + 552);
            if ( v57 )
            {
              v58 = *(__int64 (**)())(*(_QWORD *)v57 + 400LL);
              if ( v58 != sub_6EEDB0 )
                ((void (__fastcall *)(__int64, _QWORD, __int64))v58)(v57, (unsigned int)v69[0], v6);
            }
          }
          return 1;
        }
        if ( v38 == 20 )
        {
          v40 = v37;
          v41 = nullptr;
          goto LABEL_35;
        }
      }
    }
    v40 = 0;
    goto LABEL_71;
  }
  v36 = v71;
  if ( v71 )
  {
    if ( (*(_BYTE *)(v71 + 28) & 0x7F) == 0x3E )
    {
      v74 = 0;
    }
    else
    {
      sub_1CB7B70(a1, v69[0], v71);
      v36 = v71;
      v74 = 0;
      if ( !v71 )
        return v35;
    }
    if ( (unsigned __int8)sub_1E61100(a1, v36, (__int64 *)&v74, 1, 1, v34) )
    {
      if ( v71 )
      {
        v51 = *(_QWORD **)(a1 + 12616);
        v52 = *(_QWORD **)(a1 + 12608);
        if ( v51 != v52 )
        {
          v67.m128i_i64[0] = v71;
          v53 = _mm_loadl_epi64(&v67);
          v77 = 0;
          LODWORD(v78) = 0;
          v79 = 0;
          v80 = 0;
          v75.m128_i32[0] = 24;
          v75.m128_i16[2] = 0;
          v75.m128_i32[2] = v69[0];
          v76 = (__m128)_mm_unpacklo_epi64(v53, v53);
          do
          {
            if ( *v52 )
              (*(void (__fastcall **)(_QWORD, __int64, __m128 *))(*(_QWORD *)*v52 + 32LL))(*v52, a1, &v75);
            ++v52;
          }
          while ( v51 != v52 );
          v54 = *(_QWORD **)(a1 + 12616);
          for ( j = *(_QWORD **)(a1 + 12608); v54 != j; ++j )
          {
            if ( *j )
              (*(void (__fastcall **)(_QWORD, __int64, __m128 *))(*(_QWORD *)*j + 40LL))(*j, a1, &v75);
          }
        }
      }
    }
    else
    {
      v35 = 1;
      if ( v68 )
      {
        sub_1DBADC0(a1);
        v35 = v48;
        if ( v74 )
          sub_1A5FAE0(a1, (unsigned int)v69[0], v74, 1, (unsigned __int8)v48 ^ 1u, v49);
      }
    }
  }
  return v35;
}
