__int64 __fastcall sub_8959A0(__int64 *a1, _QWORD *a2)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // r12
  unsigned __int64 v6; // rbp
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned int v10; // edx
  __int64 v11; // r10
  __int64 v12; // rsi
  _QWORD *v13; // rax
  __int64 v14; // r10
  const __m128i *v15; // rbp
  __m128i v16; // xmm0
  __int64 v17; // rax
  __int16 v18; // dx
  __int64 v19; // r15
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rdx
  _QWORD *v24; // rdx
  __int64 v25; // rax
  char v26; // dl
  _BYTE *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rbp
  __int64 v30; // rax
  unsigned int v31; // r12d
  __int64 v32; // rdx
  unsigned __int64 v33; // rcx
  int v34; // r8d
  char v35; // al
  __int64 v36; // rdi
  __int64 v37; // rcx
  char v38; // al
  unsigned __int64 v40; // rax
  unsigned __int8 **v41; // rax
  _QWORD *v42; // [rsp+8h] [rbp-1A0h]
  unsigned __int8 v43; // [rsp+8h] [rbp-1A0h]
  unsigned __int8 v44; // [rsp+8h] [rbp-1A0h]
  __int64 v45; // [rsp+10h] [rbp-198h]
  __int64 v46; // [rsp+10h] [rbp-198h]
  __int64 v47; // [rsp+10h] [rbp-198h]
  __int64 v48; // [rsp+10h] [rbp-198h]
  __int64 v49; // [rsp+10h] [rbp-198h]
  __int64 v50; // [rsp+28h] [rbp-180h]
  char v51; // [rsp+30h] [rbp-178h]
  __int64 v52; // [rsp+30h] [rbp-178h]
  unsigned __int8 v53; // [rsp+3Bh] [rbp-16Dh]
  int v54; // [rsp+3Ch] [rbp-16Ch]
  void *v55; // [rsp+40h] [rbp-168h] BYREF
  unsigned int v56; // [rsp+48h] [rbp-160h]
  char v57; // [rsp+4Ch] [rbp-15Ch]
  __m128i v58; // [rsp+50h] [rbp-158h] BYREF
  __int64 v59; // [rsp+60h] [rbp-148h]
  char v60; // [rsp+68h] [rbp-140h]
  __int64 v61; // [rsp+78h] [rbp-130h]
  void *v62; // [rsp+80h] [rbp-128h]
  __int64 v63; // [rsp+88h] [rbp-120h]
  _BYTE v64[80]; // [rsp+90h] [rbp-118h] BYREF
  __m128i v65; // [rsp+E0h] [rbp-C8h] BYREF
  __int64 v66; // [rsp+F0h] [rbp-B8h]
  unsigned int v67; // [rsp+F8h] [rbp-B0h]
  _QWORD *v68; // [rsp+100h] [rbp-A8h]
  __int64 v69; // [rsp+108h] [rbp-A0h]
  void *ptr; // [rsp+110h] [rbp-98h] BYREF
  __int64 v71; // [rsp+118h] [rbp-90h]
  _BYTE v72[64]; // [rsp+120h] [rbp-88h] BYREF
  __int16 v73; // [rsp+160h] [rbp-48h]

  v4 = a2[2];
  v60 |= 1u;
  v58 = 0u;
  v59 = 0;
  v61 = 0;
  v62 = v64;
  v63 = 0x800000000LL;
  v64[65] = 0;
  if ( !v4
    || ((v5 = *a1, v6 = *(_QWORD *)(v4 + 16), v7 = *(_QWORD *)(*a1 + 32), (*(_BYTE *)(v4 + 1) & 6) != 0)
      ? (v40 = sub_6C4DA0(*(_QWORD *)(v5 + 16), *(_QWORD *)(v4 + 8), 1u), v4 = a2[2], v8 = v40)
      : (v8 = *(_QWORD *)(v4 + 8)),
        v9 = sub_823B90(v7, v4, v8, &v58),
        v10 = sub_856400(v9, v5, v6),
        (_BYTE)v10) )
  {
    v11 = *(_QWORD *)(a2[1] & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned __int8)(*(_BYTE *)(v11 + 16) - 2) > 4u )
      v11 = sub_B0D320(*(_QWORD *)(a2[1] & 0xFFFFFFFFFFFFFFF0LL));
    v12 = *(_QWORD *)(v11 + 40);
    v42 = (_QWORD *)v12;
    if ( (*(_BYTE *)(v11 + 19) & 2) != 0 )
    {
      v13 = *(_QWORD **)v12;
      if ( *(_DWORD *)(v12 + 8) > 0x40u )
        v13 = (_QWORD *)*v13;
      v42 = v13;
    }
    v45 = v11;
    v65.m128i_i8[4] &= ~1u;
    v65.m128i_i32[0] = 0;
    sub_6A3820((__int64)&v65, (int)v42, (int)v42);
    sub_6A01B0(a1[2], (__int64)&v65);
    v14 = v45;
    if ( v65.m128i_i32[0] > 1u )
    {
      sub_69F740((__int64)&v65);
      v14 = v45;
    }
    v15 = (const __m128i *)a1[1];
    v16 = _mm_loadu_si128(v15);
    v66 = v15[1].m128i_i64[0];
    v65 = v16;
    v67 = v15[1].m128i_u32[2];
    v68 = (_QWORD *)v15[2].m128i_i64[0];
    v17 = v15[2].m128i_i64[1];
    v71 = 0x800000000LL;
    v69 = v17;
    ptr = v72;
    if ( v15[3].m128i_i32[2] )
    {
      v47 = v14;
      sub_820650((__int64)&ptr, (__int64)v15[3].m128i_i64);
      v14 = v47;
    }
    v18 = v15[8].m128i_i16[0];
    v19 = *a1;
    LOBYTE(v18) = v18 & 3;
    v73 = v18 | v73 & 0xFC;
    if ( (v67 & 1) == 0 )
    {
      if ( (v67 & 2) != 0
        || ((_DWORD)v71 != 1 || (v67 & 4) == 0) && (v67 & 8) != 0 && *((_QWORD **)ptr + (int)((v67 >> 4) - 1)) == v68 )
      {
        v48 = v14;
        v41 = (unsigned __int8 **)sub_A2E240(v19, a2, 2264, 0);
        v14 = v48;
        if ( v41 )
        {
          sub_823450(v41, 3);
          v14 = v48;
        }
        LOBYTE(v67) = v67 | 1;
        v19 = *a1;
        LODWORD(v71) = 0;
      }
      else
      {
        v20 = (unsigned int)v71;
        v21 = (unsigned int)v71 + 1LL;
        if ( HIDWORD(v71) < v21 )
        {
          v49 = v14;
          sub_25D6060(&ptr, v72, v21, 8);
          v20 = (unsigned int)v71;
          v14 = v49;
        }
        *((_QWORD *)ptr + v20) = 0;
        v22 = v71 + 1;
        LODWORD(v71) = v71 + 1;
        v23 = *(_QWORD *)(v14 + 32);
        LOBYTE(v67) = v67 | 8;
        v69 = v23;
        v24 = *(_QWORD **)(v14 + 40);
        if ( (*(_BYTE *)(v14 + 19) & 2) != 0 )
        {
          if ( *((_DWORD *)v24 + 2) <= 0x40u )
            v24 = (_QWORD *)*v24;
          else
            v24 = *(_QWORD **)*v24;
        }
        v68 = v24;
        v19 = *a1;
        v67 = v67 & 0xF | (16 * v22);
      }
    }
    v25 = *(_QWORD *)(v19 + 952);
    v10 = 1;
    *(_QWORD *)(v19 + 952) = 0;
    v50 = v25;
    if ( v42 )
    {
      v46 = v14;
      v53 = 1;
      while ( 1 )
      {
        v29 = *a1;
        v30 = *(_QWORD *)(*a1 + 32);
        v31 = *(_DWORD *)(*a1 + 320);
        v32 = *(unsigned int *)(v30 + 192);
        v33 = *(unsigned int *)(v30 + 196);
        v34 = *(_DWORD *)(v30 + 208) + 1;
        *(_DWORD *)(v30 + 208) = v34;
        if ( v33 < v32 + 1 )
        {
          v54 = v34;
          v52 = v30;
          sub_25D6060(v30 + 184, v30 + 200, v32 + 1, 4);
          v30 = v52;
          v34 = v54;
          v32 = *(unsigned int *)(v52 + 192);
        }
        *(_DWORD *)(*(_QWORD *)(v30 + 184) + 4 * v32) = v34;
        ++*(_DWORD *)(v30 + 192);
        v35 = sub_88A010(*(_QWORD *)(a1[2] + 8) + 56LL * *(unsigned int *)(v19 + 952), *a1, &v65, a2[3], 0);
        v36 = *a1;
        if ( v35 )
        {
          v56 = 64;
          v37 = *(_QWORD *)(v46 + 32);
          v57 = 0;
          v55 = &dword_0 + 1;
          v38 = sub_835AB0(v36, (__int64)a2, (__int64)&v65, v37, (__int64)&v55);
          if ( v56 > 0x40 && v55 )
          {
            v51 = v38;
            operator delete[](v55);
            v38 = v51;
          }
          if ( v38 )
            goto LABEL_31;
          v36 = *a1;
          if ( !*(_DWORD *)(*a1 + 48) )
            goto LABEL_40;
        }
        else if ( !*(_DWORD *)(v36 + 48) )
        {
          goto LABEL_40;
        }
        v26 = *(_BYTE *)(v36 + 963);
        v27 = *(_BYTE **)(v36 + 24);
        if ( *(_BYTE *)(v36 + 962) )
        {
          *v27 = 1;
        }
        else
        {
          *v27 |= v26;
          if ( !v26 )
          {
LABEL_40:
            if ( v31 != -1 )
              sub_8941C0(v29, 0, v31);
            v10 = 0;
            --*(_DWORD *)(*(_QWORD *)(v29 + 32) + 192LL);
            break;
          }
        }
        v53 = 0;
LABEL_31:
        sub_8941C0(v29, 1, v31);
        --*(_DWORD *)(*(_QWORD *)(v29 + 32) + 192LL);
        v28 = *(_QWORD *)(v19 + 952) + 1LL;
        *(_QWORD *)(v19 + 952) = v28;
        if ( (_QWORD *)v28 == v42 )
        {
          v10 = v53;
          break;
        }
      }
    }
    *(_QWORD *)(v19 + 952) = v50;
    if ( ptr != v72 )
    {
      v43 = v10;
      free(ptr);
      v10 = v43;
    }
  }
  if ( v62 != v64 )
  {
    v44 = v10;
    free(v62);
    return v44;
  }
  return v10;
}

