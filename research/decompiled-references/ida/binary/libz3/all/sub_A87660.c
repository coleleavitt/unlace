__int64 __fastcall sub_A87660(__int64 *a1, __int64 a2, int a3, int *a4, char a5)
{
  unsigned int v6; // r12d
  unsigned int v8; // r13d
  __int64 *v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // r15
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r8
  _DWORD *v16; // rcx
  bool v17; // zf
  __int64 v18; // r14
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rax
  void *v22; // rdi
  int *v23; // rdx
  _QWORD *v24; // rsi
  int v25; // eax
  __int64 v26; // rbx
  __int64 v27; // rax
  void *v28; // rdi
  __int64 v29; // rdi
  char v30; // al
  void *v31; // rbx
  _DWORD *v33; // rcx
  __int64 v34; // rdi
  _DWORD *v35; // rax
  int v36; // edi
  __int64 v37; // rdx
  __int64 v38; // rdx
  unsigned int v39; // eax
  unsigned int v42; // [rsp+18h] [rbp-B0h]
  __int64 v43; // [rsp+18h] [rbp-B0h]
  __int64 v44; // [rsp+18h] [rbp-B0h]
  __int64 *v45; // [rsp+18h] [rbp-B0h]
  __int64 v46; // [rsp+20h] [rbp-A8h]
  _DWORD *v47; // [rsp+20h] [rbp-A8h]
  _DWORD *v48; // [rsp+20h] [rbp-A8h]
  __int64 v49; // [rsp+28h] [rbp-A0h]
  char v50; // [rsp+3Fh] [rbp-89h] BYREF
  _QWORD v51[4]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v52; // [rsp+60h] [rbp-68h] BYREF
  __int64 v53; // [rsp+68h] [rbp-60h] BYREF
  __int64 v54; // [rsp+70h] [rbp-58h] BYREF
  __int64 v55; // [rsp+78h] [rbp-50h]
  __int64 v56; // [rsp+80h] [rbp-48h]

  v6 = a2;
  v8 = sub_FF9F70(a1[63], a2);
  if ( !(_BYTE)v8 )
  {
    v50 = 0;
    v29 = a1[63];
    v52 = 0;
    v53 = 0;
    v54 = 1;
    v55 = 0;
    v51[0] = 0;
    if ( a5 )
      v30 = sub_FFB810(v29, (unsigned int)a2, v51, &v52, &v50);
    else
      v30 = sub_FFB790(v29, (unsigned int)a2, v51, &v52, &v50);
    if ( v30 && !v50 )
    {
      LOBYTE(v39) = sub_3ED680((__int64)qword_1C7F2C0, (__int64)&v52, (__int64)a4);
      v8 = v39;
    }
    v31 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v52);
    sub_182CBA0(v31, &v54);
    return v8;
  }
  v9 = a1 + 100;
  if ( a5 )
    v9 = a1 + 99;
  v10 = *v9;
  if ( !*v9 || (unsigned int)a2 >= *(_DWORD *)(v10 - 4) )
  {
    v11 = (unsigned int)(a2 + 1);
    v51[0] = 0;
    v51[1] = 0;
    v51[2] = 1;
    v51[3] = 0;
    v52 = 0xFFFFFFFFLL;
    v53 = 0;
    v54 = 0;
    v55 = 1;
    v56 = 0;
    if ( v10 )
    {
      v42 = *(_DWORD *)(v10 - 4);
      if ( v42 >= (unsigned int)v11 )
      {
        v12 = 40LL * (unsigned int)v11;
        v13 = 40LL * v42;
        v14 = v10 + v12;
        v46 = v10 + v13;
        if ( v12 != v13 )
        {
          do
          {
            v43 = v14;
            sub_25A130((char *)(v14 + 8));
            v14 = v43 + 40;
          }
          while ( v46 != v43 + 40 );
          v10 = *v9;
        }
        *(_DWORD *)(v10 - 4) = v11;
        goto LABEL_12;
      }
    }
    else
    {
      v42 = 0;
      if ( (_DWORD)a2 == -1 )
      {
LABEL_12:
        sub_25A130((char *)&v53);
        sub_25A130((char *)v51);
        v10 = *v9;
        goto LABEL_13;
      }
    }
    while ( !v10 || *(_DWORD *)(v10 - 8) < (unsigned int)v11 )
    {
      sub_83D1D0(v9);
      v10 = *v9;
    }
    *(_DWORD *)(v10 - 4) = v11;
    v33 = (_DWORD *)(v10 + 40 * v11);
    v34 = 40LL * v42;
    v35 = (_DWORD *)(v10 + v34);
    if ( v34 != 40 * v11 )
    {
      v36 = v52;
      do
      {
        *v35 = v36;
        v35 += 10;
        *(v35 - 8) = v53;
        *((_BYTE *)v35 - 28) = BYTE4(v53) & 3 | *(_BYTE *)(v35 - 7) & 0xFC;
        v37 = v54;
        v54 = 0;
        *((_QWORD *)v35 - 3) = v37;
        *(v35 - 4) = v55;
        *((_BYTE *)v35 - 12) = BYTE4(v55) & 3 | *(_BYTE *)(v35 - 3) & 0xFC;
        v38 = v56;
        v56 = 0;
        *((_QWORD *)v35 - 1) = v38;
      }
      while ( v33 != v35 );
    }
    goto LABEL_12;
  }
