__int64 __fastcall sub_36240(__int64 a1, unsigned __int64 a2)
{
  bool v2; // cc
  __int64 v3; // rbx
  char *v4; // r14
  int v5; // r13d
  __int64 v6; // r15
  __int64 v7; // r8
  unsigned int v8; // ebp
  unsigned __int8 (__fastcall *hexdsp)(__int64, const char *, _QWORD); // rax
  unsigned int *v10; // r8
  __int64 (__fastcall *v11)(__int64, int); // rax
  unsigned int v12; // r11d
  int v13; // eax
  __int64 (__fastcall *v14)(__int64, int, int); // rax
  unsigned int v15; // ecx
  __int64 (__fastcall *v16)(__int64, int); // rax
  __int64 v17; // rax
  int v18; // eax
  __int64 (__fastcall *v19)(__int64, int, int); // rax
  int v20; // eax
  __int64 v21; // rax
  int v22; // ecx
  unsigned int v23; // edx
  bool v24; // zf
  unsigned int v25; // eax
  int v27; // eax
  __int64 v28; // rax
  __m128i v29; // xmm0
  __int64 v30; // rax
  __int64 v31; // rdi
  __m128i v32; // xmm0
  unsigned int *v33; // [rsp+0h] [rbp-F8h]
  unsigned int *v34; // [rsp+0h] [rbp-F8h]
  unsigned int v35; // [rsp+0h] [rbp-F8h]
  unsigned int v36; // [rsp+0h] [rbp-F8h]
  unsigned int v37; // [rsp+0h] [rbp-F8h]
  unsigned int *v38; // [rsp+0h] [rbp-F8h]
  unsigned int v39; // [rsp+0h] [rbp-F8h]
  const char *v40; // [rsp+8h] [rbp-F0h]
  unsigned int v41; // [rsp+10h] [rbp-E8h]
  unsigned int *v42; // [rsp+10h] [rbp-E8h]
  unsigned int *v43; // [rsp+10h] [rbp-E8h]
  unsigned int *v44; // [rsp+10h] [rbp-E8h]
  unsigned int v45; // [rsp+10h] [rbp-E8h]
  unsigned int *v46; // [rsp+10h] [rbp-E8h]
  int v47; // [rsp+18h] [rbp-E0h]
  unsigned int v48; // [rsp+1Ch] [rbp-DCh]
  unsigned int v49; // [rsp+1Ch] [rbp-DCh]
  unsigned __int64 v50; // [rsp+20h] [rbp-D8h] BYREF
  unsigned int v51; // [rsp+28h] [rbp-D0h]
  int v52; // [rsp+2Ch] [rbp-CCh]
  _QWORD v53[2]; // [rsp+30h] [rbp-C8h] BYREF
  _QWORD v54[2]; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v55; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v56; // [rsp+58h] [rbp-A0h]
  __int64 v57; // [rsp+70h] [rbp-88h] BYREF
  __m128i v58; // [rsp+78h] [rbp-80h] BYREF
  char v59; // [rsp+88h] [rbp-70h]
  __int64 v60; // [rsp+90h] [rbp-68h] BYREF
  __m128i v61; // [rsp+98h] [rbp-60h] BYREF
  char v62; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v63; // [rsp+B8h] [rbp-40h]

  v2 = *(_QWORD *)(a2 + 568) <= 1u;
  v63 = __readfsqword(0x28u);
  v3 = a1;
  if ( v2 )
  {
    v47 = 0;
LABEL_35:
    *(_BYTE *)(v3 + 24) = 0;
    *(_DWORD *)v3 = v47;
    return v3;
  }
  v4 = (char *)a2;
  v47 = 0;
  v5 = 1;
  v40 = (const char *)(a2 + 248);
  v6 = 1;
  while ( 1 )
  {
    v7 = *((_QWORD *)v4 + 70) + (v6 << 6);
    if ( !*(_BYTE *)(v7 + 12) )
      goto LABEL_3;
    if ( (*(_BYTE *)(v7 + 16) & 1) == 0 )
      goto LABEL_3;
    v8 = *(_DWORD *)v7;
    if ( *(_DWORD *)(v7 + 4) != *(_DWORD *)v7 )
      goto LABEL_3;
    v33 = (unsigned int *)(*((_QWORD *)v4 + 70) + (v6 << 6));
    hexdsp = (unsigned __int8 (__fastcall *)(__int64, const char *, _QWORD))get_hexdsp(a1, a2);
    a2 = (unsigned __int64)v40;
    a1 = 213;
    if ( !hexdsp(213, v40, v8) )
      goto LABEL_3;
    v10 = v33;
    v11 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v4 + 104LL);
    v12 = *v33;
    if ( v11 == sub_BA60 )
    {
      if ( !*((_QWORD *)v4 + 10) )
        goto LABEL_3;
      v13 = *(_DWORD *)(*((_QWORD *)v4 + 9) + 24LL * (int)v12 + 8);
    }
    else
    {
      v43 = v33;
      a2 = v12;
      a1 = (__int64)v4;
      v36 = *v33;
      v13 = v11((__int64)v4, v12);
      v10 = v43;
      v12 = v36;
    }
    if ( v13 != 1 )
      goto LABEL_3;
    v14 = *(__int64 (__fastcall **)(__int64, int, int))(*(_QWORD *)v4 + 120LL);
    if ( v14 == sub_BAA0 )
    {
      a1 = *((_QWORD *)v4 + 9);
      a2 = **(int **)(a1 + 24LL * (int)v12);
    }
    else
    {
      v44 = v10;
      a1 = (__int64)v4;
      v37 = v12;
      v27 = v14((__int64)v4, v12, 0);
      v10 = v44;
      v12 = v37;
      a2 = v27;
    }
    v15 = v12 - 1;
    if ( v12 - 1 != (_DWORD)a2 )
      goto LABEL_3;
    v16 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v4 + 96LL);
    if ( v16 != sub_BA40 )
      break;
    if ( *((_QWORD *)v4 + 7) )
    {
      v17 = 3 * a2;
      a2 = *((_QWORD *)v4 + 6);
      v18 = *(_DWORD *)(a2 + 8 * v17 + 8);
      goto LABEL_18;
    }
