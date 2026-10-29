__int64 __fastcall sub_1CC0B10(__int64 *a1, __int64 a2, __int64 a3, double a4)
{
  __int64 v4; // rax
  __int64 v5; // r12
  unsigned __int8 v6; // dl
  _QWORD *v7; // rbx
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // r15
  unsigned __int8 v10; // al
  int v11; // edx
  __int64 v12; // r13
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r9
  unsigned __int64 v17; // rdx
  char *v18; // rbx
  unsigned int *v19; // r13
  char *v20; // r12
  char *v21; // r14
  unsigned __int64 v22; // r15
  unsigned __int8 v23; // al
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  _BYTE *v26; // rcx
  char *v27; // r14
  char *v28; // r15
  unsigned __int64 v29; // rax
  unsigned __int8 v30; // dl
  int v31; // eax
  char *v32; // rdi
  unsigned int v33; // ebp
  unsigned int *v35; // rbx
  unsigned __int8 v36; // al
  unsigned __int64 v37; // rdx
  __int64 v38; // rsi
  unsigned int v39; // eax
  int v40; // eax
  _QWORD *v41; // rax
  __int64 v42; // r8
  __int64 v43; // r9
  char *v44; // rdi
  int v45; // ebp
  _QWORD *v46; // rax
  __int64 v47; // r8
  __int64 v48; // r9
  int v49; // eax
  unsigned int *v50; // rbx
  unsigned int *v51; // rbx
  __int64 *v52; // rbp
  __int64 v53; // rax
  __int64 *v54; // rsi
  char *v55; // r13
  unsigned int v56; // edx
  unsigned __int64 v57; // rdi
  char v58; // al
  unsigned __int8 v59; // al
  _QWORD *v60; // rax
  __int64 v61; // r8
  __int64 v62; // r9
  _QWORD *v63; // [rsp+8h] [rbp-1A0h]
  unsigned __int64 v64; // [rsp+8h] [rbp-1A0h]
  unsigned __int64 v65; // [rsp+10h] [rbp-198h]
  __int64 v66; // [rsp+28h] [rbp-180h]
  __int64 v67[2]; // [rsp+38h] [rbp-170h] BYREF
  unsigned int *v68; // [rsp+48h] [rbp-160h] BYREF
  __int64 v69; // [rsp+50h] [rbp-158h] BYREF
  unsigned __int64 v70; // [rsp+58h] [rbp-150h] BYREF
  void *ptr; // [rsp+60h] [rbp-148h] BYREF
  __int64 v72; // [rsp+68h] [rbp-140h]
  _BYTE v73[64]; // [rsp+70h] [rbp-138h] BYREF
  __int128 v74; // [rsp+B0h] [rbp-F8h] BYREF
  void *v75; // [rsp+C0h] [rbp-E8h]
  __int64 v76; // [rsp+C8h] [rbp-E0h]
  _BYTE v77[96]; // [rsp+D0h] [rbp-D8h] BYREF
  __int16 v78; // [rsp+130h] [rbp-78h]
  void *v79; // [rsp+138h] [rbp-70h]
  __int64 v80; // [rsp+140h] [rbp-68h]
  _BYTE v81[96]; // [rsp+148h] [rbp-60h] BYREF

  v4 = *(unsigned int *)(a3 + 16);
  v67[0] = a2;
  v68 = nullptr;
  v69 = 0;
  if ( !(_DWORD)v4 )
    return 0;
  v5 = a3;
  v6 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( (unsigned int)v6 - 34 > 5 )
  {
    if ( (unsigned int)v6 - 40 > 6 )
    {
      if ( (unsigned int)v6 - 58 <= 3 )
      {
        if ( *(_DWORD *)v5 != 2 )
          return 0;
        v64 = **(_QWORD **)(v5 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v51 = (unsigned int *)sub_16C47B0(v64);
        if ( (v51[7] & 0x7F) - 59 > 2 )
          return 0;
        v68 = v51;
        v69 = sub_B971E0((__int64)v51);
        v65 = sub_B97210((__int64)v51);
      }
      else
      {
        if ( v6 != 62 )
          return 0;
        if ( *(_DWORD *)v5 != 2 )
          return 0;
        v64 = **(_QWORD **)(v5 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v50 = (unsigned int *)sub_16C47B0(v64);
        if ( (v50[7] & 0x7F) != 0x3E )
          return 0;
        v68 = v50;
        v69 = (__int64)sub_B78820((__int64)v50);
        v65 = *((_QWORD *)v50 + 18);
      }
    }
    else
    {
      if ( *(_DWORD *)v5 != 2 )
        return 0;
      v64 = **(_QWORD **)(v5 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v35 = (unsigned int *)sub_16C47B0(v64);
      v36 = v35[7] & 0x7F;
      if ( (unsigned int)v36 - 40 > 6 || v36 == 43 )
        return 0;
      v37 = *((_QWORD *)v35 + 2) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*((_QWORD *)v35 + 2) & 4) != 0 )
        v37 = *(_QWORD *)v37;
      if ( ((*(_BYTE *)(v37 + 8) + 70) & 0x7Fu) > 3 )
        return 0;
      v68 = v35;
      v69 = (__int64)sub_B73FE0((__int64)v35);
      v65 = sub_B73ED0((__int64)v35);
    }
LABEL_37:
    if ( v68 )
    {
      if ( (*(_WORD *)(v67[0] + 30) & 0x180) == 0 )
      {
        v38 = *(unsigned int *)(v67[0] + 24);
        if ( v69 )
        {
          LOBYTE(ptr) = 0;
          if ( (unsigned __int8)sub_1CBF140(
                                  (__int64)a1,
                                  v38,
                                  2,
                                  (__int64)v68,
                                  ((unsigned int)(*(__int64 *)v65 >> 1) & 3) + 1,
                                  *(unsigned int *)(v65 + 8),
                                  &ptr) )
            return 1;
          LOBYTE(v39) = sub_1CC0680(a1, v69, *(_DWORD *)(v67[0] + 24), 0);
          v33 = v39;
          if ( (_BYTE)v39 )
          {
            return 1;
          }
          else
          {
            v40 = *(_BYTE *)(v67[0] + 28) & 0x7F;
            if ( (unsigned int)(v40 - 34) > 5 )
            {
              if ( (unsigned int)(v40 - 40) > 6 )
              {
                if ( (unsigned int)(v40 - 59) > 2 )
                {
                  v60 = (_QWORD *)sub_B8C330(v67[0]);
                  sub_B7DA50(v67[0], v60, v69, 2, v61, v62);
                }
                else
                {
                  sub_B9B800(v67[0], v69, 2);
                }
              }
              else
              {
                sub_B74500(v67[0], v69, 2);
              }
            }
            else
            {
              if ( (unsigned int)sub_B77D20((__int64)v68) == 1
                && (*(_BYTE *)((*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)v68 + 32LL))(v68) + 82) & 0x40) != 0 )
              {
                sub_B7C8B0((__int64)v68, 0, 0);
              }
              v41 = (_QWORD *)sub_B8C330(v67[0]);
              sub_B7DAE0(v67[0], v41, v69, 2, v42, v43);
            }
            v44 = *(char **)(v5 + 88);
            *(_DWORD *)v5 = 0;
            *(_DWORD *)(v5 + 16) = 0;
            if ( v44 )
              sub_1A39780(v44);
            *(_BYTE *)(v5 + 166) = 0;
            *(_OWORD *)(v5 + 88) = 0;
            *(_QWORD *)&v74 = v64 | (*(_BYTE *)(v64 + 29) >> 5) & 3;
            sub_1743080(v5 + 8, v74);
            *(_DWORD *)v5 = 2;
          }
        }
        else
        {
          sub_168B9F0((__int64)&v74, a1 + 1, v38, 0x1389u, 0);
          sub_17BA610((__int64)&v74, v67);
          sub_15F7200(&v74);
          v33 = 1;
          sub_168B9F0((__int64)&v74, a1 + 1, v68[6], 0x18DDu, 0);
          sub_15F7200(&v74);
        }
        return v33;
      }
      if ( v69 )
      {
        v31 = *(_BYTE *)(v67[0] + 28) & 0x7F;
        if ( (unsigned int)(v31 - 35) <= 3 )
        {
          v45 = sub_B77D20((__int64)v68);
          v46 = (_QWORD *)sub_B8C330(v67[0]);
          sub_B7DAE0(v67[0], v46, v69, v45, v47, v48);
        }
        else if ( (unsigned int)(v31 - 59) <= 2 )
        {
          v49 = sub_B97260((__int64)v68);
          sub_B9B800(v67[0], v69, v49);
        }
      }
      v32 = *(char **)(v5 + 88);
      *(_DWORD *)v5 = 0;
      *(_DWORD *)(v5 + 16) = 0;
      if ( v32 )
        sub_1A39780(v32);
      *(_BYTE *)(v5 + 166) = 0;
      *(_OWORD *)(v5 + 88) = 0;
      *(_QWORD *)&v74 = v64 | (*(_BYTE *)(v64 + 29) >> 5) & 3;
      sub_1743080(v5 + 8, v74);
      *(_DWORD *)v5 = 2;
    }
    return 0;
  }
  v7 = *(_QWORD **)(v5 + 8);
  v66 = v5;
  ptr = v73;
  v63 = &v7[v4];
  v72 = 0x800000000LL;
  do
  {
    while ( 1 )
    {
      v8 = *v7 & 0xFFFFFFFFFFFFFFF8LL;
      v9 = v8;
      v10 = *(_BYTE *)(v8 + 28) & 0x7F;
      v11 = v10;
      if ( ((v10 + 52) & 0x7Fu) <= 1 || (unsigned int)v10 - 53 <= 1 )
      {
        v9 = sub_B72ED0(*v7 & 0xFFFFFFFFFFFFFFF8LL);
        v11 = *(_BYTE *)(v9 + 28) & 0x7F;
      }
      if ( (unsigned int)(v11 - 35) > 3 )
        goto LABEL_4;
      v12 = *(_QWORD *)(a2 + 48);
      if ( !(unsigned __int8)sub_1E5F370(a1, v12) )
        v12 = sub_1D3AE30(a1, v12, *(_QWORD *)(v9 + 48), 0);
      v13 = *(_QWORD *)&byte_8[*(_QWORD *)(v9 + 48) & 0xFFFFFFFFFFFFFFF0LL];
      if ( (v13 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v13 | (unsigned __int8)*(_QWORD *)(v9 + 48)) & 7) != (*(_QWORD *)&byte_8[v12 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)*(_QWORD *)&byte_8[v12 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v12) & 7) )
        goto LABEL_4;
      v78 = 0;
      v75 = v77;
      v74 = 0;
      v76 = 0x400000000LL;
      v79 = v81;
      v80 = 0x400000000LL;
      v14 = *(_QWORD *)(v9 + 56);
      if ( (v14 & 4) == 0 || !*(_QWORD *)((v14 & 0xFFFFFFFFFFFFFFF8LL) + 40) )
        goto LABEL_13;
      if ( !(unsigned __int8)sub_17516B0((__int64)a1, v9, (__int64)&v74, *(_DWORD *)(v67[0] + 24), 1u, a4) && (_BYTE)v78 )
        break;
      if ( v79 != v81 )
        free(v79);
      if ( v75 != v77 )
        free(v75);
LABEL_4:
      if ( v63 == ++v7 )
        goto LABEL_16;
    }
    if ( v79 != v81 )
      free(v79);
    if ( v75 != v77 )
      free(v75);
