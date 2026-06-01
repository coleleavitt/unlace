unsigned __int64 __fastcall sub_652FA0(__int64 *a1, int a2, unsigned int a3)
{
  __int64 *v3; // rbx
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 idati; // rax
  char *v8; // rdi
  void **v11; // rsi
  _DWORD *v12; // rdi
  bool v13; // zf
  __int64 v14; // rax
  unsigned int v15; // r15d
  unsigned __int64 v16; // r10
  char *v17; // r14
  __int64 v18; // rax
  char v19; // dl
  char *v20; // rax
  _BYTE *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 tinfo_pdata; // rax
  char *v25; // rax
  __int64 v26; // rax
  char *v27; // [rsp+0h] [rbp-D8h]
  char v28; // [rsp+8h] [rbp-D0h]
  int v29; // [rsp+14h] [rbp-C4h] BYREF
  __int64 v30; // [rsp+18h] [rbp-C0h] BYREF
  void *v31; // [rsp+20h] [rbp-B8h] BYREF
  __int128 v32; // [rsp+28h] [rbp-B0h]
  char *s; // [rsp+40h] [rbp-98h] BYREF
  __int128 v34; // [rsp+48h] [rbp-90h]
  __int64 (__fastcall **v35)(); // [rsp+60h] [rbp-78h] BYREF
  __int64 v36; // [rsp+68h] [rbp-70h]
  void **v37; // [rsp+70h] [rbp-68h]
  __int64 *v38; // [rsp+78h] [rbp-60h]
  int *v39; // [rsp+80h] [rbp-58h]
  unsigned __int64 v40; // [rsp+88h] [rbp-50h]
  char v41; // [rsp+90h] [rbp-48h]
  unsigned __int64 v42; // [rsp+98h] [rbp-40h]

  v3 = a1;
  v42 = __readfsqword(0x28u);
  if ( (a3 & 1) == 0 )
  {
    v5 = a1[2];
    v6 = a1[1];
    if ( a1[3] < (unsigned __int64)(v5 + 1) )
    {
      v22 = qvector_reserve(++a1, v6, v5 + 1, 4);
      v3[1] = v22;
      v6 = v22;
      v5 = v3[2];
    }
    *(_DWORD *)(v6 + 4 * v5) = a2;
    idati = *v3;
    v36 = 0;
    ++v3[2];
    v31 = nullptr;
    s = nullptr;
    LOWORD(v37) = 257;
    LODWORD(v36) = a2;
    v34 = 0;
    if ( !idati )
      idati = get_idati(a1, 257);
    v35 = (__int64 (__fastcall **)())idati;
    if ( (unsigned __int8)create_tinfo(&v31, 61, 189, &v35) )
    {
      v8 = s;
      if ( ((unsigned __int16)v31 & 0x100) == 0 )
        goto LABEL_8;
      if ( get_tinfo_pdata(&s, v31, 0) )
      {
        v8 = s;
        if ( !(_QWORD)v34 )
          goto LABEL_8;
        if ( *s != 36 )
        {
          v27 = s;
          v20 = strrchr(s, 58);
          v8 = v27;
          if ( !v20 || v20[1] != 36 )
            goto LABEL_8;
        }
        v21 = (_BYTE *)(v3[4] + (unsigned int)(a2 - 1));
        *v21 |= 0x10u;
      }
    }
    v8 = s;
LABEL_8:
    if ( v8 )
    {
      *(_QWORD *)&v34 = 0;
      qfree(v8);
    }
    clear_tinfo_t(&v31);
    return v42 - __readfsqword(0x28u);
  }
  v11 = nullptr;
  v32 = 0;
  v31 = nullptr;
  v31 = (void *)qvector_reserve(&v31, 0, 1, 4);
  *((_DWORD *)v31 + v32) = a2;
  v29 = 1;
  v12 = v31;
  v13 = (_QWORD)v32 == -1;
  v14 = v32 + 1;
  *(_QWORD *)&v32 = v32 + 1;
  if ( !v13 )
  {
    do
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v15 = v12[--v14];
          *(_QWORD *)&v32 = v14;
          if ( v15 )
          {
            v16 = v15 - 1;
            if ( v16 < v3[5] )
            {
              v17 = (char *)(v16 + v3[4]);
              if ( (*v17 & 1) == 0 && ((v29 & 1) != 0 && ((v29 & 4) == 0 || (v29 & 2) != 0) || (*v17 & 2) == 0) )
                break;
            }
          }
          if ( !v14 )
            goto LABEL_29;
        }
        v18 = *v3;
        v30 = 0;
        LOWORD(v37) = 257;
        v36 = v15;
        if ( !v18 )
          v18 = get_idati(v12, v11);
        v35 = (__int64 (__fastcall **)())v18;
        v11 = (void **)(&word_3C + 1);
        if ( (unsigned __int8)create_tinfo(&v30, 61, 189, &v35) )
          break;
        *v17 |= 1u;
LABEL_32:
        clear_tinfo_t(&v30);
        v14 = v32;
        v12 = v31;
        if ( !(_QWORD)v32 )
          goto LABEL_29;
      }
      s = nullptr;
      v34 = 0;
      if ( (v30 & 0x100) != 0 )
      {
        tinfo_pdata = get_tinfo_pdata(&s, v30, 0);
        v19 = *v17;
        if ( tinfo_pdata )
        {
          if ( (_QWORD)v34 )
          {
            if ( *s == 36 || (v28 = *v17, v25 = strrchr(s, 58), v19 = v28, v25) && v25[1] == 36 )
              v19 |= 0x10u;
          }
        }
      }
      else
      {
        v19 = *v17;
      }
      *v17 = v19 | 8;
      v11 = &v31;
      if ( (unsigned __int8)sub_652C70(v3, (__int64 *)&v31, v15, &v30, &v29, a3) )
      {
        if ( s )
        {
          *(_QWORD *)&v34 = 0;
          qfree(s);
        }
        goto LABEL_32;
      }
      v11 = nullptr;
      v39 = &v29;
      v36 = 6;
      v35 = off_2B37238;
      v37 = &v31;
      v38 = v3;
      v41 = 1;
      v40 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v15), _mm_cvtsi32_si128(a3)).m128i_u64[0];
      visit_subtypes((int)&v35, 0, (int)&v30, 0, 0);
      if ( v41 )
      {
        *v17 = *v17 & 0xF6 | 1;
        v23 = v3[2];
        v11 = (void **)v3[1];
        if ( v3[3] < (unsigned __int64)(v23 + 1) )
        {
          v26 = qvector_reserve(v3 + 1, v11, v23 + 1, 4);
          v3[1] = v26;
          v11 = (void **)v26;
          v23 = v3[2];
        }
        *((_DWORD *)v11 + v23) = v15;
        v29 = 1;
        ++v3[2];
      }
      if ( s )
      {
        *(_QWORD *)&v34 = 0;
        qfree(s);
      }
      clear_tinfo_t(&v30);
      v14 = v32;
      v12 = v31;
    }
    while ( (_QWORD)v32 );
  }
LABEL_29:
  if ( v12 )
  {
    *(_QWORD *)&v32 = 0;
    qfree(v12);
  }
  return v42 - __readfsqword(0x28u);
}
