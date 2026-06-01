__int64 __fastcall sub_11242F0(__int64 *a1, __int64 a2)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
  void **v5; // rbx
  void **v6; // r15
  void *v7; // r12
  void **v8; // r14
  __int64 v9; // rsi
  __int64 result; // rax
  const char ***v11; // r12
  _BYTE *v12; // rax
  void **v13; // rbx
  void *v14; // r14
  void **v15; // rcx
  __int64 v16; // rsi
  const char **v17; // rax
  const char *v18; // rbx
  size_t v19; // rax
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
  void **v33; // r12
  void **v34; // rbx
  void **v35; // rdi
  void **v36; // rdi
  void **v37; // rbx
  void **v38; // r12
  size_t v39; // rdx
  __int64 v40; // rdx
  _QWORD *v41; // rdx
  int v42; // eax
  __int64 v43; // rax
  __int64 v44; // r14
  void **v45; // rdx
  char *v46; // r14
  char *v47; // rdi
  void **v48; // [rsp+8h] [rbp-E0h] BYREF
  char *v49; // [rsp+10h] [rbp-D8h]
  __int64 *v50; // [rsp+18h] [rbp-D0h]
  void *src[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v52; // [rsp+30h] [rbp-B8h] BYREF
  void *v53; // [rsp+40h] [rbp-A8h]
  size_t v54; // [rsp+48h] [rbp-A0h]
  _QWORD v55[2]; // [rsp+50h] [rbp-98h] BYREF
  void *v56[2]; // [rsp+60h] [rbp-88h] BYREF
  __int64 v57; // [rsp+70h] [rbp-78h]
  int v58; // [rsp+78h] [rbp-70h]
  void *v59; // [rsp+80h] [rbp-68h]
  __int64 v60; // [rsp+90h] [rbp-58h] BYREF
  __int16 v61; // [rsp+A0h] [rbp-48h]

  v50 = a1;
  v56[0] = (void *)0x96200000B3ALL;
  LODWORD(v56[1]) = 2371;
  v3 = sub_2193060(a2, v56, 3);
  v4 = *(_QWORD *)(a2 + 8);
  v57 = 0x96200000B3ALL;
  v58 = 2371;
  v5 = (void **)(v4 + 8LL * (unsigned int)v3);
  v6 = (void **)(v4 + 8 * HIDWORD(v3));
  v48 = v6;
  *(__m128 *)v56 = _mm_loadh_ps((const double *)&v48);
  if ( v5 == v6 )
    return 1;
  v48 = (void **)((char *)&v56[1] + 4);
  while ( 1 )
  {
    v7 = *v5;
    v8 = v56;
    if ( *v5 )
      break;
LABEL_7:
    v56[0] = ++v5;
    if ( v6 == v5 )
      return 1;
  }
  while ( 1 )
  {
    v9 = *((unsigned int *)v8 + 4);
    if ( !(_DWORD)v9 )
      goto LABEL_7;
    if ( (unsigned __int8)sub_2195AD0(v7, v9) )
      break;
    v8 = (void **)((char *)v8 + 4);
    if ( v48 == v8 )
      goto LABEL_7;
  }
  v48 = v6;
  v57 = 0x96200000B3ALL;
  v58 = 2371;
  *(__m128 *)v56 = _mm_loadh_ps((const double *)&v48);
  if ( v6 == v5 )
    return 1;
  v49 = (char *)&v56[1] + 4;
LABEL_12:
  v11 = (const char ***)*v5;
  v12 = *((_BYTE **)*v5 + 2);
  if ( !v12 )
    v12 = *v5;
  v13 = v5 + 1;
  v12[44] |= 1u;
  for ( v56[0] = v13; v6 != v13; v56[0] = v13 )
  {
    v14 = *v13;
    v15 = v56;
    if ( *v13 )
    {
      do
      {
        v16 = *((unsigned int *)v15 + 4);
        v48 = v15;
        if ( !(_DWORD)v16 )
          break;
        if ( (unsigned __int8)sub_2195AD0(v14, v16) )
        {
          v5 = (void **)v56[0];
          if ( v6 != v56[0] )
            goto LABEL_12;
          goto LABEL_20;
        }
        v15 = (void **)((char *)v48 + 4);
      }
      while ( (char *)v48 + 4 != v49 );
    }
    ++v13;
  }
LABEL_20:
  if ( (unsigned __int8)sub_2195AD0(v11, 2874) )
    return 1;
  if ( (unsigned __int8)sub_2195AD0(v11, 2402) )
    return 3;
  v17 = v11[6];
  v18 = *v17;
  if ( !*v17 )
    goto LABEL_27;
  v19 = strlen(*v17);
  if ( v19 == 4 )
  {
    if ( *(_DWORD *)v18 == 1952870259 )
      return 1;
    if ( *(_DWORD *)v18 != 1685217640 )
    {
LABEL_27:
      sub_FA3370((__int64)v56, *v50, 0, 385);
      sub_21922B0(src, v11, a2);
      v20 = (unsigned __int8 *)v56[0];
      v21 = src[0];
      v22 = (signed __int64)src[1];
      if ( !v56[0] )
      {
        v41 = v56[1];
        v42 = *((_DWORD *)v56[1] + 3744);
        if ( v42 )
        {
          v43 = (unsigned int)(v42 - 1);
          *((_DWORD *)v56[1] + 3744) = v43;
          v20 = (unsigned __int8 *)v41[v43 + 1856];
          v44 = *((unsigned int *)v20 + 134);
          v45 = *((void ***)v20 + 66);
          *v20 = 0;
          *((_DWORD *)v20 + 106) = 0;
          v46 = (char *)&v45[8 * v44];
          while ( v45 != (void **)v46 )
          {
            while ( 1 )
            {
              v46 -= 64;
              v47 = *((char **)v46 + 3);
              if ( v47 == v46 + 40 )
                break;
              v48 = v45;
              operator delete(v47);
              v45 = v48;
              if ( v48 == (void **)v46 )
                goto LABEL_90;
            }
          }
LABEL_90:
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
        v56[0] = v20;
      }
      v20[*v20 + 1] = 0;
      v53 = v55;
      if ( &v21[v22] && !v21 )
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      if ( (unsigned __int64)v22 > 0xF )
      {
        if ( v22 < 0 )
          std::__throw_length_error("basic_string::_M_create");
        v23 = (_QWORD *)operator new(v22 + 1);
        v55[0] = v22;
        v53 = v23;
      }
      else
      {
        if ( v22 == 1 )
        {
          LOBYTE(v55[0]) = *v21;
          v23 = v55;
          goto LABEL_36;
        }
        v23 = v55;
        if ( !v22 )
        {
LABEL_36:
          v54 = v22;
          *((_BYTE *)v23 + v22) = 0;
          v24 = v56[0];
          v25 = *(unsigned __int8 *)v56[0];
          *(_BYTE *)v56[0] = v25 + 1;
          v26 = (unsigned __int8)v25;
          v27 = 4 * (v25 + 3);
          v28 = (void **)&v24[v27];
          v29 = (_BYTE *)v24[v27];
          if ( v53 == v55 )
          {
            v39 = v54;
            if ( v54 )
            {
              if ( v54 == 1 )
                *v29 = v55[0];
              else
                memcpy(v29, v53, v54);
              v39 = v54;
              v29 = *v28;
            }
            v28[1] = (void *)v39;
            v29[v39] = 0;
            v29 = v53;
          }
          else
          {
            if ( v29 == (_BYTE *)&v24[v27 + 2] )
            {
              *v28 = v53;
              v28[1] = (void *)v54;
              v28[2] = (void *)v55[0];
            }
            else
            {
              v30 = v24[4 * v26 + 14];
              *v28 = v53;
              v28[1] = (void *)v54;
              v28[2] = (void *)v55[0];
              if ( v29 )
              {
                v53 = v29;
                v55[0] = v30;
                goto LABEL_40;
              }
            }
            v29 = v55;
            v53 = v55;
          }
LABEL_40:
          v54 = 0;
          *v29 = 0;
          if ( v53 != v55 )
            operator delete(v53);
          if ( src[0] != &v52 )
            operator delete(src[0]);
          if ( (_BYTE)v61 )
          {
            sub_FA3A50(v57, (__int64)v56, SHIBYTE(v61));
            v57 = 0;
            v61 = 0;
          }
          if ( v59 != &v60 )
            operator delete(v59);
          v31 = (void **)v56[0];
          if ( v56[0] )
          {
            v32 = v56[1];
            if ( v56[1] )
            {
              if ( v56[0] < v56[1] || v56[0] > (char *)v56[1] + 14848 )
              {
                v33 = *((void ***)v56[0] + 66);
                v34 = &v33[8 * (unsigned __int64)*((unsigned int *)v56[0] + 134)];
                if ( v33 != v34 )
                {
                  do
                  {
                    while ( 1 )
                    {
                      v34 -= 8;
                      v35 = (void **)v34[3];
                      if ( v35 == v34 + 5 )
                        break;
                      operator delete(v35);
                      if ( v33 == v34 )
                        goto LABEL_54;
                    }
                  }
                  while ( v33 != v34 );
LABEL_54:
                  v34 = (void **)v31[66];
                }
                if ( v34 != v31 + 68 )
                  free(v34);
                v36 = (void **)v31[52];
                if ( v36 != v31 + 54 )
                  free(v36);
                v37 = v31 + 48;
                v38 = v31 + 8;
                do
                {
                  while ( *v37 != v37 + 2 )
                  {
                    operator delete(*v37);
                    v37 -= 4;
                    if ( v37 == v38 )
                      goto LABEL_62;
                  }
                  v37 -= 4;
                }
                while ( v38 != v37 );
LABEL_62:
                operator delete(v31, 0x3A0u);
              }
              else
              {
                v40 = *((unsigned int *)v56[1] + 3744);
                *((_DWORD *)v56[1] + 3744) = v40 + 1;
                v32[v40 + 1856] = v31;
              }
            }
          }
          return 1;
        }
      }
      memcpy(v23, v21, v22);
      v23 = v53;
      goto LABEL_36;
    }
    return 3;
  }
  if ( v19 != 6 )
    goto LABEL_27;
  if ( *(_DWORD *)v18 != 1952870259 )
    goto LABEL_27;
  result = 2;
  if ( *((_WORD *)v18 + 2) != 28774 )
    goto LABEL_27;
  return result;
}

