__int64 __fastcall sub_14F6700(__int64 a1, unsigned int a2, __m128i a3)
{
  int *v3; // r13
  __int64 v5; // rbx
  char v7; // r14
  __int64 v8; // rdi
  unsigned __int64 v9; // rax
  const __m128i *v10; // rax
  __m128 v11; // xmm1
  __int64 *v12; // rdi
  bool v13; // al
  __int64 *v14; // rdi
  __int64 v15; // r15
  unsigned int v16; // r12d
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r9
  __int64 *v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rdi
  unsigned __int64 v29; // rdx
  __int64 v30; // rbp
  __int64 v31; // rsi
  __int64 v32; // rsi
  __int64 v33; // rax
  int v34; // eax
  unsigned int v35; // [rsp+8h] [rbp-D30h]
  unsigned __int64 v36; // [rsp+8h] [rbp-D30h]
  __int64 v37; // [rsp+10h] [rbp-D28h]
  __int64 v39; // [rsp+28h] [rbp-D10h]
  __int64 v40; // [rsp+40h] [rbp-CF8h] BYREF
  __int64 v41; // [rsp+48h] [rbp-CF0h] BYREF
  __m128 v42; // [rsp+50h] [rbp-CE8h] BYREF
  __int64 v43; // [rsp+60h] [rbp-CD8h]
  int v44; // [rsp+70h] [rbp-CC8h] BYREF
  __int64 v45; // [rsp+78h] [rbp-CC0h]
  __int64 v46; // [rsp+80h] [rbp-CB8h]
  void *v47; // [rsp+90h] [rbp-CA8h] BYREF
  __int64 v48; // [rsp+98h] [rbp-CA0h]
  _BYTE v49[192]; // [rsp+A0h] [rbp-C98h] BYREF
  __int64 v50[5]; // [rsp+160h] [rbp-BD8h] BYREF
  void *v51; // [rsp+188h] [rbp-BB0h]
  __int64 v52; // [rsp+198h] [rbp-BA0h] BYREF
  __int64 v53; // [rsp+1A8h] [rbp-B90h] BYREF
  void *ptr; // [rsp+1B0h] [rbp-B88h]
  __int64 v55; // [rsp+1C0h] [rbp-B78h] BYREF
  void *v56; // [rsp+1E0h] [rbp-B58h]
  int v57; // [rsp+1ECh] [rbp-B4Ch]
  __int64 v58; // [rsp+200h] [rbp-B38h]
  unsigned __int8 *v59[2]; // [rsp+290h] [rbp-AA8h] BYREF
  __int128 v60; // [rsp+2A0h] [rbp-A98h]
  __int64 v61; // [rsp+2B0h] [rbp-A88h]
  __int64 v62; // [rsp+2B8h] [rbp-A80h]
  __int64 v63; // [rsp+2C0h] [rbp-A78h]
  int v64; // [rsp+2C8h] [rbp-A70h]
  __int64 v65; // [rsp+2D0h] [rbp-A68h]
  __int64 v66; // [rsp+2E0h] [rbp-A58h]
  __int64 v67; // [rsp+2E8h] [rbp-A50h]
  int v68; // [rsp+2F0h] [rbp-A48h]
  __int64 v69; // [rsp+2F8h] [rbp-A40h]
  __int64 v70; // [rsp+300h] [rbp-A38h]
  int v71; // [rsp+308h] [rbp-A30h]
  __int64 *v72; // [rsp+310h] [rbp-A28h]
  __int64 v73; // [rsp+318h] [rbp-A20h]
  __int64 v74; // [rsp+320h] [rbp-A18h] BYREF
  __int16 v75; // [rsp+560h] [rbp-7D8h]
  __int64 v76; // [rsp+568h] [rbp-7D0h]
  _QWORD *v77; // [rsp+570h] [rbp-7C8h]
  __int64 v78; // [rsp+578h] [rbp-7C0h]
  _QWORD v79[5]; // [rsp+580h] [rbp-7B8h] BYREF
  _QWORD v80[242]; // [rsp+5A8h] [rbp-790h] BYREF

  v3 = (int *)(a1 + 16);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  if ( *(_WORD *)(a1 + 32) != 24 )
  {
    v5 = 1;
    sub_1564840(v59, a1, v3, 14);
    sub_AE9DF0(v59, 24, 4u);
    sub_AEA040((__int64)v59);
    return v5;
  }
  v47 = v49;
  v48 = 0x1800000000LL;
  sub_146B5E0(&v40, a1, 0x400008u, 1, 0);
  v39 = sub_153CA60(a1, 0);
  if ( v40 )
  {
    sub_1564F70(v40);
    v40 = 0;
  }
  if ( v39 == 1 )
    v39 = sub_1C36210(*(_QWORD *)(a1 + 96), *(unsigned int *)(a1 + 16), 0);
  if ( *(_WORD *)(a1 + 32) != 73 )
    goto LABEL_60;
  v7 = 0;
  while ( 1 )
  {
    v8 = *(_QWORD *)(a1 + 8);
    v9 = *(_QWORD *)(v8 + 2944);
    v10 = (const __m128i *)(v9 >= *(unsigned int *)(v8 + 2912) ? sub_14180A0(v8, 1u) : *(_QWORD *)(v8 + 2904) + 24 * v9);
    v11 = (__m128)_mm_loadu_si128(v10);
    v42 = v11;
    v43 = v10[1].m128i_i64[0];
    if ( !sub_13D0E90((__int64)&v42, 15) && !sub_13D0E90((__int64)&v42, 16) )
      break;
    v12 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v12, v3);
    v35 = *(_DWORD *)(a1 + 40);
    v13 = sub_13D0E90((__int64)v3, 15);
    v14 = *(__int64 **)(a1 + 8);
    v7 = v13;
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    if ( !v13 )
    {
      sub_14634E0(v14, v3);
      sub_146B5E0(v50, a1, 0x400008u, 1, 0);
      v24 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL);
      if ( *(_DWORD *)(v24 + 260) == 15 )
      {
        v34 = *(_DWORD *)(v24 + 264);
        if ( v34 == 27 || !v34 )
        {
          v7 = 1;
          sub_1C3F9A0(*(_QWORD *)(a1 + 96), *(unsigned int *)(a1 + 16), *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL), 1, 1);
        }
      }
      if ( *(_WORD *)(a1 + 32) != 24 )
      {
        sub_1564840(v59, a1, v3, 14);
        sub_AE9DF0(v59, 24, 4u);
        sub_AEA040((__int64)v59);
        goto LABEL_52;
      }
      v33 = sub_153CA60(a1, 0);
      if ( v33 == 1 )
      {
LABEL_52:
        v25 = *(unsigned int *)(a1 + 16);
        v26 = sub_1C36210(*(_QWORD *)(a1 + 96), v25, 0);
        v27 = v26;
        if ( !v7 )
          goto LABEL_53;
        v37 = v26;
        sub_1C37B90(*(_QWORD *)(a1 + 96), v25, v26);
        v28 = *(_QWORD *)(a1 + 96);
        v29 = v37 & 0xFFFFFFFFFFFFFFFELL;
      }
      else
      {
        v28 = *(_QWORD *)(a1 + 96);
        v29 = v33 & 0xFFFFFFFFFFFFFFFELL;
        if ( v7 )
        {
          v27 = sub_1C37DC0(v28, v29);
LABEL_53:
          v28 = *(_QWORD *)(a1 + 96);
          v29 = v27 & 0xFFFFFFFFFFFFFFFELL;
        }
      }
      v30 = sub_1A86120(*(_QWORD *)(v28 + 736), v35, v29);
      if ( v50[0] )
        sub_1564F70(v50[0]);
      v22 = v30 & 0xFFFFFFFFFFFFFFFELL;
