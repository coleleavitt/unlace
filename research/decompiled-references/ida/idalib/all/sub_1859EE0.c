__int64 __fastcall sub_1859EE0(
        __int64 a1,
        __int64 *a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        __m128 a7,
        __int64 *a8,
        unsigned int a9,
        int a10,
        __int64 a11,
        __int64 *a12,
        __int64 a13)
{
  __int64 *v16; // rbx
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 result; // rax
  int v24; // eax
  char *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  unsigned int v28; // eax
  __int64 v29; // rdx
  int v30; // esi
  __int64 v31; // rdx
  int v32; // eax
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r8
  unsigned __int64 v36; // r15
  unsigned __int64 v37; // r12
  __int64 v38; // rax
  unsigned int *v39; // rdx
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rax
  unsigned int v47; // eax
  char *v48; // r15
  unsigned int v49; // esi
  char *v50; // r13
  unsigned int v51; // eax
  unsigned __int64 v52; // r14
  char v53; // al
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rdx
  int v57; // eax
  unsigned __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  _QWORD *v62; // rax
  unsigned __int64 v63; // r15
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  unsigned int v68; // eax
  __int64 v69; // rdx
  unsigned __int64 v70; // rax
  unsigned __int64 v71; // rbx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  unsigned __int64 v76; // rax
  unsigned __int64 v77; // r13
  __int64 v78; // rax
  __int64 v79; // [rsp-10h] [rbp-148h]
  int v80; // [rsp+0h] [rbp-138h]
  __int64 v81; // [rsp+0h] [rbp-138h]
  __int64 v84; // [rsp+18h] [rbp-120h]
  int v85; // [rsp+18h] [rbp-120h]
  __int64 v86; // [rsp+28h] [rbp-110h]
  char v87; // [rsp+36h] [rbp-102h] BYREF
  char v88; // [rsp+37h] [rbp-101h] BYREF
  __int64 v89; // [rsp+38h] [rbp-100h] BYREF
  __int64 v90; // [rsp+40h] [rbp-F8h] BYREF
  unsigned __int64 v91; // [rsp+48h] [rbp-F0h] BYREF
  void *ptr; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v93; // [rsp+58h] [rbp-E0h]
  _BYTE v94[16]; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v95; // [rsp+70h] [rbp-C8h] BYREF
  _QWORD *v96; // [rsp+78h] [rbp-C0h]

  v16 = a12;
  v17 = a13;
  v87 = 0;
  v80 = sub_F58610(a4);
  v88 = 0;
  v18 = sub_1CD3B10(a1, a5, a9, a6, 0, 1, (__int64)v16, v17, (__int64)&v87, (__int64)&v88, 0);
  if ( v18 )
  {
    if ( (*(_DWORD *)(v18 + 20) & 0x1FFFFFFF) != 0 )
    {
      if ( !v88 )
        return sub_1CFA5D0(
                 a1,
                 (_DWORD)a2,
                 a4,
                 3,
                 a5,
                 a6,
                 (__int64)a8,
                 a9,
                 a11,
                 v18,
                 0,
                 0,
                 a3,
                 (int)v17 - 1,
                 (__int64)v16,
                 0);
      return 0;
    }
    sub_168B9F0((__int64)&v95, (__int64 *)(a1 + 8), *(_DWORD *)(v18 + 8), 0x142Cu, 0);
    v24 = sub_F58620(v80);
    v25 = sub_F58640(v24);
    v93 = v26;
    ptr = v25;
    v27 = sub_166BAF0((__int64)&v95, (__int64)&ptr);
    sub_169D880(v27, (__int64 *)&a8);
    sub_15F7200(&v95);
    v87 = 1;
  }
  if ( v88 )
    return 0;
  v28 = v17 - 1;
  while ( v28 != -1 )
  {
    v29 = v28--;
    v19 = v16[v29];
    if ( (*(_DWORD *)(v19 + 20) & 0x1FFFFFFF) != 0 )
    {
      v46 = sub_15AB9E0(a6, *(_QWORD **)(a1 + 248), v19, v20, v21, v22);
      ptr = v94;
      v93 = 0x100000000LL;
      sub_1E4CA00(a1, v46);
      v47 = sub_BBD7B0(*v16);
      v48 = (char *)ptr;
      v49 = v47;
      if ( ptr == (char *)ptr + 16 * (unsigned int)v93 )
      {
LABEL_36:
        sub_168B9F0((__int64)&v95, (__int64 *)(a1 + 8), a9, 0x1D06u, 0);
        v89 = *(_QWORD *)(a6 + 8);
        v54 = sub_17AE3B0((__int64)&v95, &v89);
        v91 = *(_QWORD *)a6;
        v55 = sub_1587DB0(v54, (__int64 *)&v91);
        v56 = *(_QWORD *)(a1 + 544);
        if ( v56 )
          v56 -= 64;
        v90 = v56;
        sub_1852F10(v55, &v90);
        sub_15F7200(&v95);
        v57 = sub_F58620(v80);
        v58 = sub_AB77C0(*(_QWORD **)(a1 + 248), v57, *(_QWORD *)(a6 + 8), (__int64)a8);
        v62 = sub_A81BC0(*(_QWORD **)(a1 + 248), v58, 0, v59, v60, v61);
        *((_DWORD *)v62 + 2) = a5;
        v63 = (unsigned __int64)v62;
        sub_15AB9E0(a6, *(_QWORD **)(a1 + 248), v64, v65, v66, v67);
        v68 = a9;
        *(_QWORD *)(v63 + 16) = v69;
        *(_DWORD *)(v63 + 24) = v68;
        v70 = sub_BA5C60(*(_QWORD **)(a1 + 248), *(_QWORD *)(a1 + 544), a9, v63 | 4, a3, a10, v16, v17);
        *(_BYTE *)(v70 + 29) &= 0x9Fu;
        v71 = v70;
        *(_BYTE *)(v70 + 64) |= 1u;
        sub_B94AD0(*(__m128i **)(a1 + 544), v70, v72, v73, v74, v75);
        result = v71;
      }
      else
      {
        v86 = v17;
        v50 = (char *)ptr + 16 * (unsigned int)v93;
        v85 = a5;
        while ( 1 )
        {
          v52 = *(_QWORD *)v48 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)v48 & 4) != 0 || !v52 )
          {
            v53 = *(_BYTE *)(v52 + 28) & 0x7F;
            if ( v53 == 67 )
            {
              sub_BBE5B0(*(_QWORD *)v48 & 0xFFFFFFFFFFFFFFF8LL);
              v51 = sub_BBE590(v52);
            }
            else
            {
              v51 = v53 == 47 ? *(_DWORD *)(v52 + 68) & 0xFFFFF : *(_DWORD *)(v52 + 64) & 0xFFFFF;
            }
          }
          else
          {
            v51 = *(_WORD *)(v52 + 20) & 0x7FFF;
          }
          if ( v49 <= v51 )
            break;
          v48 += 16;
          if ( v50 == v48 )
          {
            a5 = v85;
            v17 = v86;
            goto LABEL_36;
          }
        }
        v76 = *(_QWORD *)v48 & 0xFFFFFFFFFFFFFFF8LL;
        v77 = v76;
        if ( (*(_QWORD *)v48 & 4) == 0 || !v76 )
          v77 = *(_QWORD *)(v76 + 32);
        sub_168B9F0((__int64)&v95, (__int64 *)(a1 + 8), *((_DWORD *)v48 + 2), 0x1664u, 0);
        v90 = *(_QWORD *)(v77 + 40);
        v78 = sub_15894B0((__int64)&v95, &v90);
        v91 = __PAIR64__(a10, *(_DWORD *)a6);
        sub_1587DB0(v78, (__int64 *)&v91);
        sub_15F7200(&v95);
        result = 0;
      }
      if ( ptr != v94 )
      {
        v81 = result;
        free(ptr);
        return v81;
      }
      return result;
    }
  }
  v30 = sub_15AB9E0(a6, *(_QWORD **)(a1 + 248), v19, v20, v21, v22);
  v84 = v31;
  if ( *(_DWORD *)a6 && *(_DWORD *)(a6 + 4) || *(_QWORD *)(a6 + 8) )
  {
    v32 = sub_F58620(v80);
    v33 = sub_1CD4E00(a1, v32, a5, v30, v84, (_DWORD)a8, a9, 1);
    v36 = v33 & 0xFFFFFFFFFFFFFFF0LL;
    if ( (v33 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      return 0;
    v37 = (unsigned __int64)sub_A81BC0(*(_QWORD **)(a1 + 248), v33, 0, v34, v35, v79);
    if ( *(_BYTE *)(*(_QWORD *)v36 + 16LL) == 20 )
    {
      *(_DWORD *)(v37 + 8) = a5;
      *(_QWORD *)(v37 + 16) = v84;
      *(_DWORD *)(v37 + 24) = a9;
    }
    else
    {
      v38 = *(_QWORD *)v37;
      v96 = (_QWORD *)(v37 + 8);
      v95 = v38;
      if ( (unsigned __int8)(*(_WORD *)(v38 + 18) >> 3) != 6 || *(_QWORD *)(v38 + 32) )
      {
        *(_DWORD *)(v37 + 8) = a5;
        if ( (unsigned __int8)(*(_WORD *)(v38 + 18) >> 3) != 6 || *(_QWORD *)(v38 + 32) )
          v96[1] = v84;
      }
      sub_1743120((__int64)&v95);
      *v39 = a9;
    }
    v40 = sub_BA5C60(*(_QWORD **)(a1 + 248), *(_QWORD *)(a1 + 544), a9, v37 | 4, a3, a10, v16, v17);
    *(_BYTE *)(v40 + 29) &= 0x9Fu;
    v41 = v40;
    sub_B94AD0(*(__m128i **)(a1 + 544), v40, v42, v43, v44, v45);
    return v41;
  }
  else
  {
    LOBYTE(ptr) = 0;
    LOBYTE(v95) = 0;
    return sub_17D9210(
             a1,
             a2,
             a4,
             3,
             a5,
             a6,
             a7,
             a8,
             a9,
             a11,
             0,
             0,
             nullptr,
             0,
             &ptr,
             &v95,
             0,
             0,
             nullptr,
             0,
             0,
             0,
             0,
             0);
  }
}
