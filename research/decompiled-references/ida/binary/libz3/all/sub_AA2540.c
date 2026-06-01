__int64 __fastcall sub_AA2540(unsigned __int64 *a1, __m128i a2)
{
  char v3; // al
  char v5; // r14
  int v6; // eax
  __int64 v7; // rax
  char v8; // r13
  unsigned int *v9; // r12
  __int64 v10; // rax
  unsigned __int64 v11; // r8
  void *v12; // rdi
  unsigned int v13; // r15d
  unsigned int v14; // esi
  char v15; // r15
  __int64 v16; // rax
  unsigned __int64 v17; // rdi
  __int64 v18; // r13
  __int64 v19; // r14
  __int64 v20; // rax
  unsigned __int64 *v21; // rsi
  __int64 *v22; // rdi
  __int64 v23; // r13
  __int64 v24; // r14
  _DWORD *v25; // rax
  __int64 v26; // rdi
  __int64 v27; // r13
  __int64 v28; // rdi
  __int64 v29; // rax
  char v30; // si
  __int64 v31; // r14
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v35; // rdi
  void *v37; // r15
  __int64 *v38; // rsi
  __int64 v39; // rdi
  __int64 v40; // rdi
  __int64 v41; // r15
  __int64 v42; // rdi
  __int64 v43; // r13
  __int64 v44; // r15
  int v45; // [rsp-8h] [rbp-128h]
  unsigned __int64 v46; // [rsp+0h] [rbp-120h]
  int v47; // [rsp+8h] [rbp-118h]
  __int64 *v48; // [rsp+8h] [rbp-118h]
  unsigned int **v49; // [rsp+10h] [rbp-110h]
  __int64 v50; // [rsp+10h] [rbp-110h]
  unsigned __int64 v51; // [rsp+10h] [rbp-110h]
  void *v52; // [rsp+10h] [rbp-110h]
  void *v53; // [rsp+18h] [rbp-108h]
  __int64 v54; // [rsp+18h] [rbp-108h]
  __int64 v55; // [rsp+28h] [rbp-F8h] BYREF
  __int64 v56; // [rsp+30h] [rbp-F0h] BYREF
  __int64 v57[4]; // [rsp+38h] [rbp-E8h] BYREF
  unsigned int *v58; // [rsp+58h] [rbp-C8h]
  __m128i v59; // [rsp+60h] [rbp-C0h] BYREF
  __int64 v60; // [rsp+70h] [rbp-B0h] BYREF
  __int64 v61[2]; // [rsp+78h] [rbp-A8h] BYREF
  int v62; // [rsp+88h] [rbp-98h] BYREF
  char v63; // [rsp+8Ch] [rbp-94h]
  __int64 v64; // [rsp+90h] [rbp-90h]
  unsigned int *v65; // [rsp+98h] [rbp-88h]
  unsigned __int64 v66; // [rsp+A0h] [rbp-80h]
  unsigned __int64 v67; // [rsp+A8h] [rbp-78h]
  __int64 v68; // [rsp+B0h] [rbp-70h] BYREF
  __int64 v69; // [rsp+B8h] [rbp-68h] BYREF
  __int64 v70; // [rsp+C0h] [rbp-60h] BYREF
  __int64 v71; // [rsp+C8h] [rbp-58h]
  __int64 v72; // [rsp+D0h] [rbp-50h]
  unsigned int *v73; // [rsp+D8h] [rbp-48h]
  __m128 v74; // [rsp+E0h] [rbp-40h]

  v3 = sub_18290A0(a1[1]);
  if ( !v3 )
    return 1;
  v5 = v3;
  v6 = sub_FE8810(a1[42], a1 + 102);
  if ( !v6 )
  {
    if ( a1[41] && (sub_1021DD0(), sub_A9E480((__int64)a1), (v7 = *(_QWORD *)sub_1021DE0(a1[41])) != 0) )
      return *(_DWORD *)(v7 - 4) != 0;
    else
      return 0;
  }
  v8 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*a1 + 16) + 112LL) + 285LL);
  if ( v8 )
    return 2;
  if ( v6 == 3 )
  {
    v68 = 0;
    sub_A9D200(a1, &v68, 1);
    return 1;
  }
  if ( v6 > 3 )
  {
    if ( (unsigned int)(v6 - 4) <= 1 )
      return 1;
    goto LABEL_30;
  }
  if ( v6 != 1 )
  {
    if ( v6 == 2 )
    {
      sub_A7AF60(a1);
      v48 = &v56;
      sub_83B2E0((__int64)&v56, a1 + 102);
      v9 = (unsigned int *)a1[102];
      if ( v9 )
      {
        v10 = *(v9 - 1);
        v9 += 10 * v10;
        v8 = (_DWORD)v10 != 0;
      }
      LOBYTE(v60) = v8;
      BYTE4(v61[0]) &= 0xFCu;
      v63 &= 0xFCu;
      v11 = a1[103];
      LODWORD(v61[0]) = 0;
      v12 = qword_1C7F2C0;
      v61[1] = 0;
      v13 = *((_DWORD *)a1 + 208);
      v62 = 1;
      v64 = 0;
      if ( (*(_BYTE *)(&qword_1C7F280 + 1) & 1) != 0 )
      {
        v46 = v11;
        v52 = qword_1C7F2C0;
        sub_182C690(qword_1C7F2C0, v61, &qword_1C7F280);
        v11 = v46;
        v12 = v52;
      }
      else
      {
        LODWORD(v61[0]) = qword_1C7F280;
      }
      if ( (qword_1C7F290 & 0x100000000LL) != 0 )
      {
        v51 = v11;
        sub_182C690(v12, &v62, &qword_1C7F290);
        v11 = v51;
      }
      else
      {
        v63 &= ~1u;
        v62 = qword_1C7F290;
      }
      v65 = v9;
      v66 = v11 + 12LL * v13;
      v67 = v66;
      v49 = (unsigned int **)(a1 + 106);
      while ( 1 )
      {
        if ( (_BYTE)v56 )
        {
          if ( v58 == v65 )
            goto LABEL_50;
          v14 = *v58;
        }
        else
        {
          if ( v59.m128i_i64[0] == v66 )
          {
LABEL_50:
            sub_25A130((char *)v61);
            sub_25A130((char *)v57);
            LOBYTE(v53) = *(_BYTE *)sub_FE86E0(a1[42]) ^ 1;
            v31 = sub_FE86C0(a1[42]);
            v32 = sub_FE86A0(a1[42]);
            v33 = a1[1];
            v68 = 0;
            v69 = 0;
            v70 = 1;
            v71 = 0;
            v60 = 0;
            v61[0] = v33;
            sub_A84BA0(&v56, a1, v32, v31, (char)v53, (__int64)&v68, &v60);
            v34 = v60;
            if ( v60 )
            {
              v35 = v61[0];
              if ( (*(_DWORD *)(v60 + 8))-- == 1 )
                sub_15D7BC0(v35, v34);
            }
            v37 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v68);
            v38 = &v70;
            v39 = (__int64)v37;
            sub_182CBA0(v37, &v70);
            if ( *(_QWORD *)(a1[1] + 912) )
            {
              v40 = *a1;
              v68 = 0;
              sub_966750(v40, v56, -1, 0, 0, -1, (__int64 ***)&v68, v45, v46, (int)&v56, (int)v49, v53);
              if ( v68 )
                sub_186B220((void *)(v68 - 8));
              v38 = (__int64 *)"[end-of-instance]\n";
              v39 = *(_QWORD *)(a1[1] + 912) + 16LL;
              std::operator<<<std::char_traits<char>>();
            }
            if ( (unsigned int)sub_180B130(v39) > 3 )
            {
              if ( (unsigned __int8)sub_186A530(*(double *)a2.m128i_i64) )
              {
                sub_186A4C0(*(double *)a2.m128i_i64);
                v41 = sub_180B150(v39, v38);
                std::__ostream_insert<char,std::char_traits<char>>();
                v42 = sub_160EBE0(v41, v48);
                std::operator<<<std::char_traits<char>>();
                sub_186A500(v42, "\n");
              }
              else
              {
                v44 = sub_180B150(v39, v38);
                std::__ostream_insert<char,std::char_traits<char>>();
                sub_160EBE0(v44, v48);
                std::operator<<<std::char_traits<char>>();
              }
            }
            sub_AA1680(
              a1,
              (unsigned int)(2 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 16) + 8832LL) + 4LL * *(unsigned int *)v56)),
              a1 + 106,
              a1 + 107,
              a1 + 108);
            sub_A72BE0(v56, v57[0]);
            return 1;
          }
          v14 = *(_DWORD *)(v59.m128i_i64[0] + 8);
        }
        sub_A75C40(a1, v14, v49);
        if ( (_BYTE)v56 )
        {
          v58 += 10;
        }
        else
        {
          v29 = v59.m128i_i64[0] + 12;
          v59.m128i_i64[0] = v29;
          if ( v59.m128i_i64[1] != v29 )
          {
            v30 = 0;
            while ( *(_DWORD *)(v29 + 4) != 2 )
            {
              v29 += 12;
              if ( v59.m128i_i64[1] == v29 )
              {
                v59.m128i_i64[0] = v59.m128i_i64[1];
                goto LABEL_23;
              }
              v53 = (void *)v29;
              v30 = v5;
            }
            if ( v30 )
              v59.m128i_i64[0] = (__int64)v53;
          }
        }
