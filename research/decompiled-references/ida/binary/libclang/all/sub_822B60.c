__int64 __fastcall sub_822B60(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v3; // rax
  unsigned int v4; // r13d
  unsigned __int64 v6; // rax
  unsigned __int64 v10; // rsi
  __int16 v11; // cx
  size_t v12; // rcx
  __int64 v13; // rax
  _QWORD *v14; // r14
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdi
  __int16 v17; // dx
  char *v18; // r9
  unsigned __int64 v19; // rsi
  int v20; // r10d
  __int64 v21; // rax
  __int64 v22; // rdx
  bool v23; // zf
  __int64 v24; // r8
  _BYTE *v25; // rdi
  void *v26; // r10
  size_t v27; // rax
  __int64 v28; // rdx
  size_t v29; // rax
  size_t v30; // rax
  void *v31; // [rsp+0h] [rbp-B8h] BYREF
  size_t v32; // [rsp+8h] [rbp-B0h]
  _QWORD v33[2]; // [rsp+10h] [rbp-A8h] BYREF
  void *s2; // [rsp+20h] [rbp-98h]
  size_t v35; // [rsp+28h] [rbp-90h]
  int v36; // [rsp+30h] [rbp-88h]
  void *v37; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int64 v38; // [rsp+48h] [rbp-70h]
  _QWORD v39[2]; // [rsp+50h] [rbp-68h] BYREF
  void *v40; // [rsp+60h] [rbp-58h]
  unsigned __int64 v41; // [rsp+68h] [rbp-50h]
  int v42; // [rsp+70h] [rbp-48h]

  v3 = *a2;
  LOBYTE(v33[0]) = 0;
  v31 = v33;
  v32 = 0;
  s2 = nullptr;
  v35 = 0;
  v37 = v39;
  v38 = 0;
  LOBYTE(v39[0]) = 0;
  v40 = nullptr;
  v41 = 0;
  if ( !v3 )
    return 0;
  if ( (v3 & 3) != 1 )
    return 0;
  v6 = v3 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v6 )
    return 0;
  v10 = v6;
  v11 = *(_WORD *)v6 & 0x1FF;
  if ( v11 != 38 )
  {
    if ( v11 == 10 || v11 == 19 && *(char *)(v6 + 2) < 0 && (v10 = *(_QWORD *)(v6 + 16)) != 0 )
    {
      v12 = *(_DWORD *)(v10 + 16) * ((*(_WORD *)(v10 + 2) >> 6) & 7u);
      s2 = (void *)(v10 + 4LL * *(unsigned int *)(v10 + 4) + 20);
      v35 = v12;
      v36 = (*(_WORD *)(v10 + 2) >> 6) & 7;
      v13 = *a3;
      if ( *a3 )
        goto LABEL_8;
    }
    return 0;
  }
  sub_711B20(*(_QWORD *)(a1 + 16), **(_QWORD **)(v6 + 16), &v31, 0, nullptr);
  v12 = v32;
  v36 = 1;
  s2 = v31;
  v13 = *a3;
  v35 = v32;
  if ( !v13 )
  {
LABEL_9:
    v14 = v37;
    v4 = 0;
    goto LABEL_10;
  }
LABEL_8:
  if ( (v13 & 3) != 1 )
    goto LABEL_9;
  v15 = v13 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v15 )
    goto LABEL_9;
  v16 = v15;
  v17 = *(_WORD *)v15 & 0x1FF;
  if ( v17 == 38 )
  {
    sub_711B20(*(_QWORD *)(a1 + 16), **(_QWORD **)(v15 + 16), &v37, 0, nullptr);
    v18 = (char *)v37;
    v19 = v38;
    v42 = 1;
    v12 = v35;
    v20 = 1;
    v40 = v37;
    v14 = v37;
    v41 = v38;
  }
  else
  {
    v14 = v37;
    if ( v17 != 10 )
    {
      v4 = 0;
      if ( v17 != 19 )
        goto LABEL_10;
      if ( *(char *)(v15 + 2) >= 0 )
        goto LABEL_10;
      v16 = *(_QWORD *)(v15 + 16);
      if ( !v16 )
        goto LABEL_10;
    }
    v18 = (char *)(v16 + 4LL * *(unsigned int *)(v16 + 4) + 20);
    v19 = *(_DWORD *)(v16 + 16) * ((*(_WORD *)(v16 + 2) >> 6) & 7u);
    v40 = v18;
    v41 = v19;
    v20 = (*(_WORD *)(v16 + 2) >> 6) & 7;
    v42 = v20;
  }
  v21 = a2[2];
  v22 = a3[2] - v21;
  if ( v22 < 0 )
  {
    v30 = v21 - a3[2];
    if ( v30 > v12 )
      v30 = v12;
    s2 = (char *)s2 + v30;
    v12 -= v30;
    v35 = v12;
  }
  else
  {
    if ( v22 > v19 )
      v22 = v19;
    v19 -= v22;
    v18 += v22;
    v40 = v18;
    v41 = v19;
  }
  if ( v19 >= v12 )
  {
    v24 = v36;
    v26 = s2;
    v25 = v18;
    if ( v36 )
    {
LABEL_24:
      v28 = 0;
      do
      {
        v29 = v12 + (int)v28;
        if ( v29 >= v19 )
          break;
        if ( v25[v29] )
          goto LABEL_29;
        ++v28;
      }
      while ( v28 != v24 );
      if ( v12 <= v19 )
        goto LABEL_42;
LABEL_29:
      v4 = 0;
      goto LABEL_10;
    }
    if ( v12 > v19 )
      v12 = v19;
  }
  else
  {
    v23 = v20 == 0;
    v24 = v20;
    v25 = s2;
    v26 = v18;
    if ( !v23 )
    {
      v27 = v19;
      v19 = v12;
      v12 = v27;
      goto LABEL_24;
    }
    v12 = v19;
  }
LABEL_42:
  v4 = 1;
  if ( v12 )
    LOBYTE(v4) = memcmp(v26, v25, v12) == 0;
LABEL_10:
  if ( v14 != v39 )
    operator delete(v14, v39[0] + 1LL);
  if ( v31 != v33 )
    operator delete(v31, v33[0] + 1LL);
  return v4;
}

