_QWORD *__fastcall sub_E57B00(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v5; // r13
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbp
  unsigned int v10; // r12d
  unsigned __int64 v11; // rdi
  __int64 v12; // rdi
  int v13; // esi
  int v14; // eax
  __int64 v15; // rsi
  _QWORD *v16; // rdi
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // rax
  _BYTE *v19; // rdi
  unsigned __int64 v20; // rax
  size_t v21; // rsi
  _QWORD *v22; // rdi
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // rdx
  _BYTE *v25; // rdi
  unsigned __int64 v26; // rsi
  int v27; // eax
  __int64 v28; // rcx
  int v29; // edi
  unsigned int v30; // edx
  __int64 *v31; // rax
  __int64 v32; // r8
  __int64 v33; // rsi
  _QWORD *v34; // rdi
  unsigned __int64 v35; // r12
  unsigned __int64 v36; // rax
  __int64 v37; // rbp
  unsigned __int64 v38; // r12
  unsigned __int64 v39; // rdx
  _QWORD *v40; // rax
  _BYTE *v42; // rdi
  int v43; // eax
  int v44; // r8d
  __int64 v45; // rsi
  unsigned __int64 v46; // [rsp+8h] [rbp-60h]
  unsigned __int64 v47; // [rsp+8h] [rbp-60h]
  unsigned __int64 v48; // [rsp+8h] [rbp-60h]
  unsigned __int64 v49; // [rsp+8h] [rbp-60h]
  void *src; // [rsp+10h] [rbp-58h] BYREF
  size_t n; // [rsp+18h] [rbp-50h]
  _BYTE v52[72]; // [rsp+20h] [rbp-48h] BYREF

  v5 = a1 + 2;
  *a1 = a1 + 2;
  sub_E54F70(a1, (_BYTE *)"<lambda_", (__int64)"");
  v9 = sub_B733B0(a3);
  v10 = *(_DWORD *)(*(_QWORD *)(a3 + 128) + 108LL) >> 1;
  if ( !v9 || (*(_BYTE *)(v9 + 28) & 0x7F) != 0x2B )
    goto LABEL_28;
  v11 = *(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(v9 + 16) & 4) != 0 )
    v11 = *(_QWORD *)v11;
  if ( (*(_BYTE *)(v11 + 8) & 0x7Fu) - 34 <= 5 && (v12 = v11 - 72) != 0 )
  {
    v13 = sub_B52330(v12, (__int64)"<lambda_", v7, v8);
    v14 = (unsigned __int8)(*(_WORD *)(v9 + 98) >> 4);
    if ( v14 == 255 )
      v14 = sub_B50B40(v9);
    sub_E55160((__int64 *)&src, (unsigned int)(v13 - v14));
    v15 = a1[1];
    v16 = (_QWORD *)*a1;
    v17 = n + v15;
    if ( v5 == (_QWORD *)*a1 )
      v18 = 15;
    else
      v18 = a1[2];
    if ( v17 > v18 )
    {
      v48 = n + v15;
      sub_974DF0((__int64)a1, v15, 0, src, n);
      v16 = (_QWORD *)*a1;
      v17 = v48;
    }
    else if ( n )
    {
      v19 = (char *)v16 + v15;
      if ( n == 1 )
      {
        *v19 = *(_BYTE *)src;
        v16 = (_QWORD *)*a1;
      }
      else
      {
        v46 = n + v15;
        memcpy(v19, src, n);
        v16 = (_QWORD *)*a1;
        v17 = v46;
      }
    }
    a1[1] = v17;
    *((_BYTE *)v16 + v17) = 0;
    if ( src != v52 )
      operator delete(src);
    v20 = j__strlen("_");
    v21 = a1[1];
    if ( v20 > 0x7FFFFFFFFFFFFFFFLL - v21 )
LABEL_59:
      std::__throw_length_error("basic_string::append");
    v22 = (_QWORD *)*a1;
    v23 = v20 + v21;
    if ( v5 == (_QWORD *)*a1 )
      v24 = 15;
    else
      v24 = a1[2];
    if ( v23 > v24 )
    {
      v49 = v20 + v21;
      sub_974DF0((__int64)a1, v21, 0, "_", v20);
      v22 = (_QWORD *)*a1;
      v23 = v49;
    }
    else if ( v20 )
    {
      v25 = (char *)v22 + v21;
      if ( v20 == 1 )
      {
        *v25 = 95;
        v22 = (_QWORD *)*a1;
      }
      else
      {
        v47 = v20 + v21;
        memcpy(v25, "_", v20);
        v22 = (_QWORD *)*a1;
        v23 = v47;
      }
    }
    a1[1] = v23;
    v26 = v10;
    *((_BYTE *)v22 + v23) = 0;
    if ( v10 )
      goto LABEL_29;
  }
  else
  {
LABEL_28:
    v26 = v10;
    if ( v10 )
      goto LABEL_29;
  }
  v27 = *(_DWORD *)(a2 + 192);
  v28 = *(_QWORD *)(a2 + 176);
  if ( v27 )
  {
    v29 = v27 - 1;
    v30 = (v27 - 1) & (((unsigned int)a3 >> 9) ^ ((unsigned int)a3 >> 4));
    v31 = (__int64 *)(v28 + 16LL * v30);
    v32 = *v31;
    if ( a3 == *v31 )
    {
LABEL_27:
      v26 = *((unsigned int *)v31 + 2);
      goto LABEL_29;
    }
    v26 = 0;
    v43 = 1;
    if ( v32 != -4096 )
    {
      while ( 1 )
      {
        v44 = v43 + 1;
        v30 = v29 & (v43 + v30);
        v31 = (__int64 *)(v28 + 16LL * v30);
        v45 = *v31;
        if ( a3 == *v31 )
          goto LABEL_27;
        v43 = v44;
        if ( v45 == -4096 )
          goto LABEL_54;
      }
    }
  }
  else
  {
LABEL_54:
    v26 = 0;
  }
LABEL_29:
  sub_E55160((__int64 *)&src, v26);
  v33 = a1[1];
  v34 = (_QWORD *)*a1;
  v35 = n + v33;
  if ( v5 == (_QWORD *)*a1 )
    v36 = 15;
  else
    v36 = a1[2];
  if ( v35 > v36 )
  {
    sub_974DF0((__int64)a1, v33, 0, src, n);
    v34 = (_QWORD *)*a1;
  }
  else if ( n )
  {
    v42 = (char *)v34 + v33;
    if ( n == 1 )
      *v42 = *(_BYTE *)src;
    else
      memcpy(v42, src, n);
    v34 = (_QWORD *)*a1;
  }
  a1[1] = v35;
  *((_BYTE *)v34 + v35) = 0;
  if ( src != v52 )
    operator delete(src);
  v37 = a1[1];
  if ( v37 == 0x7FFFFFFFFFFFFFFFLL )
    goto LABEL_59;
  v38 = v37 + 1;
  if ( v5 == (_QWORD *)*a1 )
    v39 = 15;
  else
    v39 = a1[2];
  if ( v38 > v39 )
    sub_974DF0((__int64)a1, a1[1], 0, ">", 1u);
  else
    *(_BYTE *)(*a1 + v37) = 62;
  v40 = (_QWORD *)*a1;
  a1[1] = v38;
  *((_BYTE *)v40 + v37 + 1) = 0;
  return a1;
}

