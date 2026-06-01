unsigned __int64 __fastcall sub_3B96F0(__int64 a1, unsigned int a2, char a3, double a4, __int64 a5, int a6, int a7)
{
  void (__fastcall *v8)(__int64, __int64, __int64, __int64, _QWORD); // r9
  int v9; // r9d
  int v10; // r8d
  int v11; // r9d
  size_t v12; // r9
  unsigned __int64 v13; // r8
  const char *v14; // rax
  int v15; // r15d
  __int64 v16; // r13
  int v17; // eax
  __int64 v18; // rdi
  int v19; // eax
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // rdi
  int v24; // edx
  int v25; // eax
  int v26; // r8d
  int v27; // r9d
  __int64 v28; // rdi
  __int64 v29; // r15
  __int64 v30; // rdi
  int v31; // r9d
  int v32; // r8d
  int v33; // r9d
  const char *v34; // rcx
  _BYTE *v35; // rdi
  __int64 (*v36)(); // rax
  __int64 v37; // rdi
  int v38; // eax
  __int64 v39; // rdi
  int v40; // eax
  const void *v41; // r10
  void *v42; // rdi
  __int64 v43; // rax
  unsigned int v44; // [rsp+8h] [rbp-70h]
  unsigned __int64 v45; // [rsp+8h] [rbp-70h]
  unsigned __int64 v46; // [rsp+8h] [rbp-70h]
  size_t v47; // [rsp+10h] [rbp-68h]
  const void *v48; // [rsp+18h] [rbp-60h]
  unsigned __int64 v49; // [rsp+28h] [rbp-50h] BYREF
  __int64 v50; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v51; // [rsp+38h] [rbp-40h]

  v51 = __readfsqword(0x28u);
  if ( !a3 )
  {
    v26 = 2 - (unsigned __int8)callui(203, 7, a1, 0, a6, a7);
    v44 = v26;
    if ( a2 == v26 )
      return v51 - __readfsqword(0x28u);
    v50 = -1;
    callui(203, 12, a1, (unsigned int)&v50, v26, v27);
    v28 = *(_QWORD *)(a1 + 360);
    v29 = SHIDWORD(v50);
    v50 = (int)v50;
    netnode_supset(v28, v44, &v50, 8, 0);
    v30 = *(_QWORD *)(a1 + 360);
    v50 = v29;
    netnode_supset(v30, v44, &v50, 8, 1);
    v8 = (void (__fastcall *)(__int64, __int64, __int64, __int64, _QWORD))callui;
    if ( a2 != 2 )
      goto LABEL_3;
LABEL_16:
    v8(203, 8, a1, 0, 0);
    callui(203, 8, a1, 1, 1, v31);
    callui(203, 17, a1, 1, v32, v33);
    v34 = &s1;
    if ( *(_QWORD *)(a1 + 272) )
      v34 = *(const char **)(a1 + 264);
    if ( (unsigned __int8)parse_decl(a1 + 296, a1 + 328, 0, v34, 49423) )
    {
      v35 = *(_BYTE **)(*(_QWORD *)(a1 + 352) + 1000LL);
      if ( (v35[112] & 1) != 0 )
      {
        v36 = *(__int64 (**)())(*(_QWORD *)v35 + 96LL);
        if ( v36 != sub_32B640 )
          ((void (__fastcall *)(_BYTE *, __int64, __int64, __int64))v36)(v35, 1, a1 + 328, a1 + 296);
        invalidate_cache_for_tlc(v35, a4);
      }
    }
    v37 = *(_QWORD *)(a1 + 360);
    v49 = -1;
    v38 = netnode_altval(v37, 2, 0);
    v39 = *(_QWORD *)(a1 + 360);
    LODWORD(v49) = v38;
    v40 = netnode_altval(v39, 2, 1);
    HIDWORD(v49) = v40;
    if ( (int)v49 > 0 )
    {
      v16 = 2;
      if ( v40 > 0 )
        goto LABEL_9;
    }
    v16 = 2;
    v24 = 380;
    v25 = 800;
    goto LABEL_13;
  }
  v8 = (void (__fastcall *)(__int64, __int64, __int64, __int64, _QWORD))callui;
  if ( a2 == 2 )
    goto LABEL_16;
LABEL_3:
  v8(203, 8, a1, 1, 0);
  callui(203, 8, a1, 0, 1, v9);
  callui(203, 17, a1, 0, v10, v11);
  get_tinfo_from_tlc(a1 + 296, a1 + 328, *(_QWORD *)(*(_QWORD *)(a1 + 352) + 1000LL), 1);
  v13 = *(_QWORD *)(a1 + 336);
  if ( *(_BYTE *)(a1 + 296) )
  {
    v14 = &s1;
    if ( v13 )
      v14 = *(const char **)(a1 + 328);
    v15 = a1 + 264;
    print_tinfo(a1 + 264, 0, 0, 0, 8, a1 + 296, v14, 0);
  }
  else if ( v13 && (v12 = v13 - 1, v13 != 1) )
  {
    v41 = *(const void **)(a1 + 328);
    v42 = *(void **)(a1 + 264);
    v15 = a1 + 264;
    if ( *(_QWORD *)(a1 + 280) < v13 )
    {
      v48 = *(const void **)(a1 + 328);
      v47 = v13 - 1;
      v46 = *(_QWORD *)(a1 + 336);
      v43 = qvector_reserve(a1 + 264, *(_QWORD *)(a1 + 264), v46, 1);
      v41 = v48;
      v12 = v47;
      *(_QWORD *)(a1 + 264) = v43;
      v13 = v46;
      v42 = (void *)v43;
    }
    *(_QWORD *)(a1 + 272) = v13;
    v45 = v13;
    memmove(v42, v41, v12);
    *(_BYTE *)(*(_QWORD *)(a1 + 264) + v45 - 1) = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 272) = 0;
    v15 = a1 + 264;
  }
  callui(203, 15, a1, 0, v15, v12);
  v49 = -1;
  v16 = a2;
  v17 = netnode_altval(*(_QWORD *)(a1 + 360), a2, 0);
  v18 = *(_QWORD *)(a1 + 360);
  LODWORD(v49) = v17;
  v19 = netnode_altval(v18, a2, 1);
  HIDWORD(v49) = v19;
  if ( (int)v49 > 0 && v19 > 0 )
    goto LABEL_9;
  if ( a2 == 1 )
  {
    v16 = 1;
    v24 = -1;
    v25 = 800;
  }
  else
  {
    v24 = -1;
    v25 = -1;
  }
LABEL_13:
  v49 = __PAIR64__(v24, v25);
LABEL_9:
  callui(203, 13, a1, (unsigned int)&v49, v20, v21);
  v22 = *(_QWORD *)(a1 + 360);
  v50 = v16;
  netnode_supset(v22, 10, &v50, 8, 65);
  return v51 - __readfsqword(0x28u);
}
