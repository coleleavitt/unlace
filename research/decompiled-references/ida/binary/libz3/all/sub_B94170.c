__int64 __fastcall sub_B94170(_QWORD **a1, unsigned int *a2, __m128 a3, __m128 a4, __m128 a5)
{
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int *v10; // r12
  int v11; // eax
  unsigned int v12; // eax
  __int64 v13; // rax
  unsigned int *v14; // rbx
  unsigned int *v15; // r14
  void *v16; // r13
  unsigned int *v17; // rsi
  _QWORD *v19; // rdi
  unsigned int **v20; // rbp
  __int64 v21; // rax
  unsigned int **v22; // r15
  __int64 v23; // rax
  unsigned int *v24; // rsi
  __int64 v25; // rdx
  __int64 (__fastcall *v26)(_QWORD **, __m128i *); // rbp
  __m128i *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  unsigned int v30; // eax
  char v31; // r14
  unsigned int *v32; // r14
  unsigned int *v33; // r15
  unsigned int v34; // eax
  char v35; // bl
  __int64 v36; // rax
  __int64 *v37; // rdx
  __int64 v38; // [rsp+0h] [rbp-D8h]
  int v39; // [rsp+8h] [rbp-D0h]
  unsigned int v40; // [rsp+Ch] [rbp-CCh]
  int *v41; // [rsp+10h] [rbp-C8h]
  void *v42; // [rsp+18h] [rbp-C0h]
  __int64 v43; // [rsp+20h] [rbp-B8h]
  int v44[2]; // [rsp+28h] [rbp-B0h] BYREF
  int v45[2]; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v46; // [rsp+38h] [rbp-A0h]
  __int64 v47; // [rsp+40h] [rbp-98h]
  __int64 v48; // [rsp+48h] [rbp-90h]
  __int64 v49; // [rsp+50h] [rbp-88h] BYREF
  __int64 v50; // [rsp+58h] [rbp-80h]
  __int64 v51; // [rsp+60h] [rbp-78h] BYREF
  __int64 v52; // [rsp+68h] [rbp-70h]
  __int64 v53; // [rsp+70h] [rbp-68h] BYREF
  __int64 v54; // [rsp+78h] [rbp-60h] BYREF
  __int64 v55; // [rsp+80h] [rbp-58h]
  __int64 v56; // [rsp+88h] [rbp-50h]
  __int64 v57; // [rsp+90h] [rbp-48h]

  if ( !(unsigned __int8)sub_B79670((__int64)(a1 + 178), (__int64)a2) )
  {
    sub_B811F0((__int64)a1, (__int64)a2);
    return (unsigned int)-1;
  }
  *(_QWORD *)v45 = 0;
  v46 = 0;
  v47 = 1;
  v48 = 0;
  *(_QWORD *)v44 = 0;
  v41 = v44;
  sub_B7FA70((int *)a1, (__int64 *)a1 + 196, v44, (__int64)v45);
  v10 = *(unsigned int **)v44;
  if ( !*(_QWORD *)v44 )
  {
    v40 = sub_B90460((__int64)a1, a2, v45, v7, v8, v9, a3, a4, a5);
    sub_25A130((char *)v45);
    return v40;
  }
  v11 = *(_DWORD *)(*(_QWORD *)v44 - 4LL);
  switch ( v11 )
  {
    case 0:
      v12 = sub_B90460((__int64)a1, a2, v45, v7, v8, v9, a3, a4, a5);
LABEL_5:
      v40 = v12;
      sub_25A130((char *)v45);
LABEL_6:
      v13 = *(v10 - 1);
      if ( (_DWORD)v13 )
      {
        v14 = v10;
        v15 = &v10[10 * v13];
        do
        {
          v16 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v14 + 2);
          v17 = v14 + 6;
          v14 += 10;
          sub_182CBA0(v16, v17);
        }
        while ( v15 != v14 );
      }
      sub_186B220(v10 - 2);
      return v40;
    case 1:
      v19 = a1[2];
      if ( (*(_BYTE *)(*(_QWORD *)v44 + 12LL) & 1) == 0
        && *(_DWORD *)(*(_QWORD *)v44 + 8LL) == 1
        && (*(_BYTE *)(*(_QWORD *)v44 + 28LL) & 1) == 0
        && *(_DWORD *)(*(_QWORD *)v44 + 24LL) == 1 )
      {
        v53 = 0;
        v7 = v19[1082];
        if ( v7 )
        {
          v36 = *a2;
          v37 = &v53;
          if ( (unsigned int)v36 < *(_DWORD *)(v7 - 4) )
            v37 = (__int64 *)(v7 + 8 * v36);
        }
        else
        {
          v37 = &v53;
        }
        if ( *v37 )
        {
          v12 = **(_DWORD **)v44;
          goto LABEL_5;
        }
      }
      break;
    case 2:
      sub_B811F0((__int64)a1, (__int64)a2);
      sub_25A130((char *)v45);
      v40 = -1;
      goto LABEL_6;
    default:
      v19 = a1[2];
      break;
  }
  v20 = (unsigned int **)(a2 + 8);
  v21 = 2LL * a2[6];
  v22 = (unsigned int **)&a2[v21 + 8];
  if ( v21 * 4 )
  {
    do
    {
      while ( 1 )
      {
        v23 = v19[1082];
        v24 = *v20;
        if ( !v23 )
          break;
        v25 = *v24;
        if ( (unsigned int)v25 >= *(_DWORD *)(v23 - 4) || !*(_QWORD *)(v23 + 8 * v25) )
          break;
        if ( v22 == ++v20 )
          goto LABEL_21;
      }
      sub_B6F780(
        v19,
        (__int64)v24,
        0,
        a3,
        a4,
        a5,
        v7,
        v8,
        v9,
        v38,
        v39,
        (int)v41,
        (__int64)v42,
        v43,
        *(__int64 *)v44,
        *(__int64 *)v45);
      ++v20;
      v19 = a1[2];
    }
    while ( v22 != v20 );
  }
