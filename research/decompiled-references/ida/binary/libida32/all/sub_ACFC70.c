__int64 __fastcall sub_ACFC70(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int v6; // r15d
  int v7; // r14d
  __int64 v8; // rdi
  unsigned int v9; // r14d
  __int64 v10; // rax
  __int64 v11; // r15
  unsigned __int8 *v12; // r12
  _QWORD *v13; // rdx
  __int64 v14; // rax
  void *v15; // rdi
  void **v16; // r14
  unsigned __int64 v17; // rax
  void **v18; // r15
  void **v19; // r12
  void **v20; // rdi
  void **v21; // rdi
  void **v22; // r12
  void **v23; // r15
  unsigned int v24; // r12d
  __int64 v25; // rdi
  __int64 v26; // rax
  unsigned __int8 *v27; // rbx
  __int64 v28; // r12
  _QWORD *v29; // rdx
  __int64 v30; // rax
  void *v31; // rdi
  void **v32; // rbp
  unsigned __int64 v33; // rax
  void **v34; // r12
  void **v35; // rbx
  void **v36; // rdi
  void **v37; // rdi
  void **v38; // rbx
  void **v39; // r12
  __int64 v40; // r13
  __int64 v41; // rax
  __int64 v42; // r14
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rdx
  unsigned __int64 v46; // rdx
  int v47; // eax
  unsigned __int64 v48; // rdx
  int v49; // eax
  __int64 v50; // rax
  __int64 v51; // rbp
  __int64 v52; // r14
  __int64 v53; // rbp
  void *v54; // rdi
  __int64 v55; // rax
  __int64 v56; // r14
  __int64 v57; // rdx
  __int64 v58; // r14
  void *v59; // rdi
  __int64 v60; // [rsp+8h] [rbp-90h]
  void *v61; // [rsp+10h] [rbp-88h] BYREF
  unsigned __int64 v62; // [rsp+18h] [rbp-80h]
  __int64 v63; // [rsp+20h] [rbp-78h]
  void *v64; // [rsp+30h] [rbp-68h]
  _BYTE v65[16]; // [rsp+40h] [rbp-58h] BYREF
  __int16 v66; // [rsp+50h] [rbp-48h]

  if ( *(_BYTE *)(a2 + 80) != *(_BYTE *)(a3 + 80) )
  {
    if ( !*(_BYTE *)(a1 + 142) )
      return 0;
    v6 = *(_DWORD *)(a3 + 24);
    v7 = -(*(_BYTE *)(a1 + 141) == 0);
    v8 = *(_QWORD *)(a1 + 16);
    v9 = (v7 & 0xDC) + 2358;
    if ( !*(_BYTE *)(a1 + 143) )
    {
      v40 = sub_A3ED80(v8);
      v41 = sub_A3ED80(*(_QWORD *)(a1 + 8));
      v8 = *(_QWORD *)(a1 + 16);
      *(_DWORD *)(v40 + 204) = *(_DWORD *)(v41 + 204);
    }
    *(_BYTE *)(a1 + 143) = 1;
    v10 = sub_A3ED80(v8);
    sub_FA3370(&v61, v10, v6, v9);
    v11 = *(unsigned __int8 *)(a3 + 80);
    v12 = (unsigned __int8 *)v61;
    if ( !v61 )
    {
      v48 = v62;
      v49 = *(_DWORD *)(v62 + 14976);
      if ( v49 )
      {
        v55 = (unsigned int)(v49 - 1);
        *(_DWORD *)(v62 + 14976) = v55;
        v12 = *(unsigned __int8 **)(v48 + 8 * v55 + 14848);
        v56 = *((unsigned int *)v12 + 134);
        v57 = *((_QWORD *)v12 + 66);
        *v12 = 0;
        *((_DWORD *)v12 + 106) = 0;
        v58 = v57 + (v56 << 6);
        while ( v57 != v58 )
        {
          while ( 1 )
          {
            v58 -= 64;
            v59 = *(void **)(v58 + 24);
            if ( v59 == (void *)(v58 + 40) )
              break;
            v60 = v57;
            operator delete(v59);
            v57 = v60;
            if ( v60 == v58 )
              goto LABEL_84;
          }
        }
LABEL_84:
        *((_DWORD *)v12 + 134) = 0;
      }
      else
      {
        v12 = (unsigned __int8 *)operator new(0x3A0u);
        *v12 = 0;
        *((_QWORD *)v12 + 12) = v12 + 112;
        *((_QWORD *)v12 + 16) = v12 + 144;
        *((_QWORD *)v12 + 20) = v12 + 176;
        *((_QWORD *)v12 + 24) = v12 + 208;
        *((_QWORD *)v12 + 28) = v12 + 240;
        *((_QWORD *)v12 + 32) = v12 + 272;
        *((_QWORD *)v12 + 36) = v12 + 304;
        *((_QWORD *)v12 + 40) = v12 + 336;
        *((_QWORD *)v12 + 44) = v12 + 368;
        *((_QWORD *)v12 + 48) = v12 + 400;
        *((_QWORD *)v12 + 52) = v12 + 432;
        *((_QWORD *)v12 + 13) = 0;
        v12[112] = 0;
        *((_QWORD *)v12 + 17) = 0;
        v12[144] = 0;
        *((_QWORD *)v12 + 21) = 0;
        v12[176] = 0;
        *((_QWORD *)v12 + 25) = 0;
        v12[208] = 0;
        *((_QWORD *)v12 + 29) = 0;
        v12[240] = 0;
        *((_QWORD *)v12 + 33) = 0;
        v12[272] = 0;
        *((_QWORD *)v12 + 37) = 0;
        v12[304] = 0;
        *((_QWORD *)v12 + 41) = 0;
        v12[336] = 0;
        *((_QWORD *)v12 + 45) = 0;
        v12[368] = 0;
        *((_QWORD *)v12 + 49) = 0;
        v12[400] = 0;
        *((_QWORD *)v12 + 53) = 0x800000000LL;
        *((_QWORD *)v12 + 66) = v12 + 544;
        *((_QWORD *)v12 + 67) = 0x600000000LL;
      }
      v61 = v12;
    }
    v12[*v12 + 1] = 2;
    v13 = v61;
    v14 = *(unsigned __int8 *)v61;
    *(_BYTE *)v61 = v14 + 1;
    v13[v14 + 2] = v11;
    if ( (_BYTE)v66 )
    {
      sub_FA3A50(v63, &v61, HIBYTE(v66));
      v15 = v64;
      v63 = 0;
      v66 = 0;
      if ( v64 == v65 )
        goto LABEL_11;
    }
    else
    {
      v15 = v64;
      if ( v64 == v65 )
      {
LABEL_11:
        v16 = (void **)v61;
        if ( v61 )
        {
          v17 = v62;
          if ( v62 )
          {
            if ( (unsigned __int64)v61 < v62 || (unsigned __int64)v61 > v62 + 14848 )
            {
              v18 = *((void ***)v61 + 66);
              v19 = &v18[8 * (unsigned __int64)*((unsigned int *)v61 + 134)];
              if ( v18 != v19 )
              {
                do
                {
                  while ( 1 )
                  {
                    v19 -= 8;
                    v20 = (void **)v19[3];
                    if ( v20 == v19 + 5 )
                      break;
                    operator delete(v20);
                    if ( v18 == v19 )
                      goto LABEL_17;
                  }
                }
                while ( v18 != v19 );
LABEL_17:
                v19 = (void **)v16[66];
              }
              if ( v19 != v16 + 68 )
                free(v19);
              v21 = (void **)v16[52];
              if ( v21 != v16 + 54 )
                free(v21);
              v22 = v16 + 48;
              v23 = v16 + 8;
              do
              {
                while ( *v22 != v22 + 2 )
                {
                  operator delete(*v22);
                  v22 -= 4;
                  if ( v22 == v23 )
                    goto LABEL_25;
                }
                v22 -= 4;
              }
              while ( v22 != v23 );
LABEL_25:
              operator delete(v16, 0x3A0u);
            }
            else
            {
              v45 = *(unsigned int *)(v62 + 14976);
              *(_DWORD *)(v62 + 14976) = v45 + 1;
              *(_QWORD *)(v17 + 8 * v45 + 14848) = v16;
            }
          }
        }
        v24 = *(_DWORD *)(a2 + 24);
        v25 = *(_QWORD *)(a1 + 8);
        if ( *(_BYTE *)(a1 + 143) )
        {
          v42 = sub_A3ED80(v25);
          v43 = sub_A3ED80(*(_QWORD *)(a1 + 16));
          v25 = *(_QWORD *)(a1 + 8);
          *(_DWORD *)(v42 + 204) = *(_DWORD *)(v43 + 204);
        }
        *(_BYTE *)(a1 + 143) = 0;
        v26 = sub_A3ED80(v25);
        sub_FA3370(&v61, v26, v24, 2548);
        v27 = (unsigned __int8 *)v61;
        v28 = *(unsigned __int8 *)(a2 + 80);
        if ( !v61 )
        {
          v46 = v62;
          v47 = *(_DWORD *)(v62 + 14976);
          if ( v47 )
          {
            v50 = (unsigned int)(v47 - 1);
            *(_DWORD *)(v62 + 14976) = v50;
            v27 = *(unsigned __int8 **)(v46 + 8 * v50 + 14848);
            v51 = *((unsigned int *)v27 + 134);
            *v27 = 0;
            v52 = *((_QWORD *)v27 + 66);
            *((_DWORD *)v27 + 106) = 0;
            v53 = v52 + (v51 << 6);
            while ( v52 != v53 )
            {
              while ( 1 )
              {
                v53 -= 64;
                v54 = *(void **)(v53 + 24);
                if ( v54 == (void *)(v53 + 40) )
                  break;
                operator delete(v54);
                if ( v52 == v53 )
                  goto LABEL_79;
              }
            }
LABEL_79:
            *((_DWORD *)v27 + 134) = 0;
          }
          else
          {
            v27 = (unsigned __int8 *)operator new(0x3A0u);
            *v27 = 0;
            *((_QWORD *)v27 + 12) = v27 + 112;
            *((_QWORD *)v27 + 16) = v27 + 144;
            *((_QWORD *)v27 + 20) = v27 + 176;
            *((_QWORD *)v27 + 24) = v27 + 208;
            *((_QWORD *)v27 + 28) = v27 + 240;
            *((_QWORD *)v27 + 32) = v27 + 272;
            *((_QWORD *)v27 + 36) = v27 + 304;
            *((_QWORD *)v27 + 40) = v27 + 336;
            *((_QWORD *)v27 + 44) = v27 + 368;
            *((_QWORD *)v27 + 48) = v27 + 400;
            *((_QWORD *)v27 + 52) = v27 + 432;
            *((_QWORD *)v27 + 13) = 0;
            v27[112] = 0;
            *((_QWORD *)v27 + 17) = 0;
            v27[144] = 0;
            *((_QWORD *)v27 + 21) = 0;
            v27[176] = 0;
            *((_QWORD *)v27 + 25) = 0;
            v27[208] = 0;
            *((_QWORD *)v27 + 29) = 0;
            v27[240] = 0;
            *((_QWORD *)v27 + 33) = 0;
            v27[272] = 0;
            *((_QWORD *)v27 + 37) = 0;
            v27[304] = 0;
            *((_QWORD *)v27 + 41) = 0;
            v27[336] = 0;
            *((_QWORD *)v27 + 45) = 0;
            v27[368] = 0;
            *((_QWORD *)v27 + 49) = 0;
            v27[400] = 0;
            *((_QWORD *)v27 + 53) = 0x800000000LL;
            *((_QWORD *)v27 + 66) = v27 + 544;
            *((_QWORD *)v27 + 67) = 0x600000000LL;
          }
          v61 = v27;
        }
        v27[*v27 + 1] = 2;
        v29 = v61;
        v30 = *(unsigned __int8 *)v61;
        *(_BYTE *)v61 = v30 + 1;
        v29[v30 + 2] = v28;
        if ( (_BYTE)v66 )
        {
          sub_FA3A50(v63, &v61, HIBYTE(v66));
          v31 = v64;
          v63 = 0;
          v66 = 0;
          if ( v64 == v65 )
            goto LABEL_32;
        }
        else
        {
          v31 = v64;
          if ( v64 == v65 )
          {
LABEL_32:
            v32 = (void **)v61;
            if ( v61 )
            {
              v33 = v62;
              if ( v62 )
              {
                if ( (unsigned __int64)v61 < v62 || (unsigned __int64)v61 > v62 + 14848 )
                {
                  v34 = *((void ***)v61 + 66);
                  v35 = &v34[8 * (unsigned __int64)*((unsigned int *)v61 + 134)];
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
                          goto LABEL_38;
                      }
                    }
                    while ( v34 != v35 );
LABEL_38:
                    v35 = (void **)v32[66];
                  }
                  if ( v35 != v32 + 68 )
                    free(v35);
                  v37 = (void **)v32[52];
                  if ( v37 != v32 + 54 )
                    free(v37);
                  v38 = v32 + 48;
                  v39 = v32 + 8;
                  do
                  {
                    while ( *v38 != v38 + 2 )
                    {
                      operator delete(*v38);
                      v38 -= 4;
                      if ( v39 == v38 )
                        goto LABEL_46;
                    }
                    v38 -= 4;
                  }
                  while ( v39 != v38 );
LABEL_46:
                  operator delete(v32, 0x3A0u);
                }
                else
                {
                  v44 = *(unsigned int *)(v62 + 14976);
                  *(_DWORD *)(v62 + 14976) = v44 + 1;
                  *(_QWORD *)(v33 + 8 * v44 + 14848) = v32;
                }
              }
            }
            return 0;
          }
        }
        operator delete(v31);
        goto LABEL_32;
      }
    }
    operator delete(v15);
    goto LABEL_11;
  }
  if ( !*(_BYTE *)(a1 + 144) && (*(_DWORD *)(a3 + 68) & 0xFFFFF) != (*(_DWORD *)(a2 + 68) & 0xFFFFF)
    || *(_WORD *)(a3 + 70) >> 4 != *(_WORD *)(a2 + 70) >> 4 )
  {
    return 0;
  }
  result = sub_ACDF50(a1, *(_QWORD *)(a2 + 48), *(_QWORD *)(a3 + 48));
  if ( !(_BYTE)result )
  {
    if ( *(_BYTE *)(a1 + 142) )
    {
      sub_AC7530((__int64)&v61, a1, *(_DWORD *)(a3 + 24), *(_BYTE *)(a1 + 141) == 0 ? 2569 : 2349);
      sub_AC60B0((unsigned __int8 **)&v61, *(_QWORD *)(a3 + 48), 8u);
      sub_AC60B0((unsigned __int8 **)&v61, *(_QWORD *)(a2 + 48), 8u);
      sub_AC6300((__int64)&v61);
      sub_AC74B0((__int64)&v61, a1, *(_DWORD *)(a2 + 24), 0x9F8u);
      sub_AC60B0((unsigned __int8 **)&v61, *(_QWORD *)(a2 + 48), 8u);
      sub_AC6300((__int64)&v61);
      return 0;
    }
    return 0;
  }
  return result;
}

