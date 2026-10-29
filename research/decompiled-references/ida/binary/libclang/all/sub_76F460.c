__int64 __fastcall sub_76F460(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 (__fastcall *v3)(__int64, __int64); // r12
  __int64 v5; // rbp
  __int64 v6; // rdi
  unsigned __int64 v7; // rax
  _DWORD *v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // r13
  __int64 v11; // rbp
  __int64 v12; // rdi
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r13
  __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // r15
  _BYTE *v23; // rdi
  unsigned int v24; // ebx
  _DWORD *v26; // rdi
  __int64 v27; // rcx
  __int64 v28; // rdi
  unsigned __int64 v29; // rax
  _DWORD *v30; // rdi
  _QWORD *v31; // rdi
  __int64 v32; // r13
  __int64 v33; // rdx
  _QWORD *v34; // rdi
  __int64 v35; // r15
  __int64 v36; // rdx
  __int64 v37; // rax
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rdx
  __int64 v40; // rax
  int v41; // eax
  __int64 v42; // rax
  int v43; // edx
  __int64 v44; // rax
  int v45; // edx
  __int64 v46; // rax
  int v47; // edx
  _QWORD *v48; // rdi
  __int64 v49; // r15
  __int64 v50; // rdx
  __int64 v52; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v53; // [rsp+10h] [rbp-98h]
  __int64 v54; // [rsp+18h] [rbp-90h]
  void *ptr; // [rsp+20h] [rbp-88h] BYREF
  __int64 i; // [rsp+28h] [rbp-80h]
  _BYTE v57[120]; // [rsp+30h] [rbp-78h] BYREF

  v3 = (unsigned __int8 (__fastcall *)(__int64, __int64))a2;
  ptr = v57;
  for ( i = 0x800000000LL; ; LODWORD(i) = i - 1 )
  {
    v5 = *(_QWORD *)(a1 + 104);
    v6 = *(_QWORD *)(v5 + 96);
    v7 = v6 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v6 & 1) != 0 )
    {
      if ( !v7 )
        goto LABEL_6;
    }
    else
    {
      if ( v7 <= 3 || (v6 & 2) == 0 )
        goto LABEL_6;
      v31 = (_QWORD *)(v6 & 0xFFFFFFFFFFFFFFFCLL);
      v32 = v31[2275];
      if ( !v32 )
      {
        *(_QWORD *)(v5 + 96) = v5 & 0xFFFFFFFFFFFFFFFALL | 1;
        goto LABEL_6;
      }
      v33 = v31[274];
      v31[284] += 24LL;
      v7 = (v33 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v31[275] >= v7 + 24 && v33 )
      {
        v31[274] = v7 + 24;
      }
      else
      {
        a2 = 24;
        v7 = sub_76D810((__int64)(v31 + 274), 24, 3);
      }
      *(_QWORD *)v7 = v32;
      *(_DWORD *)(v7 + 8) = 0;
      v6 = v7 | 5;
      *(_QWORD *)(v7 + 16) = v5;
      *(_QWORD *)(v5 + 96) = v7 | 5;
      LOBYTE(v7) = v7 & 0xFA | 4;
    }
    if ( (v7 & 4) != 0 )
    {
      v8 = (_DWORD *)(v6 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v8 )
      {
        v42 = *(_QWORD *)v8;
        v43 = *(_DWORD *)(*(_QWORD *)v8 + 12LL);
        if ( v8[2] != v43 )
        {
          v8[2] = v43;
          a2 = v5;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v42 + 144LL))(v42, v5);
        }
      }
    }
LABEL_6:
    v9 = *(_QWORD *)(a1 + 128);
    if ( (*(_BYTE *)(v9 + 24) & 1) != 0 )
      v10 = sub_7A2E20(v9, a2);
    else
      v10 = *(_QWORD *)(v9 + 24);
    v11 = *(_QWORD *)(a1 + 104);
    v12 = *(_QWORD *)(v11 + 96);
    v13 = v12 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v12 & 1) != 0 )
    {
      if ( !v13 )
        goto LABEL_50;
LABEL_28:
      if ( (v13 & 4) != 0 )
      {
        v26 = (_DWORD *)(v12 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v26 )
        {
          v44 = *(_QWORD *)v26;
          v45 = *(_DWORD *)(*(_QWORD *)v26 + 12LL);
          if ( v26[2] != v45 )
          {
            v26[2] = v45;
            a2 = v11;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v44 + 144LL))(v44, v11);
          }
        }
      }
      v11 = *(_QWORD *)(a1 + 104);
      goto LABEL_31;
    }
    if ( v13 > 3 )
    {
      if ( (v12 & 2) == 0 )
      {
        v14 = *(_QWORD *)(a1 + 128);
        v15 = v10 + 24LL * *(unsigned int *)(v14 + 16);
        goto LABEL_12;
      }
      v34 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFCLL);
      v35 = v34[2275];
      if ( !v35 )
      {
        *(_QWORD *)(v11 + 96) = v11 & 0xFFFFFFFFFFFFFFFALL | 1;
        v11 = *(_QWORD *)(a1 + 104);
        goto LABEL_31;
      }
      v36 = v34[274];
      v34[284] += 24LL;
      v13 = (v36 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v34[275] >= v13 + 24 && v36 )
      {
        v34[274] = v13 + 24;
      }
      else
      {
        a2 = 24;
        v13 = sub_76D810((__int64)(v34 + 274), 24, 3);
      }
      *(_QWORD *)v13 = v35;
      *(_DWORD *)(v13 + 8) = 0;
      v12 = v13 | 5;
      *(_QWORD *)(v13 + 16) = v11;
      *(_QWORD *)(v11 + 96) = v13 | 5;
      LOBYTE(v13) = v13 & 0xFA | 4;
      goto LABEL_28;
    }
    if ( !v13 )
    {
LABEL_50:
      v27 = *(_QWORD *)(a1 + 128);
      v15 = v10 + 24LL * *(unsigned int *)(v27 + 16);
LABEL_51:
      v14 = v27;
      goto LABEL_12;
    }
