__int64 __fastcall sub_11E9320(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  size_t v6; // rsi
  const char *v7; // rdi
  const char *v8; // rax
  void *v9; // rdx
  bool v11; // zf
  void *v12; // rdi
  size_t v13; // rax
  unsigned __int64 v14; // r12
  size_t v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  char *v20; // rax
  void *v21; // rdx
  void **v22; // [rsp+8h] [rbp-150h] BYREF
  const char *v23; // [rsp+10h] [rbp-148h]
  size_t v24; // [rsp+18h] [rbp-140h]
  char *v25; // [rsp+20h] [rbp-138h] BYREF
  void *v26; // [rsp+28h] [rbp-130h]
  __m128 v27; // [rsp+30h] [rbp-128h] BYREF
  void *v28; // [rsp+40h] [rbp-118h] BYREF
  __int64 v29; // [rsp+48h] [rbp-110h]
  _BYTE v30[16]; // [rsp+50h] [rbp-108h] BYREF
  void *v31[2]; // [rsp+60h] [rbp-F8h] BYREF
  _BYTE v32[176]; // [rsp+70h] [rbp-E8h] BYREF
  char v33; // [rsp+120h] [rbp-38h]

  v5 = sub_10DCD30(a2, 0x878u);
  if ( !v5 )
    goto LABEL_5;
  v6 = 0;
  v7 = **(const char ***)(v5 + 48);
  v23 = v7;
  if ( v7 )
    v6 = j__strlen(v7);
  v24 = v6;
  v8 = sub_11E7120((__int64)v23, v6);
  v26 = v9;
  v25 = (char *)v8;
  if ( !v9 )
  {
LABEL_5:
    *(_BYTE *)(a1 + 192) = 0;
    return a1;
  }
  v11 = *(_BYTE *)(a3 + 64) == 0;
  v30[0] = 0;
  v29 = 0;
  v28 = v30;
  if ( v11 )
  {
    v13 = j__strlen("0123456789");
    v14 = sub_2246EC0(&v25, "0123456789", v13, 0);
    v15 = j__strlen("0123456789");
    v16 = sub_2247050(&v25, "0123456789", v15, -1);
    if ( v14 == -1 || v14 >= v16 )
      goto LABEL_10;
    v17 = (unsigned __int64)v26;
    v18 = v16 + 1;
    if ( v14 > (unsigned __int64)v26 )
      v14 = (unsigned __int64)v26;
    v19 = v14;
    if ( v18 >= v14 )
    {
      if ( v18 <= (unsigned __int64)v26 )
        v17 = v18;
      v19 = v17;
    }
    v31[0] = v32;
    sub_11E46A0(v31, &v25[v14], (__int64)&v25[v19]);
    sub_A0AAD0((__int64)&v28, v31);
    v12 = v31[0];
    if ( v31[0] == v32 )
      goto LABEL_10;
    goto LABEL_9;
  }
  sub_2257830(v31, a3);
  sub_A0AAD0((__int64)&v28, v31);
  v12 = v31[0];
  if ( v31[0] != v32 )
LABEL_9:
    operator delete(v12);
LABEL_10:
  if ( v29 )
  {
    v22 = &v28;
    v27 = _mm_loadh_ps((const double *)&v22);
    sub_11E5F00((__int64)v31, (__int64 **)&v27, (__int64 **)&v27.m128_u64[1], v25, v26);
    if ( v33 )
    {
      *(_BYTE *)(a1 + 192) = 0;
      sub_11E4450(a1, (__int64)v31);
      v11 = v33 == 0;
      *(_BYTE *)(a1 + 192) = 1;
      if ( !v11 )
        sub_11E3F10((__int64)v31);
    }
    else
    {
      v20 = (char *)sub_11E4D70(v25, (size_t)v26);
      sub_11E5F00(a1, (__int64 **)&v27, (__int64 **)&v27.m128_u64[1], v20, v21);
    }
  }
  else
  {
    *(_BYTE *)(a1 + 192) = 0;
  }
  if ( v28 != v30 )
    operator delete(v28);
  return a1;
}
