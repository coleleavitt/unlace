__int64 __fastcall sub_D8A160(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _BYTE *v8; // rdi
  char *v9; // rdx
  __int64 v10; // rbx
  char *v11; // rax
  unsigned int v12; // ebx
  unsigned __int8 v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 *v22; // r13
  int v23; // eax
  __int64 v24; // rdi
  unsigned __int64 v25; // rax
  unsigned __int8 *v26; // r14
  _BOOL8 v27; // rcx
  _BYTE *v28; // rdx
  __int64 v29; // rax
  unsigned __int8 *v30; // r14
  __int64 v31; // rax
  unsigned __int64 v32; // rdi
  unsigned int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  unsigned __int8 *v40; // rdx
  int v41; // eax
  unsigned __int8 *v42; // rdx
  int v43; // eax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // r15
  void *v48; // rdi
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rsi
  __int64 v52; // rax
  void *v53; // rdi
  int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rdi
  __int64 v57; // rax
  __int64 v58; // rdx
  int v59; // eax
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 *v62; // rdi
  _BOOL8 v63; // [rsp+8h] [rbp-80h]
  __int64 v64; // [rsp+8h] [rbp-80h]
  _BOOL8 v65; // [rsp+8h] [rbp-80h]
  __int64 v66; // [rsp+10h] [rbp-78h]
  __int64 v67; // [rsp+18h] [rbp-70h]
  _QWORD v68[2]; // [rsp+20h] [rbp-68h] BYREF
  int v69; // [rsp+30h] [rbp-58h]
  void *ptr; // [rsp+38h] [rbp-50h]
  __int64 v71; // [rsp+40h] [rbp-48h]
  _BYTE v72[64]; // [rsp+48h] [rbp-40h] BYREF

  v69 = 0;
  v68[0] = 0;
  ptr = v72;
  v68[1] = 0;
  v71 = 0;
  sub_D88F90((__int64 *)a4, (__int64)v68);
  v8 = ptr;
  v9 = (char *)ptr + 8 * (unsigned int)v71;
  if ( ptr == v9 )
  {
LABEL_6:
    v12 = 1;
    goto LABEL_7;
  }
  v10 = *(_QWORD *)ptr;
  v11 = (char *)ptr + 8;
  if ( !*(_BYTE *)(*(_QWORD *)ptr + 28LL) )
  {
    while ( v9 != v11 )
    {
      v10 = *(_QWORD *)v11;
      v11 += 8;
      if ( *(_BYTE *)(v10 + 28) )
        goto LABEL_10;
    }
    goto LABEL_6;
  }
LABEL_10:
  v14 = 0;
  if ( *(_DWORD *)(a4 + 24) )
    goto LABEL_16;
  v15 = *(_QWORD *)(a4 + 32);
  v16 = *(unsigned int *)(a4 + 40);
  if ( v15 )
  {
    v17 = *(_QWORD *)(v15 + 32);
    if ( *(_DWORD *)(v17 + 24) != (_DWORD)v16 )
    {
      v14 = 1;
      if ( (_DWORD)v16 )
        goto LABEL_16;
    }
  }
  else
  {
    v17 = 64;
  }
  v14 = *(_BYTE *)(v17 + 60);
  if ( !v14 || (unsigned int)v16 == *(_QWORD *)a4 )
  {
    v14 = 0;
    if ( (unsigned int)v16 > 0xF )
      v14 = *(_BYTE *)(v15 + v16 + 28) >> 7;
  }
LABEL_16:
  v18 = a5;
  v22 = (__int64 *)sub_E0FE60(a2, a5, 2407, 0);
  v23 = *(_DWORD *)(a4 + 24);
  if ( v23 == 3 )
  {
    v25 = *(_QWORD *)(a4 + 40) & 0xFFFFFFFFFFFFFFF0LL;
    goto LABEL_21;
  }
  if ( !v23 )
  {
    v34 = *(_QWORD *)(a4 + 32);
    v35 = *(unsigned int *)(a4 + 40);
    v36 = *(_QWORD *)(v34 + 32);
    if ( *(_DWORD *)(v36 + 24) != (_DWORD)v35 && (_DWORD)v35 )
      v37 = *(_QWORD *)(v34 + (unsigned int)v35 + 32);
    else
      v37 = *(_QWORD *)(v34 + 32);
    if ( *(_QWORD *)(v37 + 40) || !*(_BYTE *)(v37 + 60) || *(_QWORD *)a4 == (unsigned int)v35 )
      goto LABEL_33;
    if ( *(_DWORD *)(v36 + 24) != (_DWORD)v35 && (_DWORD)v35 )
      v36 = *(_QWORD *)(v34 + (unsigned int)v35 + 32);
    v39 = *(_QWORD *)(sub_CCB860((__int64 *)v36) & 0xFFFFFFFFFFFFFFF0LL);
    v20 = *(unsigned __int8 *)(v39 + 16);
    v19 = (unsigned int)(v20 - 2);
    if ( (unsigned __int8)(v20 - 2) <= 4u )
      goto LABEL_47;
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v39 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) <= 4u )
    {
      v39 = sub_F3F310(
              v39,
              v18,
              (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v39 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2,
              v20);
      if ( v39 )
        goto LABEL_47;
    }
    v54 = *(_DWORD *)(a4 + 24);
    if ( v54 == 1 )
    {
      v56 = *(_QWORD *)(a4 + 32);
    }
    else if ( v54 )
    {
      v56 = 0;
      if ( v54 != 2 && v54 != 3 )
        v56 = *(_QWORD *)(*(_QWORD *)(a4 + 32) + 32LL);
    }
    else
    {
      v55 = *(_QWORD *)(a4 + 32);
      if ( v55 )
      {
        v56 = *(_QWORD *)(v55 + 32);
        v57 = *(unsigned int *)(a4 + 40);
        if ( *(_DWORD *)(v56 + 24) != (_DWORD)v57 && (_DWORD)v57 )
          v56 = *(_QWORD *)(v55 + v57 + 32);
      }
      else
      {
        v56 = 64;
      }
    }
    v39 = *(_QWORD *)(sub_CCB860((__int64 *)v56) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v39 + 16) == 14
      || (v58 = *(_QWORD *)(*(_QWORD *)(v39 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v58 + 16) == 14)
      && (v39 = sub_F3F310(v39, v18, v58, v20)) != 0 )
    {
LABEL_47:
      v25 = *(_QWORD *)(v39 + 32) & 0xFFFFFFFFFFFFFFF0LL;
      goto LABEL_21;
    }
    v59 = *(_DWORD *)(a4 + 24);
    if ( v59 == 1 )
    {
      v62 = *(__int64 **)(a4 + 32);
    }
    else
    {
      if ( v59 )
      {
        if ( v59 == 2 || v59 == 3 )
        {
          v62 = nullptr;
          goto LABEL_83;
        }
        v60 = *(_QWORD *)(a4 + 32);
      }
      else
      {
        v60 = 0;
        if ( *(_QWORD *)(a4 + 32) )
        {
          v60 = *(_QWORD *)(a4 + 32);
          v61 = *(unsigned int *)(a4 + 40);
          if ( *(_DWORD *)(*(_QWORD *)(v60 + 32) + 24LL) != (_DWORD)v61 )
          {
            if ( (_DWORD)v61 )
            {
              v62 = *(__int64 **)(v60 + v61 + 32);
              goto LABEL_83;
            }
          }
        }
      }
      v62 = *(__int64 **)(v60 + 32);
    }
LABEL_83:
    v39 = *(_QWORD *)(sub_CCB860(v62) & 0xFFFFFFFFFFFFFFF0LL);
    v19 = (unsigned int)*(unsigned __int8 *)(v39 + 16) - 57;
    if ( (unsigned int)v19 > 1 )
    {
      v39 = sub_D869D0(v39, v18, v19, v20);
      if ( !v39 )
      {
        v23 = *(_DWORD *)(a4 + 24);
        if ( v23 == 1 )
          goto LABEL_19;
        if ( v23 )
          goto LABEL_39;
        v34 = *(_QWORD *)(a4 + 32);
        v38 = v34;
        if ( !v34 )
          goto LABEL_41;
        v35 = *(unsigned int *)(a4 + 40);
LABEL_33:
        v24 = *(_QWORD *)(v34 + 32);
        if ( *(_DWORD *)(v24 + 24) != (_DWORD)v35 && (_DWORD)v35 )
          v24 = *(_QWORD *)(v34 + v35 + 32);
        goto LABEL_20;
      }
    }
    goto LABEL_47;
  }
  if ( v23 != 1 )
  {
LABEL_39:
    v24 = 0;
    if ( (unsigned int)(v23 - 2) <= 1 )
      goto LABEL_20;
    v38 = *(_QWORD *)(a4 + 32);
LABEL_41:
    v24 = *(_QWORD *)(v38 + 32);
    goto LABEL_20;
  }