LABEL_3:
    v6 = ++v5;
    if ( (unsigned __int64)v5 >= *((_QWORD *)v4 + 71) )
      goto LABEL_35;
  }
  v48 = v12 - 1;
  a1 = (__int64)v4;
  v45 = v12;
  v38 = v10;
  v18 = ((__int64 (__fastcall *)(char *))v16)(v4);
  v15 = v48;
  v12 = v45;
  v10 = v38;
LABEL_18:
  if ( v18 != 1 )
    goto LABEL_3;
  v19 = *(__int64 (__fastcall **)(__int64, int, int))(*(_QWORD *)v4 + 112LL);
  if ( v19 == sub_BA80 )
  {
    v20 = **(_DWORD **)(*((_QWORD *)v4 + 6) + 24LL * (int)v15);
  }
  else
  {
    v49 = v12;
    a2 = v15;
    a1 = (__int64)v4;
    v46 = v10;
    v39 = v15;
    v20 = v19((__int64)v4, v15, 0);
    v12 = v49;
    v10 = v46;
    v15 = v39;
  }
  v41 = v15;
  v34 = v10;
  if ( v12 != v20 )
    goto LABEL_3;
  v21 = *((_QWORD *)v4 + 70) + ((v6 - 1) << 6);
  if ( !*(_BYTE *)(v21 + 12) || (*(_BYTE *)(v21 + 16) & 1) != 0 )
    goto LABEL_3;
  sub_28EA0((__int64)&v55, (__int64)v4, v12);
  if ( !*((_BYTE *)v34 + 12) )
    sub_7964(&v55, v4);
  sub_34360((__int64)v4, (unsigned int)(v5 - 1), v34[2]);
  v22 = v41;
  a2 = (unsigned __int64)v4;
  v23 = v41;
  v42 = v34;
  v35 = v22;
  sub_34640((__int64)&v57, (__int64)v4, v23, v22);
  if ( v59 )
  {
    v28 = v57;
    v29 = _mm_loadu_si128(&v58);
    *(_BYTE *)(v3 + 24) = 1;
    *(_QWORD *)v3 = v28;
    *(__m128i *)(v3 + 8) = v29;
    goto LABEL_44;
  }
  if ( *((_DWORD *)v4 + 161) < (int)v57 )
  {
    a1 = v55;
    if ( v55 )
    {
      v56 = 0;
      qfree(v55);
    }
    goto LABEL_3;
  }
  *((_DWORD *)v4 + 161) = v57;
  v24 = *((_BYTE *)v42 + 12) == 0;
  v50 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v35), 224).m128i_u64[0];
  if ( v24 )
    sub_7964(&v57, v4);
  v25 = v42[2];
  v52 = 0;
  v51 = v25;
  v53[0] = 0;
  v53[1] = 0;
  sub_35AC0(v4, (unsigned int *)&v50, (__int64)v53, v5 - 1);
  a2 = (unsigned __int64)v4;
  v54[0] = 0;
  v54[1] = 0;
  sub_34F70((__int64)&v60, (__int64)v4, (unsigned int *)&v50, (__int64)v54);
  if ( !v62 )
  {
    if ( !v47 )
    {
      a2 = (unsigned __int64)"AFTER CALL SPLIT";
      sub_33530((__int64)v4);
    }
    qfree(v54[0]);
    qfree(v53[0]);
    a1 = v55;
    if ( v55 )
    {
      v56 = 0;
      qfree(v55);
    }
    ++v47;
    goto LABEL_3;
  }
  v30 = v60;
  v31 = v54[0];
  *(_BYTE *)(v3 + 24) = 1;
  v32 = _mm_loadu_si128(&v61);
  *(_QWORD *)v3 = v30;
  *(__m128i *)(v3 + 8) = v32;
  qfree(v31);
  qfree(v53[0]);
LABEL_44:
  if ( v55 )
  {
    v56 = 0;
    qfree(v55);
  }
  return v3;
}
