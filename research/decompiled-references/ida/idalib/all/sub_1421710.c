void __fastcall sub_1421710(__int64 a1, int *a2, __int64 a3, unsigned __int64 a4)
{
  char v4; // bp
  _QWORD *v6; // rbx
  _QWORD *v7; // r13
  _DWORD *v8; // rax
  unsigned __int64 v9; // r12
  _QWORD *v10; // r14
  _BYTE *v11; // r15
  _QWORD *v12; // r15
  _BYTE *v13; // r14
  char v14; // bl
  char v15; // dl
  _BYTE *v16; // r12
  size_t v17; // rbp
  unsigned int v18; // eax
  int v19; // eax
  _BYTE *v20; // rdi
  unsigned __int64 v21; // rdx
  void *v22; // rdi
  _QWORD *v23; // r14
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  size_t v35; // rdx
  unsigned __int64 v36; // [rsp+8h] [rbp-100h] BYREF
  unsigned __int64 v37; // [rsp+10h] [rbp-F8h]
  unsigned __int64 v38; // [rsp+18h] [rbp-F0h]
  size_t v39; // [rsp+20h] [rbp-E8h]
  int *v40; // [rsp+28h] [rbp-E0h]
  __int64 v41; // [rsp+30h] [rbp-D8h]
  _QWORD *v42; // [rsp+38h] [rbp-D0h]
  __int64 v43; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v44[12]; // [rsp+48h] [rbp-C0h]
  char v45; // [rsp+54h] [rbp-B4h]
  void *dest; // [rsp+58h] [rbp-B0h]
  __m128 v47; // [rsp+60h] [rbp-A8h] BYREF
  char v48; // [rsp+78h] [rbp-90h]
  void *src; // [rsp+80h] [rbp-88h] BYREF
  size_t n; // [rsp+88h] [rbp-80h]
  _QWORD v51[15]; // [rsp+90h] [rbp-78h] BYREF

  v4 = *(_BYTE *)(*(_QWORD *)(a1 + 56) + 4LL) & 2;
  if ( v4 )
    return;
  v41 = a1;
  v37 = a4;
  v40 = a2;
  v6 = (_QWORD *)operator new(0x60u);
  *v6 = "if";
  v7 = v6 + 12;
  v6[2] = "ifdef";
  v6[4] = "ifndef";
  v6[6] = "elif";
  v6[8] = "else";
  v6[10] = "endif";
  v8 = *(_DWORD **)(a1 + 56);
  v6[1] = 2;
  v6[3] = 5;
  v6[5] = 6;
  v6[7] = 4;
  v6[9] = 4;
  v6[11] = 5;
  if ( (*v8 & 0x10008) != 0 )
  {
    n = 7;
    v51[0] = "elifndef";
    src = "elifdef";
    v51[1] = 8;
    v22 = v6;
    v23 = (_QWORD *)operator new(0xC0u);
    v24 = v6[1];
    *v23 = *v6;
    v25 = v6[2];
    v23[1] = v24;
    v26 = v6[3];
    v23[2] = v25;
    v27 = v6[4];
    v23[3] = v26;
    v28 = v6[5];
    v23[4] = v27;
    v29 = v6[6];
    v23[5] = v28;
    v30 = v6[7];
    v23[6] = v29;
    v31 = v6[8];
    v23[7] = v30;
    v32 = v6[9];
    v23[8] = v31;
    v33 = v6[10];
    v23[9] = v32;
    v34 = v6[11];
    v6 = v23;
    v23[14] = "elifndef";
    v7 = v23 + 16;
    v23[10] = v33;
    v23[11] = v34;
    v23[12] = "elifdef";
    v23[13] = 7;
    v23[15] = 8;
    operator delete(v22);
  }
  v43 = a3;
  v9 = v37;
  *(_QWORD *)v44 = v37;
  if ( v6 != v7 )
  {
    LOBYTE(v36) = v4;
    v10 = v6;
    do
    {
      while ( 1 )
      {
        v11 = (_BYTE *)*v10;
        if ( v10[1] == v9 )
          break;
        v10 += 2;
        if ( v7 == v10 )
          goto LABEL_10;
      }
      if ( !(unsigned int)sub_22462B0(&v43, *v10, v9) )
      {
        v13 = v11;
        goto LABEL_24;
      }
      v10 += 2;
      v9 = *(_QWORD *)v44;
    }
    while ( v7 != v10 );
LABEL_10:
    v4 = v36;
  }
  if ( v9 > 2 )
    v36 = v9 / 3;
  else
    v36 = v9 - 1;
  if ( v6 == v7 )
    goto LABEL_35;
  v12 = v6;
  v42 = v6;
  v38 = 0;
  v13 = nullptr;
  v14 = v4;
  v39 = 0;
  do
  {
    while ( 1 )
    {
      v16 = (_BYTE *)*v12;
      v17 = v12[1];
      v18 = sub_2246430(&v43, *v12, v17, 1, 0);
      v15 = v14;
      if ( v18 > v36 )
        goto LABEL_16;
      if ( v14 )
        break;
      v39 = v17;
      v13 = v16;
      v15 = 1;
      v14 = 1;
      v38 = v18;
LABEL_16:
      v12 += 2;
      if ( v7 == v12 )
        goto LABEL_21;
    }
    if ( v18 >= v38 )
      goto LABEL_16;
    v12 += 2;
    src = v16;
    v13 = v16;
    n = v17;
    v39 = v17;
    v38 = v18;
  }
  while ( v7 != v12 );
LABEL_21:
  v9 = v39;
  v6 = v42;
  if ( !v15 )
    goto LABEL_35;
LABEL_24:
  v45 = 0;
  v19 = *v40;
  *(_QWORD *)&v44[4] = 0;
  dest = &v47.m128_u16[4];
  v36 = (unsigned __int64)&v47.m128_u64[1];
  v47.m128_u64[0] = 0;
  v47.m128_i8[8] = 0;
  v48 = 0;
  LODWORD(v43) = v19;
  HIDWORD(v43) = v19 + v37;
  v44[0] = 0;
  src = v51;
  sub_141A0D0(&src, v13, (__int64)&v13[v9]);
  v20 = dest;
  if ( src == v51 )
  {
    v35 = n;
    if ( n )
    {
      if ( n == 1 )
        *(_BYTE *)dest = v51[0];
      else
        memcpy(dest, src, n);
      v35 = n;
      v20 = dest;
    }
    v47.m128_u64[0] = v35;
    v20[v35] = 0;
    v20 = src;
  }
  else
  {
    if ( dest == (void *)v36 )
    {
      v36 = v51[0];
      dest = src;
      v47 = _mm_loadh_ps((const double *)&v36);
    }
    else
    {
      v36 = v51[0];
      v21 = v47.m128_u64[1];
      dest = src;
      v47 = _mm_loadh_ps((const double *)&v36);
      if ( v20 )
      {
        src = v20;
        v51[0] = v21;
        goto LABEL_28;
      }
    }
    v20 = v51;
    src = v51;
  }
LABEL_28:
  n = 0;
  *v20 = 0;
  if ( src != v51 )
    operator delete(src);
  sub_FC70B0((__int64)&src, *(_QWORD *)(v41 + 48), *v40, 1379);
  sub_AE9DF0((unsigned __int8 **)&src, 1, 2u);
  sub_AEC220((unsigned __int8 **)&src, v13, v9);
  if ( (_DWORD)v43 && HIDWORD(v43) )
    sub_14212A0((__int64 *)&src, (unsigned __int64)&v43);
  sub_AEA040((__int64)&src);
  if ( dest != &v47.m128_u16[4] )
    operator delete(dest);
LABEL_35:
  operator delete(v6);
}
