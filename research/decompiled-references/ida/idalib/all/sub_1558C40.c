__int64 __fastcall sub_1558C40(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        _DWORD *a5,
        _DWORD *a6,
        __m128i a7,
        __m128 a8)
{
  __int64 v10; // rdx
  unsigned __int8 *v11; // rbx
  _QWORD *v12; // rdx
  __int64 v13; // rax
  void *v14; // rdi
  void **v15; // rbp
  unsigned __int64 v16; // rax
  void **v17; // r12
  void **v18; // rbx
  void **v19; // rdi
  void **v20; // rdi
  void **v21; // rbx
  void **v22; // r12
  unsigned int v23; // r12d
  int *v25; // r13
  __int16 v28; // ax
  int v29; // eax
  __int64 v30; // rdx
  __int16 v31; // ax
  unsigned __int8 *v32; // rbx
  _QWORD *v33; // rdx
  __int64 v34; // rax
  void **v35; // rbp
  unsigned __int64 v36; // rax
  __int64 v37; // r13
  __int64 v38; // rbx
  void *v39; // rdi
  void **v40; // rdi
  void **v41; // rdi
  void **v42; // rbx
  void **v43; // r13
  unsigned __int64 v44; // rdx
  int v45; // eax
  __int64 *v46; // rdi
  __int64 v47; // rax
  __int64 v48; // r12
  __int64 v49; // r13
  __int64 v50; // r12
  void *v51; // rdi
  __int64 v52; // rdx
  unsigned __int64 v53; // rdx
  int v54; // eax
  __int64 v55; // rax
  __int64 v56; // r13
  __int64 v57; // r14
  __int64 v58; // r13
  void *v59; // rdi
  void *v61; // [rsp+10h] [rbp-88h] BYREF
  unsigned __int64 v62; // [rsp+18h] [rbp-80h]
  __int64 v63; // [rsp+20h] [rbp-78h]
  void *v64; // [rsp+30h] [rbp-68h]
  _BYTE v65[16]; // [rsp+40h] [rbp-58h] BYREF
  __int16 v66; // [rsp+50h] [rbp-48h]

  v10 = *(unsigned int *)(a1 + 16);
  if ( *(_WORD *)(a1 + 32) != 47 )
  {
    sub_1564820(&v61, a1, v10, 1624);
    v11 = (unsigned __int8 *)v61;
    if ( !v61 )
    {
      v44 = v62;
      v45 = *(_DWORD *)(v62 + 14976);
      if ( v45 )
      {
        v47 = (unsigned int)(v45 - 1);
        *(_DWORD *)(v62 + 14976) = v47;
        v11 = *(unsigned __int8 **)(v44 + 8 * v47 + 14848);
        v48 = *((unsigned int *)v11 + 134);
        *v11 = 0;
        v49 = *((_QWORD *)v11 + 66);
        *((_DWORD *)v11 + 106) = 0;
        v50 = v49 + (v48 << 6);
        while ( v49 != v50 )
        {
          while ( 1 )
          {
            v50 -= 64;
            v51 = *(void **)(v50 + 24);
            if ( v51 == (void *)(v50 + 40) )
              break;
            operator delete(v51);
            if ( v49 == v50 )
              goto LABEL_65;
          }
        }
LABEL_65:
        *((_DWORD *)v11 + 134) = 0;
      }
      else
      {
        v11 = (unsigned __int8 *)operator new(0x3A0u);
        *v11 = 0;
        *((_QWORD *)v11 + 12) = v11 + 112;
        *((_QWORD *)v11 + 16) = v11 + 144;
        *((_QWORD *)v11 + 20) = v11 + 176;
        *((_QWORD *)v11 + 24) = v11 + 208;
        *((_QWORD *)v11 + 28) = v11 + 240;
        *((_QWORD *)v11 + 32) = v11 + 272;
        *((_QWORD *)v11 + 36) = v11 + 304;
        *((_QWORD *)v11 + 40) = v11 + 336;
        *((_QWORD *)v11 + 44) = v11 + 368;
        *((_QWORD *)v11 + 48) = v11 + 400;
        *((_QWORD *)v11 + 52) = v11 + 432;
        *((_QWORD *)v11 + 13) = 0;
        v11[112] = 0;
        *((_QWORD *)v11 + 17) = 0;
        v11[144] = 0;
        *((_QWORD *)v11 + 21) = 0;
        v11[176] = 0;
        *((_QWORD *)v11 + 25) = 0;
        v11[208] = 0;
        *((_QWORD *)v11 + 29) = 0;
        v11[240] = 0;
        *((_QWORD *)v11 + 33) = 0;
        v11[272] = 0;
        *((_QWORD *)v11 + 37) = 0;
        v11[304] = 0;
        *((_QWORD *)v11 + 41) = 0;
        v11[336] = 0;
        *((_QWORD *)v11 + 45) = 0;
        v11[368] = 0;
        *((_QWORD *)v11 + 49) = 0;
        v11[400] = 0;
        *((_QWORD *)v11 + 53) = 0x800000000LL;
        *((_QWORD *)v11 + 66) = v11 + 544;
        *((_QWORD *)v11 + 67) = 0x600000000LL;
      }
      v61 = v11;
    }
    v11[*v11 + 1] = 1;
    v12 = v61;
    v13 = *(unsigned __int8 *)v61;
    *(_BYTE *)v61 = v13 + 1;
    v12[v13 + 2] = "template";
    if ( (_BYTE)v66 )
    {
      sub_FC7790(v63, (__int64 *)&v61, SHIBYTE(v66));
      v14 = v64;
      v63 = 0;
      v66 = 0;
      if ( v64 == v65 )
      {
LABEL_6:
        v15 = (void **)v61;
        if ( v61 )
        {
          v16 = v62;
          if ( v62 )
          {
            if ( (unsigned __int64)v61 < v62 || (unsigned __int64)v61 > v62 + 14848 )
            {
              v17 = *((void ***)v61 + 66);
              v18 = &v17[8 * (unsigned __int64)*((unsigned int *)v61 + 134)];
              if ( v17 != v18 )
              {
                do
                {
                  while ( 1 )
                  {
                    v18 -= 8;
                    v19 = (void **)v18[3];
                    if ( v19 == v18 + 5 )
                      break;
                    operator delete(v19);
                    if ( v17 == v18 )
                      goto LABEL_12;
                  }
                }
                while ( v17 != v18 );
LABEL_12:
                v18 = (void **)v15[66];
              }
              if ( v18 != v15 + 68 )
                free(v18);
              v20 = (void **)v15[52];
              if ( v20 != v15 + 54 )
                free(v20);
              v21 = v15 + 48;
              v22 = v15 + 8;
              do
              {
                while ( *v21 != v21 + 2 )
                {
                  operator delete(*v21);
                  v21 -= 4;
                  if ( v21 == v22 )
                    goto LABEL_20;
                }
                v21 -= 4;
              }
              while ( v21 != v22 );
LABEL_20:
              operator delete(v15, 0x3A0u);
            }
            else
            {
              v30 = *(unsigned int *)(v62 + 14976);
              *(_DWORD *)(v62 + 14976) = v30 + 1;
              *(_QWORD *)(v16 + 8 * v30 + 14848) = v15;
            }
          }
        }
        return 1;
      }
    }
    else
    {
      v14 = v64;
      if ( v64 == v65 )
        goto LABEL_6;
    }
    operator delete(v14);
    goto LABEL_6;
  }
  *(_DWORD *)(a1 + 40) = v10;
  v25 = (int *)(a1 + 16);
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  *a5 = *(_DWORD *)(a1 + 40);
  v28 = *(_WORD *)(a1 + 32);
  if ( v28 == 52 )
    goto LABEL_60;
  if ( v28 == 53
    || (sub_1564E40(*(_QWORD *)a2, 128),
        ++*(_DWORD *)(a2 + 8),
        v23 = sub_15589A0((const __m128i *)a1, a3, a4, a7, a8),
        v31 = *(_WORD *)(a1 + 32),
        v31 == 53) )
  {
    v29 = *(_DWORD *)(a1 + 16);
    v23 = 0;
    *(_WORD *)(a1 + 32) = 52;
    *a6 = v29;
    ++*(_DWORD *)(a1 + 16);
    return v23;
  }
  if ( v31 == 52 )
  {
LABEL_60:
    v46 = *(__int64 **)(a1 + 8);
    v23 = 0;
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v46, v25);
    *a6 = *(_DWORD *)(a1 + 40);
    return v23;
  }
  if ( (_BYTE)v23 )
  {
    sub_1564820(&v61, a1, *(unsigned int *)(a1 + 16), 14);
    v32 = (unsigned __int8 *)v61;
    if ( !v61 )
    {
      v53 = v62;
      v54 = *(_DWORD *)(v62 + 14976);
      if ( v54 )
      {
        v55 = (unsigned int)(v54 - 1);
        *(_DWORD *)(v62 + 14976) = v55;
        v32 = *(unsigned __int8 **)(v53 + 8 * v55 + 14848);
        v56 = *((unsigned int *)v32 + 134);
        *v32 = 0;
        v57 = *((_QWORD *)v32 + 66);
        *((_DWORD *)v32 + 106) = 0;
        v58 = v57 + (v56 << 6);
        while ( v57 != v58 )
        {
          while ( 1 )
          {
            v58 -= 64;
            v59 = *(void **)(v58 + 24);
            if ( v59 == (void *)(v58 + 40) )
              break;
            operator delete(v59);
            if ( v57 == v58 )
              goto LABEL_77;
          }
        }
LABEL_77:
        *((_DWORD *)v32 + 134) = 0;
      }
      else
      {
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
        *((_QWORD *)v32 + 66) = v32 + 544;
        *((_QWORD *)v32 + 67) = 0x600000000LL;
      }
      v61 = v32;
    }
    v32[*v32 + 1] = 4;
    v33 = v61;
    v34 = *(unsigned __int8 *)v61;
    *(_BYTE *)v61 = v34 + 1;
    v33[v34 + 2] = 52;
    if ( (_BYTE)v66 )
    {
      sub_FC7790(v63, (__int64 *)&v61, SHIBYTE(v66));
      v63 = 0;
      v66 = 0;
    }
    if ( v64 != v65 )
      operator delete(v64);
    v35 = (void **)v61;
    if ( v61 )
    {
      v36 = v62;
      if ( v62 )
      {
        if ( (unsigned __int64)v61 < v62 || (unsigned __int64)v61 > v62 + 14848 )
        {
          v37 = *((_QWORD *)v61 + 66);
          v38 = v37 + ((unsigned __int64)*((unsigned int *)v61 + 134) << 6);
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
                goto LABEL_47;
            }
          }
LABEL_47:
          v40 = (void **)v35[66];
          if ( v40 != v35 + 68 )
            free(v40);
          v41 = (void **)v35[52];
          v42 = v35 + 52;
          if ( v41 != v35 + 54 )
            free(v41);
          v43 = v35 + 12;
          do
          {
            while ( 1 )
            {
              v42 -= 4;
              if ( *v42 == v42 + 2 )
                break;
              operator delete(*v42);
              if ( v42 == v43 )
                goto LABEL_54;
            }
          }
          while ( v42 != v43 );
LABEL_54:
          operator delete(v35, 0x3A0u);
        }
        else
        {
          v52 = *(unsigned int *)(v62 + 14976);
          *(_DWORD *)(v62 + 14976) = v52 + 1;
          *(_QWORD *)(v36 + 8 * v52 + 14848) = v35;
        }
      }
    }
  }
  return v23;
}
