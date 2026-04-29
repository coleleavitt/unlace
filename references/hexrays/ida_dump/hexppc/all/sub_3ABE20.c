__int64 __fastcall sub_3ABE20(__int64 *a1, __int64 a2, unsigned int **a3, __int64 a4)
{
  unsigned int *v4; // rax
  unsigned int *v5; // rbp
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned int v11; // eax
  __int64 idati; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r15
  __int64 v16; // rbx
  _QWORD *v17; // r13
  __int64 v18; // rcx
  char v19; // si
  __int64 v20; // rdi
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  const char *v24; // rsi
  __int64 v25; // rdx
  unsigned int v26; // ebp
  __int64 v27; // rdi
  __int64 v28; // r12
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v32; // [rsp+18h] [rbp-C0h]
  unsigned int *v33; // [rsp+20h] [rbp-B8h]
  __int64 v34; // [rsp+30h] [rbp-A8h]
  __int64 v35; // [rsp+38h] [rbp-A0h]
  __int64 v36; // [rsp+48h] [rbp-90h] BYREF
  __int64 v37; // [rsp+50h] [rbp-88h] BYREF
  int v38; // [rsp+58h] [rbp-80h]
  __int64 v39; // [rsp+60h] [rbp-78h] BYREF
  __int128 v40; // [rsp+68h] [rbp-70h]
  __int64 v41; // [rsp+80h] [rbp-58h] BYREF
  __int128 v42; // [rsp+88h] [rbp-50h]
  unsigned __int64 v43; // [rsp+98h] [rbp-40h]

  v35 = (__int64)a1;
  v43 = __readfsqword(0x28u);
  v4 = a3[1];
  if ( !v4 )
    return 0;
  v36 = 0;
  v5 = *a3;
  v39 = 0;
  v40 = 0;
  v33 = &v5[(_QWORD)v4];
  if ( v5 == v33 )
  {
    v26 = 0;
    clear_tinfo_t(&v36);
    return v26;
  }
  v6 = a2;
  do
  {
    v11 = *v5;
    WORD4(v42) = 257;
    *(_QWORD *)&v42 = v11;
    idati = v6;
    if ( !v6 )
      idati = get_idati(a1, a2, 257, a4);
    a2 = 61;
    v41 = idati;
    a1 = &v36;
    if ( (unsigned __int8)create_tinfo(&v36, 61, 189, &v41) )
    {
      a1 = &v36;
      sub_3A51F0(&v36);
      v8 = *((_QWORD *)&v40 + 1);
      v7 = v40;
      if ( *((_QWORD *)&v40 + 1) < (unsigned __int64)(v40 + 1) )
      {
        a2 = 0;
        v13 = qvector_reserve(&v39, 0, v40 + 1, 24);
        v14 = *((_QWORD *)&v40 + 1);
        v15 = v39;
        *((_QWORD *)&v40 + 1) = v8;
        v32 = v13;
        v34 = v14;
        v16 = v40 - 1;
        if ( (__int64)v40 - 1 >= 0 )
        {
          v17 = (_QWORD *)v13;
          do
          {
            v18 = *(_QWORD *)v15;
            v17[1] = 0;
            *v17 = v18;
            copy_tinfo_t(v17 + 1, v15 + 8);
            v19 = *(_BYTE *)(v15 + 16);
            v20 = v15 + 8;
            v15 += 24;
            v17 += 3;
            *((_BYTE *)v17 - 8) = v19;
            a2 = *(unsigned int *)(v15 - 4);
            *((_DWORD *)v17 - 1) = a2;
            clear_tinfo_t(v20);
          }
          while ( v16-- != 0 );
          v15 = v39;
        }
        a1 = (__int64 *)v15;
        qfree(v15);
        v39 = v32;
        *((_QWORD *)&v40 + 1) = v34;
        v7 = v40;
      }
      else
      {
        v32 = v39;
      }
      v9 = v32 + 24 * v7;
      *(_QWORD *)v9 = 0;
      a4 = v36;
      *(_QWORD *)(v9 + 8) = 0;
      *(_QWORD *)&v40 = v40 + 1;
      v10 = *(_QWORD *)(v9 + 8);
      *(_DWORD *)(v9 + 20) = 0;
      *(_BYTE *)(v9 + 16) = 1;
      *(_QWORD *)(v9 + 8) = a4;
      v36 = v10;
    }
    ++v5;
  }
  while ( v33 != v5 );
  v22 = v40;
  if ( (_QWORD)v40 )
  {
    v41 = 0;
    v42 = 0;
    if ( (_QWORD)v40 == 1 )
    {
      v25 = v39;
      v24 = nullptr;
      if ( (*(_QWORD *)(v39 + 8) & 0x100LL) != 0 )
      {
        get_tinfo_pdata(&v41, *(_QWORD *)(v39 + 8), 0);
        v24 = (const char *)v41;
        v25 = v39;
        v22 = v40;
      }
    }
    else
    {
      v23 = qvector_reserve(&v41, 0, 24, 1);
      v41 = v23;
      *(_QWORD *)&v42 = 24;
      *(__m128i *)v23 = _mm_load_si128((const __m128i *)&xmmword_411EA0);
      *(_QWORD *)(v23 + 15) = 0x736570797420656CLL;
      v24 = (const char *)v41;
      v25 = v39;
      v22 = v40;
      *(_BYTE *)(v41 + 23) = 0;
    }
    v38 = 0;
    v37 = 0xFFFFFFFFLL;
    v26 = sub_3AB610(v35, v24, v25, v22, -1, &v37);
    if ( v41 )
    {
      *(_QWORD *)&v42 = 0;
      qfree(v41);
    }
    v27 = v39;
    if ( !v39 )
      goto LABEL_26;
    v28 = v40;
    if ( (_QWORD)v40 )
    {
      v29 = 0;
      do
      {
        v30 = 3 * v29++;
        clear_tinfo_t(v27 + 8 * v30 + 8);
        v27 = v39;
      }
      while ( v28 != v29 );
    }
  }
  else
  {
    v27 = v39;
    if ( !v39 )
    {
      v26 = 0;
      goto LABEL_26;
    }
    v26 = 0;
  }
  *(_QWORD *)&v40 = 0;
  qfree(v27);
LABEL_26:
  clear_tinfo_t(&v36);
  return v26;
}
