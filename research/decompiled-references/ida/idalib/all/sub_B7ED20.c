__int64 __fastcall sub_B7ED20(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r12d
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r14
  __int64 result; // rax
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // rax
  unsigned __int8 *v10; // rbx
  _QWORD *v11; // rdx
  __int64 v12; // rax
  void **v13; // rbp
  unsigned __int64 v14; // rax
  void **v15; // r12
  void **v16; // rbx
  void **v17; // rdi
  void **v18; // rdi
  void **v19; // rbx
  void **v20; // r12
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 *v26; // rdx
  unsigned __int64 v27; // rcx
  __int64 *v28; // rax
  __int64 *v29; // rax
  __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // r14
  __int64 v40; // r15
  __int64 v41; // r14
  void *v42; // rdi
  size_t v43; // rax
  int v44; // r9d
  char v45; // r15
  __int64 v46; // rax
  void **v47; // rbp
  unsigned __int64 v48; // rax
  void **v49; // r13
  void **v50; // rbx
  void **v51; // rdi
  void **v52; // rdi
  void **v53; // rbx
  void **v54; // r13
  __int64 v55; // rdx
  __int64 v56; // [rsp+8h] [rbp-C0h]
  size_t v57; // [rsp+18h] [rbp-B0h]
  void *v58; // [rsp+20h] [rbp-A8h] BYREF
  signed __int64 v59; // [rsp+28h] [rbp-A0h]
  _BYTE v60[16]; // [rsp+30h] [rbp-98h] BYREF
  void *v61; // [rsp+40h] [rbp-88h] BYREF
  unsigned __int64 v62; // [rsp+48h] [rbp-80h]
  __int64 v63; // [rsp+50h] [rbp-78h] BYREF
  void *v64; // [rsp+60h] [rbp-68h]
  _BYTE v65[16]; // [rsp+70h] [rbp-58h] BYREF
  __int16 v66; // [rsp+80h] [rbp-48h]

  v2 = a2;
  v3 = sub_B8C330(a1);
  v4 = *(_QWORD *)(v3 + 2320);
  v5 = v3;
  result = 0;
  v7 = *(_QWORD *)(v4 + 224) & 9LL;
  if ( (*(_QWORD *)(v4 + 224) & 9) != 0 && (*(_BYTE *)(v4 + 156) & 0xC0) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 28) & 0x7Fu) - 59 > 2 || (v56 = *(_QWORD *)(v5 + 2328), (unsigned __int8)sub_B8E4C0(a1 + 64)) )
    {
      if ( (_BYTE)a2 )
      {
        v8 = 0;
        goto LABEL_15;
      }
      return v2;
    }
    if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    {
LABEL_6:
      if ( *(_BYTE *)(a1 + 73) >> 5 == 2 )
      {
        if ( (_BYTE)a2 )
        {
          v8 = 2;
LABEL_15:
          v9 = sub_A62AC0(v5);
          sub_FC70B0(&v61, v9, *(unsigned int *)(a1 + 24), 2557);
          sub_B76FC0((__int64)&v58, (_QWORD *)a1);
          sub_AEC220((unsigned __int8 **)&v61, v58, v59);
          v10 = (unsigned __int8 *)v61;
          if ( !v61 )
          {
            v31 = v62;
            v32 = *(_DWORD *)(v62 + 14976);
            if ( v32 )
            {
              v38 = (unsigned int)(v32 - 1);
              *(_DWORD *)(v62 + 14976) = v38;
              v10 = *(unsigned __int8 **)(v31 + 8 * v38 + 14848);
              v39 = *((unsigned int *)v10 + 134);
              *v10 = 0;
              v40 = *((_QWORD *)v10 + 66);
              *((_DWORD *)v10 + 106) = 0;
              v41 = v40 + (v39 << 6);
              while ( v40 != v41 )
              {
                while ( 1 )
                {
                  v41 -= 64;
                  v42 = *(void **)(v41 + 24);
                  if ( v42 == (void *)(v41 + 40) )
                    break;
                  operator delete(v42);
                  if ( v40 == v41 )
                    goto LABEL_70;
                }
              }
LABEL_70:
              *((_DWORD *)v10 + 134) = 0;
            }
            else
            {
              v10 = (unsigned __int8 *)operator new(0x3A0u);
              *v10 = 0;
              *((_QWORD *)v10 + 12) = v10 + 112;
              *((_QWORD *)v10 + 16) = v10 + 144;
              *((_QWORD *)v10 + 20) = v10 + 176;
              *((_QWORD *)v10 + 24) = v10 + 208;
              *((_QWORD *)v10 + 28) = v10 + 240;
              *((_QWORD *)v10 + 32) = v10 + 272;
              *((_QWORD *)v10 + 36) = v10 + 304;
              *((_QWORD *)v10 + 40) = v10 + 336;
              *((_QWORD *)v10 + 44) = v10 + 368;
              *((_QWORD *)v10 + 48) = v10 + 400;
              *((_QWORD *)v10 + 52) = v10 + 432;
              *((_QWORD *)v10 + 13) = 0;
              v10[112] = 0;
              *((_QWORD *)v10 + 17) = 0;
              v10[144] = 0;
              *((_QWORD *)v10 + 21) = 0;
              v10[176] = 0;
              *((_QWORD *)v10 + 25) = 0;
              v10[208] = 0;
              *((_QWORD *)v10 + 29) = 0;
              v10[240] = 0;
              *((_QWORD *)v10 + 33) = 0;
              v10[272] = 0;
              *((_QWORD *)v10 + 37) = 0;
              v10[304] = 0;
              *((_QWORD *)v10 + 41) = 0;
              v10[336] = 0;
              *((_QWORD *)v10 + 45) = 0;
              v10[368] = 0;
              *((_QWORD *)v10 + 49) = 0;
              v10[400] = 0;
              *((_QWORD *)v10 + 53) = 0x800000000LL;
              *((_QWORD *)v10 + 66) = v10 + 544;
              *((_QWORD *)v10 + 67) = 0x600000000LL;
            }
            v61 = v10;
          }
          v10[*v10 + 1] = 2;
          v11 = v61;
          v12 = *(unsigned __int8 *)v61;
          *(_BYTE *)v61 = v12 + 1;
          v11[v12 + 2] = v8;
          if ( v58 != v60 )
            operator delete(v58);
          if ( (_BYTE)v66 )
          {
            sub_FC7790(v63, &v61, HIBYTE(v66));
            v63 = 0;
            v66 = 0;
          }
          if ( v64 != v65 )
            operator delete(v64);
          v13 = (void **)v61;
          if ( v61 )
          {
            v14 = v62;
            if ( v62 )
            {
              if ( (unsigned __int64)v61 >= v62 && (unsigned __int64)v61 <= v62 + 14848 )
              {
                v37 = *(unsigned int *)(v62 + 14976);
                *(_DWORD *)(v62 + 14976) = v37 + 1;
                *(_QWORD *)(v14 + 8 * v37 + 14848) = v13;
              }
              else
              {
                v15 = *((void ***)v61 + 66);
                v16 = &v15[8 * (unsigned __int64)*((unsigned int *)v61 + 134)];
                if ( v15 != v16 )
                {
                  do
                  {
                    while ( 1 )
                    {
                      v16 -= 8;
                      v17 = (void **)v16[3];
                      if ( v17 == v16 + 5 )
                        break;
                      operator delete(v17);
                      if ( v15 == v16 )
                        goto LABEL_29;
                    }
                  }
                  while ( v15 != v16 );
LABEL_29:
                  v16 = (void **)v13[66];
                }
                if ( v16 != v13 + 68 )
                  free(v16);
                v18 = (void **)v13[52];
                v19 = v13 + 52;
                if ( v18 != v13 + 54 )
                  free(v18);
                v20 = v13 + 12;
                do
                {
                  while ( 1 )
                  {
                    v19 -= 4;
                    if ( *v19 == v19 + 2 )
                      break;
                    operator delete(*v19);
                    if ( v19 == v20 )
                      goto LABEL_37;
                  }
                }
                while ( v19 != v20 );
LABEL_37:
                operator delete(v13, 0x3A0u);
              }
            }
          }
          return 0;
        }
      }
      else if ( (unsigned __int8)sub_B9E190(a1) )
      {
        if ( (_BYTE)a2 )
        {
          v8 = 3;
          goto LABEL_15;
        }
      }
      else
      {
        sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v21, v22, v23, v24);
        if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 5LL) & 0x10) != 0 )
        {
          if ( (_BYTE)a2 )
          {
            v8 = 4;
            goto LABEL_15;
          }
        }
        else
        {
          sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v33, v34, v35, v36);
          if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) & 0x10) != 0 )
          {
            if ( (_BYTE)a2 )
            {
              v8 = 5;
              goto LABEL_15;
            }
          }
          else
          {
            v43 = j__strlen("field-padding");
            if ( (unsigned __int8)sub_1000070(v56, v7, 0, *(unsigned int *)(a1 + 24), "field-padding", v43) )
            {
              if ( (_BYTE)a2 )
              {
                v8 = 6;
                goto LABEL_15;
              }
            }
            else
            {
              v57 = j__strlen("field-padding");
              sub_B76FC0((__int64)&v61, (_QWORD *)a1);
              v45 = sub_FFFF70(v56, v7, 0, (_DWORD)v61, v62, v44, (__int64)"field-padding", v57);
              if ( v61 != &v63 )
                operator delete(v61);
              if ( !v45 )
              {
                if ( (_BYTE)a2 )
                {
                  v46 = sub_A62AC0(v5);
                  sub_FC70B0(&v61, v46, *(unsigned int *)(a1 + 24), 2556);
                  sub_B76FC0((__int64)&v58, (_QWORD *)a1);
                  sub_AEC220((unsigned __int8 **)&v61, v58, v59);
                  if ( v58 != v60 )
                    operator delete(v58);
                  if ( (_BYTE)v66 )
                  {
                    sub_FC7790(v63, &v61, HIBYTE(v66));
                    v63 = 0;
                    v66 = 0;
                  }
                  if ( v64 != v65 )
                    operator delete(v64);
                  v47 = (void **)v61;
                  if ( v61 )
                  {
                    v48 = v62;
                    if ( v62 )
                    {
                      if ( (unsigned __int64)v61 < v62 || (unsigned __int64)v61 > v62 + 14848 )
                      {
                        v49 = *((void ***)v61 + 66);
                        v50 = &v49[8 * (unsigned __int64)*((unsigned int *)v61 + 134)];
                        if ( v49 != v50 )
                        {
                          do
                          {
                            while ( 1 )
                            {
                              v50 -= 8;
                              v51 = (void **)v50[3];
                              if ( v51 == v50 + 5 )
                                break;
                              operator delete(v51);
                              if ( v49 == v50 )
                                goto LABEL_94;
                            }
                          }
                          while ( v49 != v50 );
LABEL_94:
                          v50 = (void **)v47[66];
                        }
                        if ( v50 != v47 + 68 )
                          free(v50);
                        v52 = (void **)v47[52];
                        v53 = v47 + 52;
                        if ( v52 != v47 + 54 )
                          free(v52);
                        v54 = v47 + 12;
                        do
                        {
                          while ( 1 )
                          {
                            v53 -= 4;
                            if ( *v53 == v53 + 2 )
                              break;
                            operator delete(*v53);
                            if ( v54 == v53 )
                              goto LABEL_102;
                          }
                        }
                        while ( v54 != v53 );
LABEL_102:
                        operator delete(v47, 0x3A0u);
                      }
                      else
                      {
                        v55 = *(unsigned int *)(v62 + 14976);
                        *(_DWORD *)(v62 + 14976) = v55 + 1;
                        *(_QWORD *)(v48 + 8 * v55 + 14848) = v47;
                      }
                    }
                  }
                }
                else
                {
                  return 1;
                }
                return v2;
              }
              if ( (_BYTE)a2 )
              {
                v8 = 7;
                goto LABEL_15;
              }
            }
          }
        }
      }
      return v2;
    }
    v25 = sub_B8C3D0(a1);
    v26 = *(__int64 **)v25;
    v27 = *(_QWORD *)v25 + 8LL * *(unsigned int *)(v25 + 8);
    if ( *(_QWORD *)v25 >= v27 )
    {
      if ( v26 == (__int64 *)v27 )
        goto LABEL_6;
      if ( *(_WORD *)(*(_QWORD *)v27 + 36LL) != 325 )
      {
        v29 = (__int64 *)(v27 + 8);
        while ( v26 != v29 )
        {
          v30 = *v29++;
          if ( *(_WORD *)(v30 + 36) == 325 )
            goto LABEL_51;
        }
        goto LABEL_6;
      }
    }
    else
    {
      v28 = *(__int64 **)v25;
      while ( *(_WORD *)(*v28 + 36) != 325 )
      {
        if ( (__int64 *)v27 == ++v28 )
          goto LABEL_6;
      }
      if ( (__int64 *)v27 == v28 )
        goto LABEL_6;
    }
LABEL_51:
    if ( (_BYTE)a2 )
    {
      v8 = 1;
      goto LABEL_15;
    }
    return v2;
  }
  return result;
}
