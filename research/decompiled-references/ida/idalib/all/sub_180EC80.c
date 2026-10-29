void __fastcall sub_180EC80(__int64 a1, _BYTE *a2, const __m128i *a3, double a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v8; // r14
  __int64 v10; // r13
  _DWORD *v11; // r13
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // r12
  __int32 v16; // r8d
  unsigned __int8 v17; // al
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __m128i *v22; // rbp
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r13
  unsigned int v31; // edx
  __int64 *v32; // rsi
  unsigned int v33; // ecx
  unsigned int v34; // r8d
  unsigned __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 *v38; // rbp
  __int64 v39; // rdi
  bool v40; // al
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  bool v46; // al
  unsigned int v47; // edx
  __int64 v48; // rax
  __int64 v49; // rax
  __int32 v50; // [rsp+0h] [rbp-108h]
  __int32 v51; // [rsp+0h] [rbp-108h]
  __int32 v52; // [rsp+0h] [rbp-108h]
  __int32 v53; // [rsp+0h] [rbp-108h]
  __int32 v54; // [rsp+0h] [rbp-108h]
  unsigned int v55; // [rsp+Ch] [rbp-FCh]
  int v56; // [rsp+10h] [rbp-F8h] BYREF
  int v57; // [rsp+14h] [rbp-F4h] BYREF
  __int64 v58; // [rsp+18h] [rbp-F0h] BYREF
  unsigned __int64 v59; // [rsp+20h] [rbp-E8h] BYREF
  unsigned int v60; // [rsp+28h] [rbp-E0h]
  char v61; // [rsp+2Ch] [rbp-DCh]
  char v62; // [rsp+30h] [rbp-D8h]
  _BYTE v63[200]; // [rsp+40h] [rbp-C8h] BYREF

  v8 = (__int64)a2;
  if ( !a3[3].m128i_i16[4] )
  {
    LODWORD(v15) = 0;
LABEL_7:
    v16 = 0;
    goto LABEL_8;
  }
  v10 = a3[5].m128i_i64[0];
  v61 = 1;
  v60 = 32;
  v11 = (_DWORD *)(v10 & 0xFFFFFFFFFFFFFFFCLL);
  v62 = 1;
  v59 = 0;
  if ( (*v11 & 0x10000) != 0 )
  {
LABEL_3:
    sub_168B9F0((__int64)v63, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0xC53u, 0);
    v12 = sub_15DD120((__int64)v63, (__int64)a3);
    v56 = 1;
LABEL_4:
    v13 = sub_1587D10(v12, &v56);
    v57 = 1;
    v14 = sub_180A710(v13, &v57);
    v58 = sub_EEC8C0((unsigned __int64)v11, (__int64)&v57, a4);
    sub_1587DB0(v14, &v58);
    sub_15F7200(v63);
LABEL_5:
    sub_98E4B0((__int64)&v59);
    return;
  }
  sub_C3EB00((__int64)v63, (unsigned __int64)v11, *(_QWORD *)(a1 + 248), nullptr, a6, a7);
  a2 = v63;
  sub_16C53C0((__int64)&v59, (__int64)v63);
  if ( !v62 )
  {
    sub_98E4B0((__int64)v63);
    goto LABEL_3;
  }
  sub_98E4B0((__int64)v63);
  if ( v61 )
  {
    LODWORD(v15) = v59;
    if ( v60 > 0x40 )
      goto LABEL_23;
  }
  else
  {
    LODWORD(v15) = v59;
    v27 = 1LL << ((unsigned __int8)v60 - 1);
    if ( v60 > 0x40 )
    {
      if ( (v27 & *(_QWORD *)(v59 + 8LL * ((v60 - 1) >> 6))) == 0 )
      {
LABEL_23:
        v15 = *(_QWORD *)v59;
        goto LABEL_24;
      }
LABEL_28:
      v31 = a3[1].m128i_u32[2];
      v32 = (__int64 *)(a1 + 8);
      v33 = 3224;
LABEL_29:
      sub_168B9F0((__int64)v63, v32, v31, v33, 0);
      v58 = sub_EEC8C0((unsigned __int64)v11, (__int64)v32, a4);
      sub_1587DB0((__int64)v63, &v58);
      sub_15F7200(v63);
      goto LABEL_5;
    }
    if ( (v27 & v59) != 0 )
      goto LABEL_28;
  }
LABEL_24:
  sub_98E4B0((__int64)&v59);
  if ( a3[3].m128i_i16[4] <= 1u )
    goto LABEL_7;
  v30 = a3[5].m128i_i64[1];
  v60 = 32;
  v59 = 0;
  v11 = (_DWORD *)(v30 & 0xFFFFFFFFFFFFFFFCLL);
  v61 = 1;
  v62 = 1;
  if ( (*v11 & 0x10000) != 0 )
  {
LABEL_26:
    sub_168B9F0((__int64)v63, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0xC53u, 0);
    v12 = sub_15DD120((__int64)v63, (__int64)a3);
    v56 = 2;
    goto LABEL_4;
  }
  sub_C3EB00((__int64)v63, (unsigned __int64)v11, *(_QWORD *)(a1 + 248), nullptr, v28, v29);
  a2 = v63;
  sub_16C53C0((__int64)&v59, (__int64)v63);
  if ( !v62 )
  {
    sub_98E4B0((__int64)v63);
    goto LABEL_26;
  }
  sub_98E4B0((__int64)v63);
  if ( v60 <= 0x40 )
  {
    v35 = v59;
    v34 = v59;
    if ( v61 )
    {
LABEL_36:
      if ( v34 > 1 )
      {
LABEL_37:
        v31 = a3[1].m128i_u32[2];
        v32 = (__int64 *)(a1 + 8);
        v33 = 3225;
        goto LABEL_29;
      }
      goto LABEL_42;
    }
    v36 = 1LL << ((unsigned __int8)v60 - 1);
  }
  else
  {
    v34 = *(_DWORD *)v59;
    if ( v61 )
      goto LABEL_36;
    v36 = 1LL << ((unsigned __int8)v60 - 1);
    v35 = *(_QWORD *)(v59 + 8LL * ((v60 - 1) >> 6));
  }
  if ( (v36 & v35) != 0 || v34 > 1 )
    goto LABEL_37;
LABEL_42:
  v55 = v34;
  sub_98E4B0((__int64)&v59);
  v16 = v55;
LABEL_8:
  v17 = *(_BYTE *)(v8 + 28) & 0x7F;
  v18 = (unsigned int)v17 - 34;
  if ( (unsigned int)v18 > 5 )
  {
    if ( v17 == 18 )
    {
      if ( (*(_BYTE *)(v8 + 58) & 4) != 0 )
        goto LABEL_13;
LABEL_18:
      sub_168B9F0((__int64)v63, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0x19BFu, 0);
      LODWORD(v59) = 0;
LABEL_19:
      sub_1587D10((__int64)v63, (int *)&v59);
      sub_15F7200(v63);
      return;
    }
    if ( v17 == 8 )
    {
      if ( (*(_BYTE *)(v8 + 49) & 0x20) != 0 )
        goto LABEL_13;
      sub_168B9F0((__int64)v63, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0x19BFu, 0);
      LODWORD(v59) = 1;
      goto LABEL_19;
    }
    v37 = (unsigned int)v17 - 40;
    if ( (unsigned int)v37 <= 6 )
    {
      v38 = (__int64 *)(*(_QWORD *)(v8 + 48) & 0xFFFFFFFFFFFFFFF0LL);
      v39 = *v38;
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v38 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 11 )
      {
LABEL_51:
        v53 = v16;
        v40 = sub_C1BF80(v39, (__int64)a2, v37, v18);
        v16 = v53;
        if ( v40 )
        {
          a2 = (_BYTE *)(&dword_0 + 1);
          v44 = sub_B8DC30(v8, 1);
          v16 = v53;
        }
        else
        {
          v43 = *v38;
          if ( *(_BYTE *)(*v38 + 16) != 11 )
          {
            v43 = sub_F63050(*v38, a2, v41, v42);
            v16 = v53;
          }
          v44 = *(_QWORD *)(*(_QWORD *)(v43 + 32) & 0xFFFFFFFFFFFFFFF0LL);
          v45 = (unsigned int)*(unsigned __int8 *)(v44 + 16) - 25;
          if ( (unsigned int)v45 > 1 )
          {
            v54 = v16;
            v44 = sub_F63050(v44, a2, v45, v42);
            v16 = v54;
          }
        }
        if ( *(char *)(v44 + 19) < 0 )
          goto LABEL_13;
        v46 = sub_C1BF80(*v38, (__int64)a2, v45, v42);
        v47 = a3[1].m128i_u32[2];
        LODWORD(v59) = !v46;
        sub_168B9F0((__int64)v63, (__int64 *)(a1 + 8), v47, 0x19BFu, 0);
        sub_16CF4F0((__int64)v63, (int *)&v59);
        sub_15F7200(v63);
        return;
      }
      v52 = v16;
      if ( sub_C1BF80(v39, (__int64)a2, v37, v18) )
      {
        v39 = *v38;
        v16 = v52;
        goto LABEL_51;
      }
    }
    sub_168B9F0((__int64)v63, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0x19C6u, 0);
    v48 = sub_15DD120((__int64)v63, (__int64)a3);
    LOBYTE(v58) = (a3[2].m128i_i8[3] & 2) != 0;
    v49 = sub_1588420(v48, (unsigned __int8 *)&v58);
    LODWORD(v59) = 4;
    sub_180E4C0(v49, (int *)&v59);
    sub_15F7200(v63);
    return;
  }
  v19 = *(_QWORD *)(*(_QWORD *)(v8 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v20 = *(unsigned __int8 *)(v19 + 16);
  v21 = (unsigned int)(v20 - 25);
  if ( (unsigned int)v21 > 1 )
  {
    v51 = v16;
    v19 = sub_F63050(v19, a2, v21, v20);
    v16 = v51;
    LOBYTE(v20) = *(_BYTE *)(v19 + 16);
  }
  if ( (_BYTE)v20 != 25 )
  {
    if ( *(char *)(v19 + 19) < 0 )
    {
LABEL_13:
      v50 = v16;
      v22 = (__m128i *)sub_1806F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 48, 3u);
      sub_B18FA0(v22, *(_QWORD *)(a1 + 248), a3, v15, v50);
      sub_B8CC60(v8, (__int64)v22, v23, v24, v25, v26);
      return;
    }
    goto LABEL_18;
  }
  sub_168B9F0((__int64)v63, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0x19BEu, 0);
  sub_15F7200(v63);
}
