int sub_3333B0()
{
  void **p_ptr; // rbx
  size_t v1; // rax
  __int64 v2; // r12
  __int64 *v3; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  __m128 v6; // xmm0
  size_t v7; // rax
  __int64 *v8; // rbx
  __int64 v9; // rcx
  int v10; // eax
  const __m128i *v11; // rsi
  __int64 v12; // rdx
  char *v13; // r11
  __int64 v14; // r15
  int v15; // edi
  unsigned __int64 v16; // rdx
  __m128i *v17; // rcx
  __int32 v18; // eax
  __m128i v19; // xmm4
  size_t v20; // rbp
  __int64 *v21; // rax
  __int64 v22; // rcx
  unsigned __int64 v24; // r13
  __m128i *v25; // rax
  void *v26; // rdi
  __m128i *v27; // rdx
  const __m128i *v28; // rcx
  const __m128i *v29; // rsi
  __m128i v30; // xmm1
  __int32 v31; // r8d
  __m128i v32; // xmm2
  int v33; // edx
  __int64 *v34; // [rsp+8h] [rbp-160h] BYREF
  char v35; // [rsp+17h] [rbp-151h]
  __int64 *v36; // [rsp+18h] [rbp-150h]
  void **v37; // [rsp+20h] [rbp-148h]
  __m128i *v38; // [rsp+28h] [rbp-140h]
  __int64 v39; // [rsp+30h] [rbp-138h]
  char *v40; // [rsp+38h] [rbp-130h]
  __int64 v41; // [rsp+48h] [rbp-120h] BYREF
  _QWORD v42[5]; // [rsp+50h] [rbp-118h] BYREF
  int v43; // [rsp+78h] [rbp-F0h]
  char v44; // [rsp+7Ch] [rbp-ECh]
  void *ptr; // [rsp+80h] [rbp-E8h] BYREF
  __int64 v46; // [rsp+88h] [rbp-E0h]
  _QWORD v47[2]; // [rsp+90h] [rbp-D8h] BYREF
  int v48; // [rsp+A0h] [rbp-C8h]
  const char *v49; // [rsp+A8h] [rbp-C0h]
  __int64 v50; // [rsp+B0h] [rbp-B8h]
  char *v51; // [rsp+B8h] [rbp-B0h]
  __int64 v52; // [rsp+C0h] [rbp-A8h]
  int v53; // [rsp+C8h] [rbp-A0h]
  char *v54; // [rsp+D0h] [rbp-98h]
  __int64 v55; // [rsp+D8h] [rbp-90h]
  char *v56; // [rsp+E0h] [rbp-88h]
  __int64 v57; // [rsp+E8h] [rbp-80h]
  int v58; // [rsp+F0h] [rbp-78h]
  char *v59; // [rsp+F8h] [rbp-70h]
  __int64 v60; // [rsp+100h] [rbp-68h]

  p_ptr = &ptr;
  v47[1] = 7;
  v48 = 0;
  ptr = v47;
  v47[0] = "Default";
  v49 = "Default for platform";
  v51 = "Enable";
  v54 = "Enabled";
  v56 = "Disable";
  v59 = "Disabled";
  v50 = 20;
  v52 = 6;
  v53 = 1;
  v55 = 7;
  v57 = 7;
  v58 = 2;
  v60 = 8;
  v46 = 0x400000003LL;
  v1 = j__strlen("Disable emission of the extended flags in .loc directives.");
  qword_2CD4DC0 = (__int64)&unk_2CD4DD0;
  v2 = v1;
  qword_2CD4D90 = 0;
  qword_2CD4D98 = 0;
  qword_2CD4DA0 = 0;
  qword_2CD4D80 = (__int64)&off_2C4B8B0;
  qword_2CD4D88 = (unsigned int)qword_2CD4D88 & 0x80000000;
  qword_2CD4DC8 = 0x100000000LL;
  qword_2CD4DA8 = 0;
  qword_2CD4DB0 = 0;
  qword_2CD4DB8 = 0;
  qword_2CD4DD8 = (__int64)&unk_2CD4DF0;
  qword_2CD4DE0 = 1;
  dword_2CD4DE8 = 0;
  byte_2CD4DEC = 1;
  v3 = (__int64 *)sub_21ED2B0("Disable emission of the extended flags in .loc directives.");
  v4 = (unsigned int)qword_2CD4DC8;
  v5 = (unsigned int)qword_2CD4DC8 + 1LL;
  if ( v5 > HIDWORD(qword_2CD4DC8) )
  {
    v34 = v3;
    sub_22134E0((char *)&unk_2CD4DD0 - 16, &unk_2CD4DD0, v5, 8);
    v4 = (unsigned int)qword_2CD4DC8;
    v3 = v34;
  }
  *(_QWORD *)(qword_2CD4DC0 + 8 * v4) = v3;
  qword_2CD4D80 = (__int64)&off_2C48A18;
  v34 = &qword_2CD4D80;
  qword_2CD4E28 = 0x800000000LL;
  LODWORD(qword_2CD4DC8) = qword_2CD4DC8 + 1;
  xmmword_2CD4E10 = (__int128)_mm_loadh_ps((const double *)&v34);
  v34 = (__int64 *)nullsub_1377;
  dword_2CD4DF8 = 0;
  dword_2CD4E08 = 0;
  v6 = _mm_loadh_ps((const double *)&v34);
  byte_2CD4E0C = 0;
  xmmword_2CD4FC0 = (__int128)v6;
  qword_2CD4E00 = (__int64)&off_2C489A8;
  qword_2CD4E20 = &unk_2CD4E30;
  v7 = j__strlen("dwarf-extended-loc");
  sub_21F3510(&qword_2CD4D80, "dwarf-extended-loc", v7);
  qword_2CD4DA8 = v2;
  v36 = &v41;
  BYTE2(qword_2CD4D88) = BYTE2(qword_2CD4D88) & 0x9F | 0x20;
  qword_2CD4DA0 = (__int64)"Disable emission of the extended flags in .loc directives.";
  v34 = (__int64 *)((char *)ptr + 40 * (unsigned int)v46);
  if ( ptr != v34 )
  {
    v37 = &ptr;
    v8 = (__int64 *)ptr;
    do
    {
      v9 = v8[3];
      v10 = *((_DWORD *)v8 + 4);
      v42[4] = &off_2C489A8;
      v11 = (const __m128i *)v42;
      v12 = v8[4];
      v13 = (char *)*v8;
      v44 = 1;
      v14 = v8[1];
      v42[2] = v9;
      v42[3] = v12;
      v43 = v10;
      v15 = qword_2CD4E28;
      v16 = (unsigned int)qword_2CD4E28 + 1LL;
      v42[0] = v13;
      v42[1] = v14;
      v17 = (__m128i *)((char *)qword_2CD4E20 + 48 * (unsigned int)qword_2CD4E28);
      if ( v16 > HIDWORD(qword_2CD4E28) )
      {
        v24 = -1;
        v35 = 0;
        if ( qword_2CD4E20 <= v42 && v17 > (__m128i *)v42 )
        {
          v35 = 1;
          v24 = 0xAAAAAAAAAAAAAAABLL * (((char *)v42 - (_BYTE *)qword_2CD4E20) >> 4);
        }
        v38 = (__m128i *)v13;
        v25 = (__m128i *)sub_22136C0((char *)&unk_2CD4E30 - 16, &unk_2CD4E30, v16, 48, v36);
        v13 = (char *)v38;
        v26 = qword_2CD4E20;
        v27 = v25;
        v28 = (const __m128i *)qword_2CD4E20;
        v29 = (const __m128i *)((char *)qword_2CD4E20 + 48 * (unsigned int)qword_2CD4E28);
        if ( qword_2CD4E20 != v29 )
        {
          do
          {
            v30 = _mm_loadu_si128(v28);
            v31 = v28[2].m128i_i32[2];
            v28 += 3;
            v27 += 3;
            v27[-3] = v30;
            v32 = _mm_loadu_si128(v28 - 2);
            v27[-1].m128i_i32[2] = v31;
            LOBYTE(v31) = v28[-1].m128i_i8[12];
            v27[-2] = v32;
            v27[-1].m128i_i8[12] = v31;
            v27[-1].m128i_i64[0] = (__int64)&off_2C489A8;
          }
          while ( v29 != v28 );
        }
        v33 = v41;
        if ( v26 != &unk_2CD4E30 )
        {
          v40 = v13;
          v39 = v41;
          v38 = v25;
          free(v26);
          v13 = v40;
          v33 = v39;
          v25 = v38;
        }
        HIDWORD(qword_2CD4E28) = v33;
        v11 = (const __m128i *)v42;
        qword_2CD4E20 = v25;
        v15 = qword_2CD4E28;
        v17 = &v25[3 * (unsigned int)qword_2CD4E28];
        if ( v35 )
          v11 = &v25[3 * v24];
      }
      v18 = v11[2].m128i_i32[2];
      v8 += 5;
      *v17 = _mm_loadu_si128(v11);
      v19 = _mm_loadu_si128(v11 + 1);
      v17[2].m128i_i32[2] = v18;
      LOBYTE(v18) = v11[2].m128i_i8[12];
      v17[2].m128i_i64[0] = (__int64)&off_2C489A8;
      v17[2].m128i_i8[12] = v18;
      v17[1] = v19;
      LODWORD(qword_2CD4E28) = v15 + 1;
      sub_21F3000(*((_QWORD *)&xmmword_2CD4E10 + 1), v13, v14);
    }
    while ( v34 != v8 );
    p_ptr = v37;
  }
  dword_2CD4DF8 = 0;
  byte_2CD4E0C = 1;
  dword_2CD4E08 = 0;
  sub_21F4400(&qword_2CD4D80);
  if ( ptr != p_ptr + 2 )
    free(ptr);
  __cxa_atexit(sub_20DA530, &qword_2CD4D80, &off_2AFC540);
  v20 = j__strlen("Disable the usage of LEB128 directives, and generate .byte instead.");
  unk_2CD4CD0 = 0;
  unk_2CD4CD8 = 0;
  qword_2CD4CC0 = &off_2C4B8B0;
  *(_QWORD *)&dword_2CD4CC8 = dword_2CD4CC8 & 0x80000000;
  qword_2CD4D00[1] = 0x100000000LL;
  unk_2CD4CE0 = 0;
  unk_2CD4CE8 = 0;
  unk_2CD4CF0 = 0;
  unk_2CD4CF8 = 0;
  qword_2CD4D00[0] = &qword_2CD4D00[2];
  qword_2CD4D00[3] = &qword_2CD4D00[6];
  qword_2CD4D00[4] = 1;
  LODWORD(qword_2CD4D00[5]) = 0;
  BYTE4(qword_2CD4D00[5]) = 1;
  v21 = (__int64 *)sub_21ED2B0("Disable the usage of LEB128 directives, and generate .byte instead.");
  v22 = LODWORD(qword_2CD4D00[1]);
  if ( (unsigned __int64)LODWORD(qword_2CD4D00[1]) + 1 > HIDWORD(qword_2CD4D00[1]) )
  {
    v34 = v21;
    sub_22134E0(qword_2CD4D00, &qword_2CD4D00[2], LODWORD(qword_2CD4D00[1]) + 1LL, 8);
    v22 = LODWORD(qword_2CD4D00[1]);
    v21 = v34;
  }
  *(_QWORD *)(qword_2CD4D00[0] + 8 * v22) = v21;
  ++LODWORD(qword_2CD4D00[1]);
  LODWORD(qword_2CD4D00[7]) = 0;
  qword_2CD4D00[8] = off_2BC0B28;
  LODWORD(qword_2CD4D00[9]) = 0;
  BYTE4(qword_2CD4D00[9]) = 0;
  qword_2CD4CC0 = off_2C48A80;
  *(__m128 *)&qword_2CD4D00[13] = _mm_loadh_ps((const double *)off_2C4DB30);
  qword_2CD4D00[10] = off_2BC0B98;
  sub_21F3510(&qword_2CD4CC0, "use-leb128-directives", 21);
  unk_2CD4CE8 = v20;
  LODWORD(qword_2CD4D00[7]) = 0;
  BYTE4(qword_2CD4D00[9]) = 1;
  LODWORD(qword_2CD4D00[9]) = 0;
  BYTE2(dword_2CD4CC8) = BYTE2(dword_2CD4CC8) & 0x9F | 0x20;
  unk_2CD4CE0 = "Disable the usage of LEB128 directives, and generate .byte instead.";
  sub_21F4400(&qword_2CD4CC0);
  return __cxa_atexit(sub_20DA4B0, &qword_2CD4CC0, &off_2AFC540);
}

