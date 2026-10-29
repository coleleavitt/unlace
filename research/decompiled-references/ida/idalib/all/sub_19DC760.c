__int64 __fastcall sub_19DC760(__int64 *a1, __int64 a2, unsigned __int64 *a3, unsigned int a4, __m128 a5, __m128 a6)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbp
  unsigned __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r14
  __int64 v17; // rcx
  unsigned __int64 v18; // r15
  __int16 v19; // ax
  unsigned __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  unsigned __int64 v25; // rdx
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned int v31; // eax
  int v32; // eax
  unsigned int v33; // eax
  unsigned __int64 v34; // rax
  size_t v35; // rax
  __int64 v36; // [rsp+0h] [rbp-128h]
  __int64 v37; // [rsp+0h] [rbp-128h]
  size_t v38; // [rsp+8h] [rbp-120h]
  int v39; // [rsp+1Ch] [rbp-10Ch] BYREF
  _DWORD v40[6]; // [rsp+20h] [rbp-108h] BYREF
  void *v41; // [rsp+38h] [rbp-F0h]
  _BYTE v42[24]; // [rsp+48h] [rbp-E0h] BYREF
  _BYTE v43[200]; // [rsp+60h] [rbp-C8h] BYREF

  if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 2) & 4) == 0 )
    return 0;
  v12 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v12 + 16) != 34 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 34 )
      return 0;
    v12 = sub_F63050(v12, a2, v9, v10);
    if ( !v12 )
      return 0;
  }
  v13 = *(_QWORD *)(v12 + 32) & 0xFFFFFFFFFFFFFFF0LL;
  v14 = *(_QWORD *)v13;
  v15 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v13 + 16LL) - 35;
  if ( (unsigned int)v15 > 1 )
    v14 = sub_F63050(v14, a2, v15, v10);
  v16 = sub_9C7D40(v14, a2, v15, v10, v11);
  v18 = sub_BFBAE0(*a3);
  v19 = *(_WORD *)v18 & 0x1FF;
  if ( v19 == 26 )
  {
    v20 = *(_QWORD *)(v18 + 16);
    if ( !v20 )
      return 0;
    v18 = sub_BFBAE0(v20);
    v19 = *(_WORD *)v18 & 0x1FF;
  }
  if ( v19 == 9 )
  {
    v21 = *(_QWORD *)(*(_QWORD *)(v12 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    v22 = (unsigned int)*(unsigned __int8 *)(v21 + 16) - 35;
    if ( (unsigned int)v22 > 1 )
    {
      v21 = sub_F63050(v21, a2, v22, v17);
      if ( !(*(_BYTE *)(v21 + 19) >> 2) )
        goto LABEL_11;
    }
    else if ( !(*(_BYTE *)(v21 + 19) >> 2) )
    {
LABEL_11:
      v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                      & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v23 + 16) == 13 && ((*(_WORD *)(v23 + 18) >> 3) & 0x1FF) == 0x1E9 )
        goto LABEL_13;
    }
    if ( !v16 )
      return 0;
    v29 = *(_QWORD *)(v16 + 40);
    if ( (v29 & 7) != 0 )
      BUG();
    v30 = *(_QWORD *)((v29 & 0xFFFFFFFFFFFFFFF8LL) + 16);
    if ( *(_DWORD *)v30 != 8 || *(_QWORD *)(v30 + 16) != 0x676E69727453534ELL )
      return 0;
LABEL_13:
    if ( (*(_BYTE *)(v18 + 2) & 0x38) == 0 )
    {
      if ( !(_BYTE)a4 )
        return 1;
      sub_168B9F0((__int64)v43, a1, *(_DWORD *)(v18 + 20), 0x1059u, 0);
      v39 = 0;
      v37 = sub_1587D10((__int64)v43, &v39);
      v35 = j__strlen("@");
      sub_9EC740((__int64)v40, *(_DWORD *)(v18 + 20), "@", v35, 0);
      sub_1589170(v37, v40);
      if ( v41 != v42 )
        operator delete(v41);
      sub_15F7200(v43);
      *a3 = sub_19DB3B0(a1, *(_DWORD *)(v18 + 20), v18, *(double *)a5.m128_u64) & 0xFFFFFFFFFFFFFFFELL;
      return a4;
    }
    return 0;
  }
  if ( ((v19 + 472) & 0x1FFu) > 0x26 )
    LOBYTE(v25) = 0;
  else
    v25 = (0x4000401001uLL >> ((unsigned __int8)v19 - 40)) & 1;
  if ( v19 != 115 && !(_BYTE)v25 )
    return 0;
  v26 = sub_168B6C0((__int64)a1);
  if ( (unsigned int)sub_BFE6E0(v18, v26, 0, *(double *)a5.m128_u64) || !v16 )
    return 0;
  v27 = *(_QWORD *)(v16 + 40);
  if ( (v27 & 7) != 0 )
    BUG();
  v28 = *(_QWORD *)((v27 & 0xFFFFFFFFFFFFFFF8LL) + 16);
  if ( *(_DWORD *)v28 != 8 || *(_QWORD *)(v28 + 16) != 0x7265626D754E534ELL )
    return 0;
  if ( !(_BYTE)a4 )
    return 1;
  v31 = sub_EEB7E0(v18, v26, *(double *)a5.m128_u64);
  sub_168B9F0((__int64)v43, a1, v31, 0x1059u, 0);
  v39 = 1;
  v36 = sub_1587D10((__int64)v43, &v39);
  v38 = j__strlen("@");
  v32 = sub_EEB7E0(v18, (__int64)&v39, *(double *)a5.m128_u64);
  sub_9EC740((__int64)v40, v32, "@", v38, 0);
  sub_1589170(v36, v40);
  if ( v41 != v42 )
    operator delete(v41);
  sub_15F7200(v43);
  v33 = sub_EEB7E0(v18, (__int64)v40, *(double *)a5.m128_u64);
  v34 = (unsigned __int64)sub_19D7B40(a1, v33, v18, a5, a6) & 0xFFFFFFFFFFFFFFFELL;
  if ( !v34 )
    return 1;
  *a3 = v34;
  return a4;
}
