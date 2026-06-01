__int64 __fastcall sub_20ED540(int *a1, __int64 a2)
{
  unsigned int v2; // ebp
  int *v3; // r15
  int *v4; // r14
  unsigned __int64 v5; // rcx
  __int64 v6; // rax
  char *v7; // r9
  signed __int64 v8; // r10
  __int64 v9; // rbp
  unsigned __int64 v10; // rdx
  int v11; // r8d
  unsigned __int64 v12; // rdx
  int v13; // ebp
  __int64 v14; // rdx
  __int64 *v15; // rdi
  char *v17; // r11
  int v18; // eax
  __int64 v19; // r13
  __int64 v20; // r15
  bool v21; // r14
  unsigned int *v22; // rbp
  __int64 v23; // rsi
  __int64 v24; // r9
  unsigned int *v25; // rcx
  unsigned int *v26; // rax
  __int64 v27; // r10
  unsigned int *v28; // r8
  signed int v29; // r10d
  char *v30; // r10
  char *v31; // rcx
  __int64 v32; // rax
  _DWORD *v33; // rcx
  _DWORD *v34; // rax
  char *v35; // [rsp+8h] [rbp-90h]
  char *v36; // [rsp+8h] [rbp-90h]
  __int64 v37; // [rsp+10h] [rbp-88h]
  void *ptr; // [rsp+20h] [rbp-78h] BYREF
  __int64 v39; // [rsp+28h] [rbp-70h]
  __int64 v40; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v41[96]; // [rsp+38h] [rbp-60h] BYREF

  v2 = 103;
  if ( !a2 )
    return v2;
  v3 = &a1[a2];
  v4 = a1;
  v39 = 0xC00000002LL;
  ptr = &v40;
  v40 = 0;
  if ( a1 == v3 )
  {
    v17 = v41;
    v20 = 0;
    v21 = 1;
    v19 = 0;
    v36 = v41;
    v18 = 0;
    v15 = &v40;
    v14 = 0;
    goto LABEL_21;
  }
  v5 = 12;
  v6 = 2;
  while ( 1 )
  {
    v12 = *v4;
    v13 = *v4;
    if ( v12 > 0x72 )
      break;
    v7 = (char *)&unk_26F1000 + 32 * dword_26F0E20[v12];
    if ( !*((_DWORD *)v7 + 1) )
      break;
    v8 = 4LL * *((int *)v7 + 1);
    v9 = v8 >> 2;
    v10 = (v8 >> 2) + v6;
    if ( v10 > v5 )
    {
      v37 = 4LL * *((int *)v7 + 1);
      v35 = v7;
      sub_2237220(&ptr, &v40, v10, 4);
      v6 = (unsigned int)v39;
      v8 = v37;
      v7 = v35;
    }
    if ( v8 )
    {
      memcpy((char *)ptr + 4 * v6, v7 + 8, v8);
      LODWORD(v6) = v39;
    }
    v11 = v9 + v6;
    ++v4;
    v6 = (unsigned int)(v9 + v6);
    LODWORD(v39) = v11;
    if ( v3 == v4 )
      goto LABEL_15;
LABEL_10:
    v5 = HIDWORD(v39);
  }
  if ( v6 + 1 > v5 )
  {
    sub_2237220(&ptr, &v40, v6 + 1, 4);
    v6 = (unsigned int)v39;
  }
  ++v4;
  *((_DWORD *)ptr + v6) = v13;
  v6 = (unsigned int)(v39 + 1);
  LODWORD(v39) = v39 + 1;
  if ( v3 != v4 )
    goto LABEL_10;
LABEL_15:
  v14 = v6 - 2;
  v15 = (__int64 *)ptr;
  if ( v6 == 3 )
  {
    v2 = *((_DWORD *)ptr + 2);
    goto LABEL_17;
  }
  v17 = (char *)ptr + 8;
  v18 = v6 - 2;
  v19 = (int)v14;
  v20 = v19 * 4;
  v36 = (char *)ptr + v19 * 4 + 8;
  v21 = (char *)ptr + 8 == v36;
LABEL_21:
  *((_DWORD *)v15 + 1) = v18;
  v22 = (unsigned int *)&unk_26F1000;
  v23 = 106;
  while ( 2 )
  {
    v24 = v23 >> 1;
    v25 = &v22[8 * (v23 >> 1)];
    v26 = v25 + 2;
    v27 = 4LL * (int)v25[1];
    v28 = &v25[(unsigned __int64)v27 / 4 + 2];
    if ( v25 + 2 == v28 && v21 )
    {
      if ( (signed int)*v25 >= *(_DWORD *)v15 )
        goto LABEL_37;
      goto LABEL_23;
    }
    if ( v27 > v20 )
      v28 = &v26[v19];
    if ( v26 == v28 )
    {
      v30 = v17;
      goto LABEL_36;
    }
    v29 = v25[2];
    if ( *(_DWORD *)v17 > v29 )
      goto LABEL_23;
    if ( *(_DWORD *)v17 >= v29 )
    {
      v30 = v17;
      while ( 1 )
      {
        ++v26;
        v30 += 4;
        if ( v28 == v26 )
          break;
        if ( (signed int)*v26 < *(_DWORD *)v30 )
          goto LABEL_23;
        if ( (signed int)*v26 > *(_DWORD *)v30 )
          goto LABEL_37;
      }
LABEL_36:
      if ( v30 != v36 )
      {
LABEL_23:
        v22 = v25 + 8;
        v24 = v23 - v24 - 1;
        if ( v24 <= 0 )
          break;
        goto LABEL_24;
      }
    }
LABEL_37:
    if ( v24 )
    {
LABEL_24:
      v23 = v24;
      continue;
    }
    break;
  }
  if ( v22 == (unsigned int *)jpt_20F3BE5 )
    goto LABEL_46;
  v2 = *v22;
  if ( (unsigned __int64)(int)v2 > 0x72 )
  {
    v32 = 0;
    v33 = nullptr;
  }
  else
  {
    v31 = (char *)&unk_26F1000 + 32 * dword_26F0E20[v2];
    v32 = *((int *)v31 + 1);
    v33 = v31 + 8;
  }
  if ( v32 != v14 )
    goto LABEL_46;
  v34 = &v33[v32];
  if ( v34 == v33 )
    goto LABEL_17;
  if ( *(_DWORD *)v17 != *v33 )
  {
LABEL_46:
    v2 = 103;
    goto LABEL_17;
  }
  while ( 1 )
  {
    ++v33;
    v17 += 4;
    if ( v34 == v33 )
      break;
    if ( *v33 != *(_DWORD *)v17 )
      goto LABEL_46;
  }
LABEL_17:
  if ( v15 != &v40 )
    free(v15);
  return v2;
}