LABEL_13:
    v15 = (unsigned int)v72;
    v16 = v8 | 3;
    v17 = (unsigned int)v72 + 1LL;
    *(_QWORD *)&v74 = v8 | 3;
    if ( v17 > HIDWORD(v72) )
    {
      sub_2237220(&ptr, v73, v17, 8);
      v15 = (unsigned int)v72;
      v16 = v8 | 3;
    }
    ++v7;
    *((_QWORD *)ptr + v15) = v16;
    LODWORD(v72) = v72 + 1;
  }
  while ( v63 != v7 );
LABEL_16:
  v18 = (char *)ptr;
  if ( !(_DWORD)v72 )
  {
    v33 = 0;
    goto LABEL_79;
  }
  v19 = nullptr;
  v20 = (char *)ptr;
  v21 = (char *)ptr + 8 * (unsigned int)v72;
  do
  {
    while ( 1 )
    {
      v22 = *(_QWORD *)v20 & 0xFFFFFFFFFFFFFFF8LL;
      v23 = *(_BYTE *)(v22 + 28) & 0x7F;
      if ( (unsigned int)v23 - 53 <= 1 || ((v23 + 52) & 0x7Fu) <= 1 )
        v22 = sub_B72ED0(*(_QWORD *)v20 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v18 != v20 )
        break;
      v20 += 8;
      v19 = (unsigned int *)v22;
      if ( v21 == v20 )
        goto LABEL_26;
    }
    if ( sub_1D3B1F0(a1, v22, v19) == v22 )
    {
      v18 = v20;
      v19 = (unsigned int *)v22;
    }
    v20 += 8;
  }
  while ( v21 != v20 );
