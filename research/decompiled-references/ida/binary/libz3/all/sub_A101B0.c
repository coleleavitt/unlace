__int64 __fastcall sub_A101B0(__int64 *a1, unsigned int a2, double a3)
{
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // r15
  __int64 v6; // r14
  __int64 v8; // rax
  __int64 v9; // rbx
  char v10; // si
  unsigned int v11; // ebp
  unsigned int v12; // eax
  __int64 v13; // r13
  bool v14; // r12
  _DWORD *v15; // rsi
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
  char v38; // al
  unsigned int **v39; // rbx
  __int64 v40; // rax
  unsigned int **v41; // r12
  unsigned int *v42; // rbp
  unsigned int v43; // eax
  __int64 v44; // rbp
  void *v45; // [rsp+0h] [rbp-128h]
  __int64 v46; // [rsp+8h] [rbp-120h]
  __int64 v47; // [rsp+8h] [rbp-120h]
  __int64 v48; // [rsp+8h] [rbp-120h]
  __int64 v49; // [rsp+10h] [rbp-118h]
  unsigned __int8 v50; // [rsp+2Bh] [rbp-FDh]
  unsigned int v51; // [rsp+2Ch] [rbp-FCh] BYREF
  int v52; // [rsp+30h] [rbp-F8h] BYREF
  char v53; // [rsp+34h] [rbp-F4h]
  int v54; // [rsp+40h] [rbp-E8h]
  char v55; // [rsp+44h] [rbp-E4h]
  char v56[32]; // [rsp+50h] [rbp-D8h] BYREF
  char v57[32]; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v58; // [rsp+90h] [rbp-98h] BYREF
  __int64 v59; // [rsp+98h] [rbp-90h]
  __int64 v60; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v61; // [rsp+A8h] [rbp-80h]
  __int64 v62; // [rsp+B0h] [rbp-78h]
  __int64 v63; // [rsp+B8h] [rbp-70h]
  __int64 v64; // [rsp+C0h] [rbp-68h] BYREF
  __int64 v65; // [rsp+C8h] [rbp-60h]
  __int64 v66; // [rsp+D0h] [rbp-58h]
  __int64 v67; // [rsp+D8h] [rbp-50h]
  __int64 v68; // [rsp+E0h] [rbp-48h]
  __int64 v69; // [rsp+E8h] [rbp-40h]

  v3 = a1[90];
  v51 = a2;
  if ( *(char *)(v3 + 4LL * a2 + 3) >= 0
    && (v4 = 4LL * a2, v5 = (__int64)a1, v6 = **(_QWORD **)(a1[4] + 8LL * a2), (v50 = sub_9B17A0((__int64)a1, v6)) != 0) )
  {
    v8 = a1[90];
    ++*((_DWORD *)a1 + 108);
    *(_BYTE *)(v8 + v4 + 3) |= 0x80u;
    sub_98D100(a1 + 104, &v51);
    sub_9B1940((__int64)&v52, (__int64)a1, v6);
    if ( v52 && sub_9B3300((__int64)a1, v6) )
    {
      sub_1831620(qword_1C7F2C0, &v52);
      if ( (v53 & 1) != 0 || v52 != 1 || (v55 & 1) != 0 || v54 != 1 )
      {
        v23 = *(_BYTE *)(a1[90] + v4 + 3);
        LODWORD(v58) = 0;
        BYTE4(v58) &= 0xFCu;
        BYTE4(v60) &= 0xFCu;
        v59 = 0;
        LODWORD(v60) = 1;
        v61 = 0;
        sub_27B950((__int64)qword_1C7F2C0, (__int64)&v58, &v52);
        sub_27B900((__int64)(a1 + 59), (int)&v58, (v23 & 0x40) != 0, v24, v25, v26);
        sub_15E1B70(a1[59]);
        sub_25A130((char *)&v58);
      }
      v27 = (unsigned int *)sub_15E1B70(a1[59]);
      v28 = v27;
      if ( !(unsigned __int8)sub_9A05F0((__int64)a1, v27) )
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
              if ( sub_9B1230(v5, v43) )
              {
                v48 = sub_180B150(v5, v27);
                sub_1606360(&v58, v42, *(_QWORD *)(v5 + 24), 0, 0, 0);
                v44 = sub_160E8B0(v48, &v58);
                std::__ostream_insert<char,std::char_traits<char>>();
                sub_3EBD70((__int64)v56, (__int64)&v52);
                sub_2FCE40(v44, (__int64)v56);
                v27 = (unsigned int *)"\n";
                std::operator<<<std::char_traits<char>>();
                sub_25A130(v56);
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
              if ( sub_9B1230(v5, v34) )
              {
                v47 = sub_180B150(v5, v35);
                sub_1606360(&v58, v33, *(_QWORD *)(v5 + 24), 0, 0, 0);
                v36 = sub_160E8B0(v47, &v58);
                std::__ostream_insert<char,std::char_traits<char>>();
                sub_3EBD70((__int64)v56, (__int64)&v52);
                sub_2FCE40(v36, (__int64)v56);
                std::operator<<<std::char_traits<char>>();
                sub_25A130(v56);
                sub_18572D0(&v60);
              }
              ++v30;
            }
            while ( v32 != v30 );
          }
        }
      }
      v37 = sub_B39350(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 8656LL) + 8LL * *v28), *(unsigned int *)(v5 + 8));
      v9 = sub_186B270(0x88u);
      v58 = 0;
      v59 = 0;
      v60 = 1;
      v61 = 0;
      v62 = 0;
      v63 = 0;
      v64 = 1;
      v65 = 0;
      sub_182CBA0(qword_1C7F2C0, &v64);
      *(_DWORD *)(v9 + 8) = v37;
      *(_QWORD *)v9 = &off_1C563C8;
      BYTE4(v64) &= ~1u;
      LODWORD(v64) = 1;
      v66 = 0;
      v67 = 0;
      v68 = 1;
      v69 = 0;
      sub_8A6550(v9 + 16, (__int64)&v58);
      *(_BYTE *)(v9 + 112) &= 0xFCu;
      *(_QWORD *)v9 = &off_1C56470;
      *(_OWORD *)(v9 + 120) = 0;
      sub_2A6060((__int64)&v58);
      v49 = sub_186B270(0x88u);
      v58 = 0;
      v59 = 0;
      v60 = 1;
      v61 = 0;
      v62 = 0;
      v63 = 0;
      v64 = 1;
      v65 = 0;
      sub_182CBA0(qword_1C7F2C0, &v64);
      LODWORD(v64) = 1;
      BYTE4(v64) &= ~1u;
      *(_QWORD *)v49 = &off_1C563C8;
      *(_DWORD *)(v49 + 8) = v37;
      v66 = 0;
      v67 = 0;
      v68 = 1;
      v69 = 0;
      sub_8A6550(v49 + 16, (__int64)&v58);
      v38 = *(_BYTE *)(v49 + 112);
      *(_OWORD *)(v49 + 120) = 0;
      *(_BYTE *)(v49 + 112) = v38 & 0xFC | 1;
      *(_QWORD *)v49 = &off_1C56470;
      sub_2A6060((__int64)&v58);
    }
    else
    {
      v9 = sub_186B270(0x88u);
      sub_894960((__int64)v56, (__int64)&v52);
      sub_9D4F70((__int64)&v58, (__int64)v56);
      *(_DWORD *)(v9 + 8) = a2;
      *(_QWORD *)v9 = &off_1C563C8;
      sub_8A6550(v9 + 16, (__int64)&v58);
      *(_BYTE *)(v9 + 112) &= 0xFCu;
      *(_QWORD *)v9 = &off_1C56470;
      *(_OWORD *)(v9 + 120) = 0;
      sub_2A6060((__int64)&v58);
      sub_25A130(v57);
      sub_25A130(v56);
      v49 = sub_186B270(0x88u);
      sub_894960((__int64)v56, (__int64)&v52);
      sub_9D4F70((__int64)&v58, (__int64)v56);
      *(_DWORD *)(v49 + 8) = a2;
      *(_QWORD *)v49 = &off_1C563C8;
      sub_8A6550(v49 + 16, (__int64)&v58);
      v10 = *(_BYTE *)(v49 + 112);
      *(_OWORD *)(v49 + 120) = 0;
      *(_QWORD *)v49 = &off_1C56470;
      *(_BYTE *)(v49 + 112) = v10 & 0xFC | 1;
      sub_2A6060((__int64)&v58);
      sub_25A130(v57);
      sub_25A130(v56);
    }
    v58 = v9;
    sub_98CC00((_QWORD *)(v5 + 1152), &v58);
    v58 = v9;
    sub_98CC00((_QWORD *)(v5 + 800), &v58);
    v58 = v49;
    sub_98CC00((_QWORD *)(v5 + 1152), &v58);
    v58 = v49;
    sub_98CC00((_QWORD *)(v5 + 800), &v58);
    v45 = (void *)(v5 + 272);
    sub_9E4980(v5 + 272);
    v46 = v5 + 296;
    sub_9E7500(v5 + 296);
    v11 = 0;
    while ( v11 < *(_DWORD *)(v6 + 24) )
    {
      v12 = sub_B39350(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 8656LL) + 8LL * **(unsigned int **)(v6 + 8LL * v11 + 32)),
              *(unsigned int *)(v5 + 8));
      v13 = v12;
      v14 = sub_9B1230(v5, v12);
      if ( v14 )
      {
        v15 = *(_DWORD **)(*(_QWORD *)(v5 + 744) + 8 * v13);
        v16 = *(_QWORD *)(*(_QWORD *)(v5 + 752) + 8 * v13);
        if ( v15[4] || v15[12] || v15[20] )
        {
          v14 = 0;
        }
        else
        {
          sub_9E4980((__int64)v45);
          sub_9E7500(v46);
          v17 = *(_QWORD *)(v9 + 120);
          if ( v17 )
            *(_DWORD *)(v17 - 4) = 0;
          v18 = *(_QWORD *)(v9 + 128);
          if ( v18 )
            *(_DWORD *)(v18 - 4) = 0;
        }
        sub_A0FA50(v5, (__int64)v15, v9, (__int64)&qword_1C7F2A0, (__int64)v45, v46);
        sub_A0FA50(v5, v16, v9, (__int64)&qword_1C7F2A0, (__int64)v45, v46);
        ++v11;
        if ( v14 )
          break;
      }
      else
      {
        ++v11;
      }
    }
    v19 = *(_QWORD *)(v9 + 120);
    if ( v19 )
    {
      v20 = 0;
      do
      {
        if ( v20 >= *(_DWORD *)(v19 - 4) )
          break;
        sub_98CFC0((_QWORD *)(v49 + 120), (unsigned int *)(v19 + 4LL * v20));
        v19 = *(_QWORD *)(v9 + 120);
        ++v20;
      }
      while ( v19 );
    }
    v21 = *(_QWORD *)(v9 + 128);
    for ( i = 0; v21; ++i )
    {
      if ( i >= *(_DWORD *)(v21 - 4) )
        break;
      sub_98CA20((__m128i **)(v49 + 128), (const __m128i *)(16LL * i + v21));
      v21 = *(_QWORD *)(v9 + 128);
    }
    sub_25A130((char *)&v52);
  }
  else
  {
    return 0;
  }
  return v50;
}

