__int64 __fastcall sub_1E68C00(
        __int64 a1,
        __int64 a2,
        const __m128i *a3,
        __int64 *a4,
        __int64 a5,
        unsigned int a6,
        __m128i a7,
        double a8,
        int a9,
        int a10,
        int a11)
{
  _BYTE *v11; // r15
  unsigned __int8 v13; // r12
  char v15; // al
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 *v19; // rbx
  __int64 v20; // r14
  unsigned __int16 v21; // ax
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // r10d
  __int64 v27; // rdx
  unsigned __int8 v28; // al
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdi
  __int64 v33; // rax
  char v34; // dl
  __int64 *v35; // r13
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  char *v42; // rax
  __int64 v43; // rdx
  _BYTE *v44; // rdi
  unsigned __int64 v45; // rdx
  int v46; // eax
  _QWORD *v47; // rdi
  __m128i *v48; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rax
  int v59; // r9d
  __int64 v60; // rbx
  _QWORD *v61; // rdx
  __int64 v62; // rax
  unsigned __int16 v63; // ax
  __int16 v64; // r10
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rdx
  __int64 v71; // rcx
  size_t v72; // rdx
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rax
  __int64 v76; // [rsp+8h] [rbp-160h]
  __int64 v77; // [rsp+8h] [rbp-160h]
  unsigned __int8 v78; // [rsp+8h] [rbp-160h]
  unsigned __int8 v79; // [rsp+8h] [rbp-160h]
  double v80; // [rsp+10h] [rbp-158h] BYREF
  unsigned int v81; // [rsp+1Ch] [rbp-14Ch]
  const __m128i *v82; // [rsp+20h] [rbp-148h]
  int v83; // [rsp+28h] [rbp-140h]
  int v84; // [rsp+2Ch] [rbp-13Ch]
  unsigned __int16 v85; // [rsp+3Eh] [rbp-12Ah] BYREF
  void *src; // [rsp+40h] [rbp-128h] BYREF
  size_t n; // [rsp+48h] [rbp-120h]
  _QWORD v88[2]; // [rsp+50h] [rbp-118h] BYREF
  __int64 v89; // [rsp+60h] [rbp-108h] BYREF
  char v90; // [rsp+68h] [rbp-100h]
  __int64 v91; // [rsp+6Ch] [rbp-FCh]
  char v92; // [rsp+74h] [rbp-F4h]
  void *dest; // [rsp+78h] [rbp-F0h]
  __m128 v94; // [rsp+80h] [rbp-E8h] BYREF
  char v95; // [rsp+98h] [rbp-D0h]
  _BYTE v96[200]; // [rsp+A0h] [rbp-C8h] BYREF

  LODWORD(v11) = a5;
  v13 = a5;
  v76 = a2;
  v82 = a3;
  LODWORD(v80) = a9;
  v81 = a6;
  v83 = a10;
  v15 = a11;
  if ( a2 )
  {
    a2 = a6;
    v84 = a11;
    sub_1E68820(a1, a6, a7, a8);
    v15 = a11;
    v19 = (__int64 *)(*a4 & 0xFFFFFFFFFFFFFFF0LL);
    v20 = *v19;
    if ( *(_BYTE *)(*v19 + 16) != 8 )
      goto LABEL_8;
  }
  else
  {
    v19 = (__int64 *)(*a4 & 0xFFFFFFFFFFFFFFF0LL);
    v20 = *v19;
    if ( *(_BYTE *)(*v19 + 16) != 8 )
    {
      LODWORD(v11) = 0;
      sub_F6A600(*v19, 0, (__int64)a3, (__int64)a4, a5);
LABEL_9:
      if ( (unsigned __int8)sub_F61C90(*v19, 1, v27, v23, v24, v25) )
      {
        if ( !LOBYTE(v80) )
          goto LABEL_29;
        v32 = *v19;
        v46 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*v19 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
        if ( (unsigned __int8)(v46 - 2) > 4u )
        {
          if ( (v46 & 0xF7) != 0x22 )
            goto LABEL_29;
          v33 = *(_QWORD *)(sub_F68450(v32, 1, (unsigned int)(v46 - 2), v29, v30) & 0xFFFFFFFFFFFFFFF0LL);
          goto LABEL_14;
        }
      }
      else
      {
        if ( !(_BYTE)v83
          || (v32 = *v19,
              (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v19 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u) )
        {
          if ( (_BYTE)v11 )
          {
            sub_168B9F0((__int64)v96, (__int64 *)(a1 + 8), v81, 0x10F2u, 0);
            LOBYTE(v89) = v13;
            BYTE1(v89) = LOBYTE(v80);
            v52 = sub_189E1F0((__int64)v96, (unsigned __int16 *)&v89, v50, v51);
            sub_1605D30(v52, a4);
            sub_15F7200(v96);
          }
          else
          {
            LODWORD(v11) = 1;
          }
          return (unsigned int)v11;
        }
        if ( !LOBYTE(v80) )
          goto LABEL_29;
      }
      v33 = sub_F649E0(v32);
LABEL_14:
      if ( v33 )
      {
        v34 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v33 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
        LOBYTE(v19) = (unsigned __int8)(v34 - 33) <= 1u || v34 == 42;
        if ( (_BYTE)v19 )
        {
          v35 = (__int64 *)(a1 + 8);
          sub_168B9F0((__int64)v96, v35, v81, 0x10F1u, 0);
          LOBYTE(v89) = v13;
          BYTE1(v89) = 1;
          v38 = sub_189E1F0((__int64)v96, (unsigned __int16 *)&v89, v36, v37);
          sub_1605D30(v38, a4);
          sub_15F7200(v96);
          sub_168B9F0((__int64)v96, v35, v81, 0x1805u, 0);
          v85 = v13;
          v41 = sub_189E1F0((__int64)v96, &v85, v39, v40);
          v77 = sub_1605D30(v41, a4);
          v42 = sub_FDFBE0(v13, 0);
          v91 = 0;
          v92 = 0;
          dest = &v94.m128_u16[4];
          v94.m128_u64[0] = 0;
          v94.m128_i8[8] = 0;
          v95 = 0;
          LODWORD(v89) = v81;
          HIDWORD(v89) = v81;
          v90 = 1;
          src = v88;
          sub_1E5E4B0(&src, v42, (__int64)&v42[v43]);
          v44 = dest;
          if ( src == v88 )
          {
            v72 = n;
            if ( n )
            {
              if ( n == 1 )
                *(_BYTE *)dest = v88[0];
              else
                memcpy(dest, src, n);
              v72 = n;
              v44 = dest;
            }
            v94.m128_u64[0] = v72;
            v44[v72] = 0;
            v44 = src;
            goto LABEL_20;
          }
          if ( dest == &v94.m128_u16[4] )
          {
            v80 = *(double *)v88;
            dest = src;
            v94 = _mm_loadh_ps(&v80);
          }
          else
          {
            v80 = *(double *)v88;
            v45 = v94.m128_u64[1];
            dest = src;
            v94 = _mm_loadh_ps(&v80);
            if ( v44 )
            {
              src = v44;
              v88[0] = v45;
LABEL_20:
              n = 0;
              *v44 = 0;
              if ( src != v88 )
                operator delete(src);
              sub_1589170(v77, &v89);
              if ( dest != &v94.m128_u16[4] )
                operator delete(dest);
              LODWORD(v11) = (_DWORD)v19;
              sub_15F7200(v96);
              return (unsigned int)v11;
            }
          }
          v44 = v88;
          src = v88;
          goto LABEL_20;
        }
      }
LABEL_29:
      v47 = *(_QWORD **)(a1 + 248);
      if ( (_BYTE)v11 )
      {
        LODWORD(v11) = 0;
        v48 = sub_1E61530(v47, v82, v13, v29, v30, v31);
        *a4 = sub_1E5D550(v76, (__int64)v48, *a4, *a4);
      }
      else
      {
        *a4 = sub_A719E0((__int64)v47, v13, *a4, *a4);
      }
      return (unsigned int)v11;
    }
  }
  if ( v15 )
  {
    do
    {
      v21 = sub_F5E940(v20);
      if ( HIBYTE(v21) )
      {
        if ( (_BYTE)v11 == (_BYTE)v21 )
          goto LABEL_57;
        a2 = *a4;
        *a4 = sub_1E5D4E0(*(_QWORD *)(a1 + 248), *a4);
      }
      v19 = (__int64 *)(*(_QWORD *)(v20 + 40) & 0xFFFFFFFFFFFFFFF0LL);
      v20 = *v19;
    }
    while ( *(_BYTE *)(*v19 + 16) == 8 );
  }
  else
  {
    while ( 1 )
    {
      v64 = sub_F5E940(v20);
      LODWORD(v11) = HIBYTE(v64);
      if ( HIBYTE(v64) )
        break;
      v19 = (__int64 *)(*(_QWORD *)(v20 + 40) & 0xFFFFFFFFFFFFFFF0LL);
      v20 = *v19;
      if ( *(_BYTE *)(*v19 + 16) != 8 )
        goto LABEL_8;
    }
    if ( v13 != (_BYTE)v64 )
    {
      v79 = v64;
      sub_168B9F0((__int64)v96, (__int64 *)(a1 + 8), v81, 0x2Cu, 0);
      LOBYTE(src) = v13;
      BYTE1(src) = LOBYTE(v80);
      v67 = sub_189E1F0((__int64)v96, (unsigned __int16 *)&src, v65, v66);
      LOWORD(v89) = v79;
      sub_189E1F0(v67, (unsigned __int16 *)&v89, v68, v69);
      sub_15F7200(v96);
      return (unsigned int)v11;
    }
LABEL_57:
    if ( v76 )
    {
      v11 = v96;
      sub_168B9F0((__int64)v96, (__int64 *)(a1 + 8), v81, 0x91u, 0);
      LOBYTE(src) = v13;
      BYTE1(src) = LOBYTE(v80);
      v75 = sub_189E1F0((__int64)v96, (unsigned __int16 *)&src, v73, v74);
      a2 = (__int64)&v89;
      v91 = 0;
      v92 = 0;
      dest = &v94.m128_u16[4];
      v94.m128_u64[0] = 0;
      v94.m128_i8[8] = 0;
      v95 = 0;
      LODWORD(v89) = v81;
      HIDWORD(v89) = v81;
      v90 = 1;
      sub_1589170(v75, &v89);
      if ( dest != &v94.m128_u16[4] )
        operator delete(dest);
      sub_15F7200(v96);
    }
    v20 = *v19;
  }
LABEL_8:
  LOWORD(v22) = sub_F6A600(v20, a2, v16, v17, v18);
  v26 = v22;
  LOBYTE(v11) = v76 != 0;
  LOBYTE(v27) = (_BYTE)v22 != v13;
  v28 = (v76 != 0) & ((_BYTE)v22 != v13) & BYTE1(v22);
  if ( !v28 )
    goto LABEL_9;
  v83 = v26;
  LOBYTE(v82) = v26;
  v78 = v28;
  sub_168B9F0((__int64)v96, (__int64 *)(a1 + 8), v81, 0x2Cu, 0);
  LOBYTE(src) = v13;
  BYTE1(src) = LOBYTE(v80);
  v55 = sub_189E1F0((__int64)v96, (unsigned __int16 *)&src, v53, v54);
  LOWORD(v89) = (unsigned __int8)v83;
  LODWORD(v80) = v83;
  sub_189E1F0(v55, (unsigned __int16 *)&v89, v56, v57);
  sub_15F7200(v96);
  v58 = sub_F6AC00(*v19);
  v59 = v78;
  if ( v58 )
  {
    v60 = *(_QWORD *)(v58 + 32);
    v61 = (_QWORD *)(*(_QWORD *)(v60 + 80) & 0xFFFFFFFFFFFFFFF8LL);
    v62 = (*(_QWORD *)(v60 + 80) & 4) != 0 ? v61[1] : *v61;
    v81 = LODWORD(v80);
    LOBYTE(v80) = (_BYTE)v82;
    v89 = v62;
    v63 = sub_F5E9A0(&v89);
    v59 = v78;
    if ( HIBYTE(v63) )
    {
      if ( LOBYTE(v80) == (_BYTE)v63 )
      {
        sub_168B9F0((__int64)v96, (__int64 *)(a1 + 8), *(_DWORD *)(v60 + 24), 0x1804u, 0);
        LOWORD(src) = (unsigned __int8)v81;
        sub_189E1F0((__int64)v96, (unsigned __int16 *)&src, v70, v71);
        sub_15F7200(v96);
        v59 = v78;
      }
    }
  }
  LODWORD(v11) = v59;
  return (unsigned int)v11;
}
