void __fastcall sub_147D2B0(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 *v3; // r14
  __int64 v4; // r12
  unsigned __int8 *v5; // rbp
  _QWORD *v6; // rdx
  __int64 v7; // rax
  unsigned __int8 *v8; // rbp
  _BOOL8 v9; // r15
  _QWORD *v10; // rcx
  __int64 v11; // rax
  _QWORD *v12; // rbp
  __int64 v13; // r15
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  void **v17; // rbp
  unsigned __int64 v18; // rax
  void **v19; // r15
  void **v20; // r12
  void **v21; // rdi
  void **v22; // rdi
  void **v23; // r15
  void **v24; // r12
  __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  int v27; // eax
  unsigned __int64 v28; // rdx
  int v29; // eax
  unsigned __int64 v30; // rdx
  int v31; // eax
  _BYTE *v32; // rax
  unsigned __int64 v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  void *v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r15
  void *v43; // rdi
  __int64 v44; // rax
  __int64 v45; // r12
  __int64 v46; // rdx
  __int64 v47; // r12
  void *v48; // rdi
  __int64 v50; // [rsp+10h] [rbp-A8h]
  __int64 v51; // [rsp+10h] [rbp-A8h]
  __int64 v52; // [rsp+10h] [rbp-A8h]
  __int64 v53; // [rsp+18h] [rbp-A0h]
  __int64 v54; // [rsp+24h] [rbp-94h]
  int v55; // [rsp+2Ch] [rbp-8Ch]
  void *v56; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int64 v57; // [rsp+38h] [rbp-80h]
  __int64 v58; // [rsp+40h] [rbp-78h]
  void *v59; // [rsp+50h] [rbp-68h]
  __int64 v60; // [rsp+60h] [rbp-58h] BYREF
  __int16 v61; // [rsp+70h] [rbp-48h]

  v2 = *(__int64 **)(a2 + 8);
  v3 = &v2[*(unsigned int *)(a2 + 16)];
  if ( v3 != v2 )
  {
    while ( 1 )
    {
      v4 = *v2;
      if ( (unsigned __int8)((*(_BYTE *)(*v2 + 34) & 0xF) - 2) <= 1u || (*(_BYTE *)(v4 + 35) & 3) != 0 )
        break;
LABEL_27:
      if ( v3 == ++v2 )
        return;
    }
    sub_1564820(&v56, a1, *(unsigned int *)(v4 + 24), 1959);
    v5 = (unsigned __int8 *)v56;
    if ( !v56 )
    {
      v28 = v57;
      v29 = *(_DWORD *)(v57 + 14976);
      if ( v29 )
      {
        v39 = (unsigned int)(v29 - 1);
        *(_DWORD *)(v57 + 14976) = v39;
        v5 = *(unsigned __int8 **)(v28 + 8 * v39 + 14848);
        v40 = *((unsigned int *)v5 + 134);
        *v5 = 0;
        v41 = *((_QWORD *)v5 + 66);
        *((_DWORD *)v5 + 106) = 0;
        v42 = v41 + (v40 << 6);
        while ( v41 != v42 )
        {
          while ( 1 )
          {
            v42 -= 64;
            v43 = *(void **)(v42 + 24);
            if ( v43 == (void *)(v42 + 40) )
              break;
            v51 = v41;
            operator delete(v43);
            v41 = v51;
            if ( v51 == v42 )
              goto LABEL_54;
          }
        }
LABEL_54:
        *((_DWORD *)v5 + 134) = 0;
      }
      else
      {
        v5 = (unsigned __int8 *)operator new(0x3A0u);
        *v5 = 0;
        *((_QWORD *)v5 + 12) = v5 + 112;
        *((_QWORD *)v5 + 16) = v5 + 144;
        *((_QWORD *)v5 + 20) = v5 + 176;
        *((_QWORD *)v5 + 24) = v5 + 208;
        *((_QWORD *)v5 + 28) = v5 + 240;
        *((_QWORD *)v5 + 32) = v5 + 272;
        *((_QWORD *)v5 + 36) = v5 + 304;
        *((_QWORD *)v5 + 40) = v5 + 336;
        *((_QWORD *)v5 + 44) = v5 + 368;
        *((_QWORD *)v5 + 48) = v5 + 400;
        *((_QWORD *)v5 + 52) = v5 + 432;
        *((_QWORD *)v5 + 13) = 0;
        v5[112] = 0;
        *((_QWORD *)v5 + 17) = 0;
        v5[144] = 0;
        *((_QWORD *)v5 + 21) = 0;
        v5[176] = 0;
        *((_QWORD *)v5 + 25) = 0;
        v5[208] = 0;
        *((_QWORD *)v5 + 29) = 0;
        v5[240] = 0;
        *((_QWORD *)v5 + 33) = 0;
        v5[272] = 0;
        *((_QWORD *)v5 + 37) = 0;
        v5[304] = 0;
        *((_QWORD *)v5 + 41) = 0;
        v5[336] = 0;
        *((_QWORD *)v5 + 45) = 0;
        v5[368] = 0;
        *((_QWORD *)v5 + 49) = 0;
        v5[400] = 0;
        *((_QWORD *)v5 + 53) = 0x800000000LL;
        *((_QWORD *)v5 + 66) = v5 + 544;
        *((_QWORD *)v5 + 67) = 0x600000000LL;
      }
      v56 = v5;
    }
    v5[*v5 + 1] = 16;
    v6 = v56;
    v7 = *(unsigned __int8 *)v56;
    *(_BYTE *)v56 = v7 + 1;
    v8 = (unsigned __int8 *)v56;
    v6[v7 + 2] = v4;
    v9 = (*(_BYTE *)(v4 + 35) & 2) != 0;
    if ( !v8 )
    {
      v26 = v57;
      v27 = *(_DWORD *)(v57 + 14976);
      if ( v27 )
      {
        v34 = (unsigned int)(v27 - 1);
        *(_DWORD *)(v57 + 14976) = v34;
        v8 = *(unsigned __int8 **)(v26 + 8 * v34 + 14848);
        v35 = *((unsigned int *)v8 + 134);
        *v8 = 0;
        v36 = *((_QWORD *)v8 + 66);
        *((_DWORD *)v8 + 106) = 0;
        v37 = v36 + (v35 << 6);
        while ( v36 != v37 )
        {
          while ( 1 )
          {
            v37 -= 64;
            v38 = *(void **)(v37 + 24);
            if ( v38 == (void *)(v37 + 40) )
              break;
            v53 = v37;
            v50 = v36;
            operator delete(v38);
            v36 = v50;
            v37 = v53;
            if ( v50 == v53 )
              goto LABEL_49;
          }
        }
LABEL_49:
        *((_DWORD *)v8 + 134) = 0;
      }
      else
      {
        v8 = (unsigned __int8 *)operator new(0x3A0u);
        *v8 = 0;
        *((_QWORD *)v8 + 12) = v8 + 112;
        *((_QWORD *)v8 + 16) = v8 + 144;
        *((_QWORD *)v8 + 20) = v8 + 176;
        *((_QWORD *)v8 + 24) = v8 + 208;
        *((_QWORD *)v8 + 28) = v8 + 240;
        *((_QWORD *)v8 + 32) = v8 + 272;
        *((_QWORD *)v8 + 36) = v8 + 304;
        *((_QWORD *)v8 + 40) = v8 + 336;
        *((_QWORD *)v8 + 44) = v8 + 368;
        *((_QWORD *)v8 + 48) = v8 + 400;
        *((_QWORD *)v8 + 52) = v8 + 432;
        *((_QWORD *)v8 + 13) = 0;
        v8[112] = 0;
        *((_QWORD *)v8 + 17) = 0;
        v8[144] = 0;
        *((_QWORD *)v8 + 21) = 0;
        v8[176] = 0;
        *((_QWORD *)v8 + 25) = 0;
        v8[208] = 0;
        *((_QWORD *)v8 + 29) = 0;
        v8[240] = 0;
        *((_QWORD *)v8 + 33) = 0;
        v8[272] = 0;
        *((_QWORD *)v8 + 37) = 0;
        v8[304] = 0;
        *((_QWORD *)v8 + 41) = 0;
        v8[336] = 0;
        *((_QWORD *)v8 + 45) = 0;
        v8[368] = 0;
        *((_QWORD *)v8 + 49) = 0;
        v8[400] = 0;
        *((_QWORD *)v8 + 53) = 0x800000000LL;
        *((_QWORD *)v8 + 66) = v8 + 544;
        *((_QWORD *)v8 + 67) = 0x600000000LL;
      }
      v56 = v8;
    }
    v8[*v8 + 1] = 2;
    v10 = v56;
    v11 = *(unsigned __int8 *)v56;
    *(_BYTE *)v56 = v11 + 1;
    v12 = v56;
    v10[v11 + 2] = v9;
    v13 = *(_QWORD *)(v4 + 24);
    if ( v12 )
    {
      v14 = *((unsigned int *)v12 + 106);
      v54 = *(_QWORD *)(v4 + 24);
      LOBYTE(v55) = 1;
      v15 = v14 + 1;
      if ( *((unsigned int *)v12 + 107) >= (unsigned __int64)(v14 + 1) )
        goto LABEL_8;
    }
    else
    {
      v30 = v57;
      v31 = *(_DWORD *)(v57 + 14976);
      if ( v31 )
      {
        v44 = (unsigned int)(v31 - 1);
        *(_DWORD *)(v57 + 14976) = v44;
        v12 = *(_QWORD **)(v30 + 8 * v44 + 14848);
        v45 = *((unsigned int *)v12 + 134);
        *(_BYTE *)v12 = 0;
        v46 = v12[66];
        *((_DWORD *)v12 + 106) = 0;
        v47 = v46 + (v45 << 6);
        if ( v46 == v47 )
        {
          v15 = 1;
          v14 = 0;
        }
        else
        {
          do
          {
            while ( 1 )
            {
              v47 -= 64;
              v48 = *(void **)(v47 + 24);
              if ( v48 == (void *)(v47 + 40) )
                break;
              v52 = v46;
              operator delete(v48);
              v46 = v52;
              if ( v52 == v47 )
                goto LABEL_58;
            }
          }
          while ( v46 != v47 );
LABEL_58:
          v14 = *((unsigned int *)v12 + 106);
          v15 = v14 + 1;
        }
        *((_DWORD *)v12 + 134) = 0;
        v33 = *((unsigned int *)v12 + 107);
      }
      else
      {
        v32 = (_BYTE *)operator new(0x3A0u);
        v33 = 8;
        v15 = 1;
        v12 = v32;
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
        v14 = 0;
      }
      v56 = v12;
      v54 = v13;
      LOBYTE(v55) = 1;
      if ( v33 >= v15 )
        goto LABEL_8;
    }
    sub_2237220(v12 + 52, v12 + 54, v15, 12);
    v14 = *((unsigned int *)v12 + 106);
LABEL_8:
    v16 = v12[52] + 12 * v14;
    *(_QWORD *)v16 = v54;
    *(_DWORD *)(v16 + 8) = v55;
    ++*((_DWORD *)v12 + 106);
    if ( (_BYTE)v61 )
    {
      sub_FC7790(v58, (__int64 *)&v56, SHIBYTE(v61));
      v58 = 0;
      v61 = 0;
    }
    if ( v59 != &v60 )
      operator delete(v59);
    v17 = (void **)v56;
    if ( v56 )
    {
      v18 = v57;
      if ( v57 )
      {
        if ( (unsigned __int64)v56 < v57 || (unsigned __int64)v56 > v57 + 14848 )
        {
          v19 = *((void ***)v56 + 66);
          v20 = &v19[8 * (unsigned __int64)*((unsigned int *)v56 + 134)];
          if ( v19 != v20 )
          {
            do
            {
              while ( 1 )
              {
                v20 -= 8;
                v21 = (void **)v20[3];
                if ( v21 == v20 + 5 )
                  break;
                operator delete(v21);
                if ( v19 == v20 )
                  goto LABEL_18;
              }
            }
            while ( v19 != v20 );
LABEL_18:
            v20 = (void **)v17[66];
          }
          if ( v20 != v17 + 68 )
            free(v20);
          v22 = (void **)v17[52];
          if ( v22 != v17 + 54 )
            free(v22);
          v23 = v17 + 48;
          v24 = v17 + 8;
          do
          {
            while ( *v23 != v23 + 2 )
            {
              operator delete(*v23);
              v23 -= 4;
              if ( v23 == v24 )
                goto LABEL_26;
            }
            v23 -= 4;
          }
          while ( v23 != v24 );
LABEL_26:
          operator delete(v17, 0x3A0u);
        }
        else
        {
          v25 = *(unsigned int *)(v57 + 14976);
          *(_DWORD *)(v57 + 14976) = v25 + 1;
          *(_QWORD *)(v18 + 8 * v25 + 14848) = v17;
        }
      }
    }
    goto LABEL_27;
  }
}
