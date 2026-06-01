__int64 __fastcall sub_113B1C0(__int64 *a1, __int64 a2)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rbx
  _QWORD *v6; // r12
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rbx
  _QWORD *v10; // rbp
  __int64 v11; // r12
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rbx
  _QWORD *v17; // r12
  __int64 v18; // r15
  unsigned __int8 *v19; // r12
  _BYTE *v20; // rsi
  __int64 v21; // rdx
  _QWORD *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  void **v26; // r12
  _BYTE *v27; // rdi
  __int64 v28; // rax
  void **v29; // r12
  _QWORD *v30; // rax
  void **v31; // r14
  void **v32; // rbx
  void **v33; // rdi
  void **v34; // rdi
  void **v35; // rbx
  void **v36; // r14
  __int64 v37; // r13
  __int64 v38; // rax
  _QWORD *v39; // rbx
  __int64 v40; // r12
  __int64 v41; // rax
  size_t v42; // rdx
  _QWORD *v43; // rcx
  int v44; // eax
  __int64 v45; // rax
  __int64 v46; // r15
  __int64 v47; // rcx
  __int64 v48; // r15
  void *v49; // rdi
  __int64 v50; // rdx
  _BYTE *v51; // [rsp+8h] [rbp-E0h] BYREF
  __int64 v52; // [rsp+10h] [rbp-D8h]
  __int64 v53; // [rsp+18h] [rbp-D0h]
  void *v54; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v55; // [rsp+28h] [rbp-C0h]
  __int64 v56; // [rsp+30h] [rbp-B8h] BYREF
  void *src; // [rsp+40h] [rbp-A8h] BYREF
  size_t n; // [rsp+48h] [rbp-A0h]
  _QWORD v59[2]; // [rsp+50h] [rbp-98h] BYREF
  void *v60[2]; // [rsp+60h] [rbp-88h] BYREF
  __int64 v61; // [rsp+70h] [rbp-78h]
  void *v62; // [rsp+80h] [rbp-68h]
  __int64 v63; // [rsp+90h] [rbp-58h] BYREF
  __int16 v64; // [rsp+A0h] [rbp-48h]

  LODWORD(v60[0]) = 2371;
  v3 = sub_2193060(a2, v60, 1);
  v4 = *(_QWORD *)(a2 + 8);
  v5 = (_QWORD *)(v4 + 8LL * (unsigned int)v3);
  v6 = (_QWORD *)(v4 + 8 * HIDWORD(v3));
  if ( v5 != v6 )
  {
    while ( !*v5 || !(unsigned __int8)sub_2195AD0(*v5, 2371) )
    {
      if ( v6 == ++v5 )
        goto LABEL_5;
    }
    if ( v6 != v5 )
    {
      do
      {
        v13 = *v5;
        if ( *(_QWORD *)(*v5 + 16LL) )
          v13 = *(_QWORD *)(*v5 + 16LL);
        ++v5;
        *(_BYTE *)(v13 + 44) |= 1u;
        if ( v5 == v6 )
          break;
        while ( !*v5 || !(unsigned __int8)sub_2195AD0(*v5, 2371) )
        {
          if ( v6 == ++v5 )
            goto LABEL_18;
        }
      }
      while ( v6 != v5 );
LABEL_18:
      sub_FA3370((__int64)v60, *a1, 0, 493);
      LODWORD(src) = 2371;
      v14 = sub_2193060(a2, &src, 1);
      v15 = *(_QWORD *)(a2 + 8);
      v16 = (_QWORD *)(v15 + 8LL * (unsigned int)v14);
      v17 = (_QWORD *)(v15 + 8 * HIDWORD(v14));
      if ( v16 == v17 )
        goto LABEL_22;
      while ( !*v16 || !(unsigned __int8)sub_2195AD0(*v16, 2371) )
      {
        if ( v17 == ++v16 )
          goto LABEL_22;
      }
      if ( v16 == v17 )
      {
LABEL_22:
        v18 = 0;
      }
      else
      {
        do
        {
          v18 = *v16;
          v41 = *(_QWORD *)(*v16 + 16LL);
          if ( !v41 )
            v41 = *v16;
          ++v16;
          *(_BYTE *)(v41 + 44) |= 1u;
          if ( v16 == v17 )
            break;
          while ( !*v16 || !(unsigned __int8)sub_2195AD0(*v16, 2371) )
          {
            if ( v17 == ++v16 )
              goto LABEL_23;
          }
        }
        while ( v16 != v17 );
      }
LABEL_23:
      sub_21922B0(&v54, v18, a2);
      v19 = (unsigned __int8 *)v60[0];
      v20 = v54;
      v21 = v55;
      if ( !v60[0] )
      {
        v43 = v60[1];
        v44 = *((_DWORD *)v60[1] + 3744);
        if ( v44 )
        {
          v45 = (unsigned int)(v44 - 1);
          *((_DWORD *)v60[1] + 3744) = v45;
          v19 = (unsigned __int8 *)v43[v45 + 1856];
          v46 = *((unsigned int *)v19 + 134);
          v47 = *((_QWORD *)v19 + 66);
          *v19 = 0;
          *((_DWORD *)v19 + 106) = 0;
          v48 = v47 + (v46 << 6);
          while ( v47 != v48 )
          {
            while ( 1 )
            {
              v48 -= 64;
              v49 = *(void **)(v48 + 24);
              if ( v49 == (void *)(v48 + 40) )
                break;
              v53 = v47;
              v52 = v21;
              v51 = v20;
              operator delete(v49);
              v47 = v53;
              v21 = v52;
              if ( v53 == v48 )
                goto LABEL_91;
            }
          }
LABEL_91:
          *((_DWORD *)v19 + 134) = 0;
        }
        else
        {
          v52 = v55;
          v51 = v54;
          v19 = (unsigned __int8 *)operator new(0x3A0u);
          *v19 = 0;
          *((_QWORD *)v19 + 12) = v19 + 112;
          *((_QWORD *)v19 + 16) = v19 + 144;
          *((_QWORD *)v19 + 20) = v19 + 176;
          *((_QWORD *)v19 + 24) = v19 + 208;
          *((_QWORD *)v19 + 28) = v19 + 240;
          *((_QWORD *)v19 + 32) = v19 + 272;
          *((_QWORD *)v19 + 36) = v19 + 304;
          *((_QWORD *)v19 + 40) = v19 + 336;
          *((_QWORD *)v19 + 44) = v19 + 368;
          *((_QWORD *)v19 + 48) = v19 + 400;
          *((_QWORD *)v19 + 52) = v19 + 432;
          *((_QWORD *)v19 + 13) = 0;
          v19[112] = 0;
          *((_QWORD *)v19 + 17) = 0;
          v19[144] = 0;
          *((_QWORD *)v19 + 21) = 0;
          v19[176] = 0;
          *((_QWORD *)v19 + 25) = 0;
          v19[208] = 0;
          *((_QWORD *)v19 + 29) = 0;
          v19[240] = 0;
          *((_QWORD *)v19 + 33) = 0;
          v19[272] = 0;
          *((_QWORD *)v19 + 37) = 0;
          v19[304] = 0;
          *((_QWORD *)v19 + 41) = 0;
          v19[336] = 0;
          *((_QWORD *)v19 + 45) = 0;
          v19[368] = 0;
          *((_QWORD *)v19 + 49) = 0;
          v19[400] = 0;
          *((_QWORD *)v19 + 53) = 0x800000000LL;
          v20 = v51;
          *((_QWORD *)v19 + 66) = v19 + 544;
          v21 = v52;
          *((_QWORD *)v19 + 67) = 0x600000000LL;
        }
        v60[0] = v19;
      }
      v19[*v19 + 1] = 0;
      src = v59;
      sub_113B100(&src, v20, (__int64)&v20[v21]);
      v22 = v60[0];
      v23 = *(unsigned __int8 *)v60[0];
      *(_BYTE *)v60[0] = v23 + 1;
      v24 = (unsigned __int8)v23;
      v25 = 4 * (v23 + 3);
      v26 = (void **)&v22[v25];
      v27 = (_BYTE *)v22[v25];
      if ( src == v59 )
      {
        v42 = n;
        if ( n )
        {
          if ( n == 1 )
            *v27 = v59[0];
          else
            memcpy(v27, src, n);
          v42 = n;
          v27 = *v26;
        }
        v26[1] = (void *)v42;
        v27[v42] = 0;
        v27 = src;
      }
      else
      {
        if ( v27 == (_BYTE *)&v22[v25 + 2] )
        {
          *v26 = src;
          v26[1] = (void *)n;
          v26[2] = (void *)v59[0];
        }
        else
        {
          v28 = v22[4 * v24 + 14];
          *v26 = src;
          v26[1] = (void *)n;
          v26[2] = (void *)v59[0];
          if ( v27 )
          {
            src = v27;
            v59[0] = v28;
            goto LABEL_28;
          }
        }
        v27 = v59;
        src = v59;
      }
LABEL_28:
      n = 0;
      *v27 = 0;
      if ( src != v59 )
        operator delete(src);
      if ( v54 != &v56 )
        operator delete(v54);
      if ( (_BYTE)v64 )
      {
        sub_FA3A50(v61, (__int64)v60, SHIBYTE(v64));
        v61 = 0;
        v64 = 0;
      }
      if ( v62 != &v63 )
        operator delete(v62);
      v29 = (void **)v60[0];
      if ( v60[0] )
      {
        v30 = v60[1];
        if ( v60[1] )
        {
          if ( v60[0] >= v60[1] && v60[0] <= (char *)v60[1] + 14848 )
          {
            v50 = *((unsigned int *)v60[1] + 3744);
            *((_DWORD *)v60[1] + 3744) = v50 + 1;
            v30[v50 + 1856] = v29;
          }
          else
          {
            v31 = *((void ***)v60[0] + 66);
            v32 = &v31[8 * (unsigned __int64)*((unsigned int *)v60[0] + 134)];
            if ( v31 != v32 )
            {
              do
              {
                while ( 1 )
                {
                  v32 -= 8;
                  v33 = (void **)v32[3];
                  if ( v33 == v32 + 5 )
                    break;
                  operator delete(v33);
                  if ( v31 == v32 )
                    goto LABEL_43;
                }
              }
              while ( v31 != v32 );
LABEL_43:
              v32 = (void **)v29[66];
            }
            if ( v32 != v29 + 68 )
              free(v32);
            v34 = (void **)v29[52];
            if ( v34 != v29 + 54 )
              free(v34);
            v35 = v29 + 48;
            v36 = v29 + 8;
            do
            {
              while ( *v35 != v35 + 2 )
              {
                operator delete(*v35);
                v35 -= 4;
                if ( v35 == v36 )
                  goto LABEL_51;
              }
              v35 -= 4;
            }
            while ( v36 != v35 );
LABEL_51:
            operator delete(v29, 0x3A0u);
          }
        }
      }
    }
  }