LABEL_19:
  v24 = *(_QWORD *)(a4 + 32);
LABEL_20:
  v25 = sub_CCB860((__int64 *)v24) & 0xFFFFFFFFFFFFFFF0LL;
LABEL_21:
  if ( v22 )
  {
    v26 = (unsigned __int8 *)*v22;
    v27 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v25 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
        - 43 <= 1;
    if ( !*v22 )
    {
      v40 = (unsigned __int8 *)v22[1];
      v41 = *((_DWORD *)v40 + 3744);
      if ( v41 )
      {
        v49 = (unsigned int)(v41 - 1);
        *((_DWORD *)v40 + 3744) = v49;
        v26 = *(unsigned __int8 **)&v40[8 * v49 + 14848];
        v50 = *((unsigned int *)v26 + 134);
        *v26 = 0;
        v51 = *((_QWORD *)v26 + 66);
        *((_DWORD *)v26 + 106) = 0;
        v52 = v51 + (v50 << 6);
        while ( v51 != v52 )
        {
          while ( 1 )
          {
            v52 -= 64;
            v53 = *(void **)(v52 + 24);
            if ( v53 == (void *)(v52 + 40) )
              break;
            v67 = v52;
            v65 = v27;
            operator delete(v53);
            v52 = v67;
            v27 = v65;
            if ( v51 == v67 )
              goto LABEL_65;
          }
        }
LABEL_65:
        *((_DWORD *)v26 + 134) = 0;
      }
      else
      {
        v63 = v27;
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
        *((_QWORD *)v26 + 52) = v26 + 432;
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
        *((_QWORD *)v26 + 53) = 0x800000000LL;
        v27 = v63;
        *((_QWORD *)v26 + 66) = v26 + 544;
        *((_QWORD *)v26 + 67) = 0x600000000LL;
      }
      *v22 = (__int64)v26;
    }
    v26[*v26 + 1] = 2;
    v28 = (_BYTE *)*v22;
    v29 = *(unsigned __int8 *)*v22;
    *v28 = v29 + 1;
    *(_QWORD *)&v28[8 * v29 + 16] = v27;
    v30 = (unsigned __int8 *)*v22;
    v20 = v14;
    if ( !*v22 )
    {
      v42 = (unsigned __int8 *)v22[1];
      v43 = *((_DWORD *)v42 + 3744);
      if ( v43 )
      {
        v44 = (unsigned int)(v43 - 1);
        *((_DWORD *)v42 + 3744) = v44;
        v30 = *(unsigned __int8 **)&v42[8 * v44 + 14848];
        v45 = *((unsigned int *)v30 + 134);
        *v30 = 0;
        v46 = *((_QWORD *)v30 + 66);
        *((_DWORD *)v30 + 106) = 0;
        v47 = v46 + (v45 << 6);
        while ( v46 != v47 )
        {
          while ( 1 )
          {
            v47 -= 64;
            v48 = *(void **)(v47 + 24);
            if ( v48 == (void *)(v47 + 40) )
              break;
            v66 = v46;
            v64 = v20;
            operator delete(v48);
            v46 = v66;
            v20 = v64;
            if ( v66 == v47 )
              goto LABEL_60;
          }
        }
LABEL_60:
        *((_DWORD *)v30 + 134) = 0;
      }
      else
      {
        v30 = (unsigned __int8 *)operator new(0x3A0u);
        *v30 = 0;
        *((_QWORD *)v30 + 12) = v30 + 112;
        *((_QWORD *)v30 + 16) = v30 + 144;
        *((_QWORD *)v30 + 20) = v30 + 176;
        *((_QWORD *)v30 + 24) = v30 + 208;
        *((_QWORD *)v30 + 28) = v30 + 240;
        *((_QWORD *)v30 + 32) = v30 + 272;
        *((_QWORD *)v30 + 36) = v30 + 304;
        *((_QWORD *)v30 + 40) = v30 + 336;
        *((_QWORD *)v30 + 44) = v30 + 368;
        *((_QWORD *)v30 + 48) = v30 + 400;
        *((_QWORD *)v30 + 52) = v30 + 432;
        *((_QWORD *)v30 + 13) = 0;
        v30[112] = 0;
        *((_QWORD *)v30 + 17) = 0;
        v30[144] = 0;
        *((_QWORD *)v30 + 21) = 0;
        v30[176] = 0;
        *((_QWORD *)v30 + 25) = 0;
        v30[208] = 0;
        *((_QWORD *)v30 + 29) = 0;
        v30[240] = 0;
        *((_QWORD *)v30 + 33) = 0;
        v30[272] = 0;
        *((_QWORD *)v30 + 37) = 0;
        v30[304] = 0;
        *((_QWORD *)v30 + 41) = 0;
        v30[336] = 0;
        *((_QWORD *)v30 + 45) = 0;
        v30[368] = 0;
        *((_QWORD *)v30 + 49) = 0;
        v30[400] = 0;
        *((_QWORD *)v30 + 53) = 0x800000000LL;
        v20 = v14;
        *((_QWORD *)v30 + 66) = v30 + 544;
        *((_QWORD *)v30 + 67) = 0x600000000LL;
      }
      *v22 = (__int64)v30;
    }
    v30[*v30 + 1] = 2;
    v19 = *v22;
    v31 = *(unsigned __int8 *)*v22;
    v18 = (unsigned int)(v31 + 1);
    *(_BYTE *)v19 = v31 + 1;
    *(_QWORD *)(v19 + 8 * v31 + 16) = v20;
  }
  v32 = **(_QWORD **)(v10 + 32) & 0xFFFFFFFFFFFFFFFCLL;
  if ( (**(_QWORD **)(v10 + 32) & 2) == 0 )
    v32 = 0;
  v12 = 0;
  v33 = sub_BDCD00(v32, v18, v19, v20, v21);
  sub_E10070(a2, v33, 2408);
  v8 = ptr;
LABEL_7:
  if ( v8 != v72 )
    free(v8);
  operator delete();
  return v12;
}

