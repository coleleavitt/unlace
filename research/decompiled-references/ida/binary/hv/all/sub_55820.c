_BOOL8 __fastcall sub_55820(_QWORD *a1, char **a2, __int64 a3)
{
  char *v3; // rbx
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // r13
  __int64 v13; // r13
  __int64 v14; // rax
  void *v15; // rdi
  void *v16; // rdi
  void *v17; // rdi
  __int64 v18; // rax
  unsigned __int64 v19; // [rsp+0h] [rbp-158h]
  __int64 v20; // [rsp+8h] [rbp-150h]
  unsigned __int64 v21; // [rsp+8h] [rbp-150h]
  unsigned __int64 v22; // [rsp+10h] [rbp-148h]
  __int64 v23; // [rsp+18h] [rbp-140h]
  __int64 v24; // [rsp+18h] [rbp-140h]
  bool v25; // [rsp+23h] [rbp-135h]
  unsigned int v26; // [rsp+24h] [rbp-134h]
  unsigned int v27; // [rsp+34h] [rbp-124h] BYREF
  char *v28; // [rsp+38h] [rbp-120h] BYREF
  __int64 v29; // [rsp+40h] [rbp-118h] BYREF
  __int128 v30; // [rsp+48h] [rbp-110h]
  void *v31; // [rsp+60h] [rbp-F8h] BYREF
  __int128 v32; // [rsp+68h] [rbp-F0h]
  void *ptr; // [rsp+78h] [rbp-E0h] BYREF
  __int128 v34; // [rsp+80h] [rbp-D8h]
  void *v35; // [rsp+90h] [rbp-C8h] BYREF
  __int128 v36; // [rsp+98h] [rbp-C0h]
  __int64 v37; // [rsp+A8h] [rbp-B0h]
  int v38; // [rsp+B0h] [rbp-A8h]
  char v39; // [rsp+B4h] [rbp-A4h]
  __int64 v40; // [rsp+C0h] [rbp-98h] BYREF
  __int128 v41; // [rsp+C8h] [rbp-90h]
  __int64 v42; // [rsp+D8h] [rbp-80h] BYREF
  __int128 v43; // [rsp+E0h] [rbp-78h]
  __int64 v44; // [rsp+F0h] [rbp-68h] BYREF
  __int128 v45; // [rsp+F8h] [rbp-60h]
  __int64 v46; // [rsp+108h] [rbp-50h]
  int v47; // [rsp+110h] [rbp-48h]
  char v48; // [rsp+114h] [rbp-44h]
  unsigned __int64 v49; // [rsp+118h] [rbp-40h]

  v49 = __readfsqword(0x28u);
  v28 = *a2;
  v3 = &v28[a3];
  if ( __CFADD__(a3, v28) )
    return 0;
  v25 = sub_4A460(&v27, (unsigned __int64 *)&v28, (__int64)&v28[a3]);
  if ( !v25 )
    return 0;
  v7 = v27;
  v26 = v27;
  v22 = v27;
  if ( v27 != a1[3] )
  {
    v29 = 0;
    v31 = nullptr;
    ptr = nullptr;
    v35 = nullptr;
    v30 = 0;
    v32 = 0;
    v34 = 0;
    v36 = 0;
    sub_3C440(&v35, (__int64)&v29);
    v8 = a1[3];
    v39 = 0;
    v37 = 0;
    v38 = 0;
    v19 = v8;
    if ( v7 < v8 )
    {
      v21 = v22;
      v13 = 88 * v22;
      do
      {
        v14 = v13 + a1[2];
        v15 = *(void **)(v14 + 48);
        if ( v15 )
        {
          *(_QWORD *)(v14 + 56) = 0;
          v23 = v14;
          j__free(v15);
          v14 = v23;
        }
        v16 = *(void **)(v14 + 24);
        if ( v16 )
        {
          *(_QWORD *)(v14 + 32) = 0;
          v24 = v14;
          j__free(v16);
          v14 = v24;
        }
        v17 = *(void **)v14;
        if ( *(_QWORD *)v14 )
        {
          *(_QWORD *)(v14 + 8) = 0;
          j__free(v17);
        }
        ++v21;
        v13 += 88;
      }
      while ( v21 < v19 );
    }
    else
    {
      if ( v8 >= v22 )
      {
LABEL_14:
        if ( v35 )
          j__free(v35);
        if ( ptr )
          j__free(ptr);
        if ( v31 )
          j__free(v31);
        goto LABEL_20;
      }
      v9 = a1[2];
      v10 = a1[4];
      if ( (unsigned __int64)&v31 >= v9 && (unsigned __int64)&v31 < v9 + 88 * v10 )
      {
        v40 = 0;
        v41 = 0;
        sub_3C440(&v40, (__int64)&v31);
        v42 = 0;
        v43 = 0;
        sub_3C440(&v42, (__int64)&ptr);
        v44 = 0;
        v45 = 0;
        sub_3C440(&v44, (__int64)&v35);
        v46 = 0;
        v47 = 0;
        v48 = 0;
        sub_55640(a1 + 2, v22, (__int64)&v40);
        sub_53280((__int64)&v40);
        goto LABEL_14;
      }
      if ( v10 >= v22 || (v18 = sub_96080(a1 + 2, v9, v22, 88), a1[2] = v18, v9 = v18, v19 = a1[3], v19 < v22) )
      {
        v20 = 88 * v19;
        while ( 1 )
        {
          v11 = v9 + v20;
          *(_QWORD *)v11 = 0;
          *(_OWORD *)(v11 + 8) = 0;
          sub_3C440((_QWORD *)(v9 + v20), (__int64)&v31);
          *(_QWORD *)(v11 + 24) = 0;
          *(_OWORD *)(v11 + 32) = 0;
          sub_3C440((_QWORD *)(v9 + v20 + 24), (__int64)&ptr);
          *(_QWORD *)(v11 + 48) = 0;
          *(_OWORD *)(v11 + 56) = 0;
          sub_3C440((_QWORD *)(v9 + v20 + 48), (__int64)&v35);
          ++v19;
          v20 += 88;
          *(_QWORD *)(v11 + 72) = 0;
          *(_DWORD *)(v11 + 80) = 0;
          *(_BYTE *)(v11 + 84) = 0;
          if ( v19 >= v22 )
            break;
          v9 = a1[2];
        }
      }
    }
    a1[3] = v22;
    goto LABEL_14;
  }
LABEL_20:
  if ( !v26 )
  {
LABEL_24:
    *a2 = v28;
    return v25;
  }
  v12 = 0;
  while ( sub_50230(v12 + a1[2], (const void **)&v28, v3 - v28) )
  {
    v12 += 88;
    if ( 88 * v22 == v12 )
      goto LABEL_24;
  }
  return 0;
}