LABEL_5:
  v60[0] = (void *)0x96200000B3ALL;
  v7 = sub_2193060(a2, v60, 2);
  v8 = *(_QWORD *)(a2 + 8);
  v61 = 0x96200000B3ALL;
  v9 = (_QWORD *)(v8 + 8LL * (unsigned int)v7);
  v10 = (_QWORD *)(v8 + 8 * HIDWORD(v7));
  v51 = v10;
  *(__m128 *)v60 = _mm_loadh_ps((const double *)&v51);
  if ( v9 == v10 )
    return 1;
  while ( 1 )
  {
    v11 = *v9;
    if ( *v9 )
    {
      if ( (unsigned __int8)sub_2195AD0(*v9, 2874) || (unsigned __int8)sub_2195AD0(v11, 2402) )
        break;
    }
    v60[0] = ++v9;
    if ( v10 == v9 )
      return 1;
  }
  v51 = v10;
  v61 = 0x96200000B3ALL;
  *(__m128 *)v60 = _mm_loadh_ps((const double *)&v51);
  if ( v10 == v9 )
    return 1;
  do
  {
    v37 = *v9;
    v38 = *(_QWORD *)(*v9 + 16LL);
    if ( !v38 )
      v38 = *v9;
    v39 = v9 + 1;
    *(_BYTE *)(v38 + 44) |= 1u;
    v60[0] = v39;
    if ( v39 == v10 )
      break;
    while ( 1 )
    {
      v40 = *v39;
      if ( *v39 )
      {
        if ( (unsigned __int8)sub_2195AD0(*v39, 2874) || (unsigned __int8)sub_2195AD0(v40, 2402) )
          break;
      }
      v60[0] = ++v39;
      if ( v10 == v39 )
        return (unsigned __int8)sub_2195AD0(v37, 2874) ^ 1u;
    }
    v9 = v60[0];
  }
  while ( v60[0] != v10 );
  return (unsigned __int8)sub_2195AD0(v37, 2874) ^ 1u;
}

