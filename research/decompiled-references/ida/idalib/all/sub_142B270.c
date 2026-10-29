void __fastcall sub_142B270(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v5; // r13
  unsigned __int8 *v6; // rbx
  _QWORD *v7; // rdx
  __int64 v8; // rax
  void *v9; // rdi
  void **v10; // rbp
  unsigned __int64 v11; // rax
  void **v12; // r12
  void **v13; // rbx
  void **v14; // rdi
  void **v15; // rdi
  void **v16; // rbx
  void **v17; // r12
  __int64 v18; // r13
  _QWORD *v19; // rbx
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  void *v24; // rdi
  void **v25; // r12
  void **v26; // rbx
  void **v27; // rdi
  void **v28; // rdi
  void **v29; // rbx
  void **v30; // r12
  void *v31; // rdi
  __int64 v32; // rdx
  unsigned __int64 v33; // rdx
  int v34; // eax
  _BYTE *v35; // rax
  __int64 v36; // rax
  __int64 v37; // r12
  __int64 v38; // r14
  __int64 v39; // r12
  void *v40; // rdi
  unsigned __int64 v41; // rdx
  int v42; // eax
  __int64 v43; // rax
  __int64 v44; // r12
  __int64 v45; // r14
  __int64 v46; // r12
  void *v47; // rdi
  int v48; // [rsp+Ch] [rbp-7Ch]
  void *v49; // [rsp+10h] [rbp-78h] BYREF
  unsigned __int64 v50; // [rsp+18h] [rbp-70h]
  __int64 v51; // [rsp+20h] [rbp-68h]
  void *v52; // [rsp+30h] [rbp-58h]
  _BYTE v53[16]; // [rsp+40h] [rbp-48h] BYREF
  __int16 v54; // [rsp+50h] [rbp-38h]

  v4 = *(_QWORD *)(a1 + 48);
  if ( *(_WORD *)(a3 + 16) == 22 && a2[1] )
  {
    sub_FC70B0((__int64)&v49, v4, *(_DWORD *)a2, 1129);
    v5 = a2[1];
    v6 = (unsigned __int8 *)v49;
    if ( !v49 )
    {
      v41 = v50;
      v42 = *(_DWORD *)(v50 + 14976);
      if ( v42 )
      {
        v43 = (unsigned int)(v42 - 1);
        *(_DWORD *)(v50 + 14976) = v43;
        v6 = *(unsigned __int8 **)(v41 + 8 * v43 + 14848);
        v44 = *((unsigned int *)v6 + 134);
        *v6 = 0;
        v45 = *((_QWORD *)v6 + 66);
        *((_DWORD *)v6 + 106) = 0;
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
              goto LABEL_78;
          }
        }
LABEL_78:
        *((_DWORD *)v6 + 134) = 0;
      }
      else
      {
        v6 = (unsigned __int8 *)operator new(0x3A0u);
        *v6 = 0;
        *((_QWORD *)v6 + 12) = v6 + 112;
        *((_QWORD *)v6 + 16) = v6 + 144;
        *((_QWORD *)v6 + 20) = v6 + 176;
        *((_QWORD *)v6 + 24) = v6 + 208;
        *((_QWORD *)v6 + 28) = v6 + 240;
        *((_QWORD *)v6 + 32) = v6 + 272;
        *((_QWORD *)v6 + 36) = v6 + 304;
        *((_QWORD *)v6 + 40) = v6 + 336;
        *((_QWORD *)v6 + 44) = v6 + 368;
        *((_QWORD *)v6 + 48) = v6 + 400;
        *((_QWORD *)v6 + 52) = v6 + 432;
        *((_QWORD *)v6 + 13) = 0;
        v6[112] = 0;
        *((_QWORD *)v6 + 17) = 0;
        v6[144] = 0;
        *((_QWORD *)v6 + 21) = 0;
        v6[176] = 0;
        *((_QWORD *)v6 + 25) = 0;
        v6[208] = 0;
        *((_QWORD *)v6 + 29) = 0;
        v6[240] = 0;
        *((_QWORD *)v6 + 33) = 0;
        v6[272] = 0;
        *((_QWORD *)v6 + 37) = 0;
        v6[304] = 0;
        *((_QWORD *)v6 + 41) = 0;
        v6[336] = 0;
        *((_QWORD *)v6 + 45) = 0;
        v6[368] = 0;
        *((_QWORD *)v6 + 49) = 0;
        v6[400] = 0;
        *((_QWORD *)v6 + 53) = 0x800000000LL;
        *((_QWORD *)v6 + 66) = v6 + 544;
        *((_QWORD *)v6 + 67) = 0x600000000LL;
      }
      v49 = v6;
    }
    v6[*v6 + 1] = 5;
    v7 = v49;
    v8 = *(unsigned __int8 *)v49;
    *(_BYTE *)v49 = v8 + 1;
    v7[v8 + 2] = v5;
    if ( (_BYTE)v54 )
    {
      sub_FC7790(v51, (__int64 *)&v49, SHIBYTE(v54));
      v9 = v52;
      v51 = 0;
      v54 = 0;
      if ( v52 == v53 )
        goto LABEL_7;
    }
    else
    {
      v9 = v52;
      if ( v52 == v53 )
      {
LABEL_7:
        v10 = (void **)v49;
        if ( v49 )
        {
          v11 = v50;
          if ( v50 )
          {
            if ( (unsigned __int64)v49 >= v50 && (unsigned __int64)v49 <= v50 + 14848 )
            {
LABEL_52:
              v32 = *(unsigned int *)(v11 + 14976);
              *(_DWORD *)(v11 + 14976) = v32 + 1;
              *(_QWORD *)(v11 + 8 * v32 + 14848) = v10;
              return;
            }
            v12 = *((void ***)v49 + 66);
            v13 = &v12[8 * (unsigned __int64)*((unsigned int *)v49 + 134)];
            if ( v12 != v13 )
            {
              do
              {
                while ( 1 )
                {
                  v13 -= 8;
                  v14 = (void **)v13[3];
                  if ( v14 == v13 + 5 )
                    break;
                  operator delete(v14);
                  if ( v12 == v13 )
                    goto LABEL_13;
                }
              }
              while ( v12 != v13 );
LABEL_13:
              v13 = (void **)v10[66];
            }
            if ( v13 != v10 + 68 )
              free(v13);
            v15 = (void **)v10[52];
            if ( v15 != v10 + 54 )
              free(v15);
            v16 = v10 + 48;
            v17 = v10 + 8;
            do
            {
              while ( *v16 != v16 + 2 )
              {
                operator delete(*v16);
                v16 -= 4;
                if ( v16 == v17 )
                  goto LABEL_21;
              }
              v16 -= 4;
            }
            while ( v16 != v17 );
            goto LABEL_21;
          }
        }
        return;
      }
    }
    operator delete(v9);
    goto LABEL_7;
  }
  sub_FC70B0((__int64)&v49, v4, *(_DWORD *)a3, 1128);
  v18 = *a2;
  v19 = v49;
  if ( v49 )
  {
    v20 = *((unsigned int *)v49 + 106);
    v21 = *((unsigned int *)v49 + 107);
    v22 = v20 + 1;
  }
  else
  {
    v33 = v50;
    v34 = *(_DWORD *)(v50 + 14976);
    if ( v34 )
    {
      v36 = (unsigned int)(v34 - 1);
      *(_DWORD *)(v50 + 14976) = v36;
      v19 = *(_QWORD **)(v33 + 8 * v36 + 14848);
      v37 = *((unsigned int *)v19 + 134);
      *(_BYTE *)v19 = 0;
      v38 = v19[66];
      *((_DWORD *)v19 + 106) = 0;
      v39 = v38 + (v37 << 6);
      if ( v38 == v39 )
      {
        v22 = 1;
        v20 = 0;
      }
      else
      {
        do
        {
          while ( 1 )
          {
            v39 -= 64;
            v40 = *(void **)(v39 + 24);
            if ( v40 == (void *)(v39 + 40) )
              break;
            operator delete(v40);
            if ( v38 == v39 )
              goto LABEL_67;
          }
        }
        while ( v38 != v39 );
LABEL_67:
        v20 = *((unsigned int *)v19 + 106);
        v22 = v20 + 1;
      }
      *((_DWORD *)v19 + 134) = 0;
      v21 = *((unsigned int *)v19 + 107);
    }
    else
    {
      v35 = (_BYTE *)operator new(0x3A0u);
      v21 = 8;
      v22 = 1;
      v19 = v35;
      *v35 = 0;
      *((_QWORD *)v35 + 12) = v35 + 112;
      *((_QWORD *)v35 + 16) = v35 + 144;
      *((_QWORD *)v35 + 20) = v35 + 176;
      *((_QWORD *)v35 + 24) = v35 + 208;
      *((_QWORD *)v35 + 28) = v35 + 240;
      *((_QWORD *)v35 + 32) = v35 + 272;
      *((_QWORD *)v35 + 36) = v35 + 304;
      *((_QWORD *)v35 + 40) = v35 + 336;
      *((_QWORD *)v35 + 44) = v35 + 368;
      *((_QWORD *)v35 + 48) = v35 + 400;
      *((_QWORD *)v35 + 52) = v35 + 432;
      *((_QWORD *)v35 + 13) = 0;
      v35[112] = 0;
      *((_QWORD *)v35 + 17) = 0;
      v35[144] = 0;
      *((_QWORD *)v35 + 21) = 0;
      v35[176] = 0;
      *((_QWORD *)v35 + 25) = 0;
      v35[208] = 0;
      *((_QWORD *)v35 + 29) = 0;
      v35[240] = 0;
      *((_QWORD *)v35 + 33) = 0;
      v35[272] = 0;
      *((_QWORD *)v35 + 37) = 0;
      v35[304] = 0;
      *((_QWORD *)v35 + 41) = 0;
      v35[336] = 0;
      *((_QWORD *)v35 + 45) = 0;
      v35[368] = 0;
      *((_QWORD *)v35 + 49) = 0;
      v35[400] = 0;
      *((_QWORD *)v35 + 53) = 0x800000000LL;
      *((_QWORD *)v35 + 66) = v35 + 544;
      *((_QWORD *)v35 + 67) = 0x600000000LL;
      v20 = 0;
    }
    v49 = v19;
  }
  LOBYTE(v48) = 1;
  if ( v22 > v21 )
  {
    sub_2237220(v19 + 52, v19 + 54, v22, 12);
    v20 = *((unsigned int *)v19 + 106);
  }
  v23 = v19[52] + 12 * v20;
  *(_QWORD *)v23 = v18;
  *(_DWORD *)(v23 + 8) = v48;
  ++*((_DWORD *)v19 + 106);
  if ( (_BYTE)v54 )
  {
    sub_FC7790(v51, (__int64 *)&v49, SHIBYTE(v54));
    v24 = v52;
    v51 = 0;
    v54 = 0;
    if ( v52 == v53 )
      goto LABEL_30;
    goto LABEL_29;
  }
  v24 = v52;
  if ( v52 != v53 )
