unsigned __int64 __fastcall sub_1C20D80(unsigned __int64 *a1, unsigned __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int64 v6; // rbx
  __int16 v7; // ax
  int v8; // eax
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  void *v11; // rdi
  unsigned __int64 v12; // rbx
  unsigned __int64 v14; // rbp
  void *v15; // rax
  unsigned __int64 v16; // r12
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rbx
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  _QWORD *v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rsi
  unsigned __int64 v28; // rdi
  unsigned __int64 v29; // r13
  char v30; // al
  __int64 v31; // rdx
  unsigned __int64 v32; // rdx
  char v33; // si
  int v34; // eax
  unsigned __int64 v35; // r12
  __int64 v36; // rax
  unsigned __int64 v37; // rbx
  __int64 v38; // rax
  unsigned __int64 v39; // rdx
  _QWORD *v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rsi
  unsigned __int64 v43; // rbp
  __int64 v44; // rax
  __int64 v45; // r15
  unsigned __int64 v46; // rax
  unsigned int v47; // ecx
  __int64 *v48; // rbx
  __int64 v49; // r14
  __int64 v50; // rdi
  unsigned __int64 v51; // rdx
  char *v52; // rsi
  unsigned int v53; // ecx
  __int64 v54; // rdi
  __int64 v55; // rax
  unsigned __int64 v56; // rdx
  unsigned __int64 v57; // [rsp+0h] [rbp-118h] BYREF
  __int64 *v58; // [rsp+8h] [rbp-110h]
  __m128 *v59; // [rsp+18h] [rbp-100h] BYREF
  _QWORD v60[2]; // [rsp+20h] [rbp-F8h] BYREF
  unsigned __int64 v61; // [rsp+30h] [rbp-E8h] BYREF
  int v62; // [rsp+38h] [rbp-E0h]
  _QWORD *v63; // [rsp+40h] [rbp-D8h]
  __m128 v64; // [rsp+50h] [rbp-C8h] BYREF
  int v65; // [rsp+60h] [rbp-B8h]
  int v66; // [rsp+64h] [rbp-B4h]
  char v67; // [rsp+68h] [rbp-B0h]
  void *ptr; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v69; // [rsp+78h] [rbp-A0h]
  _BYTE v70[32]; // [rsp+80h] [rbp-98h] BYREF
  unsigned __int64 v71; // [rsp+A0h] [rbp-78h]
  __int64 v72; // [rsp+A8h] [rbp-70h]
  void *v73; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v74; // [rsp+B8h] [rbp-60h]
  __int64 v75; // [rsp+C0h] [rbp-58h] BYREF
  __int64 v76; // [rsp+C8h] [rbp-50h]
  __int64 v77; // [rsp+D0h] [rbp-48h]

  v6 = sub_BFB9F0(a2);
  v7 = *(_WORD *)v6 & 0x1FF;
  if ( v7 != 32 )
  {
    if ( v7 == 28 )
    {
      v14 = *a1;
      v71 = v6;
      v64.m128_u64[1] = v14;
      v66 = sub_EEC8C0(v6, a2, *(double *)a3.m128_u64);
      v69 = 0x400000000LL;
      v65 = -1;
      v67 = 1;
      ptr = v70;
      v64.m128_u64[0] = (unsigned __int64)&off_2BC79F8;
      v72 = 0;
      v73 = nullptr;
      v74 = 0;
      v75 = 0;
      v76 = 0;
      v77 = 0;
      v72 = sub_1C160F0((__int64)&v64, *(_QWORD *)(v6 + 24));
      v15 = (void *)sub_1C160F0((__int64)&v64, *(_QWORD *)(v71 + 32));
      v59 = &v64;
      v73 = v15;
      v60[0] = sub_1C15420;
      v60[1] = &v59;
      v62 = 0;
      v61 = v64.m128_u64[1];
      v63 = v60;
      v16 = sub_1C15630((__int64)&v61, a2);
      v21 = (unsigned __int64)sub_1C1FFB0((__int64)&v64, a2, v17, v18, v19, v20, a3, a4);
      v12 = v21;
      if ( v21 != 1 )
      {
        v22 = v21 & 0xFFFFFFFFFFFFFFFELL;
        v23 = (unsigned int)v69;
        v24 = (unsigned int)v69 + 1LL;
        v65 = v69;
        if ( v24 > HIDWORD(v69) )
        {
          sub_2237220(&ptr, v70, v24, 8);
          v23 = (unsigned int)v69;
        }
        *((_QWORD *)ptr + v23) = v22;
        v25 = ptr;
        v26 = (unsigned int)(v69 + 1);
        v27 = *((_QWORD *)ptr + v26 - 1);
        LODWORD(v69) = v69 + 1;
        if ( (*(_WORD *)v27 & 0x1FF) == 0x1A )
        {
          *(_BYTE *)(v27 + 2) &= ~8u;
          v25 = ptr;
          v26 = (unsigned int)v69;
        }
        v12 = sub_C0B960(*(_QWORD **)(v64.m128_u64[1] + 248), v16, v25, v26, v65);
      }
      goto LABEL_7;
    }
    if ( v7 != 50 )
    {
      v43 = *a1;
      v65 = -1;
      v64.m128_u64[1] = v43;
      v66 = sub_EEC8C0(v6, a2, *(double *)a3.m128_u64);
      ptr = v70;
      v74 = 0x400000000LL;
      v67 = 1;
      v69 = 0x400000000LL;
      v64.m128_u64[0] = (unsigned __int64)&off_2BC7A40;
      v72 = 0;
      v73 = &v75;
      v44 = *(_QWORD *)(v6 + 24);
      LODWORD(v74) = 1;
      v75 = v44;
      v45 = sub_BFB9F0(*(_QWORD *)(v6 + 16));
      if ( (*(_WORD *)v45 & 0x1FF) == 0x31 )
      {
        v58 = &v75;
        v46 = 4;
        v47 = 1;
        v48 = &v75;
        while ( 1 )
        {
          v49 = *(_QWORD *)(v45 + 24);
          v50 = 8LL * v47;
          v51 = v47 + 1LL;
          v52 = (char *)&v48[(unsigned __int64)v50 / 8];
          if ( v50 )
          {
            if ( v46 < v51 )
            {
              sub_2237220(&v73, v58, v51, 8);
              v48 = (__int64 *)v73;
              v47 = v74;
              v50 = 8LL * (unsigned int)v74;
              v52 = (char *)v73 + v50;
            }
            *(_QWORD *)v52 = v48[(unsigned __int64)v50 / 8 - 1];
            if ( v48 != (__int64 *)((char *)v73 + v50 - 8) )
            {
              memmove(v48 + 1, v48, (char *)v73 + v50 - 8 - (char *)v48);
              v47 = v74;
            }
            v53 = v47 + 1;
            LODWORD(v74) = v53;
            *v48 = v49;
          }
          else
          {
            if ( v46 < v51 )
            {
              sub_2237220(&v73, v58, v51, 8);
              v52 = (char *)v73 + 8 * (unsigned int)v74;
            }
            *(_QWORD *)v52 = v49;
            v53 = v74 + 1;
            LODWORD(v74) = v74 + 1;
          }
          v54 = *(_QWORD *)(v45 + 16);
          LODWORD(v57) = v53;
          v45 = sub_BFB9F0(v54);
          if ( (*(_WORD *)v45 & 0x1FF) != 0x31 )
            break;
          v48 = (__int64 *)v73;
          v46 = HIDWORD(v74);
          v47 = v57;
        }
      }
      v71 = v45;
      v35 = sub_1C168F0((__int64)&v64, a2);
      v55 = sub_1C17150((__int64)&v64, *(double *)a3.m128_u64, a4);
      v12 = v55;
      if ( v55 == 1 )
        goto LABEL_34;
      v37 = v55 & 0xFFFFFFFFFFFFFFFELL;
      v38 = (unsigned int)v69;
      v56 = (unsigned int)v69 + 1LL;
      v65 = v69;
      if ( v56 > HIDWORD(v69) )
      {
        sub_2237220(&ptr, v70, v56, 8);
        v38 = (unsigned int)v69;
      }
      goto LABEL_31;
    }
    v28 = *(_QWORD *)(v6 + 16);
    v29 = *a1;
    if ( v28 )
    {
      v30 = sub_BFE300(v28);
      if ( v30 )
      {
        if ( *(_QWORD *)(v6 + 40) )
        {
          v31 = *(_QWORD *)(v6 + 40);
          a4 = (__m128)_mm_loadu_si128((const __m128i *)(v6 + 40));
          v64 = a4;
          if ( v31 )
          {
            v32 = *(_QWORD *)(v31 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            if ( v32 )
            {
              v33 = 0;
              v57 = v64.m128_u64[1];
              a3 = _mm_loadh_ps((const double *)&v57);
              v64 = a3;
              while ( (*(_QWORD *)(v32 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
              {
                v33 = v30;
                v32 = *(_QWORD *)(v32 + 8) & 0xFFFFFFFFFFFFFFF8LL;
              }
              if ( v33 )
                v64.m128_u64[0] = v32;
            }
          }
          v34 = sub_E90530((__int64 *)&v64);
        }
        else
        {
          v34 = *(_DWORD *)(v6 + 32);
        }
        goto LABEL_28;
      }
      v28 = *(_QWORD *)(v6 + 16);
    }
    v34 = sub_EEB7E0(v28, a2, *(double *)a3.m128_u64);
LABEL_28:
    v64.m128_u64[1] = v29;
    v66 = v34;
    v71 = v6;
    v73 = &v75;
    v65 = -1;
    v67 = 1;
    ptr = v70;
    v69 = 0x400000000LL;
    v64.m128_u64[0] = (unsigned __int64)&off_2BC7A40;
    v72 = 0;
    v74 = 0x400000000LL;
    v35 = sub_1C168F0((__int64)&v64, a2);
    v36 = sub_1C17150((__int64)&v64, *(double *)a3.m128_u64, a4);
    v12 = v36;
    if ( v36 == 1 )
    {
LABEL_34:
      v64.m128_u64[0] = (unsigned __int64)&off_2BC7A40;
      if ( v73 != &v75 )
        free(v73);
LABEL_7:
      v11 = ptr;
      v64.m128_u64[0] = (unsigned __int64)&unk_2C66D98;
      if ( ptr == v70 )
        return v12;
      goto LABEL_3;
    }
    v37 = v36 & 0xFFFFFFFFFFFFFFFELL;
    v38 = (unsigned int)v69;
    v39 = (unsigned int)v69 + 1LL;
    v65 = v69;
    if ( v39 > HIDWORD(v69) )
    {
      sub_2237220(&ptr, v70, v39, 8);
      v38 = (unsigned int)v69;
    }
LABEL_31:
    *((_QWORD *)ptr + v38) = v37;
    v40 = ptr;
    v41 = (unsigned int)(v69 + 1);
    v42 = *((_QWORD *)ptr + v41 - 1);
    LODWORD(v69) = v69 + 1;
    if ( (*(_WORD *)v42 & 0x1FF) == 0x1A )
    {
      *(_BYTE *)(v42 + 2) &= ~8u;
      v40 = ptr;
      v41 = (unsigned int)v69;
    }
    v12 = sub_C0B960(*(_QWORD **)(v64.m128_u64[1] + 248), v35, v40, v41, v65);
    goto LABEL_34;
  }
  v8 = *(_DWORD *)(v6 + 32);
  v9 = *a1;
  v71 = v6;
  v66 = v8;
  v69 = 0x400000000LL;
  v64.m128_u64[1] = v9;
  v65 = -1;
  v67 = 1;
  ptr = v70;
  v64.m128_u64[0] = (unsigned __int64)&off_2BC79B0;
  v72 = 0;
  v73 = nullptr;
  v74 = 0;
  v75 = 0;
  v76 = 0;
  v77 = 0;
  v10 = sub_1C20420((__int64)&v64, a2, a3, a4);
  v11 = ptr;
  v12 = v10;
  v64.m128_u64[0] = (unsigned __int64)&unk_2C66D98;
  if ( ptr != v70 )
LABEL_3:
    free(v11);
  return v12;
}