LABEL_26:
  v24 = *(_QWORD *)v18;
  v5 = v66;
  v68 = v19;
  v64 = v24 & 0xFFFFFFFFFFFFFFF8LL;
  v69 = (__int64)sub_B77970((__int64)v19);
  v25 = sub_B77930((__int64)v19);
  v26 = ptr;
  v65 = v25;
  v27 = (char *)ptr + 8 * (unsigned int)v72;
  if ( v27 == ptr )
  {
LABEL_35:
    if ( v26 != v73 )
      free(v26);
    goto LABEL_37;
  }
  v28 = (char *)ptr;
  while ( 1 )
  {
    v29 = *(_QWORD *)v28 & 0xFFFFFFFFFFFFFFF8LL;
    v30 = *(_BYTE *)(v29 + 28) & 0x7F;
    if ( ((v30 + 52) & 0x7Fu) <= 1 || (unsigned int)v30 - 53 <= 1 )
      v29 = sub_B72ED0(*(_QWORD *)v28 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v18 != v28 && (unsigned int *)sub_1D3B1F0(a1, v29, v19) != v19 )
      break;
    v28 += 8;
    if ( v27 == v28 )
    {
      v26 = ptr;
      goto LABEL_35;
    }
  }
  v52 = a1 + 1;
  sub_168B9F0((__int64)&v74, a1 + 1, *(_DWORD *)(v67[0] + 24), 0xF19u, 0);
  v53 = sub_17BA610((__int64)&v74, v67);
  v54 = &v69;
  if ( !v69 )
    v54 = (__int64 *)&v68;
  sub_17BA610(v53, v54);
  sub_15F7200(&v74);
  v18 = (char *)ptr;
  v55 = (char *)ptr + 8 * (unsigned int)v72;
  if ( v55 != ptr )
  {
    do
    {
      v57 = *(_QWORD *)v18 & 0xFFFFFFFFFFFFFFF8LL;
      v58 = *(_BYTE *)(v57 + 28);
      v70 = v57;
      v59 = v58 & 0x7F;
      if ( ((v59 + 52) & 0x7Fu) <= 1 || (unsigned int)v59 - 53 <= 1 )
      {
        v70 = sub_B72ED0(v57);
        v56 = *(_DWORD *)(v70 + 24);
      }
      else
      {
        v56 = *(_DWORD *)(v57 + 24);
      }
      sub_168B9F0((__int64)&v74, v52, v56, 0x1775u, 0);
      v18 += 8;
      sub_17BA610((__int64)&v74, (__int64 *)&v70);
      sub_15F7200(&v74);
    }
    while ( v55 != v18 );
    v18 = (char *)ptr;
  }
  v33 = 1;
LABEL_79:
  if ( v18 != v73 )
    free(v18);
  return v33;
}
