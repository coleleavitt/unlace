__int64 __fastcall sub_9A0D60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _BYTE *v7; // rdi
  char *v8; // rdx
  char *v9; // rax
  __int64 v10; // rbx
  unsigned __int8 **v11; // r13
  int v12; // eax
  __int64 v13; // rdi
  unsigned __int64 v14; // rax
  int v15; // eax
  bool v16; // cf
  bool v17; // zf
  unsigned __int8 *v18; // rax
  __int64 v19; // r15
  unsigned __int8 *v20; // rdx
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rax
  _BOOL8 v24; // r15
  bool v25; // dl
  unsigned __int8 *v26; // rbp
  unsigned __int8 *v27; // rcx
  __int64 v28; // rax
  unsigned __int64 v29; // rdi
  unsigned int v30; // ebx
  unsigned int v31; // eax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r15
  __int64 v37; // rdi
  int v38; // eax
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rdi
  unsigned __int64 v43; // rax
  unsigned __int8 *v44; // rdx
  int v45; // eax
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rdx
  void *v50; // rdi
  unsigned __int8 *v51; // rcx
  int v52; // eax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rax
  void *v57; // rdi
  int v58; // eax
  __int64 v59; // rdx
  __int64 v60; // rax
  int v61; // eax
  __int64 v62; // [rsp+8h] [rbp-80h]
  __int64 v63; // [rsp+8h] [rbp-80h]
  unsigned __int8 *v64; // [rsp+10h] [rbp-78h]
  __int64 v65; // [rsp+10h] [rbp-78h]
  __int64 v66; // [rsp+18h] [rbp-70h]
  _QWORD v67[2]; // [rsp+20h] [rbp-68h] BYREF
  int v68; // [rsp+30h] [rbp-58h]
  void *ptr; // [rsp+38h] [rbp-50h]
  __int64 v70; // [rsp+40h] [rbp-48h]
  _BYTE v71[64]; // [rsp+48h] [rbp-40h] BYREF

  v68 = 0;
  v67[0] = 0;
  v67[1] = 0;
  ptr = v71;
  v70 = 0;
  sub_99FA70(a4, (__int64)v67);
  v7 = ptr;
  v8 = (char *)ptr + 8 * (unsigned int)v70;
  if ( ptr == v8 )
  {
LABEL_21:
    v30 = 1;
    goto LABEL_22;
  }
  v9 = (char *)ptr;
  while ( 1 )
  {
    v10 = *(_QWORD *)v9;
    if ( *(_BYTE *)(*(_QWORD *)v9 + 28LL) )
      break;
    v9 += 8;
    if ( v8 == v9 )
      goto LABEL_21;
  }
  v11 = (unsigned __int8 **)sub_A2E0C0(a2, a5, 2205, 0);
  v12 = *(_DWORD *)(a4 + 48);
  if ( v12 == 3 )
  {
    v14 = *(_QWORD *)(a4 + 32) & 0xFFFFFFFFFFFFFFF0LL;
    goto LABEL_10;
  }
  if ( v12 )
  {
    if ( v12 == 1 )
    {
LABEL_8:
      v13 = *(_QWORD *)(a4 + 24);
LABEL_9:
      v14 = sub_BEDF70(v13) & 0xFFFFFFFFFFFFFFF0LL;
      goto LABEL_10;
    }
    goto LABEL_35;
  }
  v33 = *(_QWORD *)(a4 + 24);
  v34 = *(unsigned int *)(a4 + 32);
  v13 = *(_QWORD *)(v33 + 32);
  if ( *(_DWORD *)(v13 + 16) != (_DWORD)v34 && (_DWORD)v34 )
    v35 = *(_QWORD *)(v33 + (unsigned int)v34 + 32);
  else
    v35 = *(_QWORD *)(v33 + 32);
  if ( !*(_BYTE *)(v35 + 51) || (v36 = *(_QWORD *)(v35 + 32)) != 0 || *(_QWORD *)a4 == (unsigned int)v34 )
  {
LABEL_29:
    if ( (_DWORD)v34 != *(_DWORD *)(v13 + 16) && (_DWORD)v34 )
      v13 = *(_QWORD *)(v33 + v34 + 32);
    goto LABEL_9;
  }
  if ( *(_DWORD *)(v13 + 16) != (_DWORD)v34 && (_DWORD)v34 )
    v13 = *(_QWORD *)(v33 + (unsigned int)v34 + 32);
  v37 = *(_QWORD *)(sub_BEDF70(v13) & 0xFFFFFFFFFFFFFFF0LL);
  v38 = *(unsigned __int8 *)(v37 + 16);
  if ( v38 == 2 || v38 == 6 || v38 == 5 || v38 == 4 )
    goto LABEL_56;
  if ( v38 == 3 )
    goto LABEL_49;
  if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v37 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) <= 4u )
  {
    v37 = sub_B0D320(v37);
LABEL_49:
    if ( v37 )
      goto LABEL_56;
  }
  v39 = *(_DWORD *)(a4 + 48);
  if ( v39 == 1 )
  {
    v42 = *(_QWORD *)(a4 + 24);
  }
  else if ( v39 )
  {
    v42 = 0;
    if ( (unsigned int)(v39 - 2) > 1 )
      v42 = *(_QWORD *)(*(_QWORD *)(a4 + 24) + 32LL);
  }
  else
  {
    v40 = *(_QWORD *)(a4 + 24);
    v41 = *(unsigned int *)(a4 + 32);
    v42 = *(_QWORD *)(v40 + 32);
    if ( (_DWORD)v41 != *(_DWORD *)(v42 + 16) && (_DWORD)v41 )
      v42 = *(_QWORD *)(v40 + v41 + 32);
  }
  v43 = sub_BEDF70(v42) & 0xFFFFFFFFFFFFFFF0LL;
  v37 = *(_QWORD *)v43;
  if ( *(_BYTE *)(*(_QWORD *)v43 + 16LL) != 14
    && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v37 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 14 || (v37 = sub_B0D320(v37)) == 0) )
  {
    v58 = *(_DWORD *)(a4 + 48);
    if ( v58 == 1 )
    {
      v36 = *(_QWORD *)(a4 + 24);
    }
    else if ( v58 )
    {
      if ( v58 != 2 && v58 != 3 )
      {
        v59 = *(_QWORD *)(a4 + 24);
LABEL_80:
        v36 = *(_QWORD *)(v59 + 32);
      }
    }
    else
    {
      v59 = *(_QWORD *)(a4 + 24);
      v60 = *(unsigned int *)(a4 + 32);
      if ( *(_DWORD *)(*(_QWORD *)(v59 + 32) + 16LL) == (_DWORD)v60 || !(_DWORD)v60 )
        goto LABEL_80;
      v36 = *(_QWORD *)(v59 + v60 + 32);
    }
    v37 = *(_QWORD *)(sub_BEDF70(v36) & 0xFFFFFFFFFFFFFFF0LL);
    v61 = *(unsigned __int8 *)(v37 + 16);
    if ( v61 != 56 )
    {
      if ( v61 != 57 )
      {
        if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v37 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 56 > 1 )
        {
LABEL_86:
          v12 = *(_DWORD *)(a4 + 48);
          if ( v12 == 1 )
            goto LABEL_8;
          if ( v12 )
          {
LABEL_35:
            v13 = 0;
            if ( (unsigned int)(v12 - 2) > 1 )
              v13 = *(_QWORD *)(*(_QWORD *)(a4 + 24) + 32LL);
            goto LABEL_9;
          }
          v33 = *(_QWORD *)(a4 + 24);
          v34 = *(unsigned int *)(a4 + 32);
          v13 = *(_QWORD *)(v33 + 32);
          goto LABEL_29;
        }
        v37 = sub_B0D320(v37);
      }
      if ( !v37 )
        goto LABEL_86;
    }
  }
