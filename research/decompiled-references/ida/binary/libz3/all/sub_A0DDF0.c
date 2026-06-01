__int64 __fastcall sub_A0DDF0(__int64 *a1, unsigned int a2, double a3)
{
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // r15
  __int64 v6; // r14
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rbp
  unsigned int v11; // ebp
  unsigned int v12; // eax
  __int64 v13; // r13
  bool v14; // r12
  __int64 v15; // rsi
  __int64 v16; // r13
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rax
  unsigned int v20; // r12d
  __int64 v21; // rsi
  unsigned int i; // r12d
  char v23; // bl
  int v24; // ecx
  int v25; // r8d
  int v26; // r9d
  unsigned int *v27; // rsi
  unsigned int *v28; // r13
  __int64 v29; // rbx
  unsigned int **v30; // rbx
  __int64 v31; // rax
  unsigned int **v32; // r12
  unsigned int *v33; // rbp
  unsigned int v34; // eax
  __int64 v35; // rsi
  __int64 v36; // rbp
  int v37; // ebp
  __int64 v38; // rax
  unsigned int **v39; // rbx
  __int64 v40; // rax
  unsigned int **v41; // r12
  unsigned int *v42; // rbp
  unsigned int v43; // eax
  __int64 v44; // rbp
  void *v45; // [rsp+0h] [rbp-E8h]
  char v46; // [rsp+8h] [rbp-E0h]
  __int64 v47; // [rsp+8h] [rbp-E0h]
  __int64 v48; // [rsp+8h] [rbp-E0h]
  __int64 v49; // [rsp+8h] [rbp-E0h]
  __int64 v50; // [rsp+10h] [rbp-D8h]
  unsigned __int8 v51; // [rsp+2Bh] [rbp-BDh]
  unsigned int v52; // [rsp+2Ch] [rbp-BCh] BYREF
  int v53; // [rsp+30h] [rbp-B8h] BYREF
  char v54; // [rsp+34h] [rbp-B4h]
  int v55; // [rsp+40h] [rbp-A8h]
  char v56; // [rsp+44h] [rbp-A4h]
  char v57[32]; // [rsp+50h] [rbp-98h] BYREF
  __int64 v58; // [rsp+70h] [rbp-78h] BYREF
  __int64 v59; // [rsp+78h] [rbp-70h]
  __int64 v60; // [rsp+80h] [rbp-68h] BYREF
  __int64 v61; // [rsp+88h] [rbp-60h]
  __int64 v62; // [rsp+90h] [rbp-58h] BYREF
  __int64 v63; // [rsp+98h] [rbp-50h]
  __int64 v64; // [rsp+A0h] [rbp-48h]
  __int64 v65; // [rsp+A8h] [rbp-40h]

  v3 = a1[82];
  v52 = a2;
  if ( *(char *)(v3 + 4LL * a2 + 3) >= 0
    && (v4 = 4LL * a2, v5 = (__int64)a1, v6 = **(_QWORD **)(a1[4] + 8LL * a2), (v51 = sub_9B3760((__int64)a1, v6)) != 0) )
  {
    v8 = a1[82];
    ++*((_DWORD *)a1 + 92);
    *(_BYTE *)(v8 + v4 + 3) |= 0x80u;
    sub_98D100(a1 + 96, &v52);
    sub_9965E0((__int64)&v53, (__int64)a1, v6);
    if ( v53 && sub_9968C0((__int64)a1, v6) )
    {
      sub_1831620(qword_1C7F2C0, &v53);
      if ( (v54 & 1) != 0 || v53 != 1 || (v56 & 1) != 0 || v55 != 1 )
      {
        v23 = *(_BYTE *)(a1[82] + v4 + 3);
        LODWORD(v58) = 0;
        BYTE4(v58) &= 0xFCu;
        BYTE4(v60) &= 0xFCu;
        v59 = 0;
        LODWORD(v60) = 1;
        v61 = 0;
        sub_27B950((__int64)qword_1C7F2C0, (__int64)&v58, &v53);
        sub_27B900((__int64)(a1 + 51), (int)&v58, (v23 & 0x40) != 0, v24, v25, v26);
        sub_15E1B70(a1[51]);
        sub_25A130((char *)&v58);
      }
      v27 = (unsigned int *)sub_15E1B70(a1[51]);
      v28 = v27;
      if ( !(unsigned __int8)sub_993730((__int64)a1, v27) )
      {
        sub_B6F780(a1[2]);
        v29 = a1[2];
        (*(void (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(v29 + 7488) + 48LL))(
          *(_QWORD *)(v29 + 7488),
          v27);
        a1 = *(__int64 **)(v29 + 7488);
        (*(void (__fastcall **)(__int64 *))(*a1 + 64))(a1);
      }
      if ( (unsigned int)sub_180B130(a1) > 2 )
      {
        if ( (unsigned __int8)sub_186A530(a3) )
        {
          sub_186A4C0(a3);
          v39 = (unsigned int **)(v6 + 32);
          v40 = 8LL * *(unsigned int *)(v6 + 24);
          v41 = (unsigned int **)(v6 + 32 + v40);
          if ( v40 )
          {
            do
            {
              v42 = *v39;
              v43 = sub_B39350(
                      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 8656LL) + 8LL * **v39),
                      *(unsigned int *)(v5 + 8));
              v27 = (unsigned int *)v43;
              a1 = (__int64 *)v5;
              if ( sub_9B2ED0(v5, v43) )
              {
                v49 = sub_180B150(v5, v27);
                sub_1606360(&v58, v42, *(_QWORD *)(v5 + 24), 0, 0, 0);
                v44 = sub_160E8B0(v49, &v58);
                std::__ostream_insert<char,std::char_traits<char>>();
                sub_3EBD70((__int64)v57, (__int64)&v53);
                sub_2FCE40(v44, (__int64)v57);
                v27 = (unsigned int *)"\n";
                std::operator<<<std::char_traits<char>>();
                sub_25A130(v57);
                a1 = &v60;
                sub_18572D0(&v60);
              }
              ++v39;
            }
            while ( v41 != v39 );
          }
          sub_186A500(a1, v27);
        }
        else
        {
          v30 = (unsigned int **)(v6 + 32);
          v31 = 8LL * *(unsigned int *)(v6 + 24);
          v32 = (unsigned int **)(v6 + 32 + v31);
          if ( v31 )
          {
            do
            {
              v33 = *v30;
              v34 = sub_B39350(
                      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 8656LL) + 8LL * **v30),
                      *(unsigned int *)(v5 + 8));
              v35 = v34;
              if ( sub_9B2ED0(v5, v34) )
              {
                v48 = sub_180B150(v5, v35);
                sub_1606360(&v58, v33, *(_QWORD *)(v5 + 24), 0, 0, 0);
                v36 = sub_160E8B0(v48, &v58);
                std::__ostream_insert<char,std::char_traits<char>>();
                sub_3EBD70((__int64)v57, (__int64)&v53);
                sub_2FCE40(v36, (__int64)v57);
                std::operator<<<std::char_traits<char>>();
                sub_25A130(v57);
                sub_18572D0(&v60);
              }
              ++v30;
            }
            while ( v32 != v30 );
          }
        }
      }
      v37 = sub_B39350(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 8656LL) + 8LL * *v28), *(unsigned int *)(v5 + 8));
      v38 = sub_186B270(0x68u);
      v58 = 0;
      v9 = v38;
      v59 = 0;
      v60 = 1;
      v61 = 0;
      sub_182CBA0(qword_1C7F2C0, &v60);
      *(_DWORD *)(v9 + 8) = v37;
      *(_QWORD *)v9 = &off_1C56158;
      BYTE4(v60) &= ~1u;
      LODWORD(v60) = 1;
      v62 = 0;
      v63 = 0;
      v64 = 1;
      v65 = 0;
      sub_91F480(v9 + 16, (__int64)&v58);
      *(_BYTE *)(v9 + 80) &= 0xFCu;
      *(_QWORD *)v9 = &off_1C56200;
      *(_OWORD *)(v9 + 88) = 0;
      sub_25A130((char *)&v62);
      sub_25A130((char *)&v58);
      v50 = sub_186B270(0x68u);
      v58 = 0;
      v59 = 0;
      v60 = 1;
      v61 = 0;
      sub_182CBA0(qword_1C7F2C0, &v60);
      LODWORD(v60) = 1;
      BYTE4(v60) &= ~1u;
      *(_DWORD *)(v50 + 8) = v37;
      v10 = v50;
      *(_QWORD *)v50 = &off_1C56158;
      v62 = 0;
      v63 = 0;
      v64 = 1;
      v65 = 0;
      sub_91F480(v50 + 16, (__int64)&v58);
    }
    else
    {
      v9 = sub_186B270(0x68u);
      sub_894960((__int64)&v58, (__int64)&v53);
      *(_DWORD *)(v9 + 8) = a2;
      *(_QWORD *)v9 = &off_1C56158;
      sub_91F480(v9 + 16, (__int64)&v58);
      *(_BYTE *)(v9 + 80) &= 0xFCu;
      *(_QWORD *)v9 = &off_1C56200;
      *(_OWORD *)(v9 + 88) = 0;
      sub_25A130((char *)&v62);
      sub_25A130((char *)&v58);
      v50 = sub_186B270(0x68u);
      sub_894960((__int64)&v58, (__int64)&v53);
      *(_DWORD *)(v50 + 8) = a2;
      v10 = v50;
      *(_QWORD *)v50 = &off_1C56158;
      sub_91F480(v50 + 16, (__int64)&v58);
    }
    v46 = *(_BYTE *)(v10 + 80);
    *(_QWORD *)v10 = &off_1C56200;
    *(_OWORD *)(v10 + 88) = 0;
    *(_BYTE *)(v10 + 80) = v46 & 0xFC | 1;
    sub_25A130((char *)&v62);
    sub_25A130((char *)&v58);
    v58 = v9;
    sub_98CF00((_QWORD *)(v5 + 1056), &v58);
    v58 = v9;
    sub_98CF00((_QWORD *)(v5 + 736), &v58);
    v58 = v50;
    sub_98CF00((_QWORD *)(v5 + 1056), &v58);
    v58 = v50;
    sub_98CF00((_QWORD *)(v5 + 736), &v58);
    v45 = (void *)(v5 + 208);
    sub_9E4980(v5 + 208);
    v47 = v5 + 232;
    sub_9E7500(v5 + 232);
    v11 = 0;
    while ( v11 < *(_DWORD *)(v6 + 24) )
    {
      v12 = sub_B39350(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 8656LL) + 8LL * **(unsigned int **)(v6 + 8LL * v11 + 32)),
              *(unsigned int *)(v5 + 8));
      v13 = v12;
      v14 = sub_9B2ED0(v5, v12);
      if ( v14 )
      {
        v15 = *(_QWORD *)(*(_QWORD *)(v5 + 680) + 8 * v13);
        v16 = *(_QWORD *)(*(_QWORD *)(v5 + 688) + 8 * v13);
        if ( *(_DWORD *)(v15 + 16) || *(_DWORD *)(v15 + 48) )
        {
          v14 = 0;
        }
        else
        {
          sub_9E4980((__int64)v45);
          sub_9E7500(v47);
          v17 = *(_QWORD *)(v9 + 88);
          if ( v17 )
            *(_DWORD *)(v17 - 4) = 0;
          v18 = *(_QWORD *)(v9 + 96);
          if ( v18 )
            *(_DWORD *)(v18 - 4) = 0;
        }
        sub_A0D660(v5, v15, v9, (__int64)&qword_1C7F2A0, (__int64)v45, v47);
        sub_A0D660(v5, v16, v9, (__int64)&qword_1C7F2A0, (__int64)v45, v47);
        ++v11;
        if ( v14 )
          break;
      }
      else
      {
        ++v11;
      }
    }
    v19 = *(_QWORD *)(v9 + 88);
    if ( v19 )
    {
      v20 = 0;
      do
      {
        if ( v20 >= *(_DWORD *)(v19 - 4) )
          break;
        sub_98CFC0((_QWORD *)(v50 + 88), (unsigned int *)(v19 + 4LL * v20));
        v19 = *(_QWORD *)(v9 + 88);
        ++v20;
      }
      while ( v19 );
    }
    v21 = *(_QWORD *)(v9 + 96);
    for ( i = 0; v21; ++i )
    {
      if ( i >= *(_DWORD *)(v21 - 4) )
        break;
      sub_98CA20((__m128i **)(v50 + 96), (const __m128i *)(16LL * i + v21));
      v21 = *(_QWORD *)(v9 + 96);
    }
    sub_25A130((char *)&v53);
  }
  else
  {
    return 0;
  }
  return v51;
}

