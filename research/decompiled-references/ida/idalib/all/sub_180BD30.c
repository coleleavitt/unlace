void __fastcall sub_180BD30(__int64 a1, __int64 a2, const __m128i *a3, _DWORD *a4, _DWORD *a5, double a6)
{
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r15
  unsigned __int8 v15; // al
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  unsigned int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rsi
  __m128i *v24; // r15
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 *v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rbx
  int v37; // eax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rbp
  __int64 v42; // rax
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  _QWORD *v48; // rax
  unsigned int v49; // [rsp+4h] [rbp-124h]
  char v50; // [rsp+10h] [rbp-118h]
  int v51; // [rsp+10h] [rbp-118h]
  __int64 v52; // [rsp+10h] [rbp-118h]
  __int64 v53; // [rsp+10h] [rbp-118h]
  __int64 v54; // [rsp+18h] [rbp-110h]
  int v55; // [rsp+24h] [rbp-104h] BYREF
  __int64 v56; // [rsp+28h] [rbp-100h] BYREF
  __int64 v57; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v58; // [rsp+38h] [rbp-F0h] BYREF
  __int64 v59; // [rsp+40h] [rbp-E8h] BYREF
  unsigned int v60; // [rsp+48h] [rbp-E0h]
  char v61; // [rsp+4Ch] [rbp-DCh]
  char v62; // [rsp+50h] [rbp-D8h]
  void *v63; // [rsp+60h] [rbp-C8h] BYREF
  unsigned int v64; // [rsp+68h] [rbp-C0h]
  char v65; // [rsp+6Ch] [rbp-BCh]

  v10 = sub_B8DC30(a2, 1);
  if ( v10 )
    v14 = *(_QWORD *)(v10 + 24);
  else
    v14 = *(_QWORD *)(a2 + 80);
  v15 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( (unsigned int)v15 - 34 > 5 )
  {
    if ( v15 == 18 )
    {
      v29 = sub_BA8620(a2);
      v17 = (unsigned int)v29;
      v18 = HIDWORD(v29);
    }
    else
    {
      LODWORD(v18) = 0;
      v17 = 0;
    }
  }
  else
  {
    v16 = sub_B77620(a2);
    v17 = (unsigned int)v16;
    v18 = HIDWORD(v16);
  }
  HIDWORD(v57) = v18;
  v19 = a3[1].m128i_u32[2];
  LODWORD(v57) = v17;
  v49 = v19;
  if ( !(unsigned __int8)sub_1804940(v14, 1, v17, v11, v12, v13) )
  {
    sub_168B9F0((__int64)&v63, (__int64 *)(a1 + 8), v49, 0x19BBu, 0);
    v31 = sub_180A660((__int64)&v63, (__int64)a3);
    v59 = a3[1].m128i_i64[1];
    v32 = sub_1587DB0(v31, &v59);
    sub_15884C0(v32, &v57);
    sub_15F7200(&v63);
    return;
  }
  v23 = *(_QWORD *)(a1 + 248);
  if ( (*a4 & 0x20000) != 0 )
    goto LABEL_7;
  v30 = *(_QWORD *)(a1 + 248);
  v60 = 64;
  v59 = 0;
  v61 = 1;
  v62 = 1;
  sub_C3EB00((__int64)&v63, (unsigned __int64)a4, v30, nullptr, v21, v22);
  sub_16C53C0((__int64)&v59, (__int64)&v63);
  v50 = v62;
  sub_98E4B0((__int64)&v63);
  if ( !v50 )
  {
    v33 = (__int64 *)(a1 + 8);
    if ( a5 )
    {
      sub_168B9F0((__int64)&v63, v33, v49, 0xC53u, 0);
      v34 = sub_180A660((__int64)&v63, (__int64)a3);
      v55 = 1;
      v35 = sub_1587D10(v34, &v55);
    }
    else
    {
      sub_168B9F0((__int64)&v63, v33, v49, 0xC57u, 0);
      v35 = sub_180A660((__int64)&v63, (__int64)a3);
    }
    LODWORD(v56) = 1;
    v36 = sub_180A710(v35, (int *)&v56);
    v58 = sub_EEC8C0((unsigned __int64)a4, (__int64)&v56, a6);
    sub_1587DB0(v36, &v58);
    sub_15F7200(&v63);
    goto LABEL_25;
  }
  if ( v60 > 0x40 )
  {
    if ( (unsigned int)sub_22069E0(&v59) != 1 )
    {
LABEL_17:
      sub_168B9F0((__int64)&v63, (__int64 *)(a1 + 8), v49, 0xBA4u, 0);
      v58 = sub_EEC8C0((unsigned __int64)a4, a1 + 8, a6);
      sub_1587DB0((__int64)&v63, &v58);
      sub_15F7200(&v63);
LABEL_25:
      sub_98E4B0((__int64)&v59);
      return;
    }
  }
  else if ( !v59 || (v59 & (v59 - 1)) != 0 )
  {
    goto LABEL_17;
  }
  v64 = 64;
  v63 = (void *)0x100000000LL;
  v65 = 0;
  v37 = sub_98E2D0(&v59, (__int64 *)&v63);
  if ( v64 > 0x40 && v63 )
  {
    v51 = v37;
    operator delete[](v63);
    v37 = v51;
  }
  if ( v37 > 0 )
  {
    sub_168B9F0((__int64)&v63, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0x197Fu, 0);
    v58 = a3[1].m128i_i64[1];
    v38 = sub_1587DB0((__int64)&v63, &v58);
    if ( *(_BYTE *)(v38 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v38 + 32), 0x100000000LL, 3u);
    }
    else if ( *(_BYTE *)(v38 + 132) )
    {
      v52 = v38;
      v42 = sub_168B9E0((_QWORD *)v38);
      v45 = v52;
      v46 = v42;
      v47 = *(_QWORD *)(v52 + 16);
      if ( v47 )
      {
        v54 = v46;
        v47 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v47 + 32LL))(v47);
        v46 = v54;
        v45 = v52;
      }
      v53 = v45;
      v56 = v47;
      v48 = sub_1587BC0(v46, &v56, v45, v46, v43, v44);
      sub_AE9DF0((unsigned __int8 **)(*v48 + 32LL * *(unsigned int *)(v53 + 128) + 8), 0x100000000LL, 3u);
    }
    sub_15F7200(&v63);
  }
  sub_98E4B0((__int64)&v59);
  v23 = *(_QWORD *)(a1 + 248);
LABEL_7:
  if ( !a5 || (*a5 & 0x20000) != 0 )
    goto LABEL_9;
  if ( (unsigned __int8)sub_C3EA40((unsigned __int64)a5, v23, nullptr, v20, v21, v22) )
  {
    v23 = *(_QWORD *)(a1 + 248);
LABEL_9:
    v24 = (__m128i *)sub_1806F50((__int64 *)(v23 + 2352), 56, 3u);
    sub_B0B940(v24, *(_QWORD *)(a1 + 248), a3, (__int64)a4, (__int64)a5);
    sub_B8CC60(a2, (__int64)v24, v25, v26, v27, v28);
    return;
  }
  sub_168B9F0((__int64)&v63, (__int64 *)(a1 + 8), v49, 0xC53u, 0);
  v39 = sub_180A660((__int64)&v63, (__int64)a3);
  LODWORD(v56) = 2;
  v40 = sub_1587D10(v39, (int *)&v56);
  LODWORD(v58) = 1;
  v41 = sub_180A710(v40, (int *)&v58);
  v59 = sub_EEC8C0((unsigned __int64)a5, (__int64)&v58, a6);
  sub_1587DB0(v41, &v59);
  sub_15F7200(&v63);
}
