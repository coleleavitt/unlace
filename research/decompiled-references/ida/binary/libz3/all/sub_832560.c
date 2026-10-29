__int64 __fastcall sub_832560(__int64 *a1, __int64 a2, int a3, int *a4, char a5)
{
  char **exception; // rbp
  unsigned int v7; // r12d
  unsigned int v9; // r13d
  __int64 *v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // r15
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r8
  _DWORD *v17; // r15
  int *v18; // r14
  __int64 v19; // rdx
  __int64 v20; // rax
  _QWORD *v21; // rsi
  int v22; // eax
  void *v23; // rdi
  __int64 v24; // r14
  __int64 v25; // rax
  _QWORD *v26; // rdx
  __int64 v27; // rbx
  unsigned int v28; // eax
  __int64 v29; // rsi
  int v30; // eax
  __int64 *v31; // rsi
  __int64 v32; // rdi
  char v33; // al
  _DWORD *v35; // rcx
  __int64 v36; // rdi
  _DWORD *v37; // rax
  int v38; // edi
  __int64 v39; // rdx
  __int64 v40; // rdx
  unsigned int v41; // eax
  unsigned int v42; // ebp
  size_t v43; // rsi
  unsigned int *v44; // rax
  __int64 v45; // rsi
  _QWORD *v46; // rax
  unsigned int v49; // [rsp+10h] [rbp-A8h]
  __int64 v50; // [rsp+10h] [rbp-A8h]
  __int64 v51; // [rsp+18h] [rbp-A0h]
  _QWORD *v52; // [rsp+18h] [rbp-A0h]
  char v53; // [rsp+2Fh] [rbp-89h] BYREF
  _QWORD v54[4]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v55; // [rsp+50h] [rbp-68h] BYREF
  __int64 v56; // [rsp+58h] [rbp-60h] BYREF
  __int64 v57; // [rsp+60h] [rbp-58h]
  __int64 v58; // [rsp+68h] [rbp-50h]
  __int64 v59; // [rsp+70h] [rbp-48h]

  v7 = a2;
  v9 = sub_FF9F70(a1[62], a2);
  if ( !(_BYTE)v9 )
  {
    v32 = a1[62];
    v53 = 0;
    v55 = 0;
    v56 = 0;
    v57 = 1;
    v58 = 0;
    v54[0] = 0;
    if ( a5 )
      v33 = sub_FFB810(v32, (unsigned int)a2, v54, &v55, &v53);
    else
      v33 = sub_FFB790(v32, (unsigned int)a2, v54, &v55, &v53);
    if ( v33 && !v53 )
    {
      LOBYTE(v41) = sub_3ED680((__int64)qword_1C7F2C0, (__int64)&v55, (__int64)a4);
      v9 = v41;
    }
    sub_25A130((char *)&v55);
    return v9;
  }
  v10 = a1 + 108;
  if ( a5 )
    v10 = a1 + 107;
  v11 = *v10;
  if ( !*v10 || (unsigned int)a2 >= *(_DWORD *)(v11 - 4) )
  {
    v12 = (unsigned int)(a2 + 1);
    v54[0] = 0;
    v54[1] = 0;
    v54[2] = 1;
    v54[3] = 0;
    v55 = 0xFFFFFFFFLL;
    v56 = 0;
    v57 = 0;
    v58 = 1;
    v59 = 0;
    if ( v11 )
    {
      v49 = *(_DWORD *)(v11 - 4);
      if ( v49 >= (unsigned int)v12 )
      {
        v13 = 40LL * (unsigned int)v12;
        v14 = 40LL * v49;
        v15 = v11 + v13;
        v51 = v11 + v14;
        if ( v13 != v14 )
        {
          do
          {
            v50 = v15;
            sub_25A130((char *)(v15 + 8));
            v15 = v50 + 40;
          }
          while ( v51 != v50 + 40 );
          v11 = *v10;
        }
        *(_DWORD *)(v11 - 4) = v12;
        goto LABEL_12;
      }
    }
    else
    {
      v49 = 0;
      if ( (_DWORD)a2 == -1 )
      {
LABEL_12:
        sub_25A130((char *)&v56);
        sub_25A130((char *)v54);
        v11 = *v10;
        goto LABEL_13;
      }
    }
    while ( !v11 || *(_DWORD *)(v11 - 8) < (unsigned int)v12 )
    {
      sub_83D1D0(v10);
      v11 = *v10;
    }
    *(_DWORD *)(v11 - 4) = v12;
    v35 = (_DWORD *)(v11 + 40 * v12);
    v36 = 40LL * v49;
    v37 = (_DWORD *)(v11 + v36);
    if ( v36 != 40 * v12 )
    {
      v38 = v55;
      do
      {
        *v37 = v38;
        v37 += 10;
        *(v37 - 8) = v56;
        *((_BYTE *)v37 - 28) = BYTE4(v56) & 3 | *(_BYTE *)(v37 - 7) & 0xFC;
        v39 = v57;
        v57 = 0;
        *((_QWORD *)v37 - 3) = v39;
        *(v37 - 4) = v58;
        *((_BYTE *)v37 - 12) = BYTE4(v58) & 3 | *(_BYTE *)(v37 - 3) & 0xFC;
        v40 = v59;
        v59 = 0;
        *((_QWORD *)v37 - 1) = v40;
      }
      while ( v35 != v37 );
    }
    goto LABEL_12;
  }
LABEL_13:
  v16 = 40LL * v7;
  v17 = (_DWORD *)(v11 + v16);
  if ( *(_DWORD *)(v11 + v16) == -1 )
  {
    v18 = (int *)(v11 + v16);
  }
  else
  {
    if ( a5 )
    {
      if ( !sub_3ED700((__int64)qword_1C7F2C0, (__int64)(v17 + 2), (__int64)a4) )
        return v9;
    }
    else if ( !sub_3ED700((__int64)qword_1C7F2C0, (__int64)a4, (__int64)(v17 + 2)) )
    {
      return v9;
    }
    v18 = (int *)(*v10 + 40LL * v7);
  }
  v19 = a1[109];
  v52 = a1 + 109;
  if ( !v19 || (v20 = *(unsigned int *)(v19 - 4), (_DWORD)v20 == *(_DWORD *)(v19 - 8)) )
  {
    sub_83D1D0(v52);
    v19 = a1[109];
    v20 = *(unsigned int *)(v19 - 4);
  }
  v21 = (_QWORD *)(v19 + 40 * v20);
  v22 = *v18;
  v21[1] = 0;
  *((_DWORD *)++v21 - 2) = v22;
  v21[1] = 0;
  v21[2] = 1;
  v23 = qword_1C7F2C0;
  v21[3] = 0;
  sub_27B950((__int64)v23, (__int64)v21, v18 + 2);
  v24 = a1[10];
  ++*(_DWORD *)(a1[109] - 4);
  v25 = sub_180C100(v24 + 2144, 32);
  v26 = *(_QWORD **)(v24 + 2128);
  v27 = v25;
  *(_QWORD *)v25 = off_1C55248;
  *(_QWORD *)(v25 + 8) = v10;
  *(_DWORD *)(v25 + 16) = v7;
  *(_QWORD *)(v25 + 24) = v52;
  if ( v26 )
  {
    v28 = *((_DWORD *)v26 - 1);
    if ( v28 == *((_DWORD *)v26 - 2) )
    {
      v42 = (3 * v28 + 1) >> 1;
      v43 = 8 * v42 + 8;
      if ( 8 * v28 + 8 >= (unsigned int)v43 || v28 >= v42 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(&v55, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v55);
        sub_233E40((__int64)&v55);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v44 = (unsigned int *)sub_186B300(v26 - 1, v43);
      v45 = v44[1];
      v26 = v44 + 2;
      *(_QWORD *)(v24 + 2128) = v44 + 2;
      *v44 = v42;
      LODWORD(v44) = v45;
      v31 = &v26[v45];
      v30 = (_DWORD)v44 + 1;
    }
    else
    {
      v29 = v28;
      v30 = v28 + 1;
      v31 = &v26[v29];
    }
  }
  else
  {
    v46 = (_QWORD *)sub_186B270(0x18u);
    v26 = v46 + 1;
    *v46 = 2;
    v30 = 1;
    *(_QWORD *)(v24 + 2128) = v26;
    v31 = v26;
  }
  *v31 = v27;
  *((_DWORD *)v26 - 1) = v30;
  *v17 = a3;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)(v17 + 2), a4);
  return v9;
}

