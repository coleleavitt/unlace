__int64 __fastcall sub_11FD5C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v4; // rax
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rbx
  _QWORD *v8; // rbp
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 result; // rax
  __int64 *v13; // rbx
  __int64 *v14; // rbp
  __int64 v15; // r13
  __int64 v16; // r15
  __int64 v17; // rax
  void **v18; // rax
  void *v19; // r8
  size_t v20; // rax
  size_t v21; // rbp
  __int64 v22; // r13
  __int64 v23; // rax
  __int64 *v24; // rbx
  __int64 v25; // r14
  __int64 v26; // rax
  unsigned __int64 v27; // rcx
  unsigned __int8 *v28; // rbx
  __int64 *v29; // r8
  _QWORD *v30; // rdx
  __int64 v31; // rax
  unsigned __int8 *v32; // rbx
  _QWORD *v33; // rax
  _QWORD *v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  void **v38; // rbp
  _BYTE *v39; // rdi
  __int64 v40; // rax
  void **v41; // rbp
  _QWORD *v42; // rax
  void **v43; // r15
  void **v44; // rbx
  void **v45; // rdi
  void **v46; // rdi
  void **v47; // rbx
  void **v48; // r15
  size_t v49; // rdx
  __int64 v50; // rdx
  _QWORD *v51; // rdx
  int v52; // eax
  __int64 v53; // rax
  __int64 v54; // r15
  char *v55; // rdx
  char *v56; // r15
  char *v57; // rdi
  _QWORD *v58; // rdx
  int v59; // eax
  __int64 v60; // rax
  __int64 v61; // r15
  char *v62; // rdx
  char *v63; // r15
  char *v64; // rdi
  __int64 *v65; // [rsp+0h] [rbp-B8h] BYREF
  void *src; // [rsp+8h] [rbp-B0h]
  void *v67; // [rsp+10h] [rbp-A8h]
  size_t n; // [rsp+18h] [rbp-A0h]
  _QWORD v69[2]; // [rsp+20h] [rbp-98h] BYREF
  void *v70[2]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v71; // [rsp+40h] [rbp-78h]
  void *v72; // [rsp+50h] [rbp-68h]
  __int64 v73; // [rsp+60h] [rbp-58h] BYREF
  __int16 v74; // [rsp+70h] [rbp-48h]

  v4 = *(__int64 **)(*(_QWORD *)(a1 + 24) + 8LL);
  LODWORD(v70[0]) = 2222;
  v65 = v4;
  v5 = sub_21B6DA0(a2, v70, 1);
  v6 = *(_QWORD *)(a2 + 8);
  v7 = (_QWORD *)(v6 + 8LL * (unsigned int)v5);
  v8 = (_QWORD *)(v6 + 8 * HIDWORD(v5));
  if ( v7 != v8 )
  {
    while ( !*v7 || !(unsigned __int8)sub_21B9810(*v7, 2222) )
    {
      if ( v8 == ++v7 )
        goto LABEL_5;
    }
    if ( v8 != v7 )
    {
      do
      {
        v16 = *v7;
        v17 = *(_QWORD *)(*v7 + 16LL);
        if ( !v17 )
          v17 = *v7;
        ++v7;
        *(_BYTE *)(v17 + 44) |= 1u;
        if ( v7 == v8 )
          break;
        while ( !*v7 || !(unsigned __int8)sub_21B9810(*v7, 2222) )
        {
          if ( v8 == ++v7 )
            goto LABEL_18;
        }
      }
      while ( v8 != v7 );
LABEL_18:
      v18 = *(void ***)(v16 + 48);
      v19 = *v18;
      if ( *v18 )
      {
        src = *v18;
        v20 = strlen((const char *)src);
        v19 = src;
        v21 = v20;
        if ( v20 == 5 && *(_DWORD *)src == 875982956 && *((_BYTE *)src + 4) == 100 )
          goto LABEL_5;
      }
      else
      {
        v21 = 0;
      }
      src = v19;
      sub_FC70B0((__int64)v70, *v65, 0, 323);
      v28 = (unsigned __int8 *)v70[0];
      v29 = (__int64 *)src;
      if ( !v70[0] )
      {
        v51 = v70[1];
        v52 = *((_DWORD *)v70[1] + 3744);
        if ( v52 )
        {
          v53 = (unsigned int)(v52 - 1);
          *((_DWORD *)v70[1] + 3744) = v53;
          v28 = (unsigned __int8 *)v51[v53 + 1856];
          v54 = *((unsigned int *)v28 + 134);
          *v28 = 0;
          v55 = *((char **)v28 + 66);
          *((_DWORD *)v28 + 106) = 0;
          v56 = &v55[64 * v54];
          while ( v55 != v56 )
          {
            while ( 1 )
            {
              v56 -= 64;
              v57 = *((char **)v56 + 3);
              if ( v57 == v56 + 40 )
                break;
              src = v55;
              v65 = v29;
              operator delete(v57);
              v55 = (char *)src;
              v29 = v65;
              if ( src == v56 )
                goto LABEL_96;
            }
          }
LABEL_96:
          *((_DWORD *)v28 + 134) = 0;
        }
        else
        {
          v65 = (__int64 *)src;
          v28 = (unsigned __int8 *)operator new(0x3A0u);
          *v28 = 0;
          *((_QWORD *)v28 + 12) = v28 + 112;
          *((_QWORD *)v28 + 16) = v28 + 144;
          *((_QWORD *)v28 + 20) = v28 + 176;
          *((_QWORD *)v28 + 24) = v28 + 208;
          *((_QWORD *)v28 + 28) = v28 + 240;
          *((_QWORD *)v28 + 32) = v28 + 272;
          *((_QWORD *)v28 + 36) = v28 + 304;
          *((_QWORD *)v28 + 40) = v28 + 336;
          *((_QWORD *)v28 + 44) = v28 + 368;
          *((_QWORD *)v28 + 48) = v28 + 400;
          *((_QWORD *)v28 + 52) = v28 + 432;
          *((_QWORD *)v28 + 13) = 0;
          v28[112] = 0;
          *((_QWORD *)v28 + 17) = 0;
          v28[144] = 0;
          *((_QWORD *)v28 + 21) = 0;
          v28[176] = 0;
          *((_QWORD *)v28 + 25) = 0;
          v28[208] = 0;
          *((_QWORD *)v28 + 29) = 0;
          v28[240] = 0;
          *((_QWORD *)v28 + 33) = 0;
          v28[272] = 0;
          *((_QWORD *)v28 + 37) = 0;
          v28[304] = 0;
          *((_QWORD *)v28 + 41) = 0;
          v28[336] = 0;
          *((_QWORD *)v28 + 45) = 0;
          v28[368] = 0;
          *((_QWORD *)v28 + 49) = 0;
          v28[400] = 0;
          *((_QWORD *)v28 + 53) = 0x800000000LL;
          v29 = v65;
          *((_QWORD *)v28 + 66) = v28 + 544;
          *((_QWORD *)v28 + 67) = 0x600000000LL;
        }
        v70[0] = v28;
      }
      v28[*v28 + 1] = 1;
      v30 = v70[0];
      v31 = *(unsigned __int8 *)v70[0];
      *(_BYTE *)v70[0] = v31 + 1;
      v30[v31 + 2] = "-mabi";
      v32 = (unsigned __int8 *)v70[0];
      if ( !v70[0] )
      {
        v58 = v70[1];
        v59 = *((_DWORD *)v70[1] + 3744);
        if ( v59 )
        {
          v60 = (unsigned int)(v59 - 1);
          *((_DWORD *)v70[1] + 3744) = v60;
          v32 = (unsigned __int8 *)v58[v60 + 1856];
          v61 = *((unsigned int *)v32 + 134);
          *v32 = 0;
          v62 = *((char **)v32 + 66);
          *((_DWORD *)v32 + 106) = 0;
          v63 = &v62[64 * v61];
          while ( v62 != v63 )
          {
            while ( 1 )
            {
              v63 -= 64;
              v64 = *((char **)v63 + 3);
              if ( v64 == v63 + 40 )
                break;
              src = v62;
              v65 = v29;
              operator delete(v64);
              v62 = (char *)src;
              v29 = v65;
              if ( src == v63 )
                goto LABEL_102;
            }
          }
LABEL_102:
          *((_DWORD *)v32 + 134) = 0;
        }
        else
        {
          v65 = v29;
          v32 = (unsigned __int8 *)operator new(0x3A0u);
          *v32 = 0;
          *((_QWORD *)v32 + 12) = v32 + 112;
          *((_QWORD *)v32 + 16) = v32 + 144;
          *((_QWORD *)v32 + 20) = v32 + 176;
          *((_QWORD *)v32 + 24) = v32 + 208;
          *((_QWORD *)v32 + 28) = v32 + 240;
          *((_QWORD *)v32 + 32) = v32 + 272;
          *((_QWORD *)v32 + 36) = v32 + 304;
          *((_QWORD *)v32 + 40) = v32 + 336;
          *((_QWORD *)v32 + 44) = v32 + 368;
          *((_QWORD *)v32 + 48) = v32 + 400;
          *((_QWORD *)v32 + 52) = v32 + 432;
          *((_QWORD *)v32 + 13) = 0;
          v32[112] = 0;
          *((_QWORD *)v32 + 17) = 0;
          v32[144] = 0;
          *((_QWORD *)v32 + 21) = 0;
          v32[176] = 0;
          *((_QWORD *)v32 + 25) = 0;
          v32[208] = 0;
          *((_QWORD *)v32 + 29) = 0;
          v32[240] = 0;
          *((_QWORD *)v32 + 33) = 0;
          v32[272] = 0;
          *((_QWORD *)v32 + 37) = 0;
          v32[304] = 0;
          *((_QWORD *)v32 + 41) = 0;
          v32[336] = 0;
          *((_QWORD *)v32 + 45) = 0;
          v32[368] = 0;
          *((_QWORD *)v32 + 49) = 0;
          v32[400] = 0;
          *((_QWORD *)v32 + 53) = 0x800000000LL;
          v29 = v65;
          *((_QWORD *)v32 + 66) = v32 + 544;
          *((_QWORD *)v32 + 67) = 0x600000000LL;
        }
        v70[0] = v32;
      }
      v32[*v32 + 1] = 0;
      v67 = v69;
      if ( (__int64 *)((char *)v29 + v21) && !v29 )
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      if ( v21 > 0xF )
      {
        v65 = v29;
        v33 = (_QWORD *)operator new(v21 + 1);
        v69[0] = v21;
        v29 = v65;
        v67 = v33;
      }
      else
      {
        if ( v21 == 1 )
        {
          LOBYTE(v69[0]) = *(_BYTE *)v29;
          v33 = v69;
          goto LABEL_49;
        }
        v33 = v69;
        if ( !v21 )
        {
LABEL_49:
          n = v21;
          *((_BYTE *)v33 + v21) = 0;
          v34 = v70[0];
          v35 = *(unsigned __int8 *)v70[0];
          *(_BYTE *)v70[0] = v35 + 1;
          v36 = (unsigned __int8)v35;
          v37 = 4 * (v35 + 3);
          v38 = (void **)&v34[v37];
          v39 = (_BYTE *)v34[v37];
          if ( v67 == v69 )
          {
            v49 = n;
            if ( n )
            {
              if ( n == 1 )
                *v39 = v69[0];
              else
                memcpy(v39, v67, n);
              v49 = n;
              v39 = *v38;
            }
            v38[1] = (void *)v49;
            v39[v49] = 0;
            v39 = v67;
          }
          else
          {
            if ( v39 == (_BYTE *)&v34[v37 + 2] )
            {
              *v38 = v67;
              v38[1] = (void *)n;
              v38[2] = (void *)v69[0];
            }
            else
            {
              v40 = v34[4 * v36 + 14];
              *v38 = v67;
              v38[1] = (void *)n;
              v38[2] = (void *)v69[0];
              if ( v39 )
              {
                v67 = v39;
                v69[0] = v40;
                goto LABEL_53;
              }
            }
            v39 = v69;
            v67 = v69;
          }
LABEL_53:
          n = 0;
          *v39 = 0;
          if ( v67 != v69 )
            operator delete(v67);
          if ( (_BYTE)v74 )
          {
            sub_FC7790(v71, (__int64 *)v70, SHIBYTE(v74));
            v71 = 0;
            v74 = 0;
          }
          if ( v72 != &v73 )
            operator delete(v72);
          v41 = (void **)v70[0];
          if ( v70[0] )
          {
            v42 = v70[1];
            if ( v70[1] )
            {
              if ( v70[0] < v70[1] || v70[0] > (char *)v70[1] + 14848 )
              {
                v43 = *((void ***)v70[0] + 66);
                v44 = &v43[8 * (unsigned __int64)*((unsigned int *)v70[0] + 134)];
                if ( v43 != v44 )
                {
                  do
                  {
                    while ( 1 )
                    {
                      v44 -= 8;
                      v45 = (void **)v44[3];
                      if ( v45 == v44 + 5 )
                        break;
                      operator delete(v45);
                      if ( v43 == v44 )
                        goto LABEL_65;
                    }
                  }
                  while ( v43 != v44 );
LABEL_65:
                  v44 = (void **)v41[66];
                }
                if ( v44 != v41 + 68 )
                  free(v44);
                v46 = (void **)v41[52];
                if ( v46 != v41 + 54 )
                  free(v46);
                v47 = v41 + 48;
                v48 = v41 + 8;
                do
                {
                  while ( *v47 != v47 + 2 )
                  {
                    operator delete(*v47);
                    v47 -= 4;
                    if ( v47 == v48 )
                      goto LABEL_73;
                  }
                  v47 -= 4;
                }
                while ( v47 != v48 );
LABEL_73:
                operator delete(v41, 0x3A0u);
              }
              else
              {
                v50 = *((unsigned int *)v70[1] + 3744);
                *((_DWORD *)v70[1] + 3744) = v50 + 1;
                v42[v50 + 1856] = v41;
              }
            }
          }
          goto LABEL_5;
        }
      }
      memcpy(v33, v29, v21);
      v33 = v67;
      goto LABEL_49;
    }
  }
