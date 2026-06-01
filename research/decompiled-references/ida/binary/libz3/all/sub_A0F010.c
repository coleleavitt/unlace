__int64 __fastcall sub_A0F010(__int64 *a1, unsigned int a2, double a3)
{
  __int64 v3; // rdx
  __int64 v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // r15
  __int64 v8; // rax
  char v9; // bp
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  unsigned int *v13; // rsi
  __int64 v14; // rbp
  unsigned int **v15; // rbp
  __int64 v16; // rax
  unsigned int **v17; // r13
  unsigned int *v18; // r12
  unsigned int v19; // eax
  __int64 v20; // rsi
  __int64 v21; // r12
  __int64 v22; // rbp
  void *v23; // rdi
  int v24; // eax
  void *v25; // r12
  int v26; // eax
  char v27; // al
  unsigned int v28; // r13d
  unsigned int v29; // r14d
  bool v30; // r12
  __int64 v31; // rsi
  __int64 v32; // r14
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  unsigned int v36; // r12d
  __int64 v37; // rsi
  unsigned int i; // r12d
  int v39; // r12d
  __int64 v40; // rax
  __int64 v41; // rax
  unsigned int **v42; // r13
  unsigned int **v43; // r12
  unsigned int *v44; // rbp
  unsigned int v45; // eax
  __int64 v46; // rbp
  void *v47; // [rsp+0h] [rbp-D8h]
  unsigned int *v48; // [rsp+8h] [rbp-D0h]
  __int64 v49; // [rsp+8h] [rbp-D0h]
  __int64 v50; // [rsp+10h] [rbp-C8h]
  __int64 v51; // [rsp+10h] [rbp-C8h]
  __int64 v52; // [rsp+10h] [rbp-C8h]
  unsigned __int8 v53; // [rsp+2Bh] [rbp-ADh]
  unsigned int v54; // [rsp+2Ch] [rbp-ACh] BYREF
  int v55; // [rsp+30h] [rbp-A8h] BYREF
  char v56; // [rsp+34h] [rbp-A4h]
  int v57; // [rsp+40h] [rbp-98h]
  char v58; // [rsp+44h] [rbp-94h]
  char v59[32]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v60; // [rsp+70h] [rbp-68h] BYREF
  __int64 v61; // [rsp+78h] [rbp-60h]
  __int64 v62; // [rsp+80h] [rbp-58h] BYREF
  __int64 v63; // [rsp+88h] [rbp-50h]

  v3 = a1[74];
  v54 = a2;
  if ( *(char *)(v3 + 4LL * a2 + 3) >= 0
    && (v4 = 4LL * a2, v5 = (__int64)a1, v6 = **(_QWORD **)(a1[4] + 8LL * a2), (v53 = sub_99DAA0((__int64)a1, v6)) != 0) )
  {
    v8 = a1[74];
    ++*((_DWORD *)a1 + 76);
    *(_BYTE *)(v8 + v4 + 3) |= 0x80u;
    sub_98D100(a1 + 88, &v54);
    sub_99DC10((__int64)&v55, (__int64)a1, v6);
    if ( v55 && sub_99DE30((__int64)a1, v6) )
    {
      sub_1831620(qword_1C7F2C0, &v55);
      if ( (v56 & 1) != 0 || v55 != 1 || (v58 & 1) != 0 || v57 != 1 )
      {
        v9 = *(_BYTE *)(a1[74] + v4 + 3);
        BYTE4(v60) &= 0xFCu;
        BYTE4(v62) &= 0xFCu;
        LODWORD(v60) = 0;
        v61 = 0;
        LODWORD(v62) = 1;
        v63 = 0;
        sub_27B950((__int64)qword_1C7F2C0, (__int64)&v60, &v55);
        sub_27B900((__int64)(a1 + 43), (int)&v60, (v9 & 0x40) != 0, v10, v11, v12);
        sub_15E1B70(a1[43]);
        sub_25A130((char *)&v60);
      }
      v13 = (unsigned int *)sub_15E1B70(a1[43]);
      v48 = v13;
      if ( !(unsigned __int8)sub_9993F0((__int64)a1, v13) )
      {
        sub_B6F780(a1[2]);
        v14 = a1[2];
        (*(void (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(v14 + 7488) + 48LL))(
          *(_QWORD *)(v14 + 7488),
          v13);
        a1 = *(__int64 **)(v14 + 7488);
        (*(void (__fastcall **)(__int64 *))(*a1 + 64))(a1);
      }
      if ( (unsigned int)sub_180B130(a1) > 2 )
      {
        if ( (unsigned __int8)sub_186A530(a3) )
        {
          sub_186A4C0(a3);
          v41 = 8LL * *(unsigned int *)(v6 + 24);
          v42 = (unsigned int **)(v6 + 32 + v41);
          if ( v41 )
          {
            v43 = (unsigned int **)(v6 + 32);
            do
            {
              v44 = *v43;
              v45 = sub_B39350(
                      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 8656LL) + 8LL * **v43),
                      *(unsigned int *)(v5 + 8));
              v13 = (unsigned int *)v45;
              a1 = (__int64 *)v5;
              if ( sub_99A460(v5, v45) )
              {
                v52 = sub_180B150(v5, v13);
                sub_1606360(&v60, v44, *(_QWORD *)(v5 + 24), 0, 0, 0);
                v46 = sub_160E8B0(v52, &v60);
                std::__ostream_insert<char,std::char_traits<char>>();
                sub_3EBD70((__int64)v59, (__int64)&v55);
                sub_2FCE40(v46, (__int64)v59);
                v13 = (unsigned int *)"\n";
                std::operator<<<std::char_traits<char>>();
                sub_25A130(v59);
                a1 = &v62;
                sub_18572D0(&v62);
              }
              ++v43;
            }
            while ( v42 != v43 );
          }
          sub_186A500(a1, v13);
        }
        else
        {
          v15 = (unsigned int **)(v6 + 32);
          v16 = 8LL * *(unsigned int *)(v6 + 24);
          v17 = (unsigned int **)(v6 + 32 + v16);
          if ( v16 )
          {
            do
            {
              v18 = *v15;
              v19 = sub_B39350(
                      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 8656LL) + 8LL * **v15),
                      *(unsigned int *)(v5 + 8));
              v20 = v19;
              if ( sub_99A460(v5, v19) )
              {
                v50 = sub_180B150(v5, v20);
                sub_1606360(&v60, v18, *(_QWORD *)(v5 + 24), 0, 0, 0);
                v21 = sub_160E8B0(v50, &v60);
                std::__ostream_insert<char,std::char_traits<char>>();
                sub_3EBD70((__int64)v59, (__int64)&v55);
                sub_2FCE40(v21, (__int64)v59);
                std::operator<<<std::char_traits<char>>();
                sub_25A130(v59);
                sub_18572D0(&v62);
              }
              ++v15;
            }
            while ( v17 != v15 );
          }
        }
      }
      v39 = sub_B39350(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 8656LL) + 8LL * *v48), *(unsigned int *)(v5 + 8));
      v40 = sub_186B270(0x48u);
      v60 = 0;
      v22 = v40;
      v61 = 0;
      v62 = 1;
      v63 = 0;
      sub_182CBA0(qword_1C7F2C0, &v62);
      BYTE4(v62) &= ~1u;
      LODWORD(v62) = 1;
      sub_9A0150(v22, v39, (__int64)&v60, 0);
      sub_25A130((char *)&v60);
      v51 = sub_186B270(0x48u);
      v60 = 0;
      v61 = 0;
      v62 = 1;
      v63 = 0;
      sub_182CBA0(qword_1C7F2C0, &v62);
      BYTE4(v62) &= ~1u;
      LODWORD(v62) = 1;
      sub_9A0150(v51, v39, (__int64)&v60, 1);
    }
    else
    {
      v22 = sub_186B270(0x48u);
      v60 = 0;
      v61 = 0;
      v62 = 1;
      v63 = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)&v60, &v55);
      *(_DWORD *)(v22 + 8) = a2;
      v23 = qword_1C7F2C0;
      *(_QWORD *)v22 = &off_1C56290;
      *(_QWORD *)(v22 + 16) = 0;
      *(_QWORD *)(v22 + 24) = 0;
      *(_QWORD *)(v22 + 32) = 1;
      *(_QWORD *)(v22 + 40) = 0;
      if ( (v60 & 0x100000000LL) != 0 )
        sub_182C690(v23, v22 + 16, &v60);
      else
        *(_DWORD *)(v22 + 16) = v60;
      if ( (v62 & 0x100000000LL) != 0 )
      {
        sub_182C690(v23, v22 + 32, &v62);
      }
      else
      {
        v24 = v62;
        *(_BYTE *)(v22 + 36) &= ~1u;
        *(_DWORD *)(v22 + 32) = v24;
      }
      *(_BYTE *)(v22 + 48) &= 0xFCu;
      *(_QWORD *)v22 = &off_1C56338;
      *(_OWORD *)(v22 + 56) = 0;
      sub_25A130((char *)&v60);
      v51 = sub_186B270(0x48u);
      v60 = 0;
      v61 = 0;
      v62 = 1;
      v63 = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)&v60, &v55);
      *(_DWORD *)(v51 + 8) = a2;
      v25 = qword_1C7F2C0;
      *(_QWORD *)v51 = &off_1C56290;
      *(_QWORD *)(v51 + 16) = 0;
      *(_QWORD *)(v51 + 24) = 0;
      *(_QWORD *)(v51 + 32) = 1;
      *(_QWORD *)(v51 + 40) = 0;
      if ( (v60 & 0x100000000LL) != 0 )
        sub_182C690(v25, v51 + 16, &v60);
      else
        *(_DWORD *)(v51 + 16) = v60;
      if ( (v62 & 0x100000000LL) != 0 )
      {
        sub_182C690(v25, v51 + 32, &v62);
      }
      else
      {
        v26 = v62;
        *(_BYTE *)(v51 + 36) &= ~1u;
        *(_DWORD *)(v51 + 32) = v26;
      }
      v27 = *(_BYTE *)(v51 + 48);
      *(_OWORD *)(v51 + 56) = 0;
      *(_BYTE *)(v51 + 48) = v27 & 0xFC | 1;
      *(_QWORD *)v51 = &off_1C56338;
    }
    sub_25A130((char *)&v60);
    v60 = v22;
    sub_98CD80((_QWORD *)(v5 + 960), &v60);
    v60 = v22;
    sub_98CD80((_QWORD *)(v5 + 672), &v60);
    v60 = v51;
    sub_98CD80((_QWORD *)(v5 + 960), &v60);
    v60 = v51;
    sub_98CD80((_QWORD *)(v5 + 672), &v60);
    v47 = (void *)(v5 + 144);
    sub_9E4980(v5 + 144);
    v49 = v5 + 168;
    sub_9E7500(v5 + 168);
    v28 = 0;
    while ( v28 < *(_DWORD *)(v6 + 24) )
    {
      v29 = sub_B39350(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 8656LL) + 8LL * **(unsigned int **)(v6 + 8LL * v28 + 32)),
              *(unsigned int *)(v5 + 8));
      v30 = sub_99A460(v5, v29);
      if ( v30 )
      {
        v31 = *(_QWORD *)(*(_QWORD *)(v5 + 616) + 8LL * v29);
        v32 = *(_QWORD *)(*(_QWORD *)(v5 + 624) + 8LL * v29);
        if ( *(_DWORD *)(v31 + 16) )
        {
          v30 = 0;
        }
        else
        {
          sub_9E4980((__int64)v47);
          sub_9E7500(v49);
          v33 = *(_QWORD *)(v22 + 56);
          if ( v33 )
            *(_DWORD *)(v33 - 4) = 0;
          v34 = *(_QWORD *)(v22 + 64);
          if ( v34 )
            *(_DWORD *)(v34 - 4) = 0;
        }
        sub_A0E7C0(v5, v31, v22, (__int64)&qword_1C7F2A0, (__int64)v47, v49);
        sub_A0E7C0(v5, v32, v22, (__int64)&qword_1C7F2A0, (__int64)v47, v49);
        ++v28;
        if ( v30 )
          break;
      }
      else
      {
        ++v28;
      }
    }
    v35 = *(_QWORD *)(v22 + 56);
    if ( v35 )
    {
      v36 = 0;
      do
      {
        if ( v36 >= *(_DWORD *)(v35 - 4) )
          break;
        sub_98CFC0((_QWORD *)(v51 + 56), (unsigned int *)(v35 + 4LL * v36));
        v35 = *(_QWORD *)(v22 + 56);
        ++v36;
      }
      while ( v35 );
    }
    v37 = *(_QWORD *)(v22 + 64);
    for ( i = 0; v37; ++i )
    {
      if ( i >= *(_DWORD *)(v37 - 4) )
        break;
      sub_98CA20((__m128i **)(v51 + 64), (const __m128i *)(16LL * i + v37));
      v37 = *(_QWORD *)(v22 + 64);
    }
    sub_25A130((char *)&v55);
  }
  else
  {
    return 0;
  }
  return v53;
}