LABEL_56:
  v14 = *(_QWORD *)(v37 + 32) & 0xFFFFFFFFFFFFFFF0LL;
LABEL_10:
  if ( v11 )
  {
    v15 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v14 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 42;
    v16 = v15 == 0;
    v17 = v15 == 1;
    v18 = *v11;
    v19 = v16 | (unsigned __int8)v17;
    if ( !*v11 )
    {
      v44 = v11[1];
      v45 = *((_DWORD *)v44 + 3744);
      if ( v45 )
      {
        v46 = (unsigned int)(v45 - 1);
        *((_DWORD *)v44 + 3744) = v46;
        v18 = *(unsigned __int8 **)&v44[8 * v46 + 14848];
        v47 = *((unsigned int *)v18 + 134);
        *v18 = 0;
        v48 = *((_QWORD *)v18 + 66);
        *((_DWORD *)v18 + 106) = 0;
        v49 = v48 + (v47 << 6);
        v66 = v48;
        while ( v66 != v49 )
        {
          v49 -= 64;
          v50 = *(void **)(v49 + 24);
          if ( v50 != (void *)(v49 + 40) )
          {
            v64 = v18;
            v62 = v49;
            operator delete(v50, *(_QWORD *)(v49 + 40) + 1LL);
            v18 = v64;
            v49 = v62;
          }
        }
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
        *((_QWORD *)v18 + 52) = v18 + 432;
        *((_QWORD *)v18 + 53) = 0x800000000LL;
        *((_QWORD *)v18 + 66) = v18 + 544;
        *((_QWORD *)v18 + 67) = 0x600000000LL;
      }
      *v11 = v18;
    }
    v18[*v18 + 1] = 2;
    v20 = *v11;
    v21 = **v11;
    *v20 = v21 + 1;
    *(_QWORD *)&v20[8 * v21 + 16] = v19;
    v22 = *(_DWORD *)(a4 + 48);
    if ( v22 )
    {
      v24 = 0;
      if ( (unsigned int)(v22 - 2) <= 1 )
        goto LABEL_16;
      v25 = 0;
    }
    else
    {
      v23 = *(_QWORD *)(a4 + 24);
      v24 = 0;
      if ( !v23 )
      {
LABEL_16:
        v26 = *v11;
        if ( !*v11 )
        {
          v51 = v11[1];
          v52 = *((_DWORD *)v51 + 3744);
          if ( v52 )
          {
            v53 = (unsigned int)(v52 - 1);
            *((_DWORD *)v51 + 3744) = v53;
            v26 = *(unsigned __int8 **)&v51[8 * v53 + 14848];
            v54 = *((unsigned int *)v26 + 134);
            *v26 = 0;
            v55 = *((_QWORD *)v26 + 66);
            *((_DWORD *)v26 + 106) = 0;
            v56 = v55 + (v54 << 6);
            v65 = v55;
            while ( v65 != v56 )
            {
              v56 -= 64;
              v57 = *(void **)(v56 + 24);
              if ( v57 != (void *)(v56 + 40) )
              {
                v63 = v56;
                operator delete(v57, *(_QWORD *)(v56 + 40) + 1LL);
                v56 = v63;
              }
            }
            *((_DWORD *)v26 + 134) = 0;
          }
          else
          {
            v26 = (unsigned __int8 *)operator new(0x3A0u);
            *v26 = 0;
            *((_QWORD *)v26 + 12) = v26 + 112;
            *((_QWORD *)v26 + 16) = v26 + 144;
            *((_QWORD *)v26 + 20) = v26 + 176;
            *((_QWORD *)v26 + 24) = v26 + 208;
            *((_QWORD *)v26 + 28) = v26 + 240;
            *((_QWORD *)v26 + 32) = v26 + 272;
            *((_QWORD *)v26 + 36) = v26 + 304;
            *((_QWORD *)v26 + 40) = v26 + 336;
            *((_QWORD *)v26 + 44) = v26 + 368;
            *((_QWORD *)v26 + 48) = v26 + 400;
            *((_QWORD *)v26 + 13) = 0;
            v26[112] = 0;
            *((_QWORD *)v26 + 17) = 0;
            v26[144] = 0;
            *((_QWORD *)v26 + 21) = 0;
            v26[176] = 0;
            *((_QWORD *)v26 + 25) = 0;
            v26[208] = 0;
            *((_QWORD *)v26 + 29) = 0;
            v26[240] = 0;
            *((_QWORD *)v26 + 33) = 0;
            v26[272] = 0;
            *((_QWORD *)v26 + 37) = 0;
            v26[304] = 0;
            *((_QWORD *)v26 + 41) = 0;
            v26[336] = 0;
            *((_QWORD *)v26 + 45) = 0;
            v26[368] = 0;
            *((_QWORD *)v26 + 49) = 0;
            v26[400] = 0;
            *((_QWORD *)v26 + 52) = v26 + 432;
            *((_QWORD *)v26 + 53) = 0x800000000LL;
            *((_QWORD *)v26 + 66) = v26 + 544;
            *((_QWORD *)v26 + 67) = 0x600000000LL;
          }
          *v11 = v26;
        }
        v26[*v26 + 1] = 2;
        v27 = *v11;
        v28 = **v11;
        *v27 = v28 + 1;
        *(_QWORD *)&v27[8 * v28 + 16] = v24;
        goto LABEL_18;
      }
      v25 = *(_DWORD *)(a4 + 32) != 0 && *(_DWORD *)(*(_QWORD *)(v23 + 32) + 16LL) != *(_DWORD *)(a4 + 32);
    }
    v24 = v25;
    goto LABEL_16;
  }
LABEL_18:
  v29 = **(_QWORD **)(v10 + 32) & 0xFFFFFFFFFFFFFFFCLL;
  if ( (**(_QWORD **)(v10 + 32) & 2) == 0 )
    v29 = 0;
  v30 = 0;
  v31 = sub_8124E0(v29);
  sub_A2DD70(a2, v31, 2206);
  v7 = ptr;
LABEL_22:
  if ( v7 != v71 )
    free(v7);
  operator delete();
  return v30;
}