LABEL_13:
  v15 = 40LL * v6;
  v16 = (_DWORD *)(v10 + v15);
  if ( *(_DWORD *)(v10 + v15) == -1 )
  {
    v19 = v10 + v15;
    v18 = (__int64)(v16 + 2);
  }
  else
  {
    v17 = a5 == 0;
    v18 = (__int64)(v16 + 2);
    v44 = v10 + v15;
    if ( v17 )
    {
      if ( !sub_3ED700((__int64)qword_1C7F2C0, (__int64)a4, (__int64)(v16 + 2)) )
        return v8;
    }
    else if ( !sub_3ED700((__int64)qword_1C7F2C0, (__int64)(v16 + 2), (__int64)a4) )
    {
      return v8;
    }
    v16 = (_DWORD *)v44;
    v19 = *v9 + 40LL * v6;
  }
  v20 = a1[101];
  v45 = a1 + 101;
  if ( !v20 || (v21 = *(unsigned int *)(v20 - 4), (_DWORD)v21 == *(_DWORD *)(v20 - 8)) )
  {
    v49 = v19;
    v48 = v16;
    sub_83D1D0(v45);
    v19 = v49;
    v16 = v48;
    v20 = a1[101];
    v21 = *(unsigned int *)(v20 - 4);
  }
  v22 = qword_1C7F2C0;
  v23 = (int *)(v19 + 8);
  v47 = v16;
  v24 = (_QWORD *)(v20 + 40 * v21);
  v25 = *(v23 - 2);
  v24[1] = 0;
  *((_DWORD *)++v24 - 2) = v25;
  v24[1] = 0;
  v24[2] = 1;
  v24[3] = 0;
  sub_27B950((__int64)v22, (__int64)v24, v23);
  ++*(_DWORD *)(a1[101] - 4);
  v26 = *(_QWORD *)(*a1 + 16);
  v27 = sub_180C100(v26 + 8400, 32);
  *(_QWORD *)v27 = off_1C55248;
  *(_QWORD *)(v27 + 8) = v9;
  *(_DWORD *)(v27 + 16) = v6;
  *(_QWORD *)(v27 + 24) = v45;
  v52 = v27;
  sub_A73EF0((_QWORD *)(v26 + 9456), &v52);
  v28 = qword_1C7F2C0;
  *v47 = a3;
  sub_27B950((__int64)v28, v18, a4);
  return v8;
}

