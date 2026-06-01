__m128i *__fastcall sub_181C7E0(__int64 a1, const __m128i *a2, const void *a3, size_t a4)
{
  const __m128i *v4; // rbx
  unsigned __int32 v5; // r12d
  unsigned __int64 v7; // rsi
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // r14
  unsigned int v14; // eax
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // eax
  __m128i *result; // rax
  _QWORD *v21; // r8
  __int64 v22; // r13
  _DWORD *v23; // rdi
  int v24; // eax
  unsigned int v25; // r14d
  unsigned __int8 *v26; // r13
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // r13
  __int64 v35; // rax
  _QWORD *v36; // rax
  unsigned __int64 v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  _QWORD *v43; // rax
  _QWORD *v44; // rax
  __int64 v45; // rdx
  int v46; // eax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rbx
  __int64 v52; // rbp
  void *v53; // rdi
  __int64 v54; // rdx
  int v55; // eax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rbx
  __int64 v61; // rbp
  void *v62; // rdi
  __int64 v63; // rax
  __int64 v64; // rax
  __m128i *v65; // [rsp+8h] [rbp-140h]
  void *v66; // [rsp+10h] [rbp-138h]
  unsigned __int64 v68; // [rsp+20h] [rbp-128h]
  unsigned __int8 v69; // [rsp+28h] [rbp-120h]
  __int64 v70; // [rsp+28h] [rbp-120h]
  const __m128i *v71; // [rsp+28h] [rbp-120h]
  __int64 n; // [rsp+40h] [rbp-108h]
  size_t v74; // [rsp+50h] [rbp-F8h]
  const __m128i *v75; // [rsp+50h] [rbp-F8h]
  size_t v76; // [rsp+58h] [rbp-F0h]
  __int64 v77; // [rsp+68h] [rbp-E0h] BYREF
  __int64 v78; // [rsp+70h] [rbp-D8h] BYREF
  int v79; // [rsp+78h] [rbp-D0h]
  void *ptr; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v81; // [rsp+88h] [rbp-C0h]
  _QWORD v82[2]; // [rsp+90h] [rbp-B8h] BYREF
  unsigned __int8 *v83; // [rsp+A0h] [rbp-A8h] BYREF
  __int64 v84; // [rsp+A8h] [rbp-A0h]
  char v85; // [rsp+F8h] [rbp-50h]
  unsigned int v86; // [rsp+100h] [rbp-48h]
  char v87; // [rsp+104h] [rbp-44h]

  v4 = a2;
  v5 = a2[3].m128i_u16[4];
  if ( !a2[3].m128i_i16[4] )
  {
    sub_168B9F0((__int64)&ptr, (__int64 *)(a1 + 8), a2[1].m128i_u32[2], 0xD4Au, 0);
    v78 = a2[1].m128i_i64[1];
    sub_1587DB0((__int64)&ptr, &v78);
    sub_15F7200(&ptr);
    return nullptr;
  }
  v68 = sub_1806F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 8LL * (unsigned __int16)v5, 3u);
  n = 4LL * (unsigned __int16)v5;
  v66 = (void *)sub_1806F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), n, 3u);
  v7 = 0;
  memset(v66, 0, n);
  v9 = 1;
  v10 = 0;
  do
  {
    v11 = v4[5].m128i_i64[v10];
    v12 = v4[3].m128i_u16[4];
    v13 = v11 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (unsigned int)v12 <= (unsigned int)v10 || (v11 & 2) != 0 )
    {
      v22 = *(_QWORD *)(v13 + 8);
      v23 = *(_DWORD **)(v22 + 16);
      if ( *v23 != a4 || (v69 = v9, a4) && (v24 = memcmp(v23 + 4, a3, a4), v9 = v69, v24) )
      {
        v7 = (unsigned __int64)v66;
        *(_QWORD *)(v68 + 8 * v10) = v22;
        *((_DWORD *)v66 + v10) = *(_DWORD *)v13;
        goto LABEL_8;
      }
      v7 = a1 + 8;
      sub_168B9F0((__int64)&ptr, (__int64 *)(a1 + 8), *(_DWORD *)v13, 0xD4Du, 0);
      v25 = *(_DWORD *)v13;
      if ( v85 )
      {
        v26 = v83;
        if ( v83 )
        {
          v27 = *((unsigned int *)v83 + 106);
          v7 = *((unsigned int *)v83 + 107);
          v28 = v27 + 1;
        }
        else
        {
          v45 = v84;
          v46 = *(_DWORD *)(v84 + 14976);
          if ( v46 )
          {
            v47 = (unsigned int)(v46 - 1);
            *(_DWORD *)(v84 + 14976) = v47;
            v26 = *(unsigned __int8 **)(v45 + 8 * v47 + 14848);
            v48 = *((unsigned int *)v26 + 134);
            *v26 = 0;
            v49 = *((_QWORD *)v26 + 66);
            *((_DWORD *)v26 + 106) = 0;
            v50 = v49 + (v48 << 6);
            if ( v49 == v50 )
            {
              v28 = 1;
              v27 = 0;
            }
            else
            {
              v71 = v4;
              v51 = v50;
              v74 = a4;
              v52 = v49;
              do
              {
                while ( 1 )
                {
                  v51 -= 64;
                  v53 = *(void **)(v51 + 24);
                  if ( v53 == (void *)(v51 + 40) )
                    break;
                  operator delete(v53);
                  if ( v52 == v51 )
                    goto LABEL_44;
                }
              }
              while ( v52 != v51 );
LABEL_44:
              v27 = *((unsigned int *)v26 + 106);
              v4 = v71;
              a4 = v74;
              v28 = v27 + 1;
            }
            *((_DWORD *)v26 + 134) = 0;
            v7 = *((unsigned int *)v26 + 107);
          }
          else
          {
            v63 = operator new(0x3A0u);
            v7 = 8;
            v28 = 1;
            v26 = (unsigned __int8 *)v63;
            *(_BYTE *)v63 = 0;
            *(_QWORD *)(v63 + 96) = v63 + 112;
            *(_QWORD *)(v63 + 128) = v63 + 144;
            *(_QWORD *)(v63 + 160) = v63 + 176;
            *(_QWORD *)(v63 + 192) = v63 + 208;
            *(_QWORD *)(v63 + 224) = v63 + 240;
            *(_QWORD *)(v63 + 256) = v63 + 272;
            *(_QWORD *)(v63 + 288) = v63 + 304;
            *(_QWORD *)(v63 + 320) = v63 + 336;
            *(_QWORD *)(v63 + 352) = v63 + 368;
            *(_QWORD *)(v63 + 384) = v63 + 400;
            *(_QWORD *)(v63 + 416) = v63 + 432;
            *(_QWORD *)(v63 + 104) = 0;
            *(_BYTE *)(v63 + 112) = 0;
            *(_QWORD *)(v63 + 136) = 0;
            *(_BYTE *)(v63 + 144) = 0;
            *(_QWORD *)(v63 + 168) = 0;
            *(_BYTE *)(v63 + 176) = 0;
            *(_QWORD *)(v63 + 200) = 0;
            *(_BYTE *)(v63 + 208) = 0;
            *(_QWORD *)(v63 + 232) = 0;
            *(_BYTE *)(v63 + 240) = 0;
            *(_QWORD *)(v63 + 264) = 0;
            *(_BYTE *)(v63 + 272) = 0;
            *(_QWORD *)(v63 + 296) = 0;
            *(_BYTE *)(v63 + 304) = 0;
            *(_QWORD *)(v63 + 328) = 0;
            *(_BYTE *)(v63 + 336) = 0;
            *(_QWORD *)(v63 + 360) = 0;
            *(_BYTE *)(v63 + 368) = 0;
            *(_QWORD *)(v63 + 392) = 0;
            *(_BYTE *)(v63 + 400) = 0;
            *(_QWORD *)(v63 + 424) = 0x800000000LL;
            *(_QWORD *)(v63 + 528) = v63 + 544;
            *(_QWORD *)(v63 + 536) = 0x600000000LL;
            v27 = 0;
          }
          v83 = v26;
        }
        LODWORD(v78) = v25;
        HIDWORD(v78) = v25;
        LOBYTE(v79) = 1;
        if ( v7 >= v28 )
          goto LABEL_27;
      }
      else
      {
        if ( !v87 )
        {
LABEL_23:
          sub_15F7200(&ptr);
          v9 = 0;
          goto LABEL_8;
        }
        v34 = sub_168B9E0(&ptr);
        v35 = v82[0];
        if ( v82[0] )
          v35 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v82[0] + 32LL))(v82[0]);
        v77 = v35;
        v36 = sub_1587BC0(v34, &v77, v30, v31, v32, v33);
        v7 = *v36 + 32LL * v86;
        v26 = *(unsigned __int8 **)(v7 + 8);
        if ( v26 )
        {
          v27 = *((unsigned int *)v26 + 106);
          v37 = *((unsigned int *)v26 + 107);
          v28 = v27 + 1;
        }
        else
        {
          v54 = *(_QWORD *)(v7 + 16);
          v55 = *(_DWORD *)(v54 + 14976);
          if ( v55 )
          {
            v56 = (unsigned int)(v55 - 1);
            *(_DWORD *)(v54 + 14976) = v56;
            v26 = *(unsigned __int8 **)(v54 + 8 * v56 + 14848);
            v57 = *((unsigned int *)v26 + 134);
            *v26 = 0;
            v58 = *((_QWORD *)v26 + 66);
            *((_DWORD *)v26 + 106) = 0;
            v59 = v58 + (v57 << 6);
            if ( v58 == v59 )
            {
              v28 = 1;
              v27 = 0;
            }
            else
            {
              v75 = v4;
              v60 = v59;
              v76 = a4;
              v61 = v58;
              do
              {
                while ( 1 )
                {
                  v60 -= 64;
                  v62 = *(void **)(v60 + 24);
                  if ( v62 == (void *)(v60 + 40) )
                    break;
                  operator delete(v62);
                  if ( v61 == v60 )
                    goto LABEL_52;
                }
              }
              while ( v61 != v60 );
LABEL_52:
              v4 = v75;
              v27 = *((unsigned int *)v26 + 106);
              a4 = v76;
              v28 = v27 + 1;
            }
            *((_DWORD *)v26 + 134) = 0;
            v37 = *((unsigned int *)v26 + 107);
          }
          else
          {
            v64 = operator new(0x3A0u);
            v37 = 8;
            v28 = 1;
            v26 = (unsigned __int8 *)v64;
            *(_BYTE *)v64 = 0;
            *(_QWORD *)(v64 + 96) = v64 + 112;
            *(_QWORD *)(v64 + 128) = v64 + 144;
            *(_QWORD *)(v64 + 160) = v64 + 176;
            *(_QWORD *)(v64 + 192) = v64 + 208;
            *(_QWORD *)(v64 + 224) = v64 + 240;
            *(_QWORD *)(v64 + 256) = v64 + 272;
            *(_QWORD *)(v64 + 288) = v64 + 304;
            *(_QWORD *)(v64 + 320) = v64 + 336;
            *(_QWORD *)(v64 + 352) = v64 + 368;
            *(_QWORD *)(v64 + 384) = v64 + 400;
            *(_QWORD *)(v64 + 416) = v64 + 432;
            *(_QWORD *)(v64 + 104) = 0;
            *(_BYTE *)(v64 + 112) = 0;
            *(_QWORD *)(v64 + 136) = 0;
            *(_BYTE *)(v64 + 144) = 0;
            *(_QWORD *)(v64 + 168) = 0;
            *(_BYTE *)(v64 + 176) = 0;
            *(_QWORD *)(v64 + 200) = 0;
            *(_BYTE *)(v64 + 208) = 0;
            *(_QWORD *)(v64 + 232) = 0;
            *(_BYTE *)(v64 + 240) = 0;
            *(_QWORD *)(v64 + 264) = 0;
            *(_BYTE *)(v64 + 272) = 0;
            *(_QWORD *)(v64 + 296) = 0;
            *(_BYTE *)(v64 + 304) = 0;
            *(_QWORD *)(v64 + 328) = 0;
            *(_BYTE *)(v64 + 336) = 0;
            *(_QWORD *)(v64 + 360) = 0;
            *(_BYTE *)(v64 + 368) = 0;
            *(_QWORD *)(v64 + 392) = 0;
            *(_BYTE *)(v64 + 400) = 0;
            *(_QWORD *)(v64 + 424) = 0x800000000LL;
            *(_QWORD *)(v64 + 528) = v64 + 544;
            *(_QWORD *)(v64 + 536) = 0x600000000LL;
            v27 = 0;
          }
          *(_QWORD *)(v7 + 8) = v26;
        }
        LODWORD(v78) = v25;
        HIDWORD(v78) = v25;
        LOBYTE(v79) = 1;
        if ( v28 <= v37 )
        {
LABEL_27:
          v29 = *((_QWORD *)v26 + 52) + 12 * v27;
          *(_QWORD *)v29 = v78;
          *(_DWORD *)(v29 + 8) = v79;
          ++*((_DWORD *)v26 + 106);
          goto LABEL_23;
        }
      }
      v7 = (unsigned __int64)(v26 + 432);
      sub_2237220(v26 + 416, v26 + 432, v28, 12);
      v27 = *((unsigned int *)v26 + 106);
      goto LABEL_27;
    }
    v14 = sub_C00A40(v4[5].m128i_i64[v10] & 0xFFFFFFFFFFFFFFFCLL, v7, v12, v9, v8);
    v15 = a1 + 8;
    sub_168B9F0((__int64)&ptr, (__int64 *)(a1 + 8), v14, 0xD48u, 0);
    if ( v85 )
    {
      v15 = v13;
      sub_AE9DF0(&v83, v13, 0xFu);
    }
    else if ( v87 )
    {
      v38 = sub_168B9E0(&ptr);
      v42 = v82[0];
      if ( v82[0] )
      {
        v70 = v38;
        v42 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v82[0] + 32LL))(v82[0]);
        v38 = v70;
      }
      v78 = v42;
      v43 = sub_1587BC0(v38, &v78, v38, v39, v40, v41);
      v15 = v13;
      sub_AE9DF0((unsigned __int8 **)(*v43 + 32LL * v86 + 8), v13, 0xFu);
    }
    v19 = sub_C00A40(v13, v15, v16, v17, v18);
    v7 = (unsigned __int64)&v78;
    LODWORD(v78) = v19;
    sub_180D980((__int64)&ptr, (int *)&v78);
    sub_15F7200(&ptr);
    v9 = 0;
LABEL_8:
    ++v10;
  }
  while ( v5 > (unsigned int)v10 );
  result = nullptr;
  if ( (_BYTE)v9 )
  {
    v81 = 0xC00000000LL;
    ptr = v82;
    if ( (unsigned __int16)v5 > 0xCuLL )
    {
      sub_2237220(&ptr, v82, (unsigned __int16)v5, 4);
      v44 = memset(ptr, 255, n);
      LODWORD(v81) = v5;
      v21 = v44;
    }
    else
    {
      if ( (_WORD)v5 )
        memset(v82, 255, n);
      LODWORD(v81) = v5;
      v21 = v82;
    }
    result = sub_B37360(*(_QWORD *)(a1 + 248), v21, v5, v4);
    result[3].m128i_i64[1] = v68;
    result[4].m128i_i64[0] = (unsigned __int16)v5;
    result[4].m128i_i64[1] = (__int64)v66;
    result[5].m128i_i64[0] = (unsigned __int16)v5;
    if ( ptr != v82 )
    {
      v65 = result;
      free(ptr);
      return v65;
    }
  }
  return result;
}