LABEL_29:
    operator delete(v24);
LABEL_30:
  v10 = (void **)v49;
  if ( v49 )
  {
    v11 = v50;
    if ( v50 )
    {
      if ( (unsigned __int64)v49 >= v50 && (unsigned __int64)v49 <= v50 + 14848 )
        goto LABEL_52;
      v25 = *((void ***)v49 + 66);
      v26 = &v25[8 * (unsigned __int64)*((unsigned int *)v49 + 134)];
      if ( v25 != v26 )
      {
        do
        {
          while ( 1 )
          {
            v26 -= 8;
            v27 = (void **)v26[3];
            if ( v27 == v26 + 5 )
              break;
            operator delete(v27);
            if ( v25 == v26 )
              goto LABEL_36;
          }
        }
        while ( v25 != v26 );
LABEL_36:
        v26 = (void **)v10[66];
      }
      if ( v26 != v10 + 68 )
        free(v26);
      v28 = (void **)v10[52];
      if ( v28 != v10 + 54 )
        free(v28);
      v29 = v10 + 48;
      v30 = v10 + 8;
      while ( 1 )
      {
        v31 = *v29;
        if ( *v29 != v29 + 2 )
          break;
LABEL_45:
        v29 -= 4;
        if ( v30 == v29 )
          goto LABEL_21;
      }
      while ( 1 )
      {
        operator delete(v31);
        v29 -= 4;
        if ( v30 == v29 )
          break;
        v31 = *v29;
        if ( *v29 == v29 + 2 )
          goto LABEL_45;
      }
LABEL_21:
      operator delete(v10, 0x3A0u);
    }
  }
}
