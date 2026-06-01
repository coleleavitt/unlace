__int64 __fastcall sub_19E6BD0(__int64 *a1, __int64 a2, unsigned int a3, __int64 a4, __m128i a5, __m128 a6)
{
  _QWORD *v7; // r13
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rax
  __int64 result; // rax
  unsigned __int64 v11; // r15
  size_t v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // r14
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // eax
  unsigned __int64 v28; // r14
  __int64 v29; // rax
  int v30; // r12d
  __int64 v31; // r15
  __int64 v32; // r13
  char v33; // al
  __int16 v34; // dx
  __int16 v35; // dx
  unsigned __int8 v36; // al
  __int64 v37; // rax
  unsigned int v38; // eax
  __int64 v39; // rax
  __int64 v40; // rbx
  __int64 v41; // rbp
  __int64 v42; // rcx
  _QWORD *v43; // rcx
  unsigned int v44; // eax
  unsigned __int64 v45; // rax
  __int64 v46; // r8
  __int64 v47; // r9
  unsigned int *v48; // r12
  __int64 v49; // rax
  __int64 v50; // r9
  __int64 *v51; // r12
  __int64 v52; // r14
  __int64 v53; // rax
  __int64 *v54; // rbp
  __int64 v55; // rdx
  unsigned int v56; // eax
  __int64 v57; // rcx
  unsigned int v58; // esi
  __int64 v59; // r8
  unsigned int v60; // esi
  __int64 *v61; // rbp
  __m128i si128; // xmm1
  __int64 *v63; // rax
  __int64 v64; // [rsp+0h] [rbp-138h]
  __int64 v65; // [rsp+0h] [rbp-138h]
  unsigned int v66; // [rsp+0h] [rbp-138h]
  __int64 v67; // [rsp+0h] [rbp-138h]
  char v68; // [rsp+Bh] [rbp-12Dh]
  unsigned int v69; // [rsp+Ch] [rbp-12Ch] BYREF
  __int64 *v70; // [rsp+10h] [rbp-128h] BYREF
  __int64 *v71; // [rsp+18h] [rbp-120h] BYREF
  int v72; // [rsp+20h] [rbp-118h] BYREF
  __int64 v73; // [rsp+28h] [rbp-110h]
  int v74; // [rsp+38h] [rbp-100h]
  int v75; // [rsp+3Ch] [rbp-FCh]
  __int128 v76; // [rsp+40h] [rbp-F8h] BYREF
  void *ptr[2]; // [rsp+50h] [rbp-E8h]
  __int128 v78; // [rsp+60h] [rbp-D8h]
  __m128i v79[12]; // [rsp+70h] [rbp-C8h] BYREF

  v69 = a3;
  v7 = (_QWORD *)sub_168B6C0((__int64)a1);
  v8 = sub_15F1670(*a1);
  v9 = sub_BA85D0(v8);
  if ( *(char *)(a4 + 28) < 0 )
    return 1;
  v11 = v9;
  if ( (unsigned __int8)sub_18F5260(*a1, a4, (int *)&v69, 1u, 0, 0, a5, *(double *)a6.m128_u64, 0, 0, 0) )
    return 1;
  v64 = v7[2188];
  v12 = j__strlen("self");
  v13 = sub_6F3470(v64, "self", v12);
  v72 = 8;
  v73 = v13;
  v75 = 0;
  v74 = 0;
  v76 = 0;
  *(_OWORD *)ptr = 0;
  v78 = 0;
  v14 = sub_190BE30(*a1, a2, (__int64)&v76, 0, &v72, 0, 0.0, a6, 0, nullptr, 0);
  if ( v14 != 1 )
  {
    v21 = sub_19146F0(*a1, (_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFELL), v15, v16, v17, v18, (__m128)0LL, a6);
    if ( v21 != 1 )
    {
      v22 = v69;
      sub_19116A0((__m128 *)*a1, v69, a4, 1u, v19, v20, (__m128)0LL, a6);
      v27 = sub_BA8080(v8, v22, v23, v24, v25, v26);
      if ( (unsigned int)(v27 - 7) > 1 && v27 != 3 && !(unsigned __int8)sub_1A932C0(a1, v11, v8, a4) )
      {
        sub_168B9F0((__int64)v79, a1, v69, 0x1AC3u, 0);
        v71 = *(__int64 **)(a4 + 40);
        sub_15894B0((__int64)v79, (__int64 *)&v71);
        sub_15F7200(v79);
      }
      v28 = v21 & 0xFFFFFFFFFFFFFFFELL;
      v29 = sub_BA8C20(a4, *(_QWORD *)(v28 + 8));
      v30 = *(_DWORD *)(a4 + 24);
      v31 = v29;
      v66 = v69;
      v32 = sub_EEE9A0(48, v7, 8u);
      v33 = *(_BYTE *)(a4 + 68) & 1;
      *(_WORD *)v32 = *(_WORD *)v32 & 0xFE00 | 0x22;
      if ( unk_2CD7484 )
      {
        v68 = v33;
        sub_EE9B50(34);
        v33 = v68;
      }
      v34 = *(_WORD *)(v32 + 1);
      *(_BYTE *)(v32 + 40) |= 3u;
      *(_QWORD *)(v32 + 8) = v31;
      *(_QWORD *)(v32 + 16) = a4;
      v35 = v34 & 0xF839 | 2;
      *(_QWORD *)(v32 + 24) = v28;
      *(_WORD *)(v32 + 1) = v35;
      *(_DWORD *)(v32 + 36) = v30;
      *(_BYTE *)(v32 + 1) = (8 * v33) | v35 & 3;
      *(_DWORD *)(v32 + 32) = v66;
      v36 = sub_B63A30(v32);
      *(_BYTE *)(v32 + 1) = (v36 << 6) | *(_BYTE *)(v32 + 1) & 0x3F;
      *(_BYTE *)(v32 + 2) = *(_BYTE *)(v32 + 2) & 0xF8 | (v36 >> 2) & 7;
      v37 = *(_QWORD *)&byte_8[*(_QWORD *)(a4 + 48) & 0xFFFFFFFFFFFFFFF0LL];
      if ( (v37 & 8) == 0 )
        goto LABEL_15;
      if ( (((*(__int64 *)((char *)&qword_18 + (v37 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned __int64)(v37 & 7)) >> 6) & 7) != 3 )
        goto LABEL_15;
      v44 = *(_DWORD *)(*(_QWORD *)(*a1 + 4616) + 640LL * *(unsigned int *)(*a1 + 4624) - 640);
      if ( v44 == 3 )
        goto LABEL_15;
      if ( v44 <= 1 )
        goto LABEL_15;
      v45 = sub_168B6D0((__int64)a1);
      if ( (unsigned __int8)sub_FD3830(*(_QWORD *)(v45 + 32), 0x1968u, v69, v45, v46, v47) == 1 )
        goto LABEL_15;
      v48 = nullptr;
      v49 = *(unsigned int *)(*a1 + 40);
      if ( (_DWORD)v49 )
        v48 = *(unsigned int **)(*(_QWORD *)(*a1 + 32) + 8 * v49 - 8);
      sub_15EE8F0((unsigned __int64 *)v79, v32);
      if ( (unsigned __int8)sub_18C70B0((__int64)(v48 + 190), (unsigned __int64 *)v79, &v70) )
      {
        v51 = v70;
        v52 = v32 | 2;
        v53 = *((unsigned int *)v70 + 6);
        v54 = v70 + 2;
        if ( v53 + 1 > (unsigned __int64)*((unsigned int *)v70 + 7) )
        {
          sub_2237220(v70 + 2, v70 + 4, v53 + 1, 8);
          v53 = *((unsigned int *)v51 + 6);
        }
LABEL_32:
        *(_QWORD *)(*v54 + 8 * v53) = v52;
        ++*((_DWORD *)v54 + 2);
LABEL_15:
        if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 107) & 4) != 0 )
        {
          v38 = *(_DWORD *)(*(_QWORD *)(*a1 + 4616) + 640LL * *(unsigned int *)(*a1 + 4624) - 640);
          if ( v38 != 3 && v38 > 1 )
          {
            v39 = sub_B8E0F0(*(_QWORD *)(*a1 + 544));
            if ( v39 )
            {
              v40 = *a1;
              v41 = v69;
              v42 = *(unsigned int *)(*a1 + 9816);
              if ( v42 + 1 > (unsigned __int64)*(unsigned int *)(*a1 + 9820) )
              {
                v67 = v39;
                sub_2237220(v40 + 9808, v40 + 9824, v42 + 1, 16);
                v42 = *(unsigned int *)(v40 + 9816);
                v39 = v67;
              }
              v43 = (_QWORD *)(*(_QWORD *)(v40 + 9808) + 16 * v42);
              *v43 = v41;
              v43[1] = v39;
              ++*(_DWORD *)(v40 + 9816);
            }
          }
        }
        result = v32;
        goto LABEL_8;
      }
      v55 = 8;
      v71 = v70;
      v56 = v48[190];
      v57 = (v56 >> 1) + 1;
      if ( (v48[190] & 1) == 0 )
        v55 = v48[194];
      v58 = 2 * v55;
      v59 = (unsigned int)(4 * v57);
      if ( (unsigned int)v59 < 3 * (int)v55 )
      {
        v60 = v55 - (v48[191] + v57);
        v57 = (unsigned int)v55 >> 3;
        if ( v60 > (unsigned int)v57 )
          goto LABEL_39;
        v58 = v55;
      }
      sub_15EF470((unsigned __int8 *)v48 + 760, v58, v55, v57, v59, v50);
      sub_18C70B0((__int64)(v48 + 190), (unsigned __int64 *)v79, &v71);
      v56 = v48[190];
LABEL_39:
      v48[190] = (2 * (v56 >> 1) + 2) | v56 & 1;
      v61 = v71;
      if ( *v71 || v71[1] )
        --v48[191];
      si128 = _mm_load_si128(v79);
      v63 = v61 + 4;
      v54 = v61 + 2;
      *v54 = (__int64)v63;
      v52 = v32 | 2;
      v54[1] = 0x400000000LL;
      v53 = 0;
      *((__m128i *)v54 - 1) = si128;
      goto LABEL_32;
    }
  }
  result = 1;
LABEL_8:
  if ( HIDWORD(ptr[1]) )
  {
    v65 = result;
    free(ptr[0]);
    return v65;
  }
  return result;
}
