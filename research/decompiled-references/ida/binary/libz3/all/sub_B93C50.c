__int64 __fastcall sub_B93C50(
        __int64 a1,
        unsigned int *a2,
        int *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9)
{
  _QWORD *v11; // rdi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  unsigned int **v17; // rbx
  __int64 v18; // rdx
  unsigned int **v19; // r14
  unsigned int *v20; // rsi
  __int64 v21; // rdx
  __int64 (__fastcall *v22)(__int64, __m128i *); // rbx
  __m128i *v23; // rax
  __int64 v24; // rax
  _DWORD *v25; // r12
  char *v26; // rbx
  char v27; // dl
  char v28; // al
  char v29; // dl
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned int v32; // eax
  unsigned int v33; // eax
  char v34; // bp
  int v35; // eax
  __int64 v36; // r13
  void *v37; // rbp
  char *v38; // rsi
  _DWORD *v39; // rax
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // [rsp+0h] [rbp-B8h]
  int v43; // [rsp+8h] [rbp-B0h]
  int v44; // [rsp+10h] [rbp-A8h]
  __int64 v45; // [rsp+18h] [rbp-A0h]
  unsigned int v46; // [rsp+18h] [rbp-A0h]
  char v47; // [rsp+1Fh] [rbp-99h]
  __int64 v48; // [rsp+20h] [rbp-98h]
  int *v49; // [rsp+28h] [rbp-90h] BYREF
  __int64 v50[2]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v51; // [rsp+40h] [rbp-78h] BYREF
  __int64 v52; // [rsp+48h] [rbp-70h]
  __int64 v53; // [rsp+50h] [rbp-68h] BYREF
  __int64 v54; // [rsp+58h] [rbp-60h] BYREF
  __int64 v55; // [rsp+60h] [rbp-58h]
  __int64 v56; // [rsp+68h] [rbp-50h]
  __int64 v57; // [rsp+70h] [rbp-48h]

  if ( *a3 )
  {
    v11 = *(_QWORD **)(a1 + 16);
    v13 = v11[1082];
    if ( v13 )
    {
      v14 = *a2;
      if ( (unsigned int)v14 < *(_DWORD *)(v13 - 4) )
      {
        v15 = *(_QWORD *)(v13 + 8 * v14);
        if ( v15 )
          return sub_B39350(v15, *(_DWORD *)(a1 + 8));
      }
    }
    v17 = (unsigned int **)(a2 + 8);
    v18 = 2LL * a2[6];
    v19 = (unsigned int **)&a2[v18 + 8];
    if ( v18 * 4 )
    {
      while ( 1 )
      {
        v20 = *v17;
        if ( v13 && (v21 = *v20, (unsigned int)v21 < *(_DWORD *)(v13 - 4)) && *(_QWORD *)(v13 + 8 * v21) )
        {
          if ( v19 == ++v17 )
            break;
        }
        else
        {
          ++v17;
          sub_B6F780(v11, (__int64)v20, 0, a7, a8, a9, a4, a5, a6, v42, v43, v44, v45, v48, (__int64)v49, v50[0]);
          v11 = *(_QWORD **)(a1 + 16);
          if ( v19 == v17 )
            break;
        }
        v13 = v11[1082];
      }
    }
    v22 = **(__int64 (__fastcall ***)(__int64, __m128i *))a1;
    v23 = sub_B68280((__int64)v11, a2, 0, 0, 1u, *(double *)a7.m128_u64, *(double *)a8.m128_u64, a9);
    v46 = v22(a1, v23);
    v50[0] = 0xFFFFFFFFLL;
    v51 = 1;
    v52 = 0;
    sub_182CBA0(qword_1C7F2C0, &v51);
    LODWORD(v51) = 1;
    LODWORD(v56) = 1;
    LODWORD(v53) = v46;
    LODWORD(v54) = -1;
    BYTE4(v51) &= ~1u;
    BYTE4(v54) &= 0xFCu;
    v50[1] = 0;
    v55 = 0;
    BYTE4(v56) = BYTE4(v56) & 0xFC | BYTE4(v51) & 2;
    v24 = v52;
    v52 = 0;
    v57 = v24;
    v25 = (_DWORD *)sub_186B270(0x58u);
    v26 = (char *)(v25 + 2);
    v27 = BYTE4(v54);
    v25[2] = v53;
    v25[4] = v54;
    v28 = v27 & 3 | v25[5] & 0xFC;
    v29 = BYTE4(v56);
    *((_BYTE *)v25 + 20) = v28;
    v30 = v55;
    v55 = 0;
    *((_QWORD *)v25 + 3) = v30;
    v25[8] = v56;
    *((_BYTE *)v25 + 36) = v29 & 3 | v25[9] & 0xFC;
    v31 = v57;
    v57 = 0;
    *((_QWORD *)v25 + 5) = v31;
    *(_QWORD *)v25 = 0x100000002LL;
    sub_25A130((char *)&v54);
    sub_25A130((char *)v50);
    v53 = 0;
    v54 = 0;
    v55 = 1;
    v56 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)&v53, a3);
    LODWORD(v57) = 0;
    v49 = v25 + 2;
    v32 = sub_B85DF0(a1, &v49, (__int64)&v53, 0xFFFFFFFE);
    v47 = sub_B93A30(a1, v32);
    sub_25A130((char *)&v53);
    if ( !v47 )
    {
      sub_1872CE0("");
      sub_1873130(114, 578);
    }
    sub_1831620(qword_1C7F2C0, &v26[40 * (v25[1] - 1) + 8]);
    sub_3EBD70((__int64)v50, (__int64)a3);
    v53 = 0;
    v54 = 0;
    v55 = 1;
    v56 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)&v53, (int *)v50);
    LODWORD(v57) = 0;
    v33 = sub_B85DF0(a1, &v49, (__int64)&v53, 0xFFFFFFFE);
    v34 = sub_B93A30(a1, v33);
    sub_25A130((char *)&v53);
    sub_25A130((char *)v50);
    if ( !v34 )
    {
      sub_1872CE0("");
      sub_1873130(114, 580);
    }
    v35 = v25[1];
    if ( v35 )
    {
      v36 = (__int64)&v25[10 * (v35 - 1) + 12];
      do
      {
        v37 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v26 + 8);
        v38 = v26 + 24;
        v26 += 40;
        sub_182CBA0(v37, v38);
      }
      while ( v26 != (char *)v36 );
    }
    sub_186B220(v25);
  }
  else
  {
    v39 = *(_DWORD **)(sub_15D1F10(a2) + 24);
    if ( v39 && *v39 == 5 && v39[1] == 1 )
      v46 = *(_DWORD *)(a1 + 956);
    else
      v46 = *(_DWORD *)(a1 + 960);
    v40 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL);
    if ( !v40 || (v41 = *a2, (unsigned int)v41 >= *(_DWORD *)(v40 - 4)) || !*(_QWORD *)(v40 + 8 * v41) )
    {
      sub_B81BC0(a1, (__int64)a2);
      return (unsigned int)-1;
    }
  }
  return v46;
}

