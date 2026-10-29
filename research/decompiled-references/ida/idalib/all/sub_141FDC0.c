__int64 __fastcall sub_141FDC0(__int64 a1, __int64 a2, __int64 a3)
{
  char v5; // al
  bool v6; // bp
  char v7; // bp
  unsigned __int16 v8; // r13
  unsigned int v9; // eax
  unsigned int v10; // r14d
  __int64 v11; // rbp
  char *v12; // rdx
  __int64 v13; // rcx
  char *v14; // rdi
  __int64 v15; // r9
  __int64 v16; // rcx
  char *v17; // rax
  char *v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int16 v21; // dx
  int v22; // edx
  __int64 v23; // rsi
  int v24; // ecx
  _BYTE *v25; // rax
  char v26; // al
  char v27; // bp
  __int16 v28; // dx
  _BYTE *v29; // rbx
  __int64 v31; // rax
  __int64 v32; // rbx
  unsigned __int64 v33; // rdx
  int v34; // eax
  __int64 v35; // rax
  size_t v36; // rbp
  void *v37; // rax
  char v38; // al
  char v39; // bp
  __int16 v40; // dx
  __int64 v41; // rcx
  __int64 v42; // rax
  int v43; // edx
  __int64 v44; // rcx
  __int64 v45; // rbp
  char *v46; // rax
  unsigned __int8 *v47[10]; // [rsp+10h] [rbp-198h] BYREF
  void *ptr; // [rsp+60h] [rbp-148h] BYREF
  __int64 v49; // [rsp+68h] [rbp-140h]
  _BYTE v50[312]; // [rsp+70h] [rbp-138h] BYREF

  v49 = 0x2000000000LL;
  v5 = *(_BYTE *)(a1 + 544);
  ptr = v50;
  v6 = (v5 & 0x20) != 0;
  while ( 1 )
  {
    v7 = 32 * v6;
    do
    {
      *(_BYTE *)(a1 + 544) = v5 | 0x20;
      sub_14634E0(a1, a3);
      v5 = v7 | *(_BYTE *)(a1 + 544) & 0xDF;
      *(_BYTE *)(a1 + 544) = v5;
      v8 = *(_WORD *)(a3 + 16);
    }
    while ( v8 == 4 );
    switch ( v8 )
    {
      case 0x17u:
        if ( (_DWORD)v49 )
        {
          v22 = *(_DWORD *)a3;
          v23 = *(_QWORD *)(a1 + 48);
          v24 = 1123;
          goto LABEL_45;
        }
        goto LABEL_50;
      case 0x1Bu:
        v25 = *(_BYTE **)(a1 + 56);
        if ( (*v25 & 1) == 0 )
        {
          sub_FC70B0((__int64)v47, *(_QWORD *)(a1 + 48), *(_DWORD *)a3, (v25[1] & 0x10) == 0 ? 1260 : 1348);
          sub_AEA040((__int64)v47);
          v25 = *(_BYTE **)(a1 + 56);
        }
        if ( (v25[47] & 0x20) != 0 && (v25[52] & 1) == 0 )
        {
          sub_FC70B0((__int64)v47, *(_QWORD *)(a1 + 48), *(_DWORD *)a3, 1248);
          sub_AEA040((__int64)v47);
        }
        v26 = *(_BYTE *)(a1 + 544);
        v27 = v26 & 0x20;
        do
        {
          *(_BYTE *)(a1 + 544) = v26 | 0x20;
          sub_14634E0(a1, a3);
          v26 = v27 | *(_BYTE *)(a1 + 544) & 0xDF;
          *(_BYTE *)(a1 + 544) = v26;
          v28 = *(_WORD *)(a3 + 16);
        }
        while ( v28 == 4 );
        if ( v28 != 23 )
        {
LABEL_44:
          v23 = *(_QWORD *)(a1 + 48);
          v22 = *(_DWORD *)a3;
          v24 = 1157;
          goto LABEL_45;
        }
        v31 = (unsigned int)v49;
        v32 = *(_QWORD *)(a1 + 320);
        v33 = (unsigned int)v49 + 1LL;
        if ( v33 > HIDWORD(v49) )
        {
          sub_2237220(&ptr, v50, v33, 8);
          v31 = (unsigned int)v49;
        }
        *((_QWORD *)ptr + v31) = v32;
        v34 = v49;
        *(_BYTE *)(a2 + 36) |= 4u;
        v29 = ptr;
        v35 = (unsigned int)(v34 + 1);
        LODWORD(v49) = v35;
        if ( !(_DWORD)v35 )
        {
LABEL_51:
          v10 = 0;
          goto LABEL_46;
        }
        *(_DWORD *)(a2 + 24) = v35;
        v36 = 8 * v35;
        v37 = (void *)sub_9C3B30((__int64 *)(a1 + 128), 8 * v35, 3u);
        *(_QWORD *)(a2 + 8) = v37;
        memmove(v37, v29, v36);
LABEL_50:
        v29 = ptr;
        goto LABEL_51;
      case 2u:
        goto LABEL_44;
    }
    LOBYTE(v9) = sub_141A630(v8);
    v10 = v9;
    if ( (_BYTE)v9 || v8 == 1 || (v11 = *(_QWORD *)(a3 + 8)) == 0 )
    {
      v22 = *(_DWORD *)a3;
      v23 = *(_QWORD *)(a1 + 48);
      v24 = 1144;
      goto LABEL_45;
    }
    v12 = (char *)ptr;
    v13 = 8LL * (unsigned int)v49;
    v14 = (char *)ptr + v13;
    v15 = v13 >> 3;
    v16 = v13 >> 5;
    if ( !v16 )
    {
      v17 = (char *)ptr;
LABEL_23:
      if ( v15 != 2 )
      {
        if ( v15 != 3 )
        {
          if ( v15 != 1 )
            goto LABEL_28;
          goto LABEL_26;
        }
        if ( v11 == *(_QWORD *)v17 )
          goto LABEL_27;
        v17 += 8;
      }
      if ( v11 == *(_QWORD *)v17 )
        goto LABEL_27;
      v17 += 8;
LABEL_26:
      if ( v11 != *(_QWORD *)v17 )
        goto LABEL_28;
      goto LABEL_27;
    }
    if ( v11 == *(_QWORD *)ptr )
    {
      v17 = (char *)ptr;
    }
    else
    {
      v17 = (char *)ptr + 8;
      if ( v11 != *((_QWORD *)ptr + 1) )
      {
        v17 = (char *)ptr + 16;
        if ( v11 != *((_QWORD *)ptr + 2) )
        {
          v17 = (char *)ptr + 24;
          v18 = (char *)ptr + 32 * v16;
          if ( v11 != *((_QWORD *)ptr + 3) )
          {
            while ( 1 )
            {
              v17 = v12 + 32;
              if ( v18 == v12 + 32 )
              {
                v15 = (v14 - v17) >> 3;
                goto LABEL_23;
              }
              if ( v11 == *((_QWORD *)v12 + 4) )
                goto LABEL_27;
              if ( v11 == *((_QWORD *)v12 + 5) )
              {
                v17 = v12 + 40;
                goto LABEL_27;
              }
              if ( v11 == *((_QWORD *)v12 + 6) )
              {
                v17 = v12 + 48;
                goto LABEL_27;
              }
              if ( v11 == *((_QWORD *)v12 + 7) )
                break;
              v12 += 32;
            }
            v17 = v12 + 56;
          }
        }
      }
    }
LABEL_27:
    if ( v14 != v17 )
    {
      v10 = 1;
      sub_FC70B0((__int64)v47, *(_QWORD *)(a1 + 48), *(_DWORD *)a3, 1112);
      sub_AE9DF0(v47, v11, 5u);
      sub_AEA040((__int64)v47);
      v29 = ptr;
      goto LABEL_46;
    }
LABEL_28:
    if ( (unsigned __int64)(unsigned int)v49 + 1 > HIDWORD(v49) )
    {
      sub_2237220(&ptr, v50, (unsigned int)v49 + 1LL, 8);
      v14 = (char *)ptr + 8 * (unsigned int)v49;
    }
    *(_QWORD *)v14 = v11;
    v5 = *(_BYTE *)(a1 + 544);
    LODWORD(v49) = v49 + 1;
    v6 = (v5 & 0x20) != 0;
    do
    {
      *(_BYTE *)(a1 + 544) = v5 | 0x20;
      sub_14634E0(a1, a3);
      v5 = (32 * v6) | *(_BYTE *)(a1 + 544) & 0xDF;
      *(_BYTE *)(a1 + 544) = v5;
      v21 = *(_WORD *)(a3 + 16);
    }
    while ( v21 == 4 );
    if ( v21 == 27 )
      break;
    if ( v21 != 66 )
    {
      if ( v21 == 23 )
      {
        v42 = (unsigned int)v49;
        v29 = ptr;
        v41 = a2;
        v43 = v49;
        if ( (_DWORD)v49 )
          goto LABEL_61;
        goto LABEL_46;
      }
      v22 = *(_DWORD *)a3;
      v23 = *(_QWORD *)(a1 + 48);
      v24 = 1121;
LABEL_45:
      v10 = 1;
      sub_FC70B0((__int64)v47, v23, v22, v24);
      sub_AEA040((__int64)v47);
      v29 = ptr;
      goto LABEL_46;
    }
  }
  sub_FC70B0((__int64)v47, *(_QWORD *)(a1 + 48), *(_DWORD *)a3, 1229);
  sub_AEA040((__int64)v47);
  v38 = *(_BYTE *)(a1 + 544);
  v39 = v38 & 0x20;
  do
  {
    *(_BYTE *)(a1 + 544) = v38 | 0x20;
    sub_14634E0(a1, a3);
    v38 = v39 | *(_BYTE *)(a1 + 544) & 0xDF;
    *(_BYTE *)(a1 + 544) = v38;
    v40 = *(_WORD *)(a3 + 16);
  }
  while ( v40 == 4 );
  if ( v40 == 23 )
  {
    v41 = a2;
    v42 = (unsigned int)v49;
    v29 = ptr;
    *(_BYTE *)(a2 + 36) |= 8u;
    v43 = v42;
    if ( v42 )
    {
LABEL_61:
      *(_DWORD *)(v41 + 24) = v43;
      v44 = *(_QWORD *)(a1 + 128);
      v45 = 8 * v42;
      *(_QWORD *)(a1 + 208) += 8 * v42;
      v46 = (char *)((v44 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( *(_QWORD *)(a1 + 136) >= (unsigned __int64)&v46[v45] && v44 )
        *(_QWORD *)(a1 + 128) = &v46[v45];
      else
        v46 = (char *)sub_986170(a1 + 128, v45, v45, 3, v19, v20);
      *(_QWORD *)(a2 + 8) = v46;
      memmove(v46, v29, v45);
      v29 = ptr;
    }
  }
  else
  {
    v10 = 1;
    sub_FC70B0((__int64)v47, *(_QWORD *)(a1 + 48), *(_DWORD *)a3, 1157);
    sub_AEA040((__int64)v47);
    v29 = ptr;
  }
LABEL_46:
  if ( v29 != v50 )
    free(v29);
  return v10;
}
