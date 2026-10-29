__int64 __fastcall sub_97C420(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbp
  __int64 v7; // rbx
  unsigned __int64 *v8; // rax
  unsigned __int64 v9; // r12
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r13
  __int64 v13; // rsi
  __int64 v14; // r14
  int v15; // eax
  __int64 v16; // r8
  __int64 v17; // rdx
  __m128i v18; // xmm0
  __int64 v19; // rax
  __m128i v20; // xmm1
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  _WORD *v24; // r9
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r12
  __int64 v31; // rax
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // r8
  __int64 v35; // r9
  __m128i v36; // xmm4
  __m128i v37; // xmm5
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v41; // r12
  __m128i v42; // xmm2
  __m128i v43; // xmm3
  __int64 v44; // rax
  __m128i v45; // xmm6
  __m128i v46; // xmm7
  __int64 v47; // rax
  __int64 v48; // [rsp+8h] [rbp-A0h]
  __int64 v49; // [rsp+10h] [rbp-98h]
  int v50; // [rsp+1Ch] [rbp-8Ch]
  __int64 v51; // [rsp+20h] [rbp-88h]
  __int64 v52; // [rsp+28h] [rbp-80h]
  __m128i v53; // [rsp+38h] [rbp-70h] BYREF
  __int64 v54; // [rsp+48h] [rbp-60h]
  __m128i v55; // [rsp+58h] [rbp-50h] BYREF
  __int64 v56; // [rsp+68h] [rbp-40h]

  v6 = a2;
  v7 = *(_QWORD *)(a1 + 16);
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 328) + 61LL) )
  {
    if ( !v7 )
    {
      v7 = sub_975DA0(a1, a2, a3, a4, a5, a6);
      *(_QWORD *)(a1 + 16) = v7;
    }
    v8 = *(unsigned __int64 **)(v7 + 8);
    v9 = a2 & 0xFFFFFFFFFFFFFFFCLL | 1;
    if ( (unsigned __int64)v8 >= *(_QWORD *)(v7 + 16) )
    {
      a2 = *(_QWORD *)(a1 + 8) + 32LL;
      sub_975850((const __m128i **)v7, (_QWORD *)a2, 1u, a4, a5, a6);
      v8 = *(unsigned __int64 **)(v7 + 8);
    }
    *v8 = v9;
    v8[1] = 1;
    *(_QWORD *)(v7 + 8) += 16LL;
    v7 = *(_QWORD *)(a1 + 16);
  }
  if ( v7 )
  {
    if ( *(_BYTE *)(a1 + 320) )
      return 0;
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 24);
  }
  v12 = sub_975DE0(a1, a2, a3, a4, a5, a6);
  *(_QWORD *)(v12 + 32) = v6 & 0xFFFFFFFFFFFFFFF9LL;
  v13 = *(_QWORD *)(v6 + 16);
  if ( v13 )
  {
    *(_QWORD *)(a1 + 16) = v12;
    v14 = sub_979740(a1, v13, 1, 0, v10, v11);
    if ( *(_QWORD *)(a1 + 16) && *(_BYTE *)(a1 + 320) )
      return 0;
    v13 = *(_QWORD *)(v6 + 16);
  }
  else
  {
    v14 = v12;
  }
  *(_QWORD *)(a1 + 24) = v14;
  v15 = sub_974040((__int64 *)a1, v13);
  v17 = *(_QWORD *)(a1 + 128);
  v18 = _mm_loadu_si128((const __m128i *)(a1 + 32));
  *(_QWORD *)(a1 + 32) = v14;
  v50 = v15;
  v19 = *(_QWORD *)(a1 + 16);
  v20 = _mm_loadu_si128((const __m128i *)(a1 + 56));
  *(_QWORD *)(a1 + 40) = v17;
  v49 = v19;
  v21 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 56) = v7;
  v48 = v21;
  v22 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 64) = v17;
  v54 = v22;
  v23 = *(_QWORD *)(a1 + 72);
  v53 = v18;
  v56 = v23;
  LODWORD(v23) = *(_DWORD *)(a1 + 136);
  v55 = v20;
  *(_DWORD *)(a1 + 48) = v23;
  *(_DWORD *)(a1 + 72) = v23;
  v24 = *(_WORD **)(v6 + 8);
  *(_QWORD *)(a1 + 16) = 0;
  if ( (*v24 & 0x1FF) != 0xF9 )
  {
    v41 = *(_QWORD *)(a1 + 136);
    v52 = v17;
    v51 = (__int64)v24;
    sub_9756F0(a1, (__int64)v24);
    sub_976710((_QWORD *)a1, *(_QWORD *)(a1 + 128), *(_QWORD *)(a1 + 136), v52, v41, v51);
    v24 = *(_WORD **)(v6 + 8);
  }
  v25 = (__int64)v24;
  v30 = sub_979740(a1, (__int64)v24, 1, 0, v16, (__int64)v24);
  if ( !v30 )
  {
    v30 = v14;
    goto LABEL_18;
  }
  if ( *(_QWORD *)(a1 + 16) && *(_BYTE *)(a1 + 320) )
  {
    v45 = _mm_loadu_si128(&v55);
    v46 = _mm_loadu_si128(&v53);
    *(_QWORD *)(a1 + 72) = v56;
    v47 = v54;
    *(__m128i *)(a1 + 56) = v45;
    *(_QWORD *)(a1 + 48) = v47;
    *(__m128i *)(a1 + 32) = v46;
    *(_QWORD *)(a1 + 24) = v48;
    *(_QWORD *)(a1 + 16) = v49;
    return 0;
  }
LABEL_18:
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = v30;
  v31 = sub_975DA0(a1, v25, v26, v27, v28, v29);
  *(_QWORD *)(v31 + 40) = v6;
  if ( v50 )
  {
    sub_975CA0(v12, v31, 0, (_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL), v32, v33);
    v42 = _mm_loadu_si128(&v55);
    v43 = _mm_loadu_si128(&v53);
    *(_QWORD *)(a1 + 72) = v56;
    v44 = v54;
    *(__m128i *)(a1 + 56) = v42;
    *(_QWORD *)(a1 + 48) = v44;
    *(__m128i *)(a1 + 32) = v43;
    *(_QWORD *)(a1 + 24) = v48;
    *(_QWORD *)(a1 + 16) = v49;
    if ( v50 == 1 )
    {
      v39 = 2;
      v7 = 0;
    }
    else
    {
      v39 = 2LL * (v7 == 0);
    }
  }
  else
  {
    sub_975B20(v12, 0, 2, (_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL), v32, v33);
    v36 = _mm_loadu_si128(&v55);
    v37 = _mm_loadu_si128(&v53);
    *(_QWORD *)(a1 + 72) = v56;
    v38 = v54;
    v39 = 2LL * (v7 == 0);
    *(__m128i *)(a1 + 56) = v36;
    *(_QWORD *)(a1 + 48) = v38;
    *(__m128i *)(a1 + 32) = v37;
    *(_QWORD *)(a1 + 24) = v48;
    *(_QWORD *)(a1 + 16) = v49;
  }
  sub_975B20(v12, v7, v39, (_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL), v34, v35);
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = v30;
  return v30;
}

