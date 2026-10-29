__int64 __fastcall sub_1133350(__int64 *a1, __int64 a2)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
  void **v5; // rbx
  void **v6; // r15
  void *v7; // r12
  void **v8; // r14
  __int64 v9; // rsi
  unsigned int v10; // ebx
  const char ***v12; // r12
  _BYTE *v13; // rax
  void **v14; // rbx
  void *v15; // r14
  void **v16; // rcx
  __int64 v17; // rsi
  const char **v18; // rax
  const char *v19; // r14
  unsigned __int8 *v20; // r12
  _BYTE *v21; // r15
  signed __int64 v22; // r13
  _QWORD *v23; // rax
  _QWORD *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  void **v28; // r13
  _BYTE *v29; // rdi
  __int64 v30; // rax
  void **v31; // rbp
  _QWORD *v32; // rax
  __int64 v33; // r12
  __int64 v34; // rbx
  void *v35; // rdi
  void **v36; // rdi
  void **v37; // rdi
  void **v38; // rbx
  void **v39; // r12
  size_t v40; // rdx
  __int64 v41; // rdx
  _QWORD *v42; // rdx
  int v43; // eax
  __int64 v44; // rax
  __int64 v45; // r14
  void **v46; // rdx
  char *v47; // r14
  char *v48; // rdi
  void **v49; // [rsp+8h] [rbp-E0h] BYREF
  char *v50; // [rsp+10h] [rbp-D8h]
  __int64 *v51; // [rsp+18h] [rbp-D0h]
  void *src[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v53; // [rsp+30h] [rbp-B8h] BYREF
  void *v54; // [rsp+40h] [rbp-A8h]
  size_t v55; // [rsp+48h] [rbp-A0h]
  _QWORD v56[2]; // [rsp+50h] [rbp-98h] BYREF
  void *v57[2]; // [rsp+60h] [rbp-88h] BYREF
  __int64 v58; // [rsp+70h] [rbp-78h]
  int v59; // [rsp+78h] [rbp-70h]
  void *v60; // [rsp+80h] [rbp-68h]
  __int64 v61; // [rsp+90h] [rbp-58h] BYREF
  __int16 v62; // [rsp+A0h] [rbp-48h]

  v51 = a1;
  v57[0] = (void *)0x96200000B3ALL;
  LODWORD(v57[1]) = 2371;
  v3 = sub_2193060(a2, v57, 3);
  v4 = *(_QWORD *)(a2 + 8);
  v58 = 0x96200000B3ALL;
  v59 = 2371;
  v5 = (void **)(v4 + 8LL * (unsigned int)v3);
  v6 = (void **)(v4 + 8 * HIDWORD(v3));
  v49 = v6;
  *(__m128 *)v57 = _mm_loadh_ps((const double *)&v49);
  if ( v5 == v6 )
    return 2;
  v49 = (void **)((char *)&v57[1] + 4);
  while ( 1 )
  {
    v7 = *v5;
    v8 = v57;
    if ( *v5 )
      break;
LABEL_7:
    v57[0] = ++v5;
    if ( v6 == v5 )
      return 2;
  }
  while ( 1 )
  {
    v9 = *((unsigned int *)v8 + 4);
    if ( !(_DWORD)v9 )
      goto LABEL_7;
    if ( (unsigned __int8)sub_2195AD0(v7, v9) )
      break;
    v8 = (void **)((char *)v8 + 4);
    if ( v49 == v8 )
      goto LABEL_7;
  }
  v49 = v6;
  v58 = 0x96200000B3ALL;
  v59 = 2371;
  *(__m128 *)v57 = _mm_loadh_ps((const double *)&v49);
  if ( v6 == v5 )
    return 2;
  v50 = (char *)&v57[1] + 4;
LABEL_12:
  v12 = (const char ***)*v5;
  v13 = *((_BYTE **)*v5 + 2);
  if ( !v13 )
    v13 = *v5;
  v14 = v5 + 1;
  v13[44] |= 1u;
  for ( v57[0] = v14; v6 != v14; v57[0] = v14 )
  {
    v15 = *v14;
    v16 = v57;
    if ( *v14 )
    {
      do
      {
        v17 = *((unsigned int *)v16 + 4);
        v49 = v16;
        if ( !(_DWORD)v17 )
          break;
        if ( (unsigned __int8)sub_2195AD0(v15, v17) )
        {
          v5 = (void **)v57[0];
          if ( v57[0] != v6 )
            goto LABEL_12;
          goto LABEL_20;
        }
        v16 = (void **)((char *)v49 + 4);
      }
      while ( v50 != (char *)v49 + 4 );
    }
    ++v14;
  }
LABEL_20:
  v10 = 1;
  if ( !(unsigned __int8)sub_2195AD0(v12, 2874) )
  {
    if ( (unsigned __int8)sub_2195AD0(v12, 2402) )
      return 2;
    v18 = v12[6];
    v19 = *v18;
    if ( !*v18 )
      return 2;
    if ( strlen(*v18) == 4 )
    {
      if ( *(_DWORD *)v19 == 1952870259 )
        return v10;
      if ( *(_DWORD *)v19 == 1685217640 )
        return 2;
    }
    if ( !strlen(v19) )
      return 2;
    sub_FA3370((__int64)v57, *v51, 0, 385);
    sub_21922B0(src, v12, a2);
    v20 = (unsigned __int8 *)v57[0];
    v21 = src[0];
    v22 = (signed __int64)src[1];
    if ( !v57[0] )
    {
      v42 = v57[1];
      v43 = *((_DWORD *)v57[1] + 3744);
      if ( v43 )
      {
        v44 = (unsigned int)(v43 - 1);
        *((_DWORD *)v57[1] + 3744) = v44;
        v20 = (unsigned __int8 *)v42[v44 + 1856];
        v45 = *((unsigned int *)v20 + 134);
        v46 = *((void ***)v20 + 66);
        *v20 = 0;
        *((_DWORD *)v20 + 106) = 0;
        v47 = (char *)&v46[8 * v45];
        while ( v46 != (void **)v47 )
        {
          while ( 1 )
          {
            v47 -= 64;
            v48 = *((char **)v47 + 3);
            if ( v48 == v47 + 40 )
              break;
            v49 = v46;
            operator delete(v48);
            v46 = v49;
            if ( v49 == (void **)v47 )
              goto LABEL_85;
          }
        }
LABEL_85:
        *((_DWORD *)v20 + 134) = 0;
      }
      else
      {
        v20 = (unsigned __int8 *)operator new(0x3A0u);
        *v20 = 0;
        *((_QWORD *)v20 + 12) = v20 + 112;
        *((_QWORD *)v20 + 16) = v20 + 144;
        *((_QWORD *)v20 + 20) = v20 + 176;
        *((_QWORD *)v20 + 24) = v20 + 208;
        *((_QWORD *)v20 + 28) = v20 + 240;
        *((_QWORD *)v20 + 32) = v20 + 272;
        *((_QWORD *)v20 + 36) = v20 + 304;
        *((_QWORD *)v20 + 40) = v20 + 336;
        *((_QWORD *)v20 + 44) = v20 + 368;
        *((_QWORD *)v20 + 48) = v20 + 400;
        *((_QWORD *)v20 + 52) = v20 + 432;
        *((_QWORD *)v20 + 13) = 0;
        v20[112] = 0;
        *((_QWORD *)v20 + 17) = 0;
        v20[144] = 0;
        *((_QWORD *)v20 + 21) = 0;
        v20[176] = 0;
        *((_QWORD *)v20 + 25) = 0;
        v20[208] = 0;
        *((_QWORD *)v20 + 29) = 0;
        v20[240] = 0;
        *((_QWORD *)v20 + 33) = 0;
        v20[272] = 0;
        *((_QWORD *)v20 + 37) = 0;
        v20[304] = 0;
        *((_QWORD *)v20 + 41) = 0;
        v20[336] = 0;
        *((_QWORD *)v20 + 45) = 0;
        v20[368] = 0;
        *((_QWORD *)v20 + 49) = 0;
        v20[400] = 0;
        *((_QWORD *)v20 + 53) = 0x800000000LL;
        *((_QWORD *)v20 + 66) = v20 + 544;
        *((_QWORD *)v20 + 67) = 0x600000000LL;
      }
      v57[0] = v20;
    }
    v20[*v20 + 1] = 0;
    v54 = v56;
    if ( &v21[v22] && !v21 )
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    if ( (unsigned __int64)v22 > 0xF )
    {
      if ( v22 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      v23 = (_QWORD *)operator new(v22 + 1);
      v56[0] = v22;
      v54 = v23;
    }
    else
    {
      if ( v22 == 1 )
      {
        LOBYTE(v56[0]) = *v21;
        v23 = v56;
        goto LABEL_31;
      }
      v23 = v56;
      if ( !v22 )
      {
LABEL_31:
        v55 = v22;
        *((_BYTE *)v23 + v22) = 0;
        v24 = v57[0];
        v25 = *(unsigned __int8 *)v57[0];
        *(_BYTE *)v57[0] = v25 + 1;
        v26 = (unsigned __int8)v25;
        v27 = 4 * (v25 + 3);
        v28 = (void **)&v24[v27];
        v29 = (_BYTE *)v24[v27];
        if ( v54 == v56 )
        {
          v40 = v55;
          if ( v55 )
          {
            if ( v55 == 1 )
              *v29 = v56[0];
            else
              memcpy(v29, v54, v55);
            v40 = v55;
            v29 = *v28;
          }
          v28[1] = (void *)v40;
          v29[v40] = 0;
          v29 = v54;
        }
        else
        {
          if ( v29 == (_BYTE *)&v24[v27 + 2] )
          {
            *v28 = v54;
            v28[1] = (void *)v55;
            v28[2] = (void *)v56[0];
          }
          else
          {
            v30 = v24[4 * v26 + 14];
            *v28 = v54;
            v28[1] = (void *)v55;
            v28[2] = (void *)v56[0];
            if ( v29 )
            {
              v54 = v29;
              v56[0] = v30;
              goto LABEL_35;
            }
          }
          v29 = v56;
          v54 = v56;
        }
LABEL_35:
        v55 = 0;
        *v29 = 0;
        if ( v54 != v56 )
          operator delete(v54);
        if ( src[0] != &v53 )
          operator delete(src[0]);
        if ( (_BYTE)v62 )
        {
          sub_FA3A50(v58, (__int64)v57, SHIBYTE(v62));
          v58 = 0;
          v62 = 0;
        }
        if ( v60 != &v61 )
          operator delete(v60);
        v31 = (void **)v57[0];
        if ( v57[0] )
        {
          v32 = v57[1];
          if ( v57[1] )
          {
            if ( v57[0] < v57[1] || v57[0] > (char *)v57[1] + 14848 )
            {
              v33 = *((_QWORD *)v57[0] + 66);
              v34 = v33 + ((unsigned __int64)*((unsigned int *)v57[0] + 134) << 6);
              while ( v33 != v34 )
              {
                while ( 1 )
                {
                  v34 -= 64;
                  v35 = *(void **)(v34 + 24);
                  if ( v35 == (void *)(v34 + 40) )
                    break;
                  operator delete(v35);
                  if ( v33 == v34 )
                    goto LABEL_50;
                }
              }
LABEL_50:
              v36 = (void **)v31[66];
              if ( v36 != v31 + 68 )
                free(v36);
              v37 = (void **)v31[52];
              if ( v37 != v31 + 54 )
                free(v37);
              v38 = v31 + 48;
              v39 = v31 + 8;
              do
              {
                while ( *v38 != v38 + 2 )
                {
                  operator delete(*v38);
                  v38 -= 4;
                  if ( v38 == v39 )
                    goto LABEL_57;
                }
                v38 -= 4;
              }
              while ( v39 != v38 );
LABEL_57:
              operator delete(v31, 0x3A0u);
            }
            else
            {
              v41 = *((unsigned int *)v57[1] + 3744);
              *((_DWORD *)v57[1] + 3744) = v41 + 1;
              v32[v41 + 1856] = v31;
            }
          }
        }
        return 2;
      }
    }
    memcpy(v23, v21, v22);
    v23 = v54;
    goto LABEL_31;
  }
  return v10;
}

