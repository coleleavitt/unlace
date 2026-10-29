__int64 __fastcall sub_1D87010(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  _BYTE *v3; // r13
  signed __int64 v4; // rdx
  signed __int64 v5; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r12
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // r14
  unsigned __int8 *v15; // r12
  _QWORD *v16; // rax
  _BYTE *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  void **v21; // rbx
  _BYTE *v22; // rdi
  __int64 v23; // rax
  void *v24; // rdi
  unsigned __int8 *v25; // r12
  _QWORD *v26; // rax
  unsigned __int8 *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  void **v31; // rbx
  unsigned __int8 *v32; // rdi
  __int64 v33; // rax
  size_t v34; // rdx
  size_t v35; // rdx
  __int64 v36; // rdx
  int v37; // eax
  __int64 v38; // rax
  __int64 v39; // r14
  __int64 v40; // r15
  __int64 v41; // r14
  void *v42; // rdi
  __int64 v43; // rdx
  int v44; // eax
  __int64 v45; // rax
  __int64 v46; // r15
  __int64 v47; // rdx
  __int64 v48; // r15
  void *v49; // rdi
  __int64 v50; // [rsp+8h] [rbp-120h]
  __int64 v51; // [rsp+18h] [rbp-110h] BYREF
  void *src; // [rsp+20h] [rbp-108h]
  size_t n; // [rsp+28h] [rbp-100h]
  _QWORD v54[2]; // [rsp+30h] [rbp-F8h] BYREF
  void *v55; // [rsp+40h] [rbp-E8h]
  size_t v56; // [rsp+48h] [rbp-E0h]
  _QWORD v57[2]; // [rsp+50h] [rbp-D8h] BYREF
  _QWORD v58[2]; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v59; // [rsp+70h] [rbp-B8h]
  unsigned __int8 *v60; // [rsp+80h] [rbp-A8h]
  __int64 v61; // [rsp+88h] [rbp-A0h]
  char v62; // [rsp+D8h] [rbp-50h]
  unsigned int v63; // [rsp+E0h] [rbp-48h]
  char v64; // [rsp+E4h] [rbp-44h]

  v2 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 232LL) + 64LL);
  sub_168B9F0((__int64)v58, (__int64 *)(*(_QWORD *)a1 + 8LL), *(_DWORD *)(a2 + 12), 0x119Cu, 0);
  v3 = (_BYTE *)sub_20EAB70(*(unsigned int *)(a2 + 8), v2);
  v5 = v4;
  if ( v62 )
  {
    v25 = v60;
    if ( !v60 )
    {
      v36 = v61;
      v37 = *(_DWORD *)(v61 + 14976);
      if ( v37 )
      {
        v38 = (unsigned int)(v37 - 1);
        *(_DWORD *)(v61 + 14976) = v38;
        v25 = *(unsigned __int8 **)(v36 + 8 * v38 + 14848);
        v39 = *((unsigned int *)v25 + 134);
        v40 = *((_QWORD *)v25 + 66);
        *v25 = 0;
        *((_DWORD *)v25 + 106) = 0;
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
              goto LABEL_57;
          }
        }
LABEL_57:
        *((_DWORD *)v25 + 134) = 0;
      }
      else
      {
        v25 = (unsigned __int8 *)operator new(0x3A0u);
        *v25 = 0;
        *((_QWORD *)v25 + 12) = v25 + 112;
        *((_QWORD *)v25 + 16) = v25 + 144;
        *((_QWORD *)v25 + 20) = v25 + 176;
        *((_QWORD *)v25 + 24) = v25 + 208;
        *((_QWORD *)v25 + 28) = v25 + 240;
        *((_QWORD *)v25 + 32) = v25 + 272;
        *((_QWORD *)v25 + 36) = v25 + 304;
        *((_QWORD *)v25 + 40) = v25 + 336;
        *((_QWORD *)v25 + 44) = v25 + 368;
        *((_QWORD *)v25 + 48) = v25 + 400;
        *((_QWORD *)v25 + 52) = v25 + 432;
        *((_QWORD *)v25 + 13) = 0;
        v25[112] = 0;
        *((_QWORD *)v25 + 17) = 0;
        v25[144] = 0;
        *((_QWORD *)v25 + 21) = 0;
        v25[176] = 0;
        *((_QWORD *)v25 + 25) = 0;
        v25[208] = 0;
        *((_QWORD *)v25 + 29) = 0;
        v25[240] = 0;
        *((_QWORD *)v25 + 33) = 0;
        v25[272] = 0;
        *((_QWORD *)v25 + 37) = 0;
        v25[304] = 0;
        *((_QWORD *)v25 + 41) = 0;
        v25[336] = 0;
        *((_QWORD *)v25 + 45) = 0;
        v25[368] = 0;
        *((_QWORD *)v25 + 49) = 0;
        v25[400] = 0;
        *((_QWORD *)v25 + 53) = 0x800000000LL;
        *((_QWORD *)v25 + 66) = v25 + 544;
        *((_QWORD *)v25 + 67) = 0x600000000LL;
      }
      v60 = v25;
    }
    v25[*v25 + 1] = 0;
    src = v54;
    if ( &v3[v5] && !v3 )
      goto LABEL_73;
    if ( (unsigned __int64)v5 > 0xF )
    {
      if ( v5 < 0 )
        goto LABEL_72;
      v26 = (_QWORD *)operator new(v5 + 1);
      v54[0] = v5;
      src = v26;
    }
    else
    {
      if ( v5 == 1 )
      {
        LOBYTE(v54[0]) = *v3;
        v26 = v54;
        goto LABEL_24;
      }
      v26 = v54;
      if ( !v5 )
      {
LABEL_24:
        n = v5;
        *((_BYTE *)v26 + v5) = 0;
        v27 = v60;
        v28 = *v60;
        *v60 = v28 + 1;
        v29 = (unsigned __int8)v28;
        v30 = 32 * (v28 + 3);
        v31 = (void **)&v27[v30];
        v32 = *(unsigned __int8 **)&v27[v30];
        if ( src == v54 )
        {
          v34 = n;
          if ( n )
          {
            if ( n == 1 )
              *v32 = v54[0];
            else
              memcpy(v32, src, n);
            v34 = n;
            v32 = (unsigned __int8 *)*v31;
          }
          v31[1] = (void *)v34;
          v32[v34] = 0;
          v32 = (unsigned __int8 *)src;
        }
        else
        {
          if ( v32 == &v27[v30 + 16] )
          {
            *v31 = src;
            v31[1] = (void *)n;
            v31[2] = (void *)v54[0];
          }
          else
          {
            v33 = *(_QWORD *)&v27[32 * v29 + 112];
            *v31 = src;
            v31[1] = (void *)n;
            v31[2] = (void *)v54[0];
            if ( v32 )
            {
              src = v32;
              v54[0] = v33;
              goto LABEL_28;
            }
          }
          v32 = (unsigned __int8 *)v54;
          src = v54;
        }
LABEL_28:
        n = 0;
        *v32 = 0;
        v24 = src;
        if ( src == v54 )
          goto LABEL_3;
        goto LABEL_17;
      }
    }
    memcpy(v26, v3, v5);
    v26 = src;
    goto LABEL_24;
  }
  if ( v64 )
  {
    v11 = sub_168B9E0(v58);
    v12 = v59;
    if ( v59 )
      v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v59 + 32LL))(v59);
    v51 = v12;
    v13 = sub_1587BC0(v11, &v51, v7, v8, v9, v10);
    v14 = *v13 + 32LL * v63;
    v15 = *(unsigned __int8 **)(v14 + 8);
    if ( !v15 )
    {
      v43 = *(_QWORD *)(v14 + 16);
      v44 = *(_DWORD *)(v43 + 14976);
      if ( v44 )
      {
        v45 = (unsigned int)(v44 - 1);
        *(_DWORD *)(v43 + 14976) = v45;
        v15 = *(unsigned __int8 **)(v43 + 8 * v45 + 14848);
        v46 = *((unsigned int *)v15 + 134);
        v47 = *((_QWORD *)v15 + 66);
        *v15 = 0;
        *((_DWORD *)v15 + 106) = 0;
        v48 = v47 + (v46 << 6);
        while ( v47 != v48 )
        {
          while ( 1 )
          {
            v48 -= 64;
            v49 = *(void **)(v48 + 24);
            if ( v49 == (void *)(v48 + 40) )
              break;
            v50 = v47;
            operator delete(v49);
            v47 = v50;
            if ( v50 == v48 )
              goto LABEL_69;
          }
        }
LABEL_69:
        *((_DWORD *)v15 + 134) = 0;
      }
      else
      {
        v15 = (unsigned __int8 *)operator new(0x3A0u);
        *v15 = 0;
        *((_QWORD *)v15 + 12) = v15 + 112;
        *((_QWORD *)v15 + 16) = v15 + 144;
        *((_QWORD *)v15 + 20) = v15 + 176;
        *((_QWORD *)v15 + 24) = v15 + 208;
        *((_QWORD *)v15 + 28) = v15 + 240;
        *((_QWORD *)v15 + 32) = v15 + 272;
        *((_QWORD *)v15 + 36) = v15 + 304;
        *((_QWORD *)v15 + 40) = v15 + 336;
        *((_QWORD *)v15 + 44) = v15 + 368;
        *((_QWORD *)v15 + 48) = v15 + 400;
        *((_QWORD *)v15 + 52) = v15 + 432;
        *((_QWORD *)v15 + 13) = 0;
        v15[112] = 0;
        *((_QWORD *)v15 + 17) = 0;
        v15[144] = 0;
        *((_QWORD *)v15 + 21) = 0;
        v15[176] = 0;
        *((_QWORD *)v15 + 25) = 0;
        v15[208] = 0;
        *((_QWORD *)v15 + 29) = 0;
        v15[240] = 0;
        *((_QWORD *)v15 + 33) = 0;
        v15[272] = 0;
        *((_QWORD *)v15 + 37) = 0;
        v15[304] = 0;
        *((_QWORD *)v15 + 41) = 0;
        v15[336] = 0;
        *((_QWORD *)v15 + 45) = 0;
        v15[368] = 0;
        *((_QWORD *)v15 + 49) = 0;
        v15[400] = 0;
        *((_QWORD *)v15 + 53) = 0x800000000LL;
        *((_QWORD *)v15 + 66) = v15 + 544;
        *((_QWORD *)v15 + 67) = 0x600000000LL;
      }
      *(_QWORD *)(v14 + 8) = v15;
    }
    v15[*v15 + 1] = 0;
    v55 = v57;
    if ( !&v3[v5] || v3 )
    {
      if ( (unsigned __int64)v5 <= 0xF )
      {
        if ( v5 == 1 )
        {
          LOBYTE(v57[0]) = *v3;
          v16 = v57;
          goto LABEL_12;
        }
        v16 = v57;
        if ( !v5 )
        {
LABEL_12:
          v56 = v5;
          *((_BYTE *)v16 + v5) = 0;
          v17 = *(_BYTE **)(v14 + 8);
          v18 = (unsigned __int8)*v17;
          *v17 = v18 + 1;
          v19 = (unsigned __int8)v18;
          v20 = 32 * (v18 + 3);
          v21 = (void **)&v17[v20];
          v22 = *(_BYTE **)&v17[v20];
          if ( v55 == v57 )
          {
            v35 = v56;
            if ( v56 )
            {
              if ( v56 == 1 )
                *v22 = v57[0];
              else
                memcpy(v22, v55, v56);
              v35 = v56;
              v22 = *v21;
            }
            v21[1] = (void *)v35;
            v22[v35] = 0;
            v22 = v55;
          }
          else
          {
            if ( v22 == &v17[v20 + 16] )
            {
              *v21 = v55;
              v21[1] = (void *)v56;
              v21[2] = (void *)v57[0];
            }
            else
            {
              v23 = *(_QWORD *)&v17[32 * v19 + 112];
              *v21 = v55;
              v21[1] = (void *)v56;
              v21[2] = (void *)v57[0];
              if ( v22 )
              {
                v55 = v22;
                v57[0] = v23;
                goto LABEL_16;
              }
            }
            v22 = v57;
            v55 = v57;
          }
LABEL_16:
          v56 = 0;
          *v22 = 0;
          v24 = v55;
          if ( v55 == v57 )
            goto LABEL_3;
LABEL_17:
          operator delete(v24);
          goto LABEL_3;
        }
LABEL_34:
        memcpy(v16, v3, v5);
        v16 = v55;
        goto LABEL_12;
      }
      if ( v5 >= 0 )
      {
        v16 = (_QWORD *)operator new(v5 + 1);
        v57[0] = v5;
        v55 = v16;
        goto LABEL_34;
      }
LABEL_72:
      std::__throw_length_error("basic_string::_M_create");
    }
LABEL_73:
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  }
LABEL_3:
  sub_15F7200(v58);
  return 1;
}