LABEL_23:
        LOBYTE(v68) = v56;
        v69 = 0;
        v70 = 0;
        v71 = 1;
        v72 = 0;
        sub_27B950((__int64)qword_1C7F2C0, (__int64)&v69, (int *)v57);
        a2 = _mm_load_si128(&v59);
        v73 = v58;
        v74 = (__m128)a2;
        sub_25A130((char *)&v69);
      }
    }
LABEL_30:
    sub_1872CE0("");
    sub_1873130(114, 1960);
  }
  v15 = *(_BYTE *)sub_FE86E0(a1[42]);
  v16 = sub_FE86C0(a1[42]);
  v17 = a1[42];
  v68 = 0;
  v18 = v16;
  v69 = 0;
  v19 = a1[1];
  v70 = 1;
  v71 = 0;
  v20 = sub_FE86A0(v17);
  v21 = a1;
  v56 = 0;
  v57[0] = v19;
  v22 = &v60;
  sub_A84BA0(&v60, a1, v20, v18, v15 ^ 1, (__int64)&v68, &v56);
  v23 = a1[1];
  v24 = v57[0];
  v50 = v56;
  if ( *(_QWORD *)(v23 + 912) )
  {
    sub_15E1A70(v23);
    v25 = (_DWORD *)sub_15E1B70(v23);
    if ( v25 )
      ++v25[2];
    v26 = *a1;
    v55 = 0;
    sub_966750(v26, (int)v25, -1, 0, 0, -1, (__int64 ***)&v55, v45, v46, v47, v50, v25);
    if ( v55 )
      sub_186B220((void *)(v55 - 8));
    std::operator<<<std::char_traits<char>>();
    v22 = (__int64 *)v54;
    v21 = (unsigned __int64 *)v23;
    sub_A72BC0(v54, v23);
  }
  if ( (unsigned int)sub_180B130(v22) > 3 )
  {
    if ( (unsigned __int8)sub_186A530(*(double *)a2.m128i_i64) )
    {
      sub_186A4C0(*(double *)a2.m128i_i64);
      v27 = sub_180B150(v22, v21);
      std::__ostream_insert<char,std::char_traits<char>>();
      v28 = sub_160EBE0(v27, &v60);
      std::operator<<<std::char_traits<char>>();
      sub_186A500(v28, "\n");
    }
    else
    {
      v43 = sub_180B150(v22, v21);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_160EBE0(v43, &v60);
      std::operator<<<std::char_traits<char>>();
    }
  }
  ++*((_DWORD *)a1 + 122);
  sub_A72BE0(v60, v61[0]);
  sub_A72BE0(v50, v24);
  sub_25A130((char *)&v68);
  return 1;
}

