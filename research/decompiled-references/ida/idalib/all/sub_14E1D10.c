__int64 __fastcall sub_14E1D10(__int64 a1, char a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r15
  char *v4; // r13
  __int64 v5; // r12
  __int64 v6; // r14
  int v7; // eax
  __int64 v8; // rbx
  char v10; // al
  char v11; // r13
  int v12; // edx
  unsigned __int64 v13; // rsi
  __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // r13
  int v17; // eax
  unsigned __int8 *v18; // rbx
  _QWORD *v19; // rdx
  __int64 v20; // rax
  unsigned __int8 *v21; // rbx
  _QWORD *v22; // rdx
  __int64 v23; // rax
  void **v24; // r12
  unsigned __int64 v25; // rax
  void **v26; // r13
  void **v27; // rbx
  void **v28; // rdi
  void **v29; // rdi
  void **v30; // rbx
  void **v31; // r13
  unsigned int v32; // r12d
  __int64 *v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rbx
  void *v36; // rsi
  void *v37; // rbx
  unsigned __int64 v38; // rdx
  int v39; // eax
  unsigned __int64 v40; // rdx
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // r13
  __int64 v45; // r14
  __int64 v46; // r13
  void *v47; // rdi
  __int64 v48; // rax
  __int64 v49; // r13
  __int64 v50; // r14
  __int64 v51; // r13
  void *v52; // rdi
  void *v53; // [rsp+18h] [rbp-128h] BYREF
  unsigned int v54; // [rsp+20h] [rbp-120h]
  char v55; // [rsp+24h] [rbp-11Ch]
  void *v56; // [rsp+28h] [rbp-118h] BYREF
  unsigned __int64 v57; // [rsp+30h] [rbp-110h]
  __int64 v58; // [rsp+38h] [rbp-108h]
  void *v59; // [rsp+48h] [rbp-F8h]
  __int64 v60; // [rsp+58h] [rbp-E8h] BYREF
  __int16 v61; // [rsp+68h] [rbp-D8h]
  __m128 v62[4]; // [rsp+78h] [rbp-C8h] BYREF
  void *ptr; // [rsp+C0h] [rbp-80h]
  _BYTE v64[104]; // [rsp+D8h] [rbp-68h] BYREF

  v2 = *(_QWORD **)(a1 + 80);
  v3 = v2[8];
  v4 = (char *)v2[7];
  v5 = v2[11];
  v6 = v2[6];
  v7 = sub_C07A10(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 92), v5, (__int64)v4, v3, nullptr, nullptr);
  sub_13E2260(v62, *(unsigned __int8 **)(a1 + 96), *(_QWORD *)(a1 + 104), v7, v5, v4, v3, v6);
  if ( (v64[32] & 1) != 0 )
  {
    v8 = 0;
    goto LABEL_3;
  }
  v54 = 32;
  v55 = 1;
  v53 = nullptr;
  v10 = sub_13E3040((__int64)v62, &v53);
  v11 = v55;
  if ( a2 )
  {
    v12 = v54;
    v13 = (unsigned __int64)v53;
    if ( v55 )
    {
      v14 = (__int64)v53;
      if ( v54 > 0x40 )
        goto LABEL_9;
    }
    else
    {
      if ( v54 > 0x40 )
      {
LABEL_9:
        v14 = *(_QWORD *)v53;
        goto LABEL_10;
      }
      if ( !v54 )
        goto LABEL_53;
      v14 = (__int64)((_QWORD)v53 << (64 - (unsigned __int8)v54)) >> (64 - (unsigned __int8)v54);
    }
LABEL_10:
    if ( v14 > 0x80000000LL )
    {
LABEL_11:
      v15 = *(_QWORD **)(a1 + 80);
      v16 = v15[6];
      v17 = sub_C07A10(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 92), v15[11], v15[7], v15[8], nullptr, nullptr);
      sub_FC70B0((__int64)&v56, v16, v17, 1689);
      v18 = (unsigned __int8 *)v56;
      if ( !v56 )
      {
        v40 = v57;
        v41 = *(_DWORD *)(v57 + 14976);
        if ( v41 )
        {
          v43 = (unsigned int)(v41 - 1);
          *(_DWORD *)(v57 + 14976) = v43;
          v18 = *(unsigned __int8 **)(v40 + 8 * v43 + 14848);
          v44 = *((unsigned int *)v18 + 134);
          *v18 = 0;
          v45 = *((_QWORD *)v18 + 66);
          *((_DWORD *)v18 + 106) = 0;
          v46 = v45 + (v44 << 6);
          while ( v45 != v46 )
          {
            while ( 1 )
            {
              v46 -= 64;
              v47 = *(void **)(v46 + 24);
              if ( v47 == (void *)(v46 + 40) )
                break;
              operator delete(v47);
              if ( v45 == v46 )
                goto LABEL_84;
            }
          }
LABEL_84:
          *((_DWORD *)v18 + 134) = 0;
        }
        else
        {
          v18 = (unsigned __int8 *)operator new(0x3A0u);
          *v18 = 0;
          *((_QWORD *)v18 + 12) = v18 + 112;
          *((_QWORD *)v18 + 16) = v18 + 144;
          *((_QWORD *)v18 + 20) = v18 + 176;
          *((_QWORD *)v18 + 24) = v18 + 208;
          *((_QWORD *)v18 + 28) = v18 + 240;
          *((_QWORD *)v18 + 32) = v18 + 272;
          *((_QWORD *)v18 + 36) = v18 + 304;
          *((_QWORD *)v18 + 40) = v18 + 336;
          *((_QWORD *)v18 + 44) = v18 + 368;
          *((_QWORD *)v18 + 48) = v18 + 400;
          *((_QWORD *)v18 + 52) = v18 + 432;
          *((_QWORD *)v18 + 13) = 0;
          v18[112] = 0;
          *((_QWORD *)v18 + 17) = 0;
          v18[144] = 0;
          *((_QWORD *)v18 + 21) = 0;
          v18[176] = 0;
          *((_QWORD *)v18 + 25) = 0;
          v18[208] = 0;
          *((_QWORD *)v18 + 29) = 0;
          v18[240] = 0;
          *((_QWORD *)v18 + 33) = 0;
          v18[272] = 0;
          *((_QWORD *)v18 + 37) = 0;
          v18[304] = 0;
          *((_QWORD *)v18 + 41) = 0;
          v18[336] = 0;
          *((_QWORD *)v18 + 45) = 0;
          v18[368] = 0;
          *((_QWORD *)v18 + 49) = 0;
          v18[400] = 0;
          *((_QWORD *)v18 + 53) = 0x800000000LL;
          *((_QWORD *)v18 + 66) = v18 + 544;
          *((_QWORD *)v18 + 67) = 0x600000000LL;
        }
        v56 = v18;
      }
      v18[*v18 + 1] = 2;
      v19 = v56;
      v20 = *(unsigned __int8 *)v56;
      *(_BYTE *)v56 = v20 + 1;
      v19[v20 + 2] = 0;
      v21 = (unsigned __int8 *)v56;
      if ( !v56 )
      {
        v38 = v57;
        v39 = *(_DWORD *)(v57 + 14976);
        if ( v39 )
        {
          v48 = (unsigned int)(v39 - 1);
          *(_DWORD *)(v57 + 14976) = v48;
          v21 = *(unsigned __int8 **)(v38 + 8 * v48 + 14848);
          v49 = *((unsigned int *)v21 + 134);
          *v21 = 0;
          v50 = *((_QWORD *)v21 + 66);
          *((_DWORD *)v21 + 106) = 0;
          v51 = v50 + (v49 << 6);
          while ( v50 != v51 )
          {
            while ( 1 )
            {
              v51 -= 64;
              v52 = *(void **)(v51 + 24);
              if ( v52 == (void *)(v51 + 40) )
                break;
              operator delete(v52);
              if ( v50 == v51 )
                goto LABEL_89;
            }
          }
LABEL_89:
          *((_DWORD *)v21 + 134) = 0;
        }
        else
        {
          v21 = (unsigned __int8 *)operator new(0x3A0u);
          *v21 = 0;
          *((_QWORD *)v21 + 12) = v21 + 112;
          *((_QWORD *)v21 + 16) = v21 + 144;
          *((_QWORD *)v21 + 20) = v21 + 176;
          *((_QWORD *)v21 + 24) = v21 + 208;
          *((_QWORD *)v21 + 28) = v21 + 240;
          *((_QWORD *)v21 + 32) = v21 + 272;
          *((_QWORD *)v21 + 36) = v21 + 304;
          *((_QWORD *)v21 + 40) = v21 + 336;
          *((_QWORD *)v21 + 44) = v21 + 368;
          *((_QWORD *)v21 + 48) = v21 + 400;
          *((_QWORD *)v21 + 52) = v21 + 432;
          *((_QWORD *)v21 + 13) = 0;
          v21[112] = 0;
          *((_QWORD *)v21 + 17) = 0;
          v21[144] = 0;
          *((_QWORD *)v21 + 21) = 0;
          v21[176] = 0;
          *((_QWORD *)v21 + 25) = 0;
          v21[208] = 0;
          *((_QWORD *)v21 + 29) = 0;
          v21[240] = 0;
          *((_QWORD *)v21 + 33) = 0;
          v21[272] = 0;
          *((_QWORD *)v21 + 37) = 0;
          v21[304] = 0;
          *((_QWORD *)v21 + 41) = 0;
          v21[336] = 0;
          *((_QWORD *)v21 + 45) = 0;
          v21[368] = 0;
          *((_QWORD *)v21 + 49) = 0;
          v21[400] = 0;
          *((_QWORD *)v21 + 53) = 0x800000000LL;
          *((_QWORD *)v21 + 66) = v21 + 544;
          *((_QWORD *)v21 + 67) = 0x600000000LL;
        }
        v56 = v21;
      }
      v21[*v21 + 1] = 2;
      v22 = v56;
      v23 = *(unsigned __int8 *)v56;
      *(_BYTE *)v56 = v23 + 1;
      v22[v23 + 2] = 1;
      if ( (_BYTE)v61 )
      {
        sub_FC7790(v58, (__int64 *)&v56, SHIBYTE(v61));
        v58 = 0;
        v61 = 0;
      }
      if ( v59 != &v60 )
        operator delete(v59);
      v24 = (void **)v56;
      if ( v56 )
      {
        v25 = v57;
        if ( v57 )
        {
          if ( (unsigned __int64)v56 >= v57 && (unsigned __int64)v56 <= v57 + 14848 )
          {
            v42 = *(unsigned int *)(v57 + 14976);
            *(_DWORD *)(v57 + 14976) = v42 + 1;
            *(_QWORD *)(v25 + 8 * v42 + 14848) = v24;
          }
          else
          {
            v26 = *((void ***)v56 + 66);
            v27 = &v26[8 * (unsigned __int64)*((unsigned int *)v56 + 134)];
            if ( v26 != v27 )
            {
              do
              {
                while ( 1 )
                {
                  v27 -= 8;
                  v28 = (void **)v27[3];
                  if ( v28 == v27 + 5 )
                    break;
                  operator delete(v28);
                  if ( v26 == v27 )
                    goto LABEL_24;
                }
              }
              while ( v26 != v27 );
LABEL_24:
              v27 = (void **)v24[66];
            }
            if ( v27 != v24 + 68 )
              free(v27);
            v29 = (void **)v24[52];
            if ( v29 != v24 + 54 )
              free(v29);
            v30 = v24 + 48;
            v31 = v24 + 8;
            do
            {
              while ( *v30 != v30 + 2 )
              {
                operator delete(*v30);
                v30 -= 4;
                if ( v31 == v30 )
                  goto LABEL_32;
              }
              v30 -= 4;
            }
            while ( v31 != v30 );
LABEL_32:
            operator delete(v24, 0x3A0u);
          }
        }
      }
      v8 = 0;
      v32 = v54;
      goto LABEL_44;
    }
