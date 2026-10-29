__int64 __fastcall sub_112FCF0(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rcx
  void **v6; // r14
  void **v7; // r15
  void *v8; // rbp
  void **v9; // r13
  __int64 v10; // rsi
  const char ***v12; // rbp
  _BYTE *v13; // rax
  void **v14; // r14
  void *v15; // r13
  void **v16; // r8
  __int64 v17; // rsi
  const char **v18; // rax
  const char *v19; // r13
  unsigned __int8 *v20; // rbp
  _BYTE *v21; // r15
  signed __int64 v22; // r12
  _QWORD *v23; // rax
  _QWORD *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  void **v28; // r12
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
  void **v46; // rax
  char *v47; // r14
  char *v48; // rdi
  void **v49; // [rsp+0h] [rbp-E8h] BYREF
  char *v50; // [rsp+8h] [rbp-E0h]
  __int64 v51; // [rsp+10h] [rbp-D8h]
  __int64 *v52; // [rsp+18h] [rbp-D0h]
  void *src[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v54; // [rsp+30h] [rbp-B8h] BYREF
  void *v55; // [rsp+40h] [rbp-A8h]
  size_t v56; // [rsp+48h] [rbp-A0h]
  _QWORD v57[2]; // [rsp+50h] [rbp-98h] BYREF
  void *v58[2]; // [rsp+60h] [rbp-88h] BYREF
  __int64 v59; // [rsp+70h] [rbp-78h]
  int v60; // [rsp+78h] [rbp-70h]
  void *v61; // [rsp+80h] [rbp-68h]
  __int64 v62; // [rsp+90h] [rbp-58h] BYREF
  __int16 v63; // [rsp+A0h] [rbp-48h]

  v52 = a1;
  v51 = a3;
  v58[0] = (void *)0x96200000B3ALL;
  LODWORD(v58[1]) = 2371;
  v4 = sub_2193060(a2, v58, 3);
  v5 = *(_QWORD *)(a2 + 8);
  v59 = 0x96200000B3ALL;
  v60 = 2371;
  v6 = (void **)(v5 + 8LL * (unsigned int)v4);
  v7 = (void **)(v5 + 8 * HIDWORD(v4));
  v49 = v7;
  *(__m128 *)v58 = _mm_loadh_ps((const double *)&v49);
  if ( v6 != v7 )
  {
    v49 = (void **)((char *)&v58[1] + 4);
    while ( 1 )
    {
      v8 = *v6;
      v9 = v58;
      if ( *v6 )
        break;
LABEL_7:
      v58[0] = ++v6;
      if ( v7 == v6 )
        goto LABEL_8;
    }
    while ( 1 )
    {
      v10 = *((unsigned int *)v9 + 4);
      if ( !(_DWORD)v10 )
        goto LABEL_7;
      if ( (unsigned __int8)sub_2195AD0(v8, v10) )
        break;
      v9 = (void **)((char *)v9 + 4);
      if ( v9 == v49 )
        goto LABEL_7;
    }
    v49 = v7;
    v59 = 0x96200000B3ALL;
    v60 = 2371;
    *(__m128 *)v58 = _mm_loadh_ps((const double *)&v49);
    if ( v7 == v6 )
      goto LABEL_8;
    v50 = (char *)&v58[1] + 4;
LABEL_12:
    v12 = (const char ***)*v6;
    v13 = *((_BYTE **)*v6 + 2);
    if ( !v13 )
      v13 = *v6;
    v14 = v6 + 1;
    v13[44] |= 1u;
    for ( v58[0] = v14; v7 != v14; v58[0] = v14 )
    {
      v15 = *v14;
      v16 = v58;
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
            v6 = (void **)v58[0];
            if ( v58[0] != v7 )
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
    if ( (unsigned __int8)sub_2195AD0(v12, 2874) )
      return 1;
    if ( (unsigned __int8)sub_2195AD0(v12, 2402) )
      return 2;
    v18 = v12[6];
    v19 = *v18;
    if ( *v18 )
    {
      if ( strlen(*v18) == 4 )
      {
        if ( *(_DWORD *)v19 == 1952870259 )
          return 1;
        if ( *(_DWORD *)v19 == 1685217640 )
          return 2;
      }
      if ( !strlen(v19) )
        goto LABEL_8;
      sub_FA3370((__int64)v58, *v52, 0, 385);
      sub_21922B0(src, v12, a2);
      v20 = (unsigned __int8 *)v58[0];
      v21 = src[0];
      v22 = (signed __int64)src[1];
      if ( !v58[0] )
      {
        v42 = v58[1];
        v43 = *((_DWORD *)v58[1] + 3744);
        if ( v43 )
        {
          v44 = (unsigned int)(v43 - 1);
          *((_DWORD *)v58[1] + 3744) = v44;
          v20 = (unsigned __int8 *)v42[v44 + 1856];
          v45 = *((unsigned int *)v20 + 134);
          *v20 = 0;
          v46 = *((void ***)v20 + 66);
          *((_DWORD *)v20 + 106) = 0;
          v47 = (char *)&v46[8 * v45];
          v49 = v46;
          while ( v49 != (void **)v47 )
          {
            while ( 1 )
            {
              v47 -= 64;
              v48 = *((char **)v47 + 3);
              if ( v48 == v47 + 40 )
                break;
              operator delete(v48);
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
        v58[0] = v20;
      }
      v20[*v20 + 1] = 0;
      v55 = v57;
      if ( &v21[v22] && !v21 )
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      if ( (unsigned __int64)v22 > 0xF )
      {
        if ( v22 < 0 )
          std::__throw_length_error("basic_string::_M_create");
        v23 = (_QWORD *)operator new(v22 + 1);
        v57[0] = v22;
        v55 = v23;
      }
      else
      {
        if ( v22 == 1 )
        {
          LOBYTE(v57[0]) = *v21;
          v23 = v57;
          goto LABEL_34;
        }
        v23 = v57;
        if ( !v22 )
        {
LABEL_34:
          v56 = v22;
          *((_BYTE *)v23 + v22) = 0;
          v24 = v58[0];
          v25 = *(unsigned __int8 *)v58[0];
          *(_BYTE *)v58[0] = v25 + 1;
          v26 = (unsigned __int8)v25;
          v27 = 4 * (v25 + 3);
          v28 = (void **)&v24[v27];
          v29 = (_BYTE *)v24[v27];
          if ( v55 == v57 )
          {
            v40 = v56;
            if ( v56 )
            {
              if ( v56 == 1 )
                *v29 = v57[0];
              else
                memcpy(v29, v55, v56);
              v40 = v56;
              v29 = *v28;
            }
            v28[1] = (void *)v40;
            v29[v40] = 0;
            v29 = v55;
          }
          else
          {
            if ( v29 == (_BYTE *)&v24[v27 + 2] )
            {
              *v28 = v55;
              v28[1] = (void *)v56;
              v28[2] = (void *)v57[0];
            }
            else
            {
              v30 = v24[4 * v26 + 14];
              *v28 = v55;
              v28[1] = (void *)v56;
              v28[2] = (void *)v57[0];
              if ( v29 )
              {
                v55 = v29;
                v57[0] = v30;
                goto LABEL_38;
              }
            }
            v29 = v57;
            v55 = v57;
          }
LABEL_38:
          v56 = 0;
          *v29 = 0;
          if ( v55 != v57 )
            operator delete(v55);
          if ( src[0] != &v54 )
            operator delete(src[0]);
          if ( (_BYTE)v63 )
          {
            sub_FA3A50(v59, (__int64)v58, SHIBYTE(v63));
            v59 = 0;
            v63 = 0;
          }
          if ( v61 != &v62 )
            operator delete(v61);
          v31 = (void **)v58[0];
          if ( v58[0] )
          {
            v32 = v58[1];
            if ( v58[1] )
            {
              if ( v58[0] < v58[1] || v58[0] > (char *)v58[1] + 14848 )
              {
                v33 = *((_QWORD *)v58[0] + 66);
                v34 = v33 + ((unsigned __int64)*((unsigned int *)v58[0] + 134) << 6);
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
                      goto LABEL_53;
                  }
                }
LABEL_53:
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
                      goto LABEL_60;
                  }
                  v38 -= 4;
                }
                while ( v39 != v38 );
LABEL_60:
                operator delete(v31, 0x3A0u);
              }
              else
              {
                v41 = *((unsigned int *)v58[1] + 3744);
                *((_DWORD *)v58[1] + 3744) = v41 + 1;
                v32[v41 + 1856] = v31;
              }
            }
          }
          return 2;
        }
      }
      memcpy(v23, v21, v22);
      v23 = v55;
      goto LABEL_34;
    }
  }
LABEL_8:
  if ( *(_DWORD *)(v51 + 44) != 3 )
    return 2;
  return 1;
}

