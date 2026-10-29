__int64 __fastcall sub_111AEF0(__int64 *a1, _DWORD *a2, __int64 a3)
{
  unsigned __int64 v5; // rax
  __int64 v6; // rcx
  char *v7; // rdx
  char *v8; // r15
  __int64 v9; // rbp
  void **v10; // r14
  __int64 v11; // rsi
  char v12; // al
  unsigned int v13; // r14d
  unsigned __int8 *v14; // rbp
  _QWORD *v15; // rdx
  __int64 v16; // rax
  void **v17; // rbp
  _QWORD *v18; // rax
  void **v19; // r12
  void **v20; // rbx
  void **v21; // rdi
  void **v22; // rdi
  void **v23; // rbx
  void **v24; // r12
  __int64 v25; // rbp
  char *v26; // r14
  __int64 v27; // rax
  char *v28; // r9
  void **v29; // r8
  __int64 v30; // rsi
  char v31; // al
  char **v33; // rax
  size_t v34; // rax
  void **v35; // rbp
  _QWORD *v36; // rax
  __int64 v37; // r12
  __int64 v38; // rbx
  void *v39; // rdi
  void **v40; // rdi
  void **v41; // rdi
  void **v42; // rbx
  void **v43; // r12
  _QWORD *v44; // rdx
  int v45; // eax
  __int64 v46; // rax
  __int64 v47; // r12
  __int64 v48; // r13
  __int64 v49; // r12
  void *v50; // rdi
  __int64 v51; // rdx
  __int64 v52; // rdx
  char *s; // [rsp+0h] [rbp-C8h] BYREF
  void **v54; // [rsp+8h] [rbp-C0h]
  char *v55; // [rsp+10h] [rbp-B8h]
  __int64 *v56; // [rsp+18h] [rbp-B0h]
  void *v57[2]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v58; // [rsp+30h] [rbp-98h] BYREF
  void *v59[2]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v60; // [rsp+50h] [rbp-78h]
  int v61; // [rsp+58h] [rbp-70h]
  void *v62; // [rsp+60h] [rbp-68h]
  _BYTE v63[16]; // [rsp+70h] [rbp-58h] BYREF
  __int16 v64; // [rsp+80h] [rbp-48h]

  v56 = a1;
  v59[0] = (void *)0x96200000B3ALL;
  LODWORD(v59[1]) = 2371;
  v5 = sub_2193060(a3, v59, 3);
  v6 = *(_QWORD *)(a3 + 8);
  v60 = 0x96200000B3ALL;
  v61 = 2371;
  v7 = (char *)(v6 + 8LL * (unsigned int)v5);
  v8 = (char *)(v6 + 8 * HIDWORD(v5));
  s = v8;
  *(__m128 *)v59 = _mm_loadh_ps((const double *)&s);
  if ( v7 == v8 )
  {
LABEL_8:
    v13 = sub_111ADC0(a2);
    if ( !v13 )
    {
      v13 = 1;
      if ( a2[13] != 5 || (v13 = 2 * (a2[9] == 23) + 1, a2[11]) )
      {
        sub_FA3370((__int64)v59, *v56, 0, 534);
        v14 = (unsigned __int8 *)v59[0];
        if ( !v59[0] )
        {
          v44 = v59[1];
          v45 = *((_DWORD *)v59[1] + 3744);
          if ( v45 )
          {
            v46 = (unsigned int)(v45 - 1);
            *((_DWORD *)v59[1] + 3744) = v46;
            v14 = (unsigned __int8 *)v44[v46 + 1856];
            v47 = *((unsigned int *)v14 + 134);
            *v14 = 0;
            v48 = *((_QWORD *)v14 + 66);
            *((_DWORD *)v14 + 106) = 0;
            v49 = v48 + (v47 << 6);
            while ( v48 != v49 )
            {
              while ( 1 )
              {
                v49 -= 64;
                v50 = *(void **)(v49 + 24);
                if ( v50 == (void *)(v49 + 40) )
                  break;
                operator delete(v50);
                if ( v48 == v49 )
                  goto LABEL_84;
              }
            }
LABEL_84:
            *((_DWORD *)v14 + 134) = 0;
          }
          else
          {
            v14 = (unsigned __int8 *)operator new(0x3A0u);
            *v14 = 0;
            *((_QWORD *)v14 + 12) = v14 + 112;
            *((_QWORD *)v14 + 16) = v14 + 144;
            *((_QWORD *)v14 + 20) = v14 + 176;
            *((_QWORD *)v14 + 24) = v14 + 208;
            *((_QWORD *)v14 + 28) = v14 + 240;
            *((_QWORD *)v14 + 32) = v14 + 272;
            *((_QWORD *)v14 + 36) = v14 + 304;
            *((_QWORD *)v14 + 40) = v14 + 336;
            *((_QWORD *)v14 + 44) = v14 + 368;
            *((_QWORD *)v14 + 48) = v14 + 400;
            *((_QWORD *)v14 + 52) = v14 + 432;
            *((_QWORD *)v14 + 13) = 0;
            v14[112] = 0;
            *((_QWORD *)v14 + 17) = 0;
            v14[144] = 0;
            *((_QWORD *)v14 + 21) = 0;
            v14[176] = 0;
            *((_QWORD *)v14 + 25) = 0;
            v14[208] = 0;
            *((_QWORD *)v14 + 29) = 0;
            v14[240] = 0;
            *((_QWORD *)v14 + 33) = 0;
            v14[272] = 0;
            *((_QWORD *)v14 + 37) = 0;
            v14[304] = 0;
            *((_QWORD *)v14 + 41) = 0;
            v14[336] = 0;
            *((_QWORD *)v14 + 45) = 0;
            v14[368] = 0;
            *((_QWORD *)v14 + 49) = 0;
            v14[400] = 0;
            *((_QWORD *)v14 + 53) = 0x800000000LL;
            *((_QWORD *)v14 + 66) = v14 + 544;
            *((_QWORD *)v14 + 67) = 0x600000000LL;
          }
          v59[0] = v14;
        }
        v14[*v14 + 1] = 1;
        v15 = v59[0];
        v16 = *(unsigned __int8 *)v59[0];
        *(_BYTE *)v59[0] = v16 + 1;
        v15[v16 + 2] = "soft";
        if ( (_BYTE)v64 )
        {
          sub_FA3A50(v60, (__int64)v59, SHIBYTE(v64));
          v60 = 0;
          v64 = 0;
        }
        if ( v62 != v63 )
          operator delete(v62);
        v17 = (void **)v59[0];
        if ( v59[0] )
        {
          v18 = v59[1];
          if ( v59[1] )
          {
            if ( v59[0] >= v59[1] && v59[0] <= (char *)v59[1] + 14848 )
            {
              v51 = *((unsigned int *)v59[1] + 3744);
              *((_DWORD *)v59[1] + 3744) = v51 + 1;
              v18[v51 + 1856] = v17;
            }
            else
            {
              v19 = *((void ***)v59[0] + 66);
              v20 = &v19[8 * (unsigned __int64)*((unsigned int *)v59[0] + 134)];
              if ( v19 != v20 )
              {
                do
                {
                  while ( 1 )
                  {
                    v20 -= 8;
                    v21 = (void **)v20[3];
                    if ( v21 == v20 + 5 )
                      break;
                    operator delete(v21);
                    if ( v19 == v20 )
                      goto LABEL_22;
                  }
                }
                while ( v19 != v20 );
LABEL_22:
                v20 = (void **)v17[66];
              }
              if ( v20 != v17 + 68 )
                free(v20);
              v22 = (void **)v17[52];
              if ( v22 != v17 + 54 )
                free(v22);
              v23 = v17 + 48;
              v24 = v17 + 8;
              do
              {
                while ( *v23 != v23 + 2 )
                {
                  operator delete(*v23);
                  v23 -= 4;
                  if ( v24 == v23 )
                    goto LABEL_30;
                }
                v23 -= 4;
              }
              while ( v24 != v23 );
LABEL_30:
              operator delete(v17, 0x3A0u);
            }
          }
        }
      }
    }
  }
  else
  {
    v54 = (void **)((char *)&v59[1] + 4);
    while ( 1 )
    {
      v9 = *(_QWORD *)v7;
      v10 = v59;
      if ( *(_QWORD *)v7 )
        break;
LABEL_7:
      v7 += 8;
      v59[0] = v7;
      if ( v8 == v7 )
        goto LABEL_8;
    }
    while ( 1 )
    {
      v11 = *((unsigned int *)v10 + 4);
      if ( !(_DWORD)v11 )
        goto LABEL_7;
      s = v7;
      v12 = sub_2195AD0(v9, v11);
      v7 = s;
      if ( v12 )
        break;
      v10 = (void **)((char *)v10 + 4);
      if ( v54 == v10 )
        goto LABEL_7;
    }
    s = v8;
    v60 = 0x96200000B3ALL;
    v61 = 2371;
    *(__m128 *)v59 = _mm_loadh_ps((const double *)&s);
    if ( v8 == v7 )
      goto LABEL_8;
    v55 = (char *)&v59[1] + 4;
LABEL_33:
    v25 = *(_QWORD *)v7;
    v26 = v7 + 8;
    v27 = *(_QWORD *)(*(_QWORD *)v7 + 16LL);
    if ( !v27 )
      v27 = *(_QWORD *)v7;
    *(_BYTE *)(v27 + 44) |= 1u;
    for ( v59[0] = v7 + 8; v8 != v26; v59[0] = v26 )
    {
      v28 = *(char **)v26;
      v29 = v59;
      if ( *(_QWORD *)v26 )
      {
        do
        {
          v30 = *((unsigned int *)v29 + 4);
          v54 = v29;
          if ( !(_DWORD)v30 )
            break;
          s = v28;
          v31 = sub_2195AD0(v28, v30);
          v28 = s;
          if ( v31 )
          {
            v7 = (char *)v59[0];
            if ( v8 != v59[0] )
              goto LABEL_33;
            goto LABEL_41;
          }
          v29 = (void **)((char *)v54 + 4);
        }
        while ( v55 != (char *)v54 + 4 );
      }
      v26 += 8;
    }
LABEL_41:
    v13 = 1;
    if ( !(unsigned __int8)sub_2195AD0(v25, 2874) )
    {
      v13 = 3;
      if ( !(unsigned __int8)sub_2195AD0(v25, 2402) )
      {
        v33 = *(char ***)(v25 + 48);
        if ( !*v33 )
          goto LABEL_8;
        s = *v33;
        v34 = strlen(s);
        if ( v34 == 4 )
        {
          if ( *(_DWORD *)s == 1952870259 )
            return 1;
          if ( *(_DWORD *)s == 1685217640 )
            return v13;
        }
        else if ( v34 == 6 && *(_DWORD *)s == 1952870259 )
        {
          v13 = 2;
          if ( *((_WORD *)s + 2) == 28774 )
            return v13;
        }
        if ( !strlen(s) )
          goto LABEL_8;
        sub_FA3370((__int64)v59, *v56, 0, 385);
        sub_21922B0(v57, v25, a3);
        sub_AC84E0((unsigned __int8 **)v59, (_BYTE *)v57[0], (signed __int64)v57[1]);
        if ( v57[0] != &v58 )
          operator delete(v57[0]);
        if ( (_BYTE)v64 )
        {
          sub_FA3A50(v60, (__int64)v59, SHIBYTE(v64));
          v60 = 0;
          v64 = 0;
        }
        if ( v62 != v63 )
          operator delete(v62);
        v35 = (void **)v59[0];
        if ( v59[0] )
        {
          v36 = v59[1];
          if ( v59[1] )
          {
            if ( v59[0] < v59[1] || v59[0] > (char *)v59[1] + 14848 )
            {
              v37 = *((_QWORD *)v59[0] + 66);
              v38 = v37 + ((unsigned __int64)*((unsigned int *)v59[0] + 134) << 6);
              while ( v37 != v38 )
              {
                while ( 1 )
                {
                  v38 -= 64;
                  v39 = *(void **)(v38 + 24);
                  if ( v39 == (void *)(v38 + 40) )
                    break;
                  operator delete(v39);
                  if ( v37 == v38 )
                    goto LABEL_64;
                }
              }
LABEL_64:
              v40 = (void **)v35[66];
              if ( v40 != v35 + 68 )
                free(v40);
              v41 = (void **)v35[52];
              if ( v41 != v35 + 54 )
                free(v41);
              v42 = v35 + 48;
              v43 = v35 + 8;
              do
              {
                while ( *v42 != v42 + 2 )
                {
                  operator delete(*v42);
                  v42 -= 4;
                  if ( v43 == v42 )
                    goto LABEL_71;
                }
                v42 -= 4;
              }
              while ( v42 != v43 );
LABEL_71:
              operator delete(v35, 0x3A0u);
            }
            else
            {
              v52 = *((unsigned int *)v59[1] + 3744);
              *((_DWORD *)v59[1] + 3744) = v52 + 1;
              v36[v52 + 1856] = v35;
            }
          }
        }
        return 1;
      }
    }
  }
  return v13;
}