LABEL_35:
      v5 = sub_1A8ACF0(
             *(_QWORD *)(*(_QWORD *)(a1 + 96) + 736LL),
             a2,
             v39 & 0xFFFFFFFFFFFFFFFELL,
             v47,
             (unsigned int)v48,
             v22);
      goto LABEL_36;
    }
    sub_14634E0(v14, v3);
    if ( *(_WORD *)(a1 + 32) != 22 )
    {
      v31 = a1;
      v5 = 1;
      sub_1564820(v59, v31, v35, 1625);
      sub_AE9DF0(v59, (__int64)"@catch clause", 1u);
      sub_AEA040((__int64)v59);
      goto LABEL_36;
    }
    sub_146A990(a1);
    sub_146B5E0(&v41, a1, 0x400408u, 1, 0);
    if ( *(_WORD *)(a1 + 32) == 27 )
    {
      v23 = *(__int64 **)(a1 + 8);
      v15 = 0;
      v16 = 0;
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v23, v3);
      if ( *(_WORD *)(a1 + 32) != 23 )
        goto LABEL_25;
    }
    else
    {
      sub_147A4A0((__int64)v50, a1 + 504);
      v44 = 0;
      v45 = 0;
      v46 = 0;
      sub_1487580(a1, (__int64)v50, (__int64)&v44, 3u, 0, 0, a3, v11, 0);
      if ( !(_BYTE)qword_2CD8AC8 && __cxa_guard_acquire(&qword_2CD8AC8) )
      {
        qword_2CD8AE0[0] = 0;
        qword_2CD8AE0[1] = &qword_2CD8AE0[3];
        qword_2CD8AE0[2] = 0x200000000LL;
        __cxa_atexit((void (*)(void *))sub_1477960, qword_2CD8AE0, &off_2B25620);
        __cxa_guard_release(&qword_2CD8AC8);
      }
      a3 = 0;
      v60 = 0;
      v67 = v58;
      v80[2] = qword_2CD8AE0;
      v72 = &v74;
      v73 = 0x400000000LL;
      v59[0] = (unsigned __int8 *)v50;
      v59[1] = nullptr;
      v61 = 0;
      v62 = 0;
      v63 = 0;
      v64 = 0;
      v65 = 0;
      LOBYTE(v75) = (((LODWORD(v50[0]) >> 12) & 0x7F) == 69) | v75 & 0xFE;
      v77 = v79;
      v78 = 0x200000000LL;
      v79[2] = v53;
      v79[3] = v80;
      v79[4] = 0x200000000LL;
      v66 = 0;
      v68 = 15;
      v69 = 0;
      v70 = 0;
      v71 = 0;
      v75 &= 0xFC01u;
      v76 = 0;
      memset(&v80[3], 0, 40);
      v80[232] = 0;
      sub_147E3E0(a1, (__int64)v59);
      v15 = sub_18A56B0(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 736LL), *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL), v59);
      sub_147A7A0((char *)v59);
      if ( v57 )
        free(v56);
      sub_15DCED0(v53, &v53);
      if ( ptr != &v55 )
        free(ptr);
      if ( v51 != &v52 )
        free(v51);
      v16 = 0;
      if ( *(_WORD *)(a1 + 32) != 23 )
      {
LABEL_25:
        LOWORD(v59[0]) = 23;
        sub_15680D0(a1, v59, 1, 1);
        if ( *(_WORD *)(a1 + 32) == 24 )
          goto LABEL_45;
        goto LABEL_26;
      }
    }
    v16 = sub_146A990(a1);
    if ( *(_WORD *)(a1 + 32) == 24 )
    {
LABEL_45:
      v17 = sub_153CA60(a1, 0);
      if ( v17 != 1 )
        goto LABEL_28;
      goto LABEL_27;
    }
