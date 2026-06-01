unsigned int *__fastcall sub_B2FEE0(__int64 a1, unsigned int a2, unsigned int a3, int a4, __int64 a5, __int64 a6)
{
  __int64 *v10; // rdi
  __int64 v11; // rax
  unsigned int *v12; // rbx
  unsigned int v13; // eax
  __int64 v14; // rsi
  unsigned int v15; // eax
  unsigned int v17; // eax
  __int64 v18; // r12
  unsigned __int8 *v19; // rbp
  _BOOL8 v20; // r14
  _QWORD *v21; // rdx
  __int64 v22; // rax
  unsigned __int8 *v23; // rbp
  _QWORD *v24; // rdx
  __int64 v25; // rax
  _QWORD *v26; // rbp
  __int64 v27; // r14
  __int64 v28; // rax
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  void **v32; // r12
  unsigned __int64 v33; // rax
  void **v34; // r13
  void **v35; // rbp
  void **v36; // rdi
  void **v37; // rdi
  void **v38; // rbp
  void **v39; // r13
  __int64 v40; // rax
  unsigned __int64 v41; // rdx
  int v42; // eax
  unsigned __int64 v43; // rdx
  int v44; // eax
  unsigned __int64 v45; // rdx
  int v46; // eax
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // r15
  __int64 v51; // rdx
  __int64 v52; // r15
  void *v53; // rdi
  __int64 v54; // rax
  __int64 v55; // r14
  __int64 v56; // r15
  __int64 v57; // r14
  void *v58; // rdi
  __int64 v59; // rax
  __int64 v60; // r12
  __int64 v61; // r15
  __int64 v62; // r12
  void *v63; // rdi
  char v64; // [rsp+8h] [rbp-A0h]
  __int64 v65; // [rsp+8h] [rbp-A0h]
  int v66; // [rsp+1Ch] [rbp-8Ch]
  void *v67; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int64 v68; // [rsp+28h] [rbp-80h]
  __int64 v69; // [rsp+30h] [rbp-78h]
  void *v70; // [rsp+40h] [rbp-68h]
  __int64 v71; // [rsp+50h] [rbp-58h] BYREF
  __int16 v72; // [rsp+60h] [rbp-48h]

  v10 = *(__int64 **)a1;
  v11 = *v10;
  v10[10] += 40;
  v12 = (unsigned int *)((v11 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  if ( v10[1] >= (unsigned __int64)(v12 + 10) && v11 )
  {
    *v10 = (__int64)(v12 + 10);
  }
  else
  {
    v64 = a5;
    v40 = sub_962430((__int64)v10, 40, 40, 4, a5, a6);
    LOBYTE(a5) = v64;
    v12 = (unsigned int *)v40;
  }
  *((_BYTE *)v12 + 12) = 8;
  v13 = v12[3];
  v14 = a4 & 0xFFFFF;
  v12[1] = a2;
  v12[2] = a3;
  *((_QWORD *)v12 + 2) = 0;
  v15 = ((a4 & 0xFFFFF) << 8) | v13 & 0xF00000FF;
  *((_QWORD *)v12 + 3) = 0;
  v12[3] = v15;
  *((_QWORD *)v12 + 4) = 0;
  *v12 = a2 + 1;
  *((_BYTE *)v12 + 15) = (16 * (a5 & 1)) | HIBYTE(v15) & 0xEF;
  if ( (*((_BYTE *)sub_B1A550(*(_QWORD *)(a1 + 24), v14) + 21) & 1) != 0 && !sub_B2EAD0(a1, v14) )
  {
    v17 = (v12[3] >> 8) & 0xFFFFF;
    if ( v17 == 72 )
    {
      v18 = 5;
    }
    else if ( v17 <= 0x48 )
    {
      if ( v17 == 34 )
      {
        v18 = 2;
      }
      else if ( v17 > 0x22 )
      {
        if ( v17 == 70 )
        {
          v18 = 3;
        }
        else
        {
          v18 = 4;
          if ( v17 != 71 )
            return v12;
        }
      }
      else if ( v17 == 19 )
      {
        v18 = 0;
      }
      else
      {
        v18 = 1;
        if ( v17 != 20 )
          return v12;
      }
    }
    else if ( v17 == 125 )
    {
      v18 = 8;
    }
    else if ( v17 > 0x7D )
    {
      if ( v17 == 156 )
      {
        v18 = 9;
      }
      else
      {
        if ( v17 != 172 )
          return v12;
        v18 = 10;
      }
    }
    else if ( v17 == 88 )
    {
      v18 = 6;
    }
    else
    {
      v18 = 7;
      if ( v17 != 117 )
        return v12;
    }
    sub_FA3370(&v67, *(_QWORD *)(a1 + 16), *v12, 2634);
    v19 = (unsigned __int8 *)v67;
    v20 = (*((_BYTE *)v12 + 15) & 0x10) != 0;
    if ( !v67 )
    {
      v41 = v68;
      v42 = *(_DWORD *)(v68 + 14976);
      if ( v42 )
      {
        v49 = (unsigned int)(v42 - 1);
        *(_DWORD *)(v68 + 14976) = v49;
        v19 = *(unsigned __int8 **)(v41 + 8 * v49 + 14848);
        v50 = *((unsigned int *)v19 + 134);
        *v19 = 0;
        v51 = *((_QWORD *)v19 + 66);
        *((_DWORD *)v19 + 106) = 0;
        v52 = v51 + (v50 << 6);
        while ( v51 != v52 )
        {
          while ( 1 )
          {
            v52 -= 64;
            v53 = *(void **)(v52 + 24);
            if ( v53 == (void *)(v52 + 40) )
              break;
            v65 = v51;
            operator delete(v53);
            v51 = v65;
            if ( v65 == v52 )
              goto LABEL_77;
          }
        }
LABEL_77:
        *((_DWORD *)v19 + 134) = 0;
      }
      else
      {
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
        *((_QWORD *)v19 + 66) = v19 + 544;
        *((_QWORD *)v19 + 67) = 0x600000000LL;
      }
      v67 = v19;
    }
    v19[*v19 + 1] = 2;
    v21 = v67;
    v22 = *(unsigned __int8 *)v67;
    *(_BYTE *)v67 = v22 + 1;
    v23 = (unsigned __int8 *)v67;
    v21[v22 + 2] = v20;
    if ( !v23 )
    {
      v43 = v68;
      v44 = *(_DWORD *)(v68 + 14976);
      if ( v44 )
      {
        v54 = (unsigned int)(v44 - 1);
        *(_DWORD *)(v68 + 14976) = v54;
        v23 = *(unsigned __int8 **)(v43 + 8 * v54 + 14848);
        v55 = *((unsigned int *)v23 + 134);
        *v23 = 0;
        v56 = *((_QWORD *)v23 + 66);
        *((_DWORD *)v23 + 106) = 0;
        v57 = v56 + (v55 << 6);
        while ( v56 != v57 )
        {
          while ( 1 )
          {
            v57 -= 64;
            v58 = *(void **)(v57 + 24);
            if ( v58 == (void *)(v57 + 40) )
              break;
            operator delete(v58);
            if ( v56 == v57 )
              goto LABEL_82;
          }
        }
LABEL_82:
        *((_DWORD *)v23 + 134) = 0;
      }
      else
      {
        v23 = (unsigned __int8 *)operator new(0x3A0u);
        *v23 = 0;
        *((_QWORD *)v23 + 12) = v23 + 112;
        *((_QWORD *)v23 + 16) = v23 + 144;
        *((_QWORD *)v23 + 20) = v23 + 176;
        *((_QWORD *)v23 + 24) = v23 + 208;
        *((_QWORD *)v23 + 28) = v23 + 240;
        *((_QWORD *)v23 + 32) = v23 + 272;
        *((_QWORD *)v23 + 36) = v23 + 304;
        *((_QWORD *)v23 + 40) = v23 + 336;
        *((_QWORD *)v23 + 44) = v23 + 368;
        *((_QWORD *)v23 + 48) = v23 + 400;
        *((_QWORD *)v23 + 52) = v23 + 432;
        *((_QWORD *)v23 + 13) = 0;
        v23[112] = 0;
        *((_QWORD *)v23 + 17) = 0;
        v23[144] = 0;
        *((_QWORD *)v23 + 21) = 0;
        v23[176] = 0;
        *((_QWORD *)v23 + 25) = 0;
        v23[208] = 0;
        *((_QWORD *)v23 + 29) = 0;
        v23[240] = 0;
        *((_QWORD *)v23 + 33) = 0;
        v23[272] = 0;
        *((_QWORD *)v23 + 37) = 0;
        v23[304] = 0;
        *((_QWORD *)v23 + 41) = 0;
        v23[336] = 0;
        *((_QWORD *)v23 + 45) = 0;
        v23[368] = 0;
        *((_QWORD *)v23 + 49) = 0;
        v23[400] = 0;
        *((_QWORD *)v23 + 53) = 0x800000000LL;
        *((_QWORD *)v23 + 66) = v23 + 544;
        *((_QWORD *)v23 + 67) = 0x600000000LL;
      }
      v67 = v23;
    }
    v23[*v23 + 1] = 3;
    v24 = v67;
    v25 = *(unsigned __int8 *)v67;
    *(_BYTE *)v67 = v25 + 1;
    v26 = v67;
    v24[v25 + 2] = v18;
    v27 = *(_QWORD *)(v12 + 1);
    if ( v26 )
    {
      v28 = *((unsigned int *)v26 + 106);
      v29 = *((unsigned int *)v26 + 107);
      v30 = v28 + 1;
    }
    else
    {
      v45 = v68;
      v46 = *(_DWORD *)(v68 + 14976);
      if ( v46 )
      {
        v59 = (unsigned int)(v46 - 1);
        *(_DWORD *)(v68 + 14976) = v59;
        v26 = *(_QWORD **)(v45 + 8 * v59 + 14848);
        v60 = *((unsigned int *)v26 + 134);
        *(_BYTE *)v26 = 0;
        v61 = v26[66];
        *((_DWORD *)v26 + 106) = 0;
        v62 = v61 + (v60 << 6);
        if ( v61 == v62 )
        {
          v30 = 1;
          v28 = 0;
        }
        else
        {
          do
          {
            while ( 1 )
            {
              v62 -= 64;
              v63 = *(void **)(v62 + 24);
              if ( v63 == (void *)(v62 + 40) )
                break;
              operator delete(v63);
              if ( v61 == v62 )
                goto LABEL_86;
            }
          }
          while ( v61 != v62 );
LABEL_86:
          v28 = *((unsigned int *)v26 + 106);
          v30 = v28 + 1;
        }
        *((_DWORD *)v26 + 134) = 0;
        v29 = *((unsigned int *)v26 + 107);
      }
      else
      {
        v47 = operator new(0x3A0u);
        v29 = 8;
        v30 = 1;
        v26 = (_QWORD *)v47;
        *(_BYTE *)v47 = 0;
        *(_QWORD *)(v47 + 96) = v47 + 112;
        *(_QWORD *)(v47 + 128) = v47 + 144;
        *(_QWORD *)(v47 + 160) = v47 + 176;
        *(_QWORD *)(v47 + 192) = v47 + 208;
        *(_QWORD *)(v47 + 224) = v47 + 240;
        *(_QWORD *)(v47 + 256) = v47 + 272;
        *(_QWORD *)(v47 + 288) = v47 + 304;
        *(_QWORD *)(v47 + 320) = v47 + 336;
        *(_QWORD *)(v47 + 352) = v47 + 368;
        *(_QWORD *)(v47 + 384) = v47 + 400;
        *(_QWORD *)(v47 + 416) = v47 + 432;
        *(_QWORD *)(v47 + 104) = 0;
        *(_BYTE *)(v47 + 112) = 0;
        *(_QWORD *)(v47 + 136) = 0;
        *(_BYTE *)(v47 + 144) = 0;
        *(_QWORD *)(v47 + 168) = 0;
        *(_BYTE *)(v47 + 176) = 0;
        *(_QWORD *)(v47 + 200) = 0;
        *(_BYTE *)(v47 + 208) = 0;
        *(_QWORD *)(v47 + 232) = 0;
        *(_BYTE *)(v47 + 240) = 0;
        *(_QWORD *)(v47 + 264) = 0;
        *(_BYTE *)(v47 + 272) = 0;
        *(_QWORD *)(v47 + 296) = 0;
        *(_BYTE *)(v47 + 304) = 0;
        *(_QWORD *)(v47 + 328) = 0;
        *(_BYTE *)(v47 + 336) = 0;
        *(_QWORD *)(v47 + 360) = 0;
        *(_BYTE *)(v47 + 368) = 0;
        *(_QWORD *)(v47 + 392) = 0;
        *(_BYTE *)(v47 + 400) = 0;
        *(_QWORD *)(v47 + 424) = 0x800000000LL;
        *(_QWORD *)(v47 + 528) = v47 + 544;
        *(_QWORD *)(v47 + 536) = 0x600000000LL;
        v28 = 0;
      }
      v67 = v26;
    }
    LOBYTE(v66) = 1;
    if ( v30 > v29 )
    {
      sub_22134E0(v26 + 52, v26 + 54, v30, 12);
      v28 = *((unsigned int *)v26 + 106);
    }
    v31 = v26[52] + 12 * v28;
    *(_QWORD *)v31 = v27;
    *(_DWORD *)(v31 + 8) = v66;
    ++*((_DWORD *)v26 + 106);
    if ( (_BYTE)v72 )
    {
      sub_FA3A50(v69, &v67, HIBYTE(v72));
      v69 = 0;
      v72 = 0;
    }
    if ( v70 != &v71 )
      operator delete(v70);
    v32 = (void **)v67;
    if ( v67 )
    {
      v33 = v68;
      if ( v68 )
      {
        if ( (unsigned __int64)v67 >= v68 && (unsigned __int64)v67 <= v68 + 14848 )
        {
          v48 = *(unsigned int *)(v68 + 14976);
          *(_DWORD *)(v68 + 14976) = v48 + 1;
          *(_QWORD *)(v33 + 8 * v48 + 14848) = v32;
        }
        else
        {
          v34 = *((void ***)v67 + 66);
          v35 = &v34[8 * (unsigned __int64)*((unsigned int *)v67 + 134)];
          if ( v34 != v35 )
          {
            do
            {
              while ( 1 )
              {
                v35 -= 8;
                v36 = (void **)v35[3];
                if ( v36 == v35 + 5 )
                  break;
                operator delete(v36);
                if ( v34 == v35 )
                  goto LABEL_34;
              }
            }
            while ( v34 != v35 );
LABEL_34:
            v35 = (void **)v32[66];
          }
          if ( v35 != v32 + 68 )
            free(v35);
          v37 = (void **)v32[52];
          v38 = v32 + 52;
          if ( v37 != v32 + 54 )
            free(v37);
          v39 = v32 + 12;
          do
          {
            while ( 1 )
            {
              v38 -= 4;
              if ( *v38 == v38 + 2 )
                break;
              operator delete(*v38);
              if ( v38 == v39 )
                goto LABEL_42;
            }
          }
          while ( v38 != v39 );
LABEL_42:
          operator delete(v32, 0x3A0u);
        }
      }
    }
  }
  return v12;
}