LABEL_21:
  v26 = (__int64 (__fastcall *)(_QWORD **, __m128i *))**a1;
  v27 = sub_B68280((__int64)v19, a2, 0, 0, 1u, *(double *)a3.m128_u64, *(double *)a4.m128_u64, a5);
  v40 = v26(a1, v27);
  v50 = 0;
  v49 = 0xFFFFFFFFLL;
  v51 = 1;
  v52 = 0;
  sub_182CBA0(qword_1C7F2C0, &v51);
  LODWORD(v53) = v40;
  LODWORD(v51) = 1;
  LODWORD(v54) = v49;
  BYTE4(v51) &= ~1u;
  LODWORD(v56) = 1;
  BYTE4(v54) = BYTE4(v49) & 3 | BYTE4(v54) & 0xFC;
  v28 = v50;
  v50 = 0;
  v55 = v28;
  BYTE4(v56) = BYTE4(v56) & 0xFC | BYTE4(v51) & 2;
  v29 = v52;
  v52 = 0;
  v57 = v29;
  sub_B76140(v41, (__int64)&v53);
  v10 = *(unsigned int **)v44;
  sub_25A130((char *)&v54);
  sub_25A130((char *)&v49);
  v53 = 0;
  v54 = 0;
  v55 = 1;
  v56 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v53, v45);
  v30 = sub_B84DB0((__int64)a1, (int **)v41, (__int64)&v53, 0xFFFFFFFE);
  v31 = sub_B90220((__int64)a1, v30);
  sub_25A130((char *)&v53);
  if ( !v31 )
  {
    sub_1872CE0("");
    sub_1873130(114, 548);
  }
  if ( v10 )
  {
    v32 = &v10[10 * *(v10 - 1)];
    if ( v32 != v10 )
    {
      v33 = v10;
      do
      {
        sub_1831620(qword_1C7F2C0, v33 + 2);
        v33 += 10;
      }
      while ( v32 != v33 );
    }
  }
  sub_1831620(qword_1C7F2C0, v45);
  v53 = 0;
  v54 = 0;
  v55 = 1;
  v56 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v53, v45);
  v34 = sub_B84DB0((__int64)a1, (int **)v41, (__int64)&v53, 0xFFFFFFFE);
  v35 = sub_B90220((__int64)a1, v34);
  sub_25A130((char *)&v53);
  if ( !v35 )
  {
    sub_1872CE0("");
    sub_1873130(114, 550);
  }
  sub_25A130((char *)v45);
  if ( v10 )
    goto LABEL_6;
  return v40;
}

