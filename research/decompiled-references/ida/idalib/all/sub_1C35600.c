void __fastcall sub_1C35600(__int64 a1, __int64 a2, double a3)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r14
  _QWORD *v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  void **v12; // r13
  unsigned __int64 v13; // rax
  void **v14; // r14
  void **v15; // rbx
  void **v16; // rdi
  void **v17; // rdi
  void **v18; // rbx
  void **v19; // r14
  __int64 v20; // rsi
  int v21; // eax
  unsigned int v22; // r13d
  _QWORD *v23; // rbx
  unsigned int v24; // r14d
  __int64 v25; // rcx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rdx
  __int64 v28; // rax
  void **v29; // rbp
  unsigned __int64 v30; // rax
  void **v31; // r12
  void **v32; // rbx
  void **v33; // rdi
  void **v34; // rdi
  void **v35; // rbx
  void **v36; // r12
  unsigned __int64 v37; // rdx
  int v38; // eax
  __int64 v39; // rax
  __int64 v40; // r13
  __int64 v41; // r15
  __int64 v42; // r13
  void *v43; // rdi
  unsigned __int64 v44; // rdx
  int v45; // eax
  __int64 v46; // rax
  __int64 v47; // r12
  __int64 v48; // r15
  __int64 v49; // r12
  void *v50; // rdi
  __int64 v51; // rdx
  __int64 v52; // rdx
  _BYTE *v53; // rax
  _BYTE *v54; // rax
  int v55; // [rsp+Ch] [rbp-8Ch]
  void *v56; // [rsp+10h] [rbp-88h] BYREF
  unsigned __int64 v57; // [rsp+18h] [rbp-80h]
  __int64 v58; // [rsp+20h] [rbp-78h]
  void *v59; // [rsp+30h] [rbp-68h]
  _BYTE v60[16]; // [rsp+40h] [rbp-58h] BYREF
  __int16 v61; // [rsp+50h] [rbp-48h]

  v4 = sub_EE9BA0(a2);
  if ( v4 )
  {
    v5 = v4;
    sub_FC70B0((__int64)&v56, *(_QWORD *)(*(_QWORD *)a1 + 264LL), *(_DWORD *)(v4 + 24), 6565);
    sub_AE9DF0((unsigned __int8 **)&v56, v5, 0xEu);
    sub_1C2FE50((unsigned __int8 **)&v56, **(unsigned __int8 **)(a1 + 8));
    v6 = *(_QWORD *)(v5 + 24);
    v7 = v56;
    if ( v56 )
    {
      v8 = *((unsigned int *)v56 + 106);
      v9 = *((unsigned int *)v56 + 107);
      v10 = v8 + 1;
    }
    else
    {
      v37 = v57;
      v38 = *(_DWORD *)(v57 + 14976);
      if ( v38 )
      {
        v39 = (unsigned int)(v38 - 1);
        *(_DWORD *)(v57 + 14976) = v39;
        v7 = *(_QWORD **)(v37 + 8 * v39 + 14848);
        v40 = *((unsigned int *)v7 + 134);
        *(_BYTE *)v7 = 0;
        v41 = v7[66];
        *((_DWORD *)v7 + 106) = 0;
        v42 = v41 + (v40 << 6);
        if ( v41 == v42 )
        {
          v10 = 1;
          v8 = 0;
        }
        else
        {
          do
          {
            while ( 1 )
            {
              v42 -= 64;
              v43 = *(void **)(v42 + 24);
              if ( v43 == (void *)(v42 + 40) )
                break;
              operator delete(v43);
              if ( v41 == v42 )
                goto LABEL_58;
            }
          }
          while ( v41 != v42 );
LABEL_58:
          v8 = *((unsigned int *)v7 + 106);
          v10 = v8 + 1;
        }
        *((_DWORD *)v7 + 134) = 0;
        v9 = *((unsigned int *)v7 + 107);
      }
      else
      {
        v54 = (_BYTE *)operator new(0x3A0u);
        v9 = 8;
        v10 = 1;
        v7 = v54;
        *v54 = 0;
        *((_QWORD *)v54 + 12) = v54 + 112;
        *((_QWORD *)v54 + 16) = v54 + 144;
        *((_QWORD *)v54 + 20) = v54 + 176;
        *((_QWORD *)v54 + 24) = v54 + 208;
        *((_QWORD *)v54 + 28) = v54 + 240;
        *((_QWORD *)v54 + 32) = v54 + 272;
        *((_QWORD *)v54 + 36) = v54 + 304;
        *((_QWORD *)v54 + 40) = v54 + 336;
        *((_QWORD *)v54 + 44) = v54 + 368;
        *((_QWORD *)v54 + 48) = v54 + 400;
        *((_QWORD *)v54 + 52) = v54 + 432;
        *((_QWORD *)v54 + 13) = 0;
        v54[112] = 0;
        *((_QWORD *)v54 + 17) = 0;
        v54[144] = 0;
        *((_QWORD *)v54 + 21) = 0;
        v54[176] = 0;
        *((_QWORD *)v54 + 25) = 0;
        v54[208] = 0;
        *((_QWORD *)v54 + 29) = 0;
        v54[240] = 0;
        *((_QWORD *)v54 + 33) = 0;
        v54[272] = 0;
        *((_QWORD *)v54 + 37) = 0;
        v54[304] = 0;
        *((_QWORD *)v54 + 41) = 0;
        v54[336] = 0;
        *((_QWORD *)v54 + 45) = 0;
        v54[368] = 0;
        *((_QWORD *)v54 + 49) = 0;
        v54[400] = 0;
        *((_QWORD *)v54 + 53) = 0x800000000LL;
        *((_QWORD *)v54 + 66) = v54 + 544;
        *((_QWORD *)v54 + 67) = 0x600000000LL;
        v8 = 0;
      }
      v56 = v7;
    }
    LOBYTE(v55) = 1;
    if ( v10 > v9 )
    {
      sub_2237220(v7 + 52, v7 + 54, v10, 12);
      v8 = *((unsigned int *)v7 + 106);
    }
    v11 = v7[52] + 12 * v8;
    *(_QWORD *)v11 = v6;
    *(_DWORD *)(v11 + 8) = v55;
    ++*((_DWORD *)v7 + 106);
    if ( (_BYTE)v61 )
    {
      sub_FC7790(v58, (__int64 *)&v56, SHIBYTE(v61));
      v58 = 0;
      v61 = 0;
    }
    if ( v59 != v60 )
      operator delete(v59);
    v12 = (void **)v56;
    if ( v56 )
    {
      v13 = v57;
      if ( v57 )
      {
        if ( (unsigned __int64)v56 >= v57 && (unsigned __int64)v56 <= v57 + 14848 )
        {
          v52 = *(unsigned int *)(v57 + 14976);
          *(_DWORD *)(v57 + 14976) = v52 + 1;
          *(_QWORD *)(v13 + 8 * v52 + 14848) = v12;
        }
        else
        {
          v14 = *((void ***)v56 + 66);
          v15 = &v14[8 * (unsigned __int64)*((unsigned int *)v56 + 134)];
          if ( v14 != v15 )
          {
            do
            {
              while ( 1 )
              {
                v15 -= 8;
                v16 = (void **)v15[3];
                if ( v16 == v15 + 5 )
                  break;
                operator delete(v16);
                if ( v14 == v15 )
                  goto LABEL_17;
              }
            }
            while ( v14 != v15 );
LABEL_17:
            v15 = (void **)v12[66];
          }
          if ( v15 != v12 + 68 )
            free(v15);
          v17 = (void **)v12[52];
          if ( v17 != v12 + 54 )
            free(v17);
          v18 = v12 + 48;
          v19 = v12 + 8;
          do
          {
            while ( *v18 != v18 + 2 )
            {
              operator delete(*v18);
              v18 -= 4;
              if ( v18 == v19 )
                goto LABEL_25;
            }
            v18 -= 4;
          }
          while ( v18 != v19 );
LABEL_25:
          operator delete(v12, 0x3A0u);
        }
      }
    }
    sub_FC70B0((__int64)&v56, *(_QWORD *)(*(_QWORD *)a1 + 264LL), **(_DWORD **)(a1 + 16), 5799);
    v20 = **(unsigned __int8 **)(a1 + 8);
    sub_1C2FE50((unsigned __int8 **)&v56, v20);
    if ( **(_BYTE **)(a1 + 8) )
      v21 = sub_EEB7E0(**(_QWORD **)(a1 + 24), v20, a3);
    else
      v21 = **(_DWORD **)(a1 + 32);
    v22 = v21 - 1;
    v23 = v56;
    v24 = **(_DWORD **)(a1 + 16);
    if ( v56 )
    {
      v25 = *((unsigned int *)v56 + 106);
      v26 = *((unsigned int *)v56 + 107);
      v27 = v25 + 1;
    }
    else
    {
      v44 = v57;
      v45 = *(_DWORD *)(v57 + 14976);
      if ( v45 )
      {
        v46 = (unsigned int)(v45 - 1);
        *(_DWORD *)(v57 + 14976) = v46;
        v23 = *(_QWORD **)(v44 + 8 * v46 + 14848);
        v47 = *((unsigned int *)v23 + 134);
        *(_BYTE *)v23 = 0;
        v48 = v23[66];
        *((_DWORD *)v23 + 106) = 0;
        v49 = v48 + (v47 << 6);
        if ( v48 == v49 )
        {
          v27 = 1;
          v25 = 0;
        }
        else
        {
          do
          {
            while ( 1 )
            {
              v49 -= 64;
              v50 = *(void **)(v49 + 24);
              if ( v50 == (void *)(v49 + 40) )
                break;
              operator delete(v50);
              if ( v48 == v49 )
                goto LABEL_72;
            }
          }
          while ( v48 != v49 );
LABEL_72:
          v25 = *((unsigned int *)v23 + 106);
          v27 = v25 + 1;
        }
        *((_DWORD *)v23 + 134) = 0;
        v26 = *((unsigned int *)v23 + 107);
      }
      else
      {
        v53 = (_BYTE *)operator new(0x3A0u);
        v27 = 1;
        v25 = 0;
        v23 = v53;
        *v53 = 0;
        *((_QWORD *)v53 + 12) = v53 + 112;
        *((_QWORD *)v53 + 16) = v53 + 144;
        *((_QWORD *)v53 + 20) = v53 + 176;
        *((_QWORD *)v53 + 24) = v53 + 208;
        *((_QWORD *)v53 + 28) = v53 + 240;
        *((_QWORD *)v53 + 32) = v53 + 272;
        *((_QWORD *)v53 + 36) = v53 + 304;
        *((_QWORD *)v53 + 40) = v53 + 336;
        *((_QWORD *)v53 + 44) = v53 + 368;
        *((_QWORD *)v53 + 48) = v53 + 400;
        *((_QWORD *)v53 + 52) = v53 + 432;
        *((_QWORD *)v53 + 13) = 0;
        v53[112] = 0;
        *((_QWORD *)v53 + 17) = 0;
        v53[144] = 0;
        *((_QWORD *)v53 + 21) = 0;
        v53[176] = 0;
        *((_QWORD *)v53 + 25) = 0;
        v53[208] = 0;
        *((_QWORD *)v53 + 29) = 0;
        v53[240] = 0;
        *((_QWORD *)v53 + 33) = 0;
        v53[272] = 0;
        *((_QWORD *)v53 + 37) = 0;
        v53[304] = 0;
        *((_QWORD *)v53 + 41) = 0;
        v53[336] = 0;
        *((_QWORD *)v53 + 45) = 0;
        v53[368] = 0;
        *((_QWORD *)v53 + 49) = 0;
        v53[400] = 0;
        *((_QWORD *)v53 + 53) = 0x800000000LL;
        *((_QWORD *)v53 + 66) = v53 + 544;
        *((_QWORD *)v53 + 67) = 0x600000000LL;
        v26 = 8;
      }
      v56 = v23;
    }
    LOBYTE(v55) = 1;
    if ( v27 > v26 )
    {
      sub_2237220(v23 + 52, v23 + 54, v27, 12);
      v25 = *((unsigned int *)v23 + 106);
    }
    v28 = v23[52] + 12 * v25;
    *(_QWORD *)v28 = __PAIR64__(v22, v24);
    *(_DWORD *)(v28 + 8) = v55;
    ++*((_DWORD *)v23 + 106);
    if ( (_BYTE)v61 )
    {
      sub_FC7790(v58, (__int64 *)&v56, SHIBYTE(v61));
      v58 = 0;
      v61 = 0;
    }
    if ( v59 != v60 )
      operator delete(v59);
    v29 = (void **)v56;
    if ( v56 )
    {
      v30 = v57;
      if ( v57 )
      {
        if ( (unsigned __int64)v56 >= v57 && (unsigned __int64)v56 <= v57 + 14848 )
        {
          v51 = *(unsigned int *)(v57 + 14976);
          *(_DWORD *)(v57 + 14976) = v51 + 1;
          *(_QWORD *)(v30 + 8 * v51 + 14848) = v29;
        }
        else
        {
          v31 = *((void ***)v56 + 66);
          v32 = &v31[8 * (unsigned __int64)*((unsigned int *)v56 + 134)];
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
              if ( v36 == v35 )
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
