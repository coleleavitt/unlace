__int64 __fastcall sub_DC5A40(__int64 a1)
{
  _QWORD *exception; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  __int8 v5; // cl
  char v6; // dl
  char v7; // dl
  char v8; // cl
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rax
  __m128i *v12; // r13
  __int64 v13; // rax
  __int64 v14; // rax
  __int8 v15; // cl
  __m128i *v16; // r15
  char v17; // dl
  char v18; // cl
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  __m128i *v23; // r13
  __int64 v24; // rax
  unsigned int v26; // r13d
  size_t v27; // rdi
  __int64 v28; // rax
  const __m128i *v29; // r15
  _DWORD *v30; // r12
  __int64 v31; // rax
  __m128i *v32; // rdx
  const __m128i *v33; // rsi
  const __m128i *i; // rax
  bool v35; // zf
  __int64 v36; // rax
  const __m128i *v37; // r14
  const __m128i *v38; // rdi
  __m128i *v39; // rax
  __int8 v40; // dl
  unsigned int v41; // r15d
  size_t v42; // rdi
  __int64 v43; // rax
  const __m128i *v44; // r14
  __int64 v45; // rsi
  __int64 v46; // rax
  __m128i *v47; // rdx
  const __m128i *v48; // rsi
  const __m128i *k; // rax
  __int64 v50; // rax
  const __m128i *v51; // r13
  const __m128i *v52; // rdi
  __m128i *v53; // rax
  __int8 v54; // dl
  unsigned int v55; // r13d
  size_t v56; // rdi
  __int64 v57; // rax
  const __m128i *v58; // r15
  _DWORD *v59; // r12
  __int64 v60; // rax
  __m128i *v61; // rdx
  const __m128i *v62; // rsi
  const __m128i *j; // rax
  __int64 v64; // rax
  const __m128i *v65; // r14
  const __m128i *v66; // rdi
  __m128i *v67; // rax
  __int8 v68; // dl
  __int32 v69; // eax
  _QWORD *v70; // rax
  _QWORD *v71; // rax
  _QWORD *v72; // rax
  char **v73; // rbp
  char **v74; // rbp
  char **v75; // rbp
  __int64 v76; // [rsp+8h] [rbp-A0h]
  unsigned int v77; // [rsp+10h] [rbp-98h]
  _DWORD *v78; // [rsp+10h] [rbp-98h]
  unsigned int v79; // [rsp+10h] [rbp-98h]
  unsigned int v80; // [rsp+1Ch] [rbp-8Ch]
  __m128i v81; // [rsp+20h] [rbp-88h] BYREF
  __m128i v82; // [rsp+30h] [rbp-78h] BYREF
  int v83; // [rsp+40h] [rbp-68h]
  char v84; // [rsp+44h] [rbp-64h]
  __int64 v85; // [rsp+48h] [rbp-60h]
  __m128i v86; // [rsp+50h] [rbp-58h] BYREF
  int v87; // [rsp+60h] [rbp-48h]
  char v88; // [rsp+64h] [rbp-44h]
  __int64 v89; // [rsp+68h] [rbp-40h]

  if ( *(_DWORD *)(a1 + 1424) != 4 || *(_QWORD *)(a1 + 2032) != *(_QWORD *)(a1 + 48) )
  {
    exception = __cxa_allocate_exception(0x30u);
    sub_305660(exception, "invalid indexed identifier, '_' expected");
LABEL_5:
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  sub_DC0980(a1);
  sub_DBF580(*(unsigned int *)(a1 + 1424), (__int64)"invalid indexed identifier, symbol expected");
  if ( *(_DWORD *)(a1 + 1424) == 9 )
  {
LABEL_4:
    exception = __cxa_allocate_exception(0x30u);
    sub_305660(exception, "invalid indexed identifier, integer, identifier or '(' expected");
    goto LABEL_5;
  }
  v76 = *(_QWORD *)(a1 + 48);
  sub_DC0980(a1);
  v3 = *(unsigned int *)(a1 + 1424);
  while ( 1 )
  {
    switch ( v3 )
    {
      case 1LL:
      case 4LL:
        v11 = sub_DC41A0(a1);
        v12 = *(__m128i **)(a1 + 1656);
        v82.m128i_i8[8] = 1;
        v82.m128i_i64[0] = v11;
        if ( v12 )
        {
          v13 = v12[-1].m128i_u32[3];
          if ( (_DWORD)v13 != v12[-1].m128i_i32[2] )
          {
            v12[v13] = _mm_load_si128(&v82);
LABEL_16:
            v82.m128i_i32[0] = 0;
            v82.m128i_i8[8] = 0;
            goto LABEL_17;
          }
          v26 = (unsigned int)(3 * v13 + 1) >> 1;
          v77 = v26;
          v27 = 16 * v26 + 8;
          if ( 16 * (int)v13 + 8 >= (unsigned int)v27 || (unsigned int)v13 >= v26 )
          {
            v73 = (char **)__cxa_allocate_exception(0x28u);
            sub_DBF430(v86.m128i_i64, "Overflow encountered when expanding vector");
            *v73 = (char *)off_1C63128;
            sub_2333C0(v73 + 1, &v86);
            sub_233E40((__int64)&v86);
            __cxa_throw(v73, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v28 = sub_186B270(v27);
          v29 = *(const __m128i **)(a1 + 1656);
          v30 = (_DWORD *)v28;
          v12 = (__m128i *)(v28 + 8);
          if ( v29 )
          {
            v31 = v29[-1].m128i_u32[3];
            v32 = v12;
            v30[1] = v31;
            v33 = &v29[v31];
            for ( i = v29; i != v33; ++v32 )
            {
              v35 = i->m128i_i8[8] == 0;
              *v32 = _mm_loadu_si128(i);
              i->m128i_i32[0] = 0;
              if ( !v35 )
                i->m128i_i8[8] = 0;
              ++i;
            }
            v36 = v29[-1].m128i_u32[3];
            v37 = &v29[v36];
            if ( (_DWORD)v36 )
            {
              do
              {
                v38 = v29++;
                sub_15D0DF0(v38);
              }
              while ( v37 != v29 );
              v29 = *(const __m128i **)(a1 + 1656);
            }
            sub_186B220(&v29[-1].m128i_u64[1]);
            v39 = &v12[v30[1]];
          }
          else
          {
            *(_DWORD *)(v28 + 4) = 0;
            v39 = (__m128i *)(v28 + 8);
          }
          v40 = v82.m128i_i8[8];
          *(_QWORD *)(a1 + 1656) = v12;
          *v30 = v77;
        }
        else
        {
          v71 = (_QWORD *)sub_186B270(0x28u);
          v12 = (__m128i *)(v71 + 1);
          *v71 = 2;
          v40 = v82.m128i_i8[8];
          *(_QWORD *)(a1 + 1656) = v71 + 1;
          v39 = (__m128i *)(v71 + 1);
        }
        *v39 = _mm_load_si128(&v82);
        if ( v40 )
          goto LABEL_16;
        v82.m128i_i32[0] = 0;
LABEL_17:
        ++v12[-1].m128i_i32[3];
        sub_15D0DF0(&v82);
        v3 = *(unsigned int *)(a1 + 1424);
        continue;
      case 2LL:
        sub_DC0980(a1);
        return v76;
      case 3LL:
        v22 = *(_QWORD *)(a1 + 48);
        v23 = *(__m128i **)(a1 + 1656);
        v82.m128i_i8[8] = 2;
        v82.m128i_i64[0] = v22;
        if ( v23 )
        {
          v24 = v23[-1].m128i_u32[3];
          if ( (_DWORD)v24 != v23[-1].m128i_i32[2] )
          {
            v23[v24] = _mm_load_si128(&v82);
LABEL_27:
            v82.m128i_i32[0] = 0;
            v82.m128i_i8[8] = 0;
            goto LABEL_28;
          }
          v55 = (unsigned int)(3 * v24 + 1) >> 1;
          v79 = v55;
          v56 = 16 * v55 + 8;
          if ( 16 * (int)v24 + 8 >= (unsigned int)v56 || (unsigned int)v24 >= v55 )
          {
            v75 = (char **)__cxa_allocate_exception(0x28u);
            sub_DBF430(v86.m128i_i64, "Overflow encountered when expanding vector");
            *v75 = (char *)off_1C63128;
            sub_2333C0(v75 + 1, &v86);
            sub_233E40((__int64)&v86);
            __cxa_throw(v75, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v57 = sub_186B270(v56);
          v58 = *(const __m128i **)(a1 + 1656);
          v59 = (_DWORD *)v57;
          v23 = (__m128i *)(v57 + 8);
          if ( v58 )
          {
            v60 = v58[-1].m128i_u32[3];
            v61 = v23;
            v59[1] = v60;
            v62 = &v58[v60];
            for ( j = v58; v62 != j; ++v61 )
            {
              v35 = j->m128i_i8[8] == 0;
              *v61 = _mm_loadu_si128(j);
              j->m128i_i32[0] = 0;
              if ( !v35 )
                j->m128i_i8[8] = 0;
              ++j;
            }
            v64 = v58[-1].m128i_u32[3];
            v65 = &v58[v64];
            if ( (_DWORD)v64 )
            {
              do
              {
                v66 = v58++;
                sub_15D0DF0(v66);
              }
              while ( v65 != v58 );
              v58 = *(const __m128i **)(a1 + 1656);
            }
            sub_186B220(&v58[-1].m128i_u64[1]);
            v67 = &v23[v59[1]];
          }
          else
          {
            *(_DWORD *)(v57 + 4) = 0;
            v67 = (__m128i *)(v57 + 8);
          }
          v68 = v82.m128i_i8[8];
          *(_QWORD *)(a1 + 1656) = v23;
          *v59 = v79;
        }
        else
        {
          v72 = (_QWORD *)sub_186B270(0x28u);
          v23 = (__m128i *)(v72 + 1);
          *v72 = 2;
          v68 = v82.m128i_i8[8];
          *(_QWORD *)(a1 + 1656) = v72 + 1;
          v67 = (__m128i *)(v72 + 1);
        }
        *v67 = _mm_load_si128(&v82);
        if ( v68 )
          goto LABEL_27;
        v82.m128i_i32[0] = 0;
LABEL_28:
        ++v23[-1].m128i_i32[3];
        sub_15D0DF0(&v82);
LABEL_11:
        if ( *(_DWORD *)(a1 + 1424) == 9 )
          goto LABEL_4;
LABEL_12:
        sub_DC0980(a1);
        v3 = *(unsigned int *)(a1 + 1424);
        break;
      case 6LL:
      case 7LL:
        v86.m128i_i8[4] &= 0xFCu;
        v88 &= 0xFCu;
        v86.m128i_i32[0] = 0;
        v86.m128i_i64[1] = 0;
        v87 = 1;
        v89 = 0;
        sub_27B950((__int64)qword_1C7F2C0, (__int64)&v86, (int *)(a1 + 56));
        if ( (v88 & 1) != 0
          || v87 != 1
          || !(unsigned __int8)sub_182CFA0(qword_1C7F2C0, &v86)
          || (unsigned __int64)sub_182D020(qword_1C7F2C0, &v86) >> 32 )
        {
          sub_25A130(v86.m128i_i8);
          v86.m128i_i8[4] &= 0xFCu;
          v88 &= 0xFCu;
          v86.m128i_i32[0] = 0;
          v86.m128i_i64[1] = 0;
          v87 = 1;
          v89 = 0;
          sub_27B950((__int64)qword_1C7F2C0, (__int64)&v86, (int *)(a1 + 56));
          v4 = sub_186B270(0x20u);
          v5 = v86.m128i_i8[4];
          v82.m128i_i64[0] = v4;
          *(_DWORD *)v4 = v86.m128i_i32[0];
          v6 = *(_BYTE *)(v4 + 4);
          v82.m128i_i8[8] = 4;
          v7 = v5 & 3 | v6 & 0xFC;
          v8 = v88;
          *(_BYTE *)(v4 + 4) = v7;
          v9 = v86.m128i_i64[1];
          v86.m128i_i64[1] = 0;
          *(_QWORD *)(v4 + 8) = v9;
          *(_DWORD *)(v4 + 16) = v87;
          *(_BYTE *)(v4 + 20) = v8 & 3 | *(_BYTE *)(v4 + 20) & 0xFC;
          v10 = v89;
          v89 = 0;
          *(_QWORD *)(v4 + 24) = v10;
          sub_DC29C0((const __m128i **)(a1 + 1656), &v82);
          sub_15D0DF0(&v82);
          sub_25A130(v86.m128i_i8);
        }
        else
        {
          sub_25A130(v86.m128i_i8);
          v69 = sub_DC09F0(a1);
          v86.m128i_i8[8] = 0;
          v86.m128i_i32[0] = v69;
          sub_DC29C0((const __m128i **)(a1 + 1656), &v86);
          sub_15D0DF0(&v86);
        }
        goto LABEL_11;
      case 8LL:
        v82.m128i_i8[4] &= 0xFCu;
        v84 &= 0xFCu;
        v82.m128i_i32[0] = 0;
        v82.m128i_i64[1] = 0;
        v83 = 1;
        v85 = 0;
        sub_27B950((__int64)qword_1C7F2C0, (__int64)&v82, (int *)(a1 + 56));
        v14 = sub_186B270(0x20u);
        v15 = v82.m128i_i8[4];
        v81.m128i_i64[0] = v14;
        v16 = *(__m128i **)(a1 + 1656);
        v81.m128i_i8[8] = 4;
        *(_DWORD *)v14 = v82.m128i_i32[0];
        v17 = v15 & 3 | *(_BYTE *)(v14 + 4) & 0xFC;
        v18 = v84;
        *(_BYTE *)(v14 + 4) = v17;
        v19 = v82.m128i_i64[1];
        v82.m128i_i64[1] = 0;
        *(_QWORD *)(v14 + 8) = v19;
        *(_DWORD *)(v14 + 16) = v83;
        *(_BYTE *)(v14 + 20) = v18 & 3 | *(_BYTE *)(v14 + 20) & 0xFC;
        v20 = v85;
        v85 = 0;
        *(_QWORD *)(v14 + 24) = v20;
        if ( v16 )
        {
          v21 = v16[-1].m128i_u32[3];
          if ( (_DWORD)v21 != v16[-1].m128i_i32[2] )
          {
            v16[v21] = _mm_load_si128(&v81);
LABEL_21:
            v81.m128i_i32[0] = 0;
            v81.m128i_i8[8] = 0;
            goto LABEL_22;
          }
          v41 = (unsigned int)(3 * v21 + 1) >> 1;
          v80 = v41;
          v42 = 16 * v41 + 8;
          if ( 16 * (int)v21 + 8 >= (unsigned int)v42 || (unsigned int)v21 >= v41 )
          {
            v74 = (char **)__cxa_allocate_exception(0x28u);
            sub_DBF430(v86.m128i_i64, "Overflow encountered when expanding vector");
            *v74 = (char *)off_1C63128;
            sub_2333C0(v74 + 1, &v86);
            sub_233E40((__int64)&v86);
            __cxa_throw(v74, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v43 = sub_186B270(v42);
          v44 = *(const __m128i **)(a1 + 1656);
          v78 = (_DWORD *)v43;
          v16 = (__m128i *)(v43 + 8);
          if ( v44 )
          {
            v45 = v43;
            v46 = v44[-1].m128i_u32[3];
            v47 = v16;
            *(_DWORD *)(v45 + 4) = v46;
            v48 = &v44[v46];
            for ( k = v44; k != v48; ++v47 )
            {
              v35 = k->m128i_i8[8] == 0;
              *v47 = _mm_loadu_si128(k);
              k->m128i_i32[0] = 0;
              if ( !v35 )
                k->m128i_i8[8] = 0;
              ++k;
            }
            v50 = v44[-1].m128i_u32[3];
            v51 = &v44[v50];
            if ( (_DWORD)v50 )
            {
              do
              {
                v52 = v44++;
                sub_15D0DF0(v52);
              }
              while ( v44 != v51 );
              v44 = *(const __m128i **)(a1 + 1656);
            }
            sub_186B220(&v44[-1].m128i_u64[1]);
            v53 = &v16[v78[1]];
          }
          else
          {
            *(_DWORD *)(v43 + 4) = 0;
            v53 = (__m128i *)(v43 + 8);
          }
          *(_QWORD *)(a1 + 1656) = v16;
          v54 = v81.m128i_i8[8];
          *v78 = v80;
        }
        else
        {
          v70 = (_QWORD *)sub_186B270(0x28u);
          v16 = (__m128i *)(v70 + 1);
          *v70 = 2;
          v54 = v81.m128i_i8[8];
          *(_QWORD *)(a1 + 1656) = v70 + 1;
          v53 = (__m128i *)(v70 + 1);
        }
        *v53 = _mm_load_si128(&v81);
        if ( v54 )
          goto LABEL_21;
        v81.m128i_i32[0] = 0;
LABEL_22:
        ++v16[-1].m128i_i32[3];
        sub_15D0DF0(&v81);
        sub_25A130(v82.m128i_i8);
        if ( *(_DWORD *)(a1 + 1424) != 9 )
          goto LABEL_12;
        goto LABEL_4;
      default:
        goto LABEL_4;
    }
  }
}

