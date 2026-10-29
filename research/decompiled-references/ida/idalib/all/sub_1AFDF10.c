void __fastcall sub_1AFDF10(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        void *a4,
        unsigned __int64 a5,
        __int64 a6,
        double a7,
        double a8)
{
  __int64 v8; // r14
  __int64 *v9; // rax
  __int64 v10; // r11
  __int64 v11; // rbp
  __int64 v12; // r10
  __int64 v13; // r12
  _DWORD *v14; // rax
  _DWORD *v15; // rbx
  _DWORD *v16; // rax
  __int64 v17; // rbx
  int v18; // eax
  __int64 v19; // rdx
  unsigned __int64 *v23; // rax
  __int64 v24; // r9
  char *v25; // r15
  char *v26; // r14
  unsigned __int64 v27; // rbx
  unsigned __int8 v28; // al
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  int v33; // edx
  __int64 v34; // rax
  __int64 v35; // rax
  int v36; // edx
  _BYTE *v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // rdi
  _DWORD *v40; // rax
  _DWORD *v41; // rsi
  __int64 v42; // rax
  char v43; // dl
  __int64 v44; // r12
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // [rsp+0h] [rbp-150h]
  unsigned __int64 v48; // [rsp+8h] [rbp-148h]
  __int64 v49; // [rsp+8h] [rbp-148h]
  char v50; // [rsp+17h] [rbp-139h]
  unsigned __int64 v52; // [rsp+20h] [rbp-130h]
  __int64 v53; // [rsp+30h] [rbp-120h]
  void *v55; // [rsp+48h] [rbp-108h] BYREF
  size_t v56; // [rsp+50h] [rbp-100h]
  _BYTE v57[16]; // [rsp+58h] [rbp-F8h] BYREF
  __int64 v58; // [rsp+68h] [rbp-E8h] BYREF
  char *v59; // [rsp+70h] [rbp-E0h]
  __int64 v60; // [rsp+78h] [rbp-D8h]
  char v61; // [rsp+80h] [rbp-D0h] BYREF
  __int128 v62; // [rsp+C0h] [rbp-90h]
  __int64 v63; // [rsp+D0h] [rbp-80h]
  __int64 v64; // [rsp+D8h] [rbp-78h]
  __int64 v65; // [rsp+E0h] [rbp-70h]
  int v66; // [rsp+E8h] [rbp-68h]
  __int64 v67; // [rsp+F0h] [rbp-60h] BYREF
  __int128 v68; // [rsp+F8h] [rbp-58h]
  __int64 v69; // [rsp+108h] [rbp-48h]

  if ( *(_DWORD *)(a3 + 56) )
    return;
  v8 = *(_QWORD *)(a3 + 64);
  if ( !v8 )
    return;
  v47 = a1[32] + 40LL * *((unsigned int *)a1 + 66) - 40;
  if ( a5 )
  {
    v9 = *(__int64 **)(a1[32] + 40LL * *((unsigned int *)a1 + 66) - 40);
    v10 = *v9;
    v11 = *v9 + 136LL * *((unsigned int *)v9 + 2);
    if ( *v9 == v11 )
      return;
    while ( 1 )
    {
      if ( *(_DWORD *)v10 == 4 )
      {
        v12 = *(_QWORD *)(v10 + 8);
        v13 = v12 + 56LL * *(unsigned int *)(v10 + 16);
        if ( v12 != v13 )
          break;
      }
LABEL_6:
      v10 += 136;
      if ( v11 == v10 )
        return;
    }
    while ( 1 )
    {
      if ( *(_DWORD *)(v12 + 8) == 12 )
      {
        v14 = *(_DWORD **)(v12 + 16);
        v15 = &v14[6 * *(unsigned int *)(v12 + 24)];
        if ( v14 != v15 )
        {
          if ( *v14 == 67 )
            break;
          v16 = v14 + 6;
          while ( v15 != v16 )
          {
            v16 += 6;
            if ( *(v16 - 6) == 67 )
              goto LABEL_18;
          }
        }
      }
      v12 += 56;
      if ( v13 == v12 )
        goto LABEL_6;
    }
  }
LABEL_18:
  v17 = a3;
  v18 = *(_DWORD *)(a3 + 80);
  v19 = *a1;
  v62 = 0;
  v59 = &v61;
  v60 = 0x800000000LL;
  v64 = v19;
  v65 = v8;
  v66 = v18;
  v58 = 0;
  v63 = 0;
  sub_B85890(&v67, v8);
  v68 = 0;
  v69 = 0x101010000LL;
  sub_1A395A0((__int64)&v58);
  sub_1A5D3E0(*a1, (__int64)&v58, a2, v17 + 8, 0, 0, 0.0, a8, 0);
  v23 = (unsigned __int64 *)sub_1E85170(*a1, v17);
  v25 = v59;
  v52 = *v23;
  v50 = (*(_BYTE *)(*(_QWORD *)v17 + 4LL) >> 4) & 3;
  v26 = &v59[8 * (unsigned int)v60];
  if ( v59 == v26 )
    goto LABEL_36;
  v53 = v17;
  do
  {
    while ( 1 )
    {
      v27 = *(_QWORD *)v25 & 0xFFFFFFFFFFFFFFF8LL;
      v28 = *(_BYTE *)(v27 + 28) & 0x7F;
      if ( ((v28 + 52) & 0x7Fu) <= 1 || (unsigned int)v28 - 53 <= 1 )
      {
        v27 = sub_B72ED0(*(_QWORD *)v25 & 0xFFFFFFFFFFFFFFF8LL);
        v28 = *(_BYTE *)(v27 + 28) & 0x7F;
      }
      if ( !a5 )
        break;
      if ( v28 == 71 && (*(_DWORD *)(*(_QWORD *)(v27 + 56) + 20LL) & 0x1FFFFFFF) == a5 )
      {
        v27 = *(_QWORD *)(v27 + 48);
        if ( v27 )
          goto LABEL_27;
      }
LABEL_21:
      v25 += 8;
      if ( v26 == v25 )
        goto LABEL_35;
    }
    if ( (unsigned int)v28 - 34 > 5 )
      goto LABEL_21;
LABEL_27:
    if ( (*(_BYTE *)(v27 + 84) & 3) != 0 && (v50 != 1 || (*(_BYTE *)(v27 + 84) & 3) == 2) )
      goto LABEL_21;
    v48 = *(_QWORD *)(v27 + 48);
    if ( (*(_BYTE *)(*(_QWORD *)(v48 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0 )
    {
      v29 = sub_168B6C0((__int64)a1);
      if ( (sub_AAA8C0(v29, v52, v48, 0, 0, 1, 0) & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_21;
    }
    v30 = *(unsigned int *)(a6 + 8);
    if ( v30 + 1 > (unsigned __int64)*(unsigned int *)(a6 + 12) )
    {
      sub_2237220(a6, a6 + 16, v30 + 1, 8);
      v30 = *(unsigned int *)(a6 + 8);
    }
    v25 += 8;
    *(_QWORD *)(*(_QWORD *)a6 + 8 * v30) = v27;
    ++*(_DWORD *)(a6 + 8);
  }
  while ( v26 != v25 );
LABEL_35:
  v17 = v53;
LABEL_36:
  v31 = **(_QWORD **)v47;
  v32 = v31 + 136LL * *(unsigned int *)(*(_QWORD *)v47 + 8LL);
  if ( v31 == v32 )
  {
LABEL_39:
    if ( !*(_DWORD *)(a6 + 8) )
    {
      *(_BYTE *)(v17 + 720) &= 0xF3u;
      v42 = sub_17FE280(*a1, (__int64)a2, v17, a4, a5, v24, 0.0, a8);
      v43 = *(_BYTE *)(v42 + 28);
      *(_BYTE *)(v42 + 29) |= 2u;
      if ( (v43 & 0x7F) == 0x47 )
      {
        v44 = *(_QWORD *)(v42 + 48);
        v45 = *(unsigned int *)(a6 + 8);
        if ( v45 + 1 > (unsigned __int64)*(unsigned int *)(a6 + 12) )
        {
          sub_2237220(a6, a6 + 16, v45 + 1, 8);
          v45 = *(unsigned int *)(a6 + 8);
        }
        *(_QWORD *)(*(_QWORD *)a6 + 8 * v45) = v44;
        ++*(_DWORD *)(a6 + 8);
      }
      else
      {
        v46 = *(unsigned int *)(a6 + 8);
        if ( v46 + 1 > (unsigned __int64)*(unsigned int *)(a6 + 12) )
        {
          v49 = v42;
          sub_2237220(a6, a6 + 16, v46 + 1, 8);
          v46 = *(unsigned int *)(a6 + 8);
          v42 = v49;
        }
        *(_QWORD *)(*(_QWORD *)a6 + 8 * v46) = v42;
        ++*(_DWORD *)(a6 + 8);
      }
    }
  }
  else
  {
    while ( 1 )
    {
      if ( *(_DWORD *)v31 == 4 )
      {
        v38 = *(_QWORD *)(v31 + 8);
        v39 = v38 + 56LL * *(unsigned int *)(v31 + 16);
        if ( v38 != v39 )
          break;
      }
LABEL_38:
      v31 += 136;
      if ( v32 == v31 )
        goto LABEL_39;
    }
    while ( 1 )
    {
      if ( *(_DWORD *)(v38 + 8) == 12 )
      {
        v40 = *(_DWORD **)(v38 + 16);
        v41 = &v40[6 * *(unsigned int *)(v38 + 24)];
        if ( v40 != v41 )
          break;
      }
LABEL_50:
      v38 += 56;
      if ( v39 == v38 )
        goto LABEL_38;
    }
    while ( *v40 != 66 )
    {
      v40 += 6;
      if ( v41 == v40 )
        goto LABEL_50;
    }
  }
  v33 = *(_DWORD *)(v17 + 56);
  v57[0] = 0;
  v56 = 0;
  v55 = v57;
  if ( v33 )
    BUG();
  sub_9EE560(
    &v55,
    (_BYTE *)(*(_QWORD *)(*(_QWORD *)(v17 + 64) + 16LL) + 16LL),
    **(unsigned int **)(*(_QWORD *)(v17 + 64) + 16LL));
  if ( 0x7FFFFFFFFFFFFFFFLL - v56 <= 0xA )
    std::__throw_length_error("basic_string::append");
  sub_9EE560(&v55, "$ompvariant", 0xBu);
  sub_9EE560(&v55, *(_BYTE **)(v47 + 8), *(_QWORD *)(v47 + 16));
  v34 = sub_168B6C0((__int64)a1);
  v35 = sub_6F3470(*(_QWORD *)(v34 + 17504), v55, v56);
  v36 = *(_DWORD *)(v17 + 88);
  *(_BYTE *)(v35 + 4) |= 0x40u;
  v37 = v55;
  *(_DWORD *)(v17 + 56) = 0;
  *(_QWORD *)(v17 + 64) = v35;
  *(_DWORD *)(v17 + 84) = v36;
  *(_DWORD *)(v17 + 80) = v36;
  if ( v37 != v57 )
    operator delete(v37);
  sub_169D230((__int64)&v58);
}