LABEL_53:
    if ( v10 )
      goto LABEL_11;
    LODWORD(v57) = v54;
    if ( v54 > 0x40 )
    {
      sub_2205510(&v56);
      v12 = v57;
      if ( (unsigned int)v57 > 0x40 )
      {
        sub_2205FC0(&v56, &v53);
LABEL_58:
        sub_2205900(&v56);
        v32 = v57;
        v37 = v56;
        if ( v54 > 0x40 && v53 )
          operator delete[](v53);
        v53 = v37;
        v33 = (__int64 *)v37;
        v54 = v32;
        v55 = v11;
        goto LABEL_39;
      }
      v13 = (unsigned __int64)v56;
    }
    v36 = (void *)((0xFFFFFFFFFFFFFFFFLL >> -(char)v12) & ~v13);
    if ( !v12 )
      v36 = nullptr;
    v56 = v36;
    goto LABEL_58;
  }
  v32 = v54;
  v33 = (__int64 *)v53;
  if ( v55 )
  {
    v34 = (__int64)v53;
    if ( v54 > 0x40 )
      goto LABEL_36;
LABEL_37:
    if ( v34 > 0x7FFFFFFF )
      goto LABEL_11;
    goto LABEL_38;
  }
  if ( v54 > 0x40 )
  {
LABEL_36:
    v34 = *(_QWORD *)v53;
    goto LABEL_37;
  }
  if ( v54 )
  {
    v34 = (__int64)((_QWORD)v53 << (64 - (unsigned __int8)v54)) >> (64 - (unsigned __int8)v54);
    goto LABEL_37;
  }
LABEL_38:
  if ( v10 )
    goto LABEL_11;
LABEL_39:
  if ( v11 )
  {
    LODWORD(v35) = (_DWORD)v33;
    if ( v32 > 0x40 )
      v35 = *v33;
  }
  else if ( v32 > 0x40 )
  {
    LODWORD(v35) = *(_DWORD *)v33;
  }
  else
  {
    LODWORD(v35) = 0;
    if ( v32 )
      v35 = (__int64)((_QWORD)v33 << (64 - (unsigned __int8)v32)) >> (64 - (unsigned __int8)v32);
  }
  v8 = (unsigned int)v35 | 0x100000000LL;
LABEL_44:
  if ( v32 > 0x40 && v53 )
    operator delete[](v53);
LABEL_3:
  if ( ptr != v64 )
    free(ptr);
  return v8;
}
