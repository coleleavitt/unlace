__int64 __fastcall sub_B90460(
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
  __int64 v42; // [rsp+0h] [rbp-98h]
  int v43; // [rsp+8h] [rbp-90h]
  unsigned int v44; // [rsp+8h] [rbp-90h]
  char v45; // [rsp+Fh] [rbp-89h]
  __int64 v46; // [rsp+10h] [rbp-88h] BYREF
  __int64 v47; // [rsp+18h] [rbp-80h]
  __int64 v48; // [rsp+20h] [rbp-78h] BYREF
  __int64 v49; // [rsp+28h] [rbp-70h]
  __int64 v50; // [rsp+30h] [rbp-68h] BYREF
  __int64 v51; // [rsp+38h] [rbp-60h] BYREF
  __int64 v52; // [rsp+40h] [rbp-58h]
  __int64 v53; // [rsp+48h] [rbp-50h]
  __int64 v54; // [rsp+50h] [rbp-48h]

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
          sub_B6F780(v11, (__int64)v20, 0, a7, a8, a9, a4, a5, a6, v42, v43, v46, v47, v48, v49, v50);
          v11 = *(_QWORD **)(a1 + 16);
          if ( v19 == v17 )
            break;
        }
        v13 = v11[1082];
      }
    }
    v22 = **(__int64 (__fastcall ***)(__int64, __m128i *))a1;
    v23 = sub_B68280((__int64)v11, a2, 0, 0, 1u, *(double *)a7.m128_u64, *(double *)a8.m128_u64, a9);
    v44 = v22(a1, v23);
    v46 = 0xFFFFFFFFLL;
    v48 = 1;
    v49 = 0;
    sub_182CBA0(qword_1C7F2C0, &v48);
    LODWORD(v48) = 1;
    LODWORD(v53) = 1;
    LODWORD(v50) = v44;
    LODWORD(v51) = -1;
    BYTE4(v48) &= ~1u;
    BYTE4(v51) &= 0xFCu;
    v47 = 0;
    v52 = 0;
    BYTE4(v53) = BYTE4(v53) & 0xFC | BYTE4(v48) & 2;
    v24 = v49;
    v49 = 0;
    v54 = v24;
    v25 = (_DWORD *)sub_186B270(0x58u);
    v26 = (char *)(v25 + 2);
    v27 = BYTE4(v51);
    v25[2] = v50;
    v25[4] = v51;
    v28 = v27 & 3 | v25[5] & 0xFC;
    v29 = BYTE4(v53);
    *((_BYTE *)v25 + 20) = v28;
    v30 = v52;
    v52 = 0;
    *((_QWORD *)v25 + 3) = v30;
    v25[8] = v53;
    *((_BYTE *)v25 + 36) = v29 & 3 | v25[9] & 0xFC;
    v31 = v54;
    v54 = 0;
    *((_QWORD *)v25 + 5) = v31;
    *(_QWORD *)v25 = 0x100000002LL;
    sub_25A130((char *)&v51);
    sub_25A130((char *)&v46);
    v50 = 0;
    v51 = 0;
    v52 = 1;
    v53 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)&v50, a3);
    v46 = (__int64)(v25 + 2);
    v32 = sub_B84DB0(a1, (int **)&v46, (__int64)&v50, 0xFFFFFFFE);
    v45 = sub_B90220(a1, v32);
    sub_25A130((char *)&v50);
    if ( !v45 )
    {
      sub_1872CE0("");
      sub_1873130(114, 578);
    }
    sub_1831620(qword_1C7F2C0, &v26[40 * (v25[1] - 1) + 8]);
    sub_3EBD70((__int64)&v50, (__int64)a3);
    v33 = sub_B84DB0(a1, (int **)&v46, (__int64)&v50, 0xFFFFFFFE);
    v34 = sub_B90220(a1, v33);
    sub_25A130((char *)&v50);
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
      v44 = *(_DWORD *)(a1 + 948);
    else
      v44 = *(_DWORD *)(a1 + 952);
    v40 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL);
    if ( !v40 || (v41 = *a2, (unsigned int)v41 >= *(_DWORD *)(v40 - 4)) || !*(_QWORD *)(v40 + 8 * v41) )
    {
      sub_B811F0(a1, (__int64)a2);
      return (unsigned int)-1;
    }
  }
  return v44;
}