LABEL_26:
    sub_1564840(v59, a1, v3, 14);
    sub_AE9DF0(v59, 24, 4u);
    sub_AEA040((__int64)v59);
LABEL_27:
    v17 = sub_1C36210(*(_QWORD *)(a1 + 96), *(unsigned int *)(a1 + 16), 0);
LABEL_28:
    v18 = sub_1A86080(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 736LL), v35, v16, v15, v17 & 0xFFFFFFFFFFFFFFFELL);
    if ( v18 != 1 )
    {
      v19 = (unsigned int)v48;
      v20 = v18 & 0xFFFFFFFFFFFFFFFELL;
      v21 = (unsigned int)v48 + 1LL;
      if ( v21 > HIDWORD(v48) )
      {
        v36 = v20;
        sub_2237220(&v47, v49, v21, 8);
        v19 = (unsigned int)v48;
        v20 = v36;
      }
      *((_QWORD *)v47 + v19) = v20;
      LODWORD(v48) = v48 + 1;
    }
    if ( v41 )
    {
      sub_1564F70(v41);
      if ( *(_WORD *)(a1 + 32) != 73 )
        goto LABEL_34;
    }
    else if ( *(_WORD *)(a1 + 32) != 73 )
    {
      goto LABEL_34;
    }
  }
  if ( v7 )
  {
LABEL_34:
    v22 = 0;
    goto LABEL_35;
  }
LABEL_60:
  v32 = a1;
  v5 = 1;
  sub_1564820(v59, v32, a2, 1729);
  sub_AEA040((__int64)v59);
LABEL_36:
  if ( v40 )
    sub_1564F70(v40);
  if ( v47 != v49 )
    free(v47);
  return v5;
}
