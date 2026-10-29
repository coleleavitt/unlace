__int64 __fastcall sub_1E49670(__int64 *a1, _QWORD *a2, __int64 a3, __m128 a4, __m128 a5)
{
  __int64 v7; // rdx
  void **v8; // rax
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // r13
  __int64 v12; // rax
  const __m128i **v13; // rdx
  const __m128i *v14; // r14
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rcx
  char *v18; // rdi
  __int64 v19; // r12
  __int64 v20; // r14
  void **v21; // rbp
  unsigned __int64 v23; // rdi
  unsigned int v24; // edx
  __int64 *v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned __int64 v31; // rax
  __int64 v32; // rdx
  _QWORD *v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  unsigned __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  _QWORD *v45; // rax
  __int64 v47; // [rsp+10h] [rbp-3B8h]
  __int64 *v48; // [rsp+28h] [rbp-3A0h]
  _QWORD *v49; // [rsp+30h] [rbp-398h]
  int v50; // [rsp+3Ch] [rbp-38Ch]
  __int64 v51; // [rsp+40h] [rbp-388h]
  void *v52; // [rsp+48h] [rbp-380h]
  __int64 v53; // [rsp+50h] [rbp-378h] BYREF
  unsigned __int64 v54; // [rsp+58h] [rbp-370h] BYREF
  __int128 v55; // [rsp+60h] [rbp-368h] BYREF
  __int64 v56; // [rsp+70h] [rbp-358h]
  unsigned __int8 *v57; // [rsp+80h] [rbp-348h] BYREF
  char v58; // [rsp+D8h] [rbp-2F0h]
  unsigned int v59; // [rsp+E0h] [rbp-2E8h]
  char v60; // [rsp+E4h] [rbp-2E4h]
  __int64 v61; // [rsp+F0h] [rbp-2D8h] BYREF
  __int64 v62; // [rsp+F8h] [rbp-2D0h]
  __int64 v63; // [rsp+100h] [rbp-2C8h] BYREF
  unsigned int v64; // [rsp+108h] [rbp-2C0h]
  void *v65; // [rsp+140h] [rbp-288h] BYREF
  __int64 v66; // [rsp+148h] [rbp-280h]
  __int64 v67; // [rsp+150h] [rbp-278h] BYREF
  __int64 v68; // [rsp+158h] [rbp-270h]
  __int16 v69; // [rsp+160h] [rbp-268h]
  char v70; // [rsp+162h] [rbp-266h]
  __int64 v71; // [rsp+168h] [rbp-260h]
  void *v72[2]; // [rsp+180h] [rbp-248h] BYREF
  _BYTE v73[96]; // [rsp+190h] [rbp-238h] BYREF
  void *v74; // [rsp+1F0h] [rbp-1D8h]
  __int64 v75; // [rsp+1F8h] [rbp-1D0h]
  _BYTE v76[96]; // [rsp+200h] [rbp-1C8h] BYREF
  __int16 v77; // [rsp+260h] [rbp-168h]
  char v78; // [rsp+262h] [rbp-166h]
  void *ptr; // [rsp+270h] [rbp-158h] BYREF
  __int64 v80; // [rsp+278h] [rbp-150h]
  _QWORD v81[41]; // [rsp+280h] [rbp-148h] BYREF

  v7 = *a1;
  v61 = *a1;
  v8 = (void **)&v63;
  v62 = 1;
  do
  {
    *v8 = (void *)-4096LL;
    v8 += 2;
  }
  while ( v8 != &v65 );
  v70 = 0;
  v65 = &v67;
  v66 = 0x100000000LL;
  v9 = *(_QWORD *)(v7 + 11280);
  *(_QWORD *)(v7 + 11280) = &v61;
  v10 = *(_QWORD *)(a3 + 184);
  v68 = v9;
  v69 = 0;
  v71 = 0;
  v11 = sub_1E48E00((__int64)a1, v10);
  if ( !v11 )
    goto LABEL_12;
  v12 = *(_QWORD *)(a3 + 160);
  v13 = (const __m128i **)(v12 & 0xFFFFFFFFFFFFFFF8LL);
  v14 = (const __m128i *)(v12 & 0xFFFFFFFFFFFFFFF8LL);
  if ( v12 )
  {
    if ( (v12 & 4) != 0 )
    {
      v14 = nullptr;
      if ( v13 )
        v14 = *v13;
    }
  }
  v15 = v14->m128i_i64[0];
  v16 = *a1;
  v80 = 0x800000000LL;
  v17 = a1[4];
  ptr = v81;
  v81[32] = v15;
  if ( !(unsigned __int8)sub_1DD74F0(v16, v14 + 1, v14->m128i_u32[2], v17, (__int64)&ptr, a4, a5) )
  {
    v23 = *a1;
    v72[0] = v73;
    v72[1] = (void *)0x400000000LL;
    v75 = 0x400000000LL;
    v77 = 0;
    v74 = v76;
    v24 = *(_DWORD *)(a3 + 24);
    v78 = 0;
    v55 = 0;
    v56 = 0;
    if ( !(unsigned __int8)sub_1CCEE60(
                             v23,
                             (__int64)a2,
                             v24,
                             (__int64)&ptr,
                             (__int64)&v55,
                             0,
                             (__m128)0LL,
                             a5,
                             (__int64)v72,
                             1,
                             nullptr)
      && !sub_1CCBDE0(*a1, *(_DWORD *)(a3 + 24), (__int64)a2, v80, (__int64)v74, (__m128)0LL) )
    {
      v53 = 0;
      v48 = sub_BC50F0(a2, (__int64)v74, (unsigned int)v75, v11, (__int64)&v53);
      v50 = v14->m128i_i32[0];
      v52 = v74;
      v49 = *(_QWORD **)(*a1 + 248);
      v51 = (unsigned int)v75;
      sub_F22AA0((unsigned __int64 *)&v55, (__int64)a2);
      v25 = sub_AB8350(v49, v55, v50, (__int64)&ptr, v52, v51, 0);
      v11 = sub_BC2CB0(
              *(_QWORD **)(*a1 + 248),
              *(_BYTE *)(a3 + 73) >> 5,
              a1[3],
              *(_DWORD *)(a3 + 56),
              *(_DWORD *)(a3 + 24),
              v11,
              (__int64)a2,
              (const __m128i *)v74,
              (unsigned int)v75,
              *v25,
              0);
      v26 = (_QWORD *)sub_B8C330(v11);
      v31 = sub_F1ED40(v26, (__int64 *)&ptr, v27, v28, v29, v30);
      v32 = *(_QWORD *)(v11 + 160);
      if ( v32 && (v32 & 4) != 0 && (v33 = (_QWORD *)(v32 & 0xFFFFFFFFFFFFFFF8LL)) != nullptr )
        *v33 = v31;
      else
        *(_QWORD *)(v11 + 160) = v31 & 0xFFFFFFFFFFFFFFFBLL;
      if ( !(unsigned __int8)sub_1DFDC70(*a1, a3, v11, a1[4]) )
      {
        *(_QWORD *)(*(_QWORD *)(v11 + 104) + 192LL) = *(_QWORD *)(*(_QWORD *)(v11 + 104) + 192LL) & 7LL | a3;
        if ( !v48 )
        {
          sub_1CE3EE0(*a1, v11);
          sub_BC45A0(a2, v11, 0);
          goto LABEL_29;
        }
        sub_168B9F0((__int64)&v55, (__int64 *)(*a1 + 8), *(_DWORD *)(v11 + 24), 0x12C1u, 0);
        if ( v58 )
        {
          sub_AE9DF0(&v57, v11, 0xAu);
        }
        else if ( v60 )
        {
          v40 = sub_168B9E0(&v55);
          v44 = v56;
          if ( v56 )
          {
            v47 = v40;
            v44 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v56 + 32LL))(v56);
            v40 = v47;
          }
          v54 = v44;
          v45 = sub_1587BC0(v40, (__int64 *)&v54, v40, v41, v42, v43);
          sub_AE9DF0((unsigned __int8 **)(*v45 + 32LL * v59 + 8), v11, 0xAu);
        }
        sub_15F7200(&v55);
        sub_168B9F0((__int64)&v55, (__int64 *)(*a1 + 8), *((_DWORD *)v48 + 6), 0x1887u, 0);
        v38 = v48[6];
        if ( v38 )
          v39 = v38 & 0xFFFFFFFFFFFFFFF0LL;
        else
          v39 = sub_A7AA70(*(_QWORD *)(*a1 + 248), (__int64)v48, v34, v35, v36, v37);
        v54 = v39;
        sub_162B6D0((__int64)&v55, (__int64 *)&v54);
        sub_15F7200(&v55);
      }
    }
    v11 = 0;
LABEL_29:
    if ( v74 != v76 )
      free(v74);
    if ( v72[0] != v73 )
      free(v72[0]);
    goto LABEL_10;
  }
  v11 = 0;
LABEL_10:
  if ( ptr != v81 )
    free(ptr);
LABEL_12:
  v18 = (char *)v65;
  if ( !(_BYTE)v69 )
  {
    if ( (_DWORD)v66 )
    {
      v19 = 0;
      v20 = 8LL * (unsigned int)(v66 - 1) + 8;
      do
      {
        v21 = *(void ***)&v18[v19];
        if ( v21 )
        {
          if ( *v21 != v21 + 2 )
            free(*v21);
          operator delete(v21, 0x30u);
          v18 = (char *)v65;
        }
        v19 += 8;
      }
      while ( v20 != v19 );
    }
    LOBYTE(v69) = 1;
    *(_QWORD *)(v61 + 11280) = v68;
  }
  if ( v18 != (char *)&v67 )
    free(v18);
  if ( (v62 & 1) == 0 )
    operator delete(v63, 16LL * v64, 8);
  return v11;
}