LABEL_5:
  v70[0] = (void *)0x9DD000008CELL;
  v9 = sub_21B6DA0(a2, v70, 2);
  v10 = *(_QWORD *)(a2 + 8);
  v71 = 0x9DD000008CELL;
  v11 = (unsigned int)v9;
  result = HIDWORD(v9);
  v13 = (__int64 *)(v10 + 8 * v11);
  v14 = (__int64 *)(v10 + 8 * result);
  v65 = v14;
  *(__m128 *)v70 = _mm_loadh_ps((const double *)&v65);
  if ( v13 != v14 )
  {
    while ( 1 )
    {
      v15 = *v13;
      if ( *v13 )
      {
        if ( (unsigned __int8)sub_21B9810(*v13, 2254) )
          break;
        result = sub_21B9810(v15, 2525);
        if ( (_BYTE)result )
          break;
      }
      v70[0] = ++v13;
      if ( v14 == v13 )
        return result;
    }
    result = 0x9DD000008CELL;
    v65 = v14;
    v71 = 0x9DD000008CELL;
    *(__m128 *)v70 = _mm_loadh_ps((const double *)&v65);
    if ( v14 != v13 )
    {
      do
      {
        v22 = *v13;
        v23 = *(_QWORD *)(*v13 + 16);
        if ( !v23 )
          v23 = *v13;
        v24 = v13 + 1;
        *(_BYTE *)(v23 + 44) |= 1u;
        v70[0] = v24;
        if ( v24 == v14 )
          break;
        while ( 1 )
        {
          v25 = *v24;
          if ( *v24 )
          {
            if ( (unsigned __int8)sub_21B9810(*v24, 2254) || (unsigned __int8)sub_21B9810(v25, 2525) )
              break;
          }
          v70[0] = ++v24;
          if ( v14 == v24 )
            goto LABEL_33;
        }
        v13 = (__int64 *)v70[0];
      }
      while ( v14 != v70[0] );
LABEL_33:
      result = sub_21B9810(v22, 2254);
      if ( (_BYTE)result )
      {
        v26 = *(unsigned int *)(a3 + 8);
        if ( v26 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
        {
          sub_2237220(a3, a3 + 16, v26 + 1, 8);
          v26 = *(unsigned int *)(a3 + 8);
        }
        *(_QWORD *)(*(_QWORD *)a3 + 8 * v26) = "-mllvm";
        v27 = *(unsigned int *)(a3 + 12);
        result = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
        *(_DWORD *)(a3 + 8) = result;
        if ( result + 1 > v27 )
        {
          sub_2237220(a3, a3 + 16, result + 1, 8);
          result = *(unsigned int *)(a3 + 8);
        }
        *(_QWORD *)(*(_QWORD *)a3 + 8 * result) = "-loongarch-annotate-tablejump";
        ++*(_DWORD *)(a3 + 8);
      }
    }
  }
  return result;
}
