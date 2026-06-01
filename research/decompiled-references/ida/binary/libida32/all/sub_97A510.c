unsigned __int64 *__fastcall sub_97A510(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // r12
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  char v24; // r13
  bool v25; // zf
  _DWORD *v26; // rdi
  __int16 *v27; // rsi
  __int64 v28; // r14
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned __int64 *v31; // r15
  __int64 v32; // rsi
  unsigned __int64 v33; // rdx
  __int16 v34; // cx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rsi
  __int64 v43; // r8
  unsigned __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rsi
  bool v50; // cc
  __int64 v51; // rax
  __m128i v52; // xmm2
  __int64 v54; // r15
  _QWORD *v55; // rdx
  __int64 v56; // [rsp+8h] [rbp-F0h]
  __int64 v57; // [rsp+10h] [rbp-E8h]
  __int64 v58; // [rsp+10h] [rbp-E8h]
  __int64 v59; // [rsp+10h] [rbp-E8h]
  __int64 v60; // [rsp+18h] [rbp-E0h]
  __int64 v61; // [rsp+18h] [rbp-E0h]
  __int64 v62; // [rsp+18h] [rbp-E0h]
  __m128i v63; // [rsp+20h] [rbp-D8h] BYREF
  __m128i v64; // [rsp+38h] [rbp-C0h]
  __m128i v65; // [rsp+58h] [rbp-A0h] BYREF
  __int64 v66; // [rsp+68h] [rbp-90h]
  __int16 v67; // [rsp+70h] [rbp-88h] BYREF
  __int64 v68; // [rsp+78h] [rbp-80h]
  unsigned int v69; // [rsp+80h] [rbp-78h] BYREF
  char v70; // [rsp+84h] [rbp-74h]

  v64 = _mm_loadu_si128((const __m128i *)a1 + 8);
  if ( (*(_WORD *)a2 & 0x200) != 0 )
  {
    v4 = *(_QWORD *)(a2 + 24);
    if ( v4 )
      sub_9756F0((__int64)a1, v4);
  }
  v5 = sub_ECA400(a2);
  if ( v5 )
    sub_9752A0((__int64)a1, v5, 0, v6, v7, v8);
  v9 = a1[16];
  sub_976710(a1, v9, a1[17], v64.m128i_i64[0], v64.m128i_i64[1], a2);
  v14 = a1[2];
  if ( v14 )
  {
    if ( *((_BYTE *)a1 + 320) )
    {
      v31 = nullptr;
      goto LABEL_33;
    }
  }
  else
  {
    v14 = a1[3];
  }
  v15 = a1[13];
  v16 = a1[14];
  a1[14] = v14;
  v56 = v15;
  v17 = a1[9];
  v65 = _mm_loadu_si128((const __m128i *)(a1 + 7));
  v66 = v17;
  v18 = sub_975DE0((__int64)a1, v9, v10, v11, v12, v13);
  v21 = a1[16];
  a1[3] = v14;
  a1[13] = v18;
  LODWORD(v18) = *((_DWORD *)a1 + 34);
  v67 = 0;
  v22 = a1[41];
  *((_DWORD *)a1 + 18) = v18;
  v23 = *(_QWORD *)a2;
  a1[7] = v14;
  v24 = *((_BYTE *)a1 + 336);
  a1[8] = v21;
  *((_BYTE *)a1 + 336) = 0;
  v70 &= ~1u;
  v25 = *(_BYTE *)(v22 + 56) == 0;
  a1[2] = 0;
  v68 = 0;
  v69 = 0;
  if ( !v25 )
  {
    v26 = *(_DWORD **)(a2 + 8LL * (((v23 & 0x200) != 0) + ((v23 & 0x400) != 0)) + 24);
    if ( ((*v26 >> 14) & 0xC) == 0 )
    {
      if ( (unsigned __int8)sub_C19630(v26, &v67, *a1, 0) )
      {
        v27 = &v67;
        v23 = *(_QWORD *)a2;
        goto LABEL_11;
      }
      v23 = *(_QWORD *)a2;
    }
  }
  v27 = nullptr;
LABEL_11:
  v28 = a1[43];
  a1[43] = v27;
  if ( (**(_WORD **)(a2 + 8LL * (((v23 & 0x200) != 0) + (unsigned int)((v23 & 0x400) != 0) + 1) + 24) & 0x1FF) != 0xF9 )
  {
    v54 = a1[17];
    v62 = a1[16];
    v58 = *(_QWORD *)(a2 + 8LL * (((v23 & 0x200) != 0) + (unsigned int)((v23 & 0x400) != 0) + 1) + 24);
    sub_9756F0((__int64)a1, v58);
    sub_976710(a1, a1[16], a1[17], v62, v54, v58);
    v23 = *(_QWORD *)a2;
  }
  sub_979740(
    (__int64)a1,
    *(_QWORD *)(a2 + 8LL * (((v23 & 0x200) != 0) + (unsigned int)((v23 & 0x400) != 0) + 1) + 24),
    1,
    0,
    v19,
    v20);
  if ( !a1[2] || (v31 = nullptr, !*((_BYTE *)a1 + 320)) )
  {
    v32 = a1[14];
    if ( (*(_WORD *)a2 & 0x800) != 0 && *(_QWORD *)(a2 + 8) || (v33 = 2LL * (v32 == 0), *((_BYTE *)a1 + 336)) )
    {
      v33 = v32 & 0xFFFFFFFFFFFFFFF9LL | 2;
      v32 = 0;
    }
    sub_975B20(a1[13], v32, v33, (_QWORD *)(a1[1] + 32LL), v29, v30);
    *(_QWORD *)(a1[13] + 32LL) = a2 & 0xFFFFFFFFFFFFFFF9LL;
    v34 = *(_QWORD *)a2;
    a1[2] = a1[13];
    v31 = (unsigned __int64 *)sub_979740(
                                (__int64)a1,
                                *(_QWORD *)(a2 + 8LL * (((v34 & 0x200) != 0) + ((v34 & 0x400) != 0)) + 24),
                                1,
                                0,
                                v35,
                                v36);
    v37 = sub_ECA400(a2);
    if ( v37 )
    {
      v60 = v37;
      v57 = sub_B4F900(v37);
      if ( v57 )
      {
        v42 = a1[2];
        v43 = v60;
        if ( !v42 )
        {
          sub_976590((__int64)a1, 0, v38, v39, v60, v41);
          v42 = a1[2];
          v43 = v60;
        }
        v44 = 0;
        if ( (*(_QWORD *)a2 & 0x400LL) != 0 )
          v44 = *(_QWORD *)(a2 + 8LL * ((*(_QWORD *)a2 & 0x200) != 0) + 24);
        v61 = v43;
        sub_9784E0(a1, v42, v44);
        v47 = sub_979740((__int64)a1, v57, 1, 0, v45, v46);
        v40 = v61;
        v31 = (unsigned __int64 *)v47;
        v48 = a1[16];
        if ( v48 || (v38 = *((unsigned int *)a1 + 34), (_DWORD)v38) )
        {
          if ( v61 == **(_QWORD **)(v48 + 8) && *(_BYTE *)(a1[41] + 63LL) )
          {
            v55 = (_QWORD *)(a1[1] + 32LL);
            v63.m128i_i64[0] = v61 & 0xFFFFFFFFFFFFFFFCLL | 1;
            v63.m128i_i64[1] = v57 & 0xFFFFFFFFFFFFFFFCLL;
            sub_976620(v31, &v63, v55, v39, v63.m128i_i64[0], v41);
          }
        }
      }
    }
    if ( (*(_WORD *)a2 & 0x200) != 0 )
    {
      v49 = *(_QWORD *)(a2 + 24);
      if ( v49 )
      {
        if ( !a1[2] )
        {
          v59 = *(_QWORD *)(a2 + 24);
          sub_976590((__int64)a1, v49, v38, v39, v40, v41);
          v49 = v59;
        }
        v31 = (unsigned __int64 *)sub_979740((__int64)a1, v49, 1, 0, v40, v41);
      }
    }
  }
  v50 = v69 <= 1;
  a1[43] = v28;
  if ( !v50 )
    sub_A2BBA0(&v69);
  v51 = v66;
  v52 = _mm_loadu_si128(&v65);
  *((_BYTE *)a1 + 336) = v24;
  a1[14] = v16;
  a1[9] = v51;
  *(__m128i *)(a1 + 7) = v52;
  a1[13] = v56;
LABEL_33:
  a1[16] = v64.m128i_i64[0];
  *((_DWORD *)a1 + 34) = v64.m128i_i32[2];
  return v31;
}

