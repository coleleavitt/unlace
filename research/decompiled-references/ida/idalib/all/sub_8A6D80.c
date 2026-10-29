void *__fastcall sub_8A6D80(void *a1, unsigned __int16 *a2, unsigned __int16 *a3)
{
  int v5; // r13d
  __int16 v6; // bx
  __int64 v7; // rax
  char *v8; // r11
  unsigned __int16 *v9; // r10
  unsigned __int16 *v10; // r15
  unsigned __int16 *v11; // r9
  __int64 v12; // rdi
  unsigned __int16 *v13; // rsi
  unsigned __int16 *v14; // rcx
  unsigned __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned __int64 v19; // rax
  __int16 v20; // dx
  char *v21; // rax
  __int16 v22; // di
  char *v24; // rcx
  char *v26; // rsi
  char *v27; // rcx
  __int16 v28; // ax
  char *v29; // rax
  __int64 v30; // rax
  __int16 v31; // dx
  __int16 *v32; // rax
  __int16 *v33; // r10
  __int64 v34; // r9
  __int64 v35; // rsi
  __int64 v36; // r12
  char v37; // cl
  unsigned __int16 *v38; // rdx
  __int16 *v39; // r14
  unsigned __int64 v40; // r13
  unsigned __int16 *v41; // rbp
  unsigned __int16 *v42; // r8
  unsigned __int64 v43; // r15
  __int64 v44; // rdi
  __int64 v45; // rsi
  __int64 v46; // rdi
  unsigned __int64 v47; // rsi
  __int16 *v48; // rdi
  bool v49; // r13
  __int128 *v50; // r15
  __int16 *v51; // rdi
  __int128 *v52; // rsi
  __int16 v53; // r8
  unsigned __int16 v54; // bp
  unsigned __int16 v55; // bx
  char *v56; // rdx
  char *v57; // rcx
  __int16 v58; // ax
  char *v59; // rax
  char *v60; // rdx
  char *v61; // rcx
  __int16 v62; // ax
  __int64 v64; // [rsp+8h] [rbp-50h]
  __int64 v65; // [rsp+10h] [rbp-48h]
  __int16 v66; // [rsp+1Eh] [rbp-3Ah]

  v5 = word_2CD7282;
  v6 = word_2CD7282;
  v7 = __memset_chk(word_2CD7082, 0, 4 * word_2CD7282, 322);
  word_2CD7280 = v5;
  v8 = (char *)v7;
  if ( v5 > 0 )
  {
    v9 = (unsigned __int16 *)v7;
    v10 = &a3[v5];
    v11 = &a2[(__int16)v5];
    do
    {
      v12 = *a3++;
      v13 = v9;
      v14 = a2;
      ++v9;
      v15 = 0;
      do
      {
        v16 = *v14;
        v17 = *v13++;
        ++v14;
        v18 = v17 + v12 * v16;
        *(v13 - 1) = v15 + v18;
        v19 = (v15 + v18) >> 16;
        v15 = v19;
      }
      while ( v14 != v11 );
      v9[(unsigned __int16)(v5 - 1)] += v19;
    }
    while ( a3 != v10 );
  }
  v20 = 2 * v6 + 1;
  word_2CD7282 = v20;
  v21 = &v8[2 * v20 - 2];
  *(_WORD *)v21 = 0;
  do
  {
    v21 -= 2;
    if ( *((_WORD *)v21 + 1) )
      break;
    --v20;
  }
  while ( v20 );
  v22 = word_2CD7058;
  if ( word_2CD7058 <= v20 )
  {
    v24 = (char *)word_2CD7082;
    do
    {
      if ( (*(_WORD *)v24)++ != 0xFFFF )
        break;
      v24 += 2;
    }
    while ( v24 != (char *)&unk_2CD7080 + 2 * (unsigned __int16)(2 * v6) + 4 );
    v26 = (char *)&unk_2CD7080 + 2 * (unsigned __int16)(word_2CD7282 - 1) + 4;
    v27 = (char *)word_2CD7082;
    do
    {
      v28 = *(_WORD *)v27 - 1;
      *(_WORD *)v27 = v28;
      if ( v28 != -1 )
        break;
      v27 += 2;
    }
    while ( v27 != v26 );
    v29 = (char *)word_2CD7082;
    if ( (((_BYTE)v26 - (unsigned __int8)word_2CD7082) & 2) == 0
      || (word_2CD7082[0] = ~word_2CD7082[0], v29 = (char *)&word_2CD7082[1], &word_2CD7082[1] != (_WORD *)v26) )
    {
      do
      {
        *(_WORD *)v29 = ~*(_WORD *)v29;
        *((_WORD *)v29 + 1) = ~*((_WORD *)v29 + 1);
        v29 += 4;
      }
      while ( v29 != v26 );
    }
    v30 = v20;
    v31 = v20 - v22;
    word_2CD7282 = v6;
    v32 = (__int16 *)&v8[2 * v30];
    v33 = &v32[-v22];
    if ( v31 != -1 )
    {
      v34 = (unsigned __int16)word_2CD705C;
      v35 = -(__int64)(unsigned __int16)(v31 + 1);
      v36 = (unsigned __int16)word_2CD705A;
      v37 = dword_2CD7060;
      v38 = (unsigned __int16 *)&v33[v6];
      v39 = &v32[v35];
      v64 = qword_2CD7068;
      v65 = 2LL * (unsigned __int16)(v6 - 1) + 2;
      do
      {
        v40 = (((((v34 * (unsigned __int64)(unsigned __int16)~*(v32 - 1)) >> 1)
               + (((unsigned __int64)(unsigned __int16)~*v32 * v36) >> 1)
               + 1
               + ((((v34 * ((unsigned __int64)(unsigned __int16)~*(v32 - 2) + 1)) >> 1)
                 + ((v36 * (unsigned __int64)(unsigned __int16)~*(v32 - 1)) >> 1)
                 + 32769) >> 16)) >> 14)
             + 2 * v34 * (unsigned __int16)~*v32) >> v37;
        if ( v40 )
        {
          if ( v6 <= 0 )
          {
            v48 = v33;
            LOWORD(v47) = 0;
          }
          else
          {
            v41 = (unsigned __int16 *)v64;
            v42 = (unsigned __int16 *)v33;
            if ( v40 > 0xFFFF )
              v40 = 0xFFFF;
            v43 = 0;
            do
            {
              v44 = *v41;
              v45 = *v42++;
              ++v41;
              v46 = v45 + v40 * v44;
              *(v42 - 1) = v43 + v46;
              v47 = (v43 + v46) >> 16;
              v43 = v47;
            }
            while ( v42 != v38 );
            v48 = (__int16 *)((char *)v33 + v65);
          }
          *v48 += v47;
          if ( *v32 >= 0 && word_2CD7282 )
          {
            v66 = v6;
            v49 = 0;
            v50 = (__int128 *)((char *)&xmmword_2CD71E0 + 2 * (unsigned __int16)word_2CD7282);
            v51 = v33;
            v52 = &xmmword_2CD71E0;
            do
            {
              v54 = *v51;
              v55 = *(_WORD *)v52;
              v53 = *v51 - *(_WORD *)v52;
              if ( v49 )
              {
                --v53;
                v49 = v55 >= v54;
              }
              else
              {
                v49 = v54 < v55;
              }
              v52 = (__int128 *)((char *)v52 + 2);
              *v51++ = v53;
            }
            while ( v50 != v52 );
            v6 = v66;
            if ( v49 )
              --*v32;
          }
        }
        --v32;
        --v33;
        --v38;
      }
      while ( v32 != v39 );
    }
    word_2CD7282 = v6;
    v56 = (char *)word_2CD7082;
    v57 = (char *)&unk_2CD7080 + 2 * (unsigned __int16)(v6 - 1) + 4;
    do
    {
      v58 = *(_WORD *)v56 - 1;
      *(_WORD *)v56 = v58;
      if ( v58 != -1 )
        break;
      v56 += 2;
    }
    while ( v56 != v57 );
    v59 = (char *)word_2CD7082;
    if ( (((_BYTE)v57 - (unsigned __int8)word_2CD7082) & 2) == 0
      || (word_2CD7082[0] = ~word_2CD7082[0], v59 = (char *)&word_2CD7082[1], &word_2CD7082[1] != (_WORD *)v57) )
    {
      do
      {
        *(_WORD *)v59 = ~*(_WORD *)v59;
        *((_WORD *)v59 + 1) = ~*((_WORD *)v59 + 1);
        v59 += 4;
      }
      while ( v59 != v57 );
    }
    v60 = (char *)word_2CD7082;
    v61 = (char *)&unk_2CD7080 + 2 * (unsigned __int16)(word_2CD7282 - 1) + 4;
    do
    {
      v62 = *(_WORD *)v60 - 1;
      *(_WORD *)v60 = v62;
      if ( v62 != -1 )
        break;
      v60 += 2;
    }
    while ( v60 != v61 );
    v5 = word_2CD7282;
  }
  else
  {
    word_2CD7282 = v6;
  }
  return memcpy(a1, v8, 2 * v5);
}