LABEL_31:
    v27 = *(_QWORD *)(a1 + 128);
    v28 = *(_QWORD *)(v11 + 96);
    v14 = v27;
    v15 = v10 + 24LL * *(unsigned int *)(v27 + 16);
    v29 = v28 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v28 & 1) != 0 )
    {
      if ( !v29 )
        goto LABEL_51;
    }
    else
    {
      if ( v29 <= 3 )
        goto LABEL_51;
      if ( (v28 & 2) == 0 )
        goto LABEL_12;
      v48 = (_QWORD *)(v28 & 0xFFFFFFFFFFFFFFFCLL);
      v49 = v48[2275];
      if ( !v49 )
      {
        *(_QWORD *)(v11 + 96) = v11 & 0xFFFFFFFFFFFFFFFALL | 1;
        v14 = *(_QWORD *)(a1 + 128);
LABEL_12:
        if ( (*(_BYTE *)(v14 + 24) & 1) == 0 )
          goto LABEL_13;
        goto LABEL_36;
      }
      v50 = v48[274];
      v48[284] += 24LL;
      v29 = (v50 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v48[275] >= v29 + 24 && v50 )
      {
        v48[274] = v29 + 24;
      }
      else
      {
        a2 = 24;
        v29 = sub_76D810((__int64)(v48 + 274), 24, 3);
      }
      *(_QWORD *)v29 = v49;
      *(_DWORD *)(v29 + 8) = 0;
      v28 = v29 | 5;
      *(_QWORD *)(v29 + 16) = v11;
      *(_QWORD *)(v11 + 96) = v29 | 5;
      LOBYTE(v29) = v29 & 0xFA | 4;
    }
    if ( (v29 & 4) == 0 )
    {
      v27 = *(_QWORD *)(a1 + 128);
      goto LABEL_51;
    }
    v30 = (_DWORD *)(v28 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v30 )
    {
      v46 = *(_QWORD *)v30;
      v47 = *(_DWORD *)(*(_QWORD *)v30 + 12LL);
      if ( v30[2] != v47 )
      {
        v30[2] = v47;
        a2 = v11;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v46 + 144LL))(v46, v11);
      }
    }
    v14 = *(_QWORD *)(a1 + 128);
    if ( (*(_BYTE *)(v14 + 24) & 1) == 0 )
    {
LABEL_13:
      v16 = *(_QWORD *)(v14 + 24);
      goto LABEL_14;
    }
LABEL_36:
    v16 = sub_7A2E20(v14, a2);
LABEL_14:
    if ( v15 != v16 )
      break;
LABEL_56:
    v23 = ptr;
    if ( !(_DWORD)i )
    {
      v24 = 1;
      goto LABEL_24;
    }
    a1 = *((_QWORD *)ptr + (unsigned int)i - 1);
  }
  while ( 1 )
  {
    v17 = *(_QWORD *)(**(_QWORD **)(v16 + 16) & 0xFFFFFFFFFFFFFFF0LL);
    v18 = *(_QWORD *)(v17 + 8);
    if ( (v18 & 7) != 0 || (v18 & 8) != 0 )
      v17 = sub_B0CF30(**(_QWORD **)(v16 + 16), a2);
    v19 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(*v19 + 16LL) != 47 )
      break;
    v20 = sub_B14A40(*v19);
    v21 = sub_78B3D0(v20);
    v22 = v21;
    if ( !v21 )
      break;
    v52 = v21 + 64;
    if ( (unsigned __int8)sub_79B8A0(v21 + 64) )
    {
      if ( (*(_BYTE *)(a1 + 72) & 0x7F) == 0x16 || (*(_BYTE *)(a1 + 72) & 0x7F) == 0 )
        break;
      v39 = a1 + 64;
      while ( 1 )
      {
        v53 = v39;
        v54 = sub_79CC40(v39);
        if ( v54 == sub_79CC40(v52) )
          break;
        v40 = *(_QWORD *)(sub_79A2E0(v53) + 16);
        v39 = v40 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v40 & 4) != 0 )
        {
          v39 = *(_QWORD *)v39;
          v41 = *(_BYTE *)(v39 + 8) & 0x7F;
          if ( v41 == 22 )
            goto LABEL_23;
        }
        else
        {
          v41 = *(_BYTE *)(v39 + 8) & 0x7F;
          if ( v41 == 22 )
            goto LABEL_23;
        }
        if ( !v41 )
          goto LABEL_23;
      }
    }
    v37 = (unsigned int)i;
    v38 = (unsigned int)i + 1LL;
    if ( HIDWORD(i) < v38 )
    {
      sub_25D6060(&ptr, v57, v38, 8);
      v37 = (unsigned int)i;
    }
    a2 = v22;
    *((_QWORD *)ptr + v37) = v22;
    LODWORD(i) = i + 1;
    if ( !v3(a3, v22) )
      break;
    v16 += 24;
    if ( v16 == v15 )
      goto LABEL_56;
  }
LABEL_23:
  v23 = ptr;
  v24 = 0;
LABEL_24:
  if ( v23 != v57 )
    free(v23);
  return v24;
}

