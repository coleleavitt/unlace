__int64 __fastcall sub_19F7750(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 **v11; // rax
  __int64 *v12; // rdx
  unsigned __int64 v13; // rax
  __int64 *v14; // rax
  __int64 v15; // rcx
  unsigned int v16; // r14d
  __int64 v18; // r15
  __int64 v19; // rax
  unsigned __int64 v20; // rdi
  _QWORD *v21; // r13
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  unsigned __int16 *v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  unsigned __int16 v28; // ax
  __int64 v29; // rax
  unsigned __int64 v30; // rdi
  _QWORD *v31; // r15
  __int64 v32; // rdx
  __int64 v33; // r8
  unsigned int v34; // eax
  __int64 v35; // rsi
  __int64 v36; // rcx
  unsigned __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rbx
  unsigned __int64 v40; // r12
  unsigned int v41; // eax
  __int64 *v42; // rax
  _QWORD *v43; // rdi
  __int64 *v44; // rcx
  bool v45; // zf
  int v46; // eax
  unsigned int v47; // [rsp+0h] [rbp-138h]
  _WORD *v48; // [rsp+0h] [rbp-138h]
  void *v49; // [rsp+10h] [rbp-128h]
  void *v50; // [rsp+20h] [rbp-118h] BYREF
  unsigned int v51; // [rsp+28h] [rbp-110h]
  unsigned int v52; // [rsp+30h] [rbp-108h] BYREF
  char v53; // [rsp+34h] [rbp-104h]
  void *ptr[2]; // [rsp+70h] [rbp-C8h] BYREF
  _QWORD v55[23]; // [rsp+80h] [rbp-B8h] BYREF

  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    return 1;
  v11 = (__int64 **)sub_B8C3D0(a2, a2, (__int64)a3, a4, a5, a6);
  v12 = *v11;
  v13 = (unsigned __int64)&(*v11)[*((unsigned int *)v11 + 2)];
  if ( (unsigned __int64)v12 < v13 )
  {
    v44 = v12;
    while ( *(_WORD *)(*v44 + 36) != 228 )
    {
      if ( (__int64 *)v13 == ++v44 )
        return 1;
    }
    if ( (__int64 *)v13 != v44 )
      goto LABEL_11;
    return 1;
  }
  if ( v12 == (__int64 *)v13 )
    return 1;
  if ( *(_WORD *)(*(_QWORD *)v13 + 36LL) != 228 )
  {
    v14 = (__int64 *)(v13 + 8);
    while ( v14 != v12 )
    {
      v15 = *v14++;
      if ( *(_WORD *)(v15 + 36) == 228 )
        goto LABEL_11;
    }
    return 1;
  }
LABEL_11:
  while ( 1 )
  {
    v18 = *v12;
    if ( *(_WORD *)(*v12 + 36) == 228 )
      break;
    ++v12;
  }
  v19 = *a1;
  v20 = *a3;
  v52 = 0;
  v53 &= ~1u;
  v21 = *(_QWORD **)(v19 + 248);
  v16 = sub_C3C290(v20, (__int64)v21, &v52, nullptr);
  if ( (_BYTE)v16 )
  {
    v24 = sub_F63050(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL), v21, v22, v23);
    if ( *(_BYTE *)(v24 + 16) == 13 )
    {
      v47 = 0;
      v28 = ((*(_WORD *)(v24 + 18) >> 3) & 0x1FF) - 436;
      if ( v28 <= 0x2Eu )
      {
        v25 = word_2647340;
        v47 = word_2647340[v28];
      }
    }
    else
    {
      v25 = nullptr;
      v45 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v24 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 47;
      v46 = 688;
      if ( !v45 )
        v46 = 0;
      v47 = v46;
    }
    v49 = (void *)*(int *)(v18 + 40);
    v51 = sub_AAC1F0((__int64)v21, v21[2340], (__int64)v25, v26, v27);
    if ( v51 > 0x40 )
      sub_2205470(&v50, v49, 0);
    else
      v50 = v49;
    v29 = sub_C0C5D0(v21, (__int64)&v50, v21[2340], *(_DWORD *)(v18 + 24));
    v30 = *a3;
    v55[0] = v29;
    v31 = (_QWORD *)*a1;
    ptr[0] = v55;
    v55[1] = v30;
    ptr[1] = (void *)0x200000002LL;
    v34 = sub_C00A40(v30, (__int64)ptr, v32, (__int64)v55, v33);
    v35 = v34;
    v37 = sub_190C6E0(v31, v34, v47, *(double *)a7.m128_u64, a8);
    v38 = *(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_QWORD *)(v38 + 8) != *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v37 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) )
    {
      v39 = *a1;
      v40 = *a3;
      v48 = (_WORD *)v37;
      v41 = sub_C00A40(*a3, v35, v38, v36, v37);
      v42 = sub_A81910(v21, *(_QWORD *)(v40 + 8), v41);
      v37 = sub_16B2590(v39, 0, v42, 0, v48, a7, *(double *)a8.m128_u64) & 0xFFFFFFFFFFFFFFFELL;
    }
    v43 = ptr[0];
    *a3 = v37;
    if ( v43 != v55 )
      free(v43);
    if ( v51 > 0x40 && v50 )
      operator delete[](v50);
  }
  else
  {
    sub_168B9F0((__int64)ptr, a1, *(_DWORD *)(a2 + 24), 0x138Bu, 0);
    sub_15F7200(ptr);
    sub_B88650(a2, 1);
  }
  if ( v52 > 1 )
    sub_A4F8E0((int *)&v52);
  return v16;
}
