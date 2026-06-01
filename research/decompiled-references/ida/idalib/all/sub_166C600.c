void __fastcall sub_166C600(__int64 a1, unsigned int a2, int a3, int a4, _BYTE *a5, size_t a6)
{
  __int64 v6; // r13
  int v7; // r14d
  __int64 v10; // rax
  __int64 v11; // rdi
  _BYTE *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbp
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  _QWORD *v20; // rax
  size_t v21; // rdx
  double v22[2]; // [rsp+8h] [rbp-110h] BYREF
  __int64 v23; // [rsp+18h] [rbp-100h] BYREF
  __int64 v24; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v25; // [rsp+28h] [rbp-F0h] BYREF
  void *v26; // [rsp+30h] [rbp-E8h] BYREF
  signed __int64 v27; // [rsp+38h] [rbp-E0h]
  __int64 v28; // [rsp+40h] [rbp-D8h] BYREF
  void *src; // [rsp+50h] [rbp-C8h] BYREF
  size_t n; // [rsp+58h] [rbp-C0h]
  _QWORD v31[2]; // [rsp+60h] [rbp-B8h] BYREF
  unsigned __int8 *v32; // [rsp+70h] [rbp-A8h] BYREF
  char v33; // [rsp+C8h] [rbp-50h]
  unsigned int v34; // [rsp+D0h] [rbp-48h]
  char v35; // [rsp+D4h] [rbp-44h]

  switch ( a4 )
  {
    case 0:
    case 5:
      v6 = a1 + 976;
      v7 = 1;
      if ( a3 != 1 )
        goto LABEL_4;
      goto LABEL_15;
    case 1:
      v6 = a1 + 856;
      v7 = 19;
      break;
    case 2:
      v6 = a1 + 896;
      v7 = 3;
      break;
    case 3:
      v6 = a1 + 936;
      v7 = 1;
      break;
    case 4:
      v6 = a1 + 1016;
      v7 = 5;
      break;
  }
  if ( a3 == 1 )
  {
LABEL_15:
    *(_BYTE *)(v6 + 32) = 0;
    return;
  }
LABEL_4:
  sub_18067E0(&v23, a1, a5, a6);
  if ( v23 )
  {
    sub_168B9F0(&src, a1 + 8, a2, 4834, 0);
    v10 = v23;
    v23 = 0;
    v24 = v10;
    sub_2221210(&v26, &v24);
    if ( v33 )
    {
      sub_AEC220(&v32, v26, v27);
    }
    else if ( v35 )
    {
      v16 = sub_168B9E0(&src);
      v19 = v31[0];
      if ( v31[0] )
        v19 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v31[0] + 32LL))(v31[0]);
      v25 = v19;
      v20 = sub_1587BC0(v16, &v25, v14, v15, v17, v18);
      sub_AEC220((unsigned __int8 **)(*v20 + 32LL * v34 + 8), v26, v27);
    }
    if ( v26 != &v28 )
      operator delete(v26);
    if ( v24 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
    sub_15F7200(&src);
    v11 = v23;
    *(_BYTE *)(v6 + 32) = 0;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    return;
  }
  if ( (unsigned __int8)sub_166BBA0(a1, a5, a6, v7, a2) )
    return;
  *(_BYTE *)(v6 + 32) = 1;
  src = v31;
  sub_1664F40(&src, a5, (__int64)&a5[a6]);
  v12 = *(_BYTE **)v6;
  if ( src == v31 )
  {
    v21 = n;
    if ( n )
    {
      if ( n == 1 )
        *v12 = v31[0];
      else
        memcpy(v12, src, n);
      v21 = n;
      v12 = *(_BYTE **)v6;
    }
    *(_QWORD *)(v6 + 8) = v21;
    v12[v21] = 0;
    v12 = src;
    goto LABEL_24;
  }
  if ( v12 == (_BYTE *)(v6 + 16) )
  {
    v22[0] = *(double *)v31;
    *(_QWORD *)v6 = src;
    *(__m128 *)(v6 + 8) = _mm_loadh_ps(v22);
    goto LABEL_37;
  }
  v22[0] = *(double *)v31;
  v13 = *(_QWORD *)(v6 + 16);
  *(_QWORD *)v6 = src;
  *(__m128 *)(v6 + 8) = _mm_loadh_ps(v22);
  if ( !v12 )
  {
LABEL_37:
    v12 = v31;
    src = v31;
    goto LABEL_24;
  }
  src = v12;
  v31[0] = v13;
LABEL_24:
  n = 0;
  *v12 = 0;
  if ( src != v31 )
    operator delete(src);
  *(_DWORD *)(v6 + 36) = a2;
}
