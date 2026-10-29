unsigned __int64 *__fastcall sub_979F20(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r12
  __int64 v5; // r15
  unsigned int v6; // r14d
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbp
  unsigned __int64 *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rax
  __m128i v24; // xmm3
  __m128i v25; // xmm4
  __int64 v26; // rax
  __int64 v27; // r15
  unsigned __int16 *v28; // rax
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // r14
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  unsigned __int64 *v37; // r12
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r9
  __int64 v43; // r8
  unsigned __int64 v44; // r12
  __int64 v45; // rdi
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r8
  __int64 v50; // rcx
  __int64 v51; // r9
  __int64 v52; // rax
  int v53; // ebx
  __int64 v54; // r8
  __int64 v55; // r9
  _QWORD *v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v63; // r14
  __int64 v64; // r12
  __int64 v65; // r15
  __int64 v66; // rax
  __m128i v67; // xmm5
  __m128i v68; // xmm6
  __int64 v69; // rax
  _QWORD *v70; // rdx
  __int64 v71; // [rsp+0h] [rbp-B8h]
  __int64 v72; // [rsp+0h] [rbp-B8h]
  __int64 v73; // [rsp+0h] [rbp-B8h]
  __int64 v74; // [rsp+8h] [rbp-B0h]
  __int64 v75; // [rsp+10h] [rbp-A8h]
  __int64 v76; // [rsp+18h] [rbp-A0h]
  __int64 v77; // [rsp+18h] [rbp-A0h]
  __m128i v78; // [rsp+28h] [rbp-90h]
  __m128i v79; // [rsp+48h] [rbp-70h] BYREF
  __int64 v80; // [rsp+58h] [rbp-60h]
  unsigned __int64 v81; // [rsp+60h] [rbp-58h] BYREF
  __m128i v82; // [rsp+68h] [rbp-50h] BYREF
  __int64 v83; // [rsp+78h] [rbp-40h]

  v3 = (unsigned __int64)a2;
  v4 = *(_QWORD *)(a1 + 136);
  v5 = *(_QWORD *)(a1 + 128);
  v6 = *(_DWORD *)(a1 + 136);
  v78 = _mm_loadu_si128((const __m128i *)(a1 + 128));
  v7 = sub_ECA430(a2);
  if ( v7 )
  {
    sub_9752A0(a1, v7, 0, v9, v10, v11);
    a2 = *(_QWORD **)(a1 + 128);
    v4 = v4 & 0xFFFFFFFF00000000LL | v6;
    sub_976710((_QWORD *)a1, (__int64)a2, *(_QWORD *)(a1 + 136), v5, v4, v3);
  }
  v12 = *(_QWORD *)(a1 + 16);
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 328) + 61LL) )
  {
    if ( !v12 )
    {
      v12 = sub_975DA0(a1, (__int64)a2, v8, v9, v10, v11);
      *(_QWORD *)(a1 + 16) = v12;
    }
    v9 = v3 & 0xFFFFFFFFFFFFFFFCLL | 1;
    v13 = *(unsigned __int64 **)(v12 + 8);
    if ( (unsigned __int64)v13 >= *(_QWORD *)(v12 + 16) )
    {
      a2 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL);
      sub_975850((const __m128i **)v12, a2, 1u, v9, v10, v11);
      v13 = *(unsigned __int64 **)(v12 + 8);
      v9 = v3 & 0xFFFFFFFFFFFFFFFCLL | 1;
    }
    *v13 = v9;
    v13[1] = 1;
    *(_QWORD *)(v12 + 8) += 16LL;
    v12 = *(_QWORD *)(a1 + 16);
  }
  if ( v12 )
  {
    if ( *(_BYTE *)(a1 + 320) )
      goto LABEL_37;
    v14 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 16) = 0;
    v71 = v14;
  }
  else
  {
    v12 = *(_QWORD *)(a1 + 24);
    v71 = v12;
  }
  v80 = *(_QWORD *)(a1 + 48);
  v15 = *(_QWORD *)(a1 + 72);
  v79 = _mm_loadu_si128((const __m128i *)(a1 + 32));
  v82 = _mm_loadu_si128((const __m128i *)(a1 + 56));
  v83 = v15;
  v16 = sub_975DE0(a1, (__int64)a2, v8, v9, v10, v11);
  *(_QWORD *)(a1 + 24) = v16;
  v17 = *(_QWORD *)(a1 + 136);
  *(_QWORD *)(v16 + 40) = v3;
  v18 = *(_QWORD *)(a1 + 128);
  v74 = v16;
  *(_QWORD *)(a1 + 32) = v16;
  LODWORD(v16) = *(_DWORD *)(a1 + 136);
  *(_QWORD *)(a1 + 40) = v5;
  *(_DWORD *)(a1 + 72) = v16;
  *(_DWORD *)(a1 + 48) = v6;
  *(_QWORD *)(a1 + 56) = v12;
  *(_QWORD *)(a1 + 64) = v18;
  sub_976710((_QWORD *)a1, v18, v17, v5, v4 & 0xFFFFFFFF00000000LL | v6, v3);
  v21 = *(_QWORD *)v3;
  if ( (**(_WORD **)(v3 + 8LL * ((unsigned int)((*(_QWORD *)v3 & 0x200) != 0) + 1) + 16) & 0x1FF) != 0xF9 )
  {
    v63 = *(_QWORD *)(a1 + 128);
    v64 = *(_QWORD *)(a1 + 136);
    v65 = *(_QWORD *)(v3 + 8LL * ((unsigned int)((v21 & 0x200) != 0) + 1) + 16);
    sub_9756F0(a1, v65);
    sub_976710((_QWORD *)a1, *(_QWORD *)(a1 + 128), *(_QWORD *)(a1 + 136), v63, v64, v65);
    v21 = *(_QWORD *)v3;
  }
  v22 = *(_QWORD *)(v3 + 8LL * ((unsigned int)((v21 & 0x200) != 0) + 1) + 16);
  v75 = sub_979740(a1, v22, 1, 0, v19, v20);
  if ( v75 )
  {
    if ( *(_QWORD *)(a1 + 16) && *(_BYTE *)(a1 + 320) )
    {
      v66 = v83;
      v67 = _mm_loadu_si128(&v82);
      *(_QWORD *)(a1 + 16) = 0;
      v68 = _mm_loadu_si128(&v79);
      *(_QWORD *)(a1 + 72) = v66;
      v69 = v80;
      *(__m128i *)(a1 + 56) = v67;
      *(_QWORD *)(a1 + 48) = v69;
      *(__m128i *)(a1 + 32) = v68;
      *(_QWORD *)(a1 + 24) = v71;
      goto LABEL_37;
    }
  }
  else
  {
    v75 = *(_QWORD *)(a1 + 32);
  }
  v23 = v83;
  v24 = _mm_loadu_si128(&v82);
  *(_QWORD *)(a1 + 16) = 0;
  v25 = _mm_loadu_si128(&v79);
  *(_QWORD *)(a1 + 72) = v23;
  v26 = v80;
  *(__m128i *)(a1 + 56) = v24;
  *(_QWORD *)(a1 + 48) = v26;
  *(__m128i *)(a1 + 32) = v25;
  *(_QWORD *)(a1 + 24) = v71;
  v27 = *(_QWORD *)(v3 + 8LL * ((*(_WORD *)v3 & 0x200) != 0) + 16);
  v28 = (unsigned __int16 *)sub_BD7CB0(v27);
  v31 = *v28;
  v32 = (unsigned int)(v31 + 394);
  LOWORD(v32) = (v31 + 394) & 0x1FF;
  if ( (unsigned __int16)v32 <= 1u )
  {
    v32 = ((v28[1] >> 3) & 0x3Fu) - 19;
    if ( (unsigned int)v32 <= 1 )
    {
      v37 = (unsigned __int64 *)sub_979BF0(a1, (__int64)v28, v3, v75, v12);
      goto LABEL_32;
    }
  }
  v33 = sub_975DE0(a1, v22, v32, v31, v29, v30);
  *(_QWORD *)(v33 + 32) = v3 & 0xFFFFFFFFFFFFFFF9LL;
  *(_QWORD *)(a1 + 16) = v33;
  v36 = sub_979740(a1, v27, 1, 0, v34, v35);
  *(_QWORD *)(a1 + 16) = v36;
  v37 = (unsigned __int64 *)v36;
  v38 = sub_ECA430(v3);
  if ( v38 )
  {
    v72 = v38;
    v39 = sub_B4F900(v38);
    v42 = v39;
    if ( v39 )
    {
      v43 = v72;
      if ( !*(_QWORD *)(a1 + 16) )
      {
        v77 = v39;
        sub_976590(a1, v27, v40, v41, v72, v39);
        v42 = v77;
        v43 = v72;
      }
      v44 = 0;
      if ( (*(_WORD *)v3 & 0x200) != 0 )
        v44 = *(_QWORD *)(v3 + 16);
      v76 = v43;
      v73 = v42;
      v45 = *(_QWORD *)(a1 + 8) + 32LL;
      v81 = v44;
      v82.m128i_i64[0] = 0;
      v46 = sub_985780(v45, &v81, 0);
      sub_978C10(a1, v46, v73, v47, v48, v73);
      sub_9784E0((_QWORD *)a1, *(_QWORD *)(a1 + 16), v44);
      v37 = (unsigned __int64 *)sub_979740(a1, v73, 1, 0, v49, v73);
      v52 = *(_QWORD *)(a1 + 128);
      if ( (v52 || *(_DWORD *)(a1 + 136)) && v76 == **(_QWORD **)(v52 + 8) && *(_BYTE *)(*(_QWORD *)(a1 + 328) + 63LL) )
      {
        v70 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL);
        v81 = v76 & 0xFFFFFFFFFFFFFFFCLL | 1;
        v82.m128i_i64[0] = v27 & 0xFFFFFFFFFFFFFFFCLL;
        sub_976620(v37, (const __m128i *)&v81, v70, v50, v81, v51);
      }
    }
  }
  if ( *(_QWORD *)(a1 + 16) && *(_BYTE *)(a1 + 320) )
  {
LABEL_37:
    v37 = nullptr;
    goto LABEL_33;
  }
  v53 = sub_974040((__int64 *)a1, v27);
  v56 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL);
  if ( !v53 )
  {
    sub_975B20(v33, 0, 2, v56, v54, v55);
    goto LABEL_35;
  }
  sub_975B20(v33, v75, 2LL * (v75 == 0), v56, v54, v55);
  if ( v53 != 1 )
  {
LABEL_35:
    v59 = 2LL * (v12 == 0);
    goto LABEL_31;
  }
  v59 = 2;
  v12 = 0;
LABEL_31:
  sub_975B20(v33, v12, v59, (_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL), v57, v58);
LABEL_32:
  sub_975B20(v74, (__int64)v37, 2LL * (v37 == nullptr), (_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL), v60, v61);
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = v37;
LABEL_33:
  *(_QWORD *)(a1 + 128) = v78.m128i_i64[0];
  *(_DWORD *)(a1 + 136) = v78.m128i_i32[2];
  return v37;
}

