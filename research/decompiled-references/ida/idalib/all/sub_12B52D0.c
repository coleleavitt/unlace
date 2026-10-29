_UNKNOWN *__ptr32 *__fastcall sub_12B52D0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v7; // rbx
  __int64 v8; // rsi
  unsigned __int64 v9; // rbp
  __int64 v10; // rax
  _QWORD *v11; // rbx
  void *v12; // rax
  _BYTE *v13; // r12
  signed __int64 v14; // rbp
  unsigned int *v15; // rbp
  unsigned int v16; // ebx
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  char *v19; // r13
  char *v20; // r15
  _UNKNOWN *__ptr32 *result; // rax
  __int64 v22; // r12
  __int64 v23; // rax
  _BYTE *v24; // rsi
  void *v25; // r15
  unsigned __int8 *v26; // r12
  _QWORD *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  void **v31; // r12
  _BYTE *v32; // rdi
  __int64 v33; // rax
  unsigned __int8 *v34; // r12
  _BYTE *v35; // rsi
  __int64 v36; // rdx
  _QWORD *v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  void **v41; // r12
  _BYTE *v42; // rdi
  __int64 v43; // rax
  void **v44; // rbx
  unsigned __int64 v45; // rax
  void **v46; // r15
  void **v47; // r12
  void **v48; // rdi
  void **v49; // rdi
  void **v50; // r15
  void **v51; // r12
  size_t v52; // rdx
  size_t v53; // rdx
  __int64 v54; // rdx
  unsigned __int64 v55; // rcx
  int v56; // eax
  unsigned __int64 v57; // rdx
  int v58; // eax
  __int64 v59; // rax
  __int64 v60; // r15
  __int64 v61; // rax
  __int64 v62; // r15
  __int64 v63; // r13
  unsigned int *v64; // r14
  __int64 v65; // rbp
  void *v66; // rdi
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rax
  __int64 v71; // r13
  __int64 v72; // rbx
  void *v73; // rdi
  unsigned __int64 v74; // rdx
  __int64 v75; // rdi
  unsigned __int64 v76; // rbp
  _BYTE *v77; // [rsp+20h] [rbp-E8h]
  __int64 v78; // [rsp+20h] [rbp-E8h]
  __int64 v81; // [rsp+38h] [rbp-D0h]
  void *v82[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v83; // [rsp+50h] [rbp-B8h] BYREF
  void *v84; // [rsp+60h] [rbp-A8h] BYREF
  size_t n; // [rsp+68h] [rbp-A0h]
  _QWORD v86[2]; // [rsp+70h] [rbp-98h] BYREF
  void *v87; // [rsp+80h] [rbp-88h] BYREF
  unsigned __int64 v88; // [rsp+88h] [rbp-80h]
  __int64 v89; // [rsp+90h] [rbp-78h]
  void *v90; // [rsp+A0h] [rbp-68h]
  __int64 v91; // [rsp+B0h] [rbp-58h] BYREF
  __int16 v92; // [rsp+C0h] [rbp-48h]

  v5 = a5;
  sub_1134980(a1, (__int64)a2, a3, a5);
  *(_QWORD *)(a1 + 2384) = a4;
  v7 = *(unsigned int *)(a1 + 1160);
  *(_QWORD *)a1 = &off_2C40A08;
  v8 = v7 + 1;
  v9 = *(_QWORD *)(a1 + 8) + 104LL;
  if ( v7 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 1164) )
  {
    v74 = *(_QWORD *)(a1 + 1152);
    v75 = a1 + 1152;
    if ( v74 > v9 || v9 >= v74 + 32 * v7 )
    {
      sub_A8C1F0(v75, v8);
      v10 = *(_QWORD *)(a1 + 1152);
      v7 = *(unsigned int *)(a1 + 1160);
    }
    else
    {
      v76 = v9 - v74;
      sub_A8C1F0(v75, v8);
      v10 = *(_QWORD *)(a1 + 1152);
      v7 = *(unsigned int *)(a1 + 1160);
      v9 = v10 + v76;
    }
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 1152);
  }
  v11 = (_QWORD *)(v10 + 32 * v7);
  v12 = v11 + 2;
  *v11 = v11 + 2;
  v13 = *(_BYTE **)v9;
  v14 = *(_QWORD *)(v9 + 8);
  if ( &v13[v14] && !v13 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)v14 > 0xF )
  {
    if ( v14 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v12 = (void *)operator new(v14 + 1);
    v11[2] = v14;
    *v11 = v12;
    goto LABEL_113;
  }
  if ( v14 != 1 )
  {
    if ( !v14 )
      goto LABEL_8;
LABEL_113:
    memcpy(v12, v13, v14);
    v12 = (void *)*v11;
    goto LABEL_8;
  }
  *((_BYTE *)v11 + 16) = *v13;
LABEL_8:
  v11[1] = v14;
  *((_BYTE *)v12 + v14) = 0;
  v15 = (unsigned int *)&unk_2601260;
  ++*(_DWORD *)(a1 + 1160);
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v16 = *v15;
        LODWORD(v87) = *v15;
        v17 = sub_21B6DA0(v5, &v87, 1);
        v18 = *(_QWORD *)(v5 + 8);
        v19 = (char *)(v18 + 8LL * (unsigned int)v17);
        v20 = (char *)(v18 + 8 * HIDWORD(v17));
        if ( v19 == v20 )
          goto LABEL_14;
        if ( v16 )
        {
          while ( !*(_QWORD *)v19 || !(unsigned __int8)sub_21B9810(*(_QWORD *)v19, v16) )
          {
            v19 += 8;
            if ( v20 == v19 )
              goto LABEL_14;
          }
        }
        else
        {
          v19 += 8 * ((unsigned __int64)(v20 - 8 - v19) >> 3) + 8;
        }
        if ( v20 == v19 )
          goto LABEL_14;
        do
        {
          v22 = *(_QWORD *)v19;
          v23 = *(_QWORD *)(*(_QWORD *)v19 + 16LL);
          if ( !v23 )
            v23 = *(_QWORD *)v19;
          *(_BYTE *)(v23 + 44) |= 1u;
          if ( v19 + 8 == v20 )
            break;
          if ( v16 )
          {
            v19 += 8;
            while ( !*(_QWORD *)v19 || !(unsigned __int8)sub_21B9810(*(_QWORD *)v19, v16) )
            {
              v19 += 8;
              if ( v20 == v19 )
                goto LABEL_28;
            }
          }
          else
          {
            v19 += 8 * ((unsigned __int64)(v20 - 16 - v19) >> 3) + 16;
          }
        }
        while ( v20 != v19 );
LABEL_28:
        sub_FC70B0((__int64)&v87, *a2, 0, 609);
        sub_21B5FF0(v82, v22, v5);
        v24 = v82[0];
        v25 = v82[1];
        v26 = (unsigned __int8 *)v87;
        if ( !v87 )
        {
          v57 = v88;
          v58 = *(_DWORD *)(v88 + 14976);
          if ( v58 )
          {
            v67 = (unsigned int)(v58 - 1);
            *(_DWORD *)(v88 + 14976) = v67;
            v26 = *(unsigned __int8 **)(v57 + 8 * v67 + 14848);
            v68 = *((unsigned int *)v26 + 134);
            v69 = *((_QWORD *)v26 + 66);
            *v26 = 0;
            *((_DWORD *)v26 + 106) = 0;
            v70 = v69 + (v68 << 6);
            if ( v69 != v70 )
            {
              v71 = v70;
              v72 = v69;
              do
              {
                while ( 1 )
                {
                  v71 -= 64;
                  v73 = *(void **)(v71 + 24);
                  if ( v73 == (void *)(v71 + 40) )
                    break;
                  operator delete(v73);
                  if ( v72 == v71 )
                    goto LABEL_106;
                }
              }
              while ( v72 != v71 );
            }
LABEL_106:
            *((_DWORD *)v26 + 134) = 0;
          }
          else
          {
            v77 = v82[0];
            v26 = (unsigned __int8 *)operator new(0x3A0u);
            *v26 = 0;
            *((_QWORD *)v26 + 12) = v26 + 112;
            *((_QWORD *)v26 + 16) = v26 + 144;
            *((_QWORD *)v26 + 20) = v26 + 176;
            *((_QWORD *)v26 + 24) = v26 + 208;
            *((_QWORD *)v26 + 28) = v26 + 240;
            *((_QWORD *)v26 + 32) = v26 + 272;
            *((_QWORD *)v26 + 36) = v26 + 304;
            *((_QWORD *)v26 + 40) = v26 + 336;
            *((_QWORD *)v26 + 44) = v26 + 368;
            *((_QWORD *)v26 + 48) = v26 + 400;
            *((_QWORD *)v26 + 52) = v26 + 432;
            *((_QWORD *)v26 + 13) = 0;
            v26[112] = 0;
            *((_QWORD *)v26 + 17) = 0;
            v26[144] = 0;
            *((_QWORD *)v26 + 21) = 0;
            v26[176] = 0;
            *((_QWORD *)v26 + 25) = 0;
            v26[208] = 0;
            *((_QWORD *)v26 + 29) = 0;
            v26[240] = 0;
            *((_QWORD *)v26 + 33) = 0;
            v26[272] = 0;
            *((_QWORD *)v26 + 37) = 0;
            v26[304] = 0;
            *((_QWORD *)v26 + 41) = 0;
            v26[336] = 0;
            *((_QWORD *)v26 + 45) = 0;
            v26[368] = 0;
            *((_QWORD *)v26 + 49) = 0;
            v26[400] = 0;
            *((_QWORD *)v26 + 53) = 0x800000000LL;
            v24 = v77;
            *((_QWORD *)v26 + 66) = v26 + 544;
            *((_QWORD *)v26 + 67) = 0x600000000LL;
          }
          v87 = v26;
        }
        v26[*v26 + 1] = 0;
        v84 = v86;
        sub_12B4E50(&v84, v24, (__int64)v25 + (_QWORD)v24);
        v27 = v87;
        v28 = *(unsigned __int8 *)v87;
        *(_BYTE *)v87 = v28 + 1;
        v29 = (unsigned __int8)v28;
        v30 = 4 * (v28 + 3);
        v31 = (void **)&v27[v30];
        v32 = (_BYTE *)v27[v30];
        if ( v84 == v86 )
        {
          v53 = n;
          if ( n )
          {
            if ( n == 1 )
              *v32 = v86[0];
            else
              memcpy(v32, v86, n);
            v53 = n;
            v32 = *v31;
          }
          v31[1] = (void *)v53;
          v32[v53] = 0;
          v32 = v84;
        }
        else
        {
          if ( v32 == (_BYTE *)&v27[v30 + 2] )
          {
            *v31 = v84;
            v31[1] = (void *)n;
            v31[2] = (void *)v86[0];
          }
          else
          {
            v33 = v27[4 * v29 + 14];
            *v31 = v84;
            v31[1] = (void *)n;
            v31[2] = (void *)v86[0];
            if ( v32 )
            {
              v84 = v32;
              v86[0] = v33;
              goto LABEL_33;
            }
          }
          v84 = v86;
          v32 = v86;
        }
LABEL_33:
        n = 0;
        *v32 = 0;
        if ( v84 != v86 )
          operator delete(v84);
        v34 = (unsigned __int8 *)v87;
        v35 = *(_BYTE **)(a1 + 16);
        v36 = *(_QWORD *)(a1 + 24);
        if ( !v87 )
        {
          v55 = v88;
          v56 = *(_DWORD *)(v88 + 14976);
          if ( v56 )
          {
            v59 = (unsigned int)(v56 - 1);
            *(_DWORD *)(v88 + 14976) = v59;
            v34 = *(unsigned __int8 **)(v55 + 8 * v59 + 14848);
            v60 = *((unsigned int *)v34 + 134);
            v61 = *((_QWORD *)v34 + 66);
            *v34 = 0;
            *((_DWORD *)v34 + 106) = 0;
            v62 = v61 + (v60 << 6);
            if ( v61 != v62 )
            {
              v78 = v5;
              v63 = v61;
              v64 = v15;
              v65 = v36;
              do
              {
                while ( 1 )
                {
                  v62 -= 64;
                  v66 = *(void **)(v62 + 24);
                  if ( v66 == (void *)(v62 + 40) )
                    break;
                  operator delete(v66);
                  if ( v63 == v62 )
                    goto LABEL_98;
                }
              }
              while ( v63 != v62 );
LABEL_98:
              v36 = v65;
              v15 = v64;
              v5 = v78;
            }
            *((_DWORD *)v34 + 134) = 0;
          }
          else
          {
            v81 = *(_QWORD *)(a1 + 24);
            v34 = (unsigned __int8 *)operator new(0x3A0u);
            *v34 = 0;
            *((_QWORD *)v34 + 12) = v34 + 112;
            *((_QWORD *)v34 + 16) = v34 + 144;
            *((_QWORD *)v34 + 20) = v34 + 176;
            *((_QWORD *)v34 + 24) = v34 + 208;
            *((_QWORD *)v34 + 28) = v34 + 240;
            *((_QWORD *)v34 + 32) = v34 + 272;
            *((_QWORD *)v34 + 36) = v34 + 304;
            *((_QWORD *)v34 + 40) = v34 + 336;
            *((_QWORD *)v34 + 44) = v34 + 368;
            *((_QWORD *)v34 + 48) = v34 + 400;
            *((_QWORD *)v34 + 52) = v34 + 432;
            *((_QWORD *)v34 + 13) = 0;
            v34[112] = 0;
            *((_QWORD *)v34 + 17) = 0;
            v34[144] = 0;
            *((_QWORD *)v34 + 21) = 0;
            v34[176] = 0;
            *((_QWORD *)v34 + 25) = 0;
            v34[208] = 0;
            *((_QWORD *)v34 + 29) = 0;
            v34[240] = 0;
            *((_QWORD *)v34 + 33) = 0;
            v34[272] = 0;
            *((_QWORD *)v34 + 37) = 0;
            v34[304] = 0;
            *((_QWORD *)v34 + 41) = 0;
            v34[336] = 0;
            *((_QWORD *)v34 + 45) = 0;
            v34[368] = 0;
            *((_QWORD *)v34 + 49) = 0;
            v34[400] = 0;
            *((_QWORD *)v34 + 53) = 0x800000000LL;
            *((_QWORD *)v34 + 66) = v34 + 544;
            v36 = v81;
            *((_QWORD *)v34 + 67) = 0x600000000LL;
          }
          v87 = v34;
        }
        v34[*v34 + 1] = 0;
        v84 = v86;
        sub_12B4E50(&v84, v35, (__int64)&v35[v36]);
        v37 = v87;
        v38 = *(unsigned __int8 *)v87;
        *(_BYTE *)v87 = v38 + 1;
        v39 = (unsigned __int8)v38;
        v40 = 4 * (v38 + 3);
        v41 = (void **)&v37[v40];
        v42 = (_BYTE *)v37[v40];
        if ( v84 == v86 )
        {
          v52 = n;
          if ( n )
          {
            if ( n == 1 )
              *v42 = v86[0];
            else
              memcpy(v42, v86, n);
            v52 = n;
            v42 = *v41;
          }
          v41[1] = (void *)v52;
          v42[v52] = 0;
          v42 = v84;
        }
        else
        {
          if ( v42 == (_BYTE *)&v37[v40 + 2] )
          {
            *v41 = v84;
            v41[1] = (void *)n;
            v41[2] = (void *)v86[0];
          }
          else
          {
            v43 = v37[4 * v39 + 14];
            *v41 = v84;
            v41[1] = (void *)n;
            v41[2] = (void *)v86[0];
            if ( v42 )
            {
              v84 = v42;
              v86[0] = v43;
              goto LABEL_40;
            }
          }
          v84 = v86;
          v42 = v86;
        }
LABEL_40:
        n = 0;
        *v42 = 0;
        if ( v84 != v86 )
          operator delete(v84);
        if ( v82[0] != &v83 )
          operator delete(v82[0]);
        if ( (_BYTE)v92 )
        {
          sub_FC7790(v89, (__int64 *)&v87, SHIBYTE(v92));
          v89 = 0;
          v92 = 0;
        }
        if ( v90 != &v91 )
          operator delete(v90);
        v44 = (void **)v87;
        if ( v87 )
        {
          v45 = v88;
          if ( v88 )
            break;
        }
LABEL_14:
        ++v15;
        result = jpt_12CCBB5;
        if ( jpt_12CCBB5 == (_UNKNOWN *__ptr32 *)v15 )
          return result;
      }
      if ( (unsigned __int64)v87 < v88 || (unsigned __int64)v87 > v88 + 14848 )
        break;
      v54 = *(unsigned int *)(v88 + 14976);
      ++v15;
      *(_DWORD *)(v88 + 14976) = v54 + 1;
      *(_QWORD *)(v45 + 8 * v54 + 14848) = v44;
      result = jpt_12CCBB5;
      if ( jpt_12CCBB5 == (_UNKNOWN *__ptr32 *)v15 )
        return result;
    }
    v46 = *((void ***)v87 + 66);
    v47 = &v46[8 * (unsigned __int64)*((unsigned int *)v87 + 134)];
    if ( v46 != v47 )
    {
      do
      {
        while ( 1 )
        {
          v47 -= 8;
          v48 = (void **)v47[3];
          if ( v48 == v47 + 5 )
            break;
          operator delete(v48);
          if ( v46 == v47 )
            goto LABEL_54;
        }
      }
      while ( v46 != v47 );
LABEL_54:
      v47 = (void **)v44[66];
    }
    if ( v47 != v44 + 68 )
      free(v47);
    v49 = (void **)v44[52];
    if ( v49 != v44 + 54 )
      free(v49);
    v50 = v44 + 48;
    v51 = v44 + 8;
    do
    {
      while ( *v50 != v50 + 2 )
      {
        operator delete(*v50);
        v50 -= 4;
        if ( v51 == v50 )
          goto LABEL_62;
      }
      v50 -= 4;
    }
    while ( v51 != v50 );
LABEL_62:
    operator delete(v44, 0x3A0u);
    ++v15;
    result = jpt_12CCBB5;
  }
  while ( jpt_12CCBB5 != (_UNKNOWN *__ptr32 *)v15 );
  return result;
}
