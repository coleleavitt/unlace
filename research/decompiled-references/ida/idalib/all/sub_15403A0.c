__int64 __fastcall sub_15403A0(__int64 a1, void *a2, __m128i a3, __m128 a4)
{
  unsigned int v5; // ebp
  _BYTE *v6; // rax
  char v7; // al
  char v8; // r14
  unsigned int v9; // edx
  char v10; // al
  __int64 v11; // rdx
  __int64 v12; // rbx
  const __m128i *v14; // r15
  __int64 v15; // rax
  bool v16; // zf
  const __m128i *v17; // rdi
  __int8 v18; // al
  __m128i v19; // xmm0
  int v20; // eax
  __int64 v21; // rax
  unsigned int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int64 v27; // r13
  unsigned __int8 *v28; // rbp
  unsigned __int8 v29; // r14
  unsigned __int8 v30; // r15
  bool v31; // r13
  unsigned __int8 *v32; // rdi
  unsigned int v33; // eax
  void *v34; // rdi
  unsigned __int8 *v35; // rax
  __int16 v36; // dx
  unsigned __int8 v37; // r13
  unsigned int v38; // eax
  unsigned __int8 v39; // dl
  __int64 v40; // rdx
  __int64 v41; // [rsp-10h] [rbp-F8h]
  int v42; // [rsp+8h] [rbp-E0h] BYREF
  int v43; // [rsp+Ch] [rbp-DCh] BYREF
  __int64 v44; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v45; // [rsp+18h] [rbp-D0h] BYREF
  __m128i v46; // [rsp+20h] [rbp-C8h] BYREF
  char v47; // [rsp+30h] [rbp-B8h]
  char v48; // [rsp+32h] [rbp-B6h]
  __int64 v49; // [rsp+40h] [rbp-A8h] BYREF
  unsigned int v50; // [rsp+48h] [rbp-A0h]
  int v51; // [rsp+4Ch] [rbp-9Ch]
  int v52; // [rsp+50h] [rbp-98h]
  int v53; // [rsp+54h] [rbp-94h]
  bool v54; // [rsp+58h] [rbp-90h]
  __m128i *v55; // [rsp+60h] [rbp-88h] BYREF
  __int32 v56; // [rsp+68h] [rbp-80h]
  __int64 v57; // [rsp+70h] [rbp-78h]
  __int64 v58; // [rsp+78h] [rbp-70h] BYREF
  unsigned int v59; // [rsp+80h] [rbp-68h]
  unsigned __int8 v60; // [rsp+84h] [rbp-64h]
  char v61; // [rsp+88h] [rbp-60h]
  __int16 v62; // [rsp+90h] [rbp-58h]
  __m128i v63; // [rsp+98h] [rbp-50h]
  char v64; // [rsp+A8h] [rbp-40h]

  v5 = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 40) = v5;
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  if ( *(_WORD *)(a1 + 32) != 22 )
  {
    sub_1564840(&v55, a1, a1 + 16, 1625);
    sub_1533090((unsigned __int8 **)&v55, (__int64)"while");
    sub_AEA040((__int64)&v55);
    LOWORD(v55) = 63;
    v12 = 1;
    sub_15680D0(a1, &v55, 1, 0);
    return v12;
  }
  v6 = *(_BYTE **)(*(_QWORD *)(a1 + 8) + 56LL);
  if ( (*v6 & 1) != 0 )
  {
    v8 = 1;
    v9 = 30;
  }
  else
  {
    v7 = v6[1] & 8;
    v8 = v7 != 0;
    v9 = v7 == 0 ? 6 : 30;
  }
  sub_146B5E0(&v44, a1, v9, 1, 0);
  v47 = 0;
  v48 = 0;
  v46 = 0u;
  v42 = 0;
  v43 = 0;
  v10 = sub_1537490((const __m128i *)a1, nullptr, &v46, v5, 0, &v42, a3, a4, &v43);
  v11 = v41;
  if ( v10 )
  {
    v12 = 1;
    goto LABEL_6;
  }
  v14 = *(const __m128i **)(*(_QWORD *)(a1 + 96) + 744LL);
  v55 = (__m128i *)v14;
  v56 = v14[2].m128i_i32[0];
  v15 = v14[2].m128i_i64[1];
  v61 = 0;
  v16 = v14[4].m128i_i8[0] == 0;
  v57 = v15;
  if ( v16 )
  {
    v17 = v14;
  }
  else
  {
    v59 = v14[3].m128i_u32[2];
    if ( v59 > 0x40 )
    {
      sub_2205510(&v58);
      v17 = *(const __m128i **)(*(_QWORD *)(a1 + 96) + 744LL);
    }
    else
    {
      v17 = v14;
      v58 = v14[3].m128i_i64[0];
    }
    v18 = v14[3].m128i_i8[12];
    v61 = 1;
    v60 = v18;
  }
  v62 = v14[4].m128i_i16[4];
  v19 = _mm_loadu_si128(v14 + 5);
  v64 = 1;
  v63 = v19;
  sub_1AA56C0(v17, v5, v11);
  sub_146B5E0(&v45, a1, 8u, v8, *(_WORD *)(a1 + 32) == 24);
  v20 = *(_DWORD *)(a1 + 16);
  v16 = *(_WORD *)(a1 + 32) == 24;
  v49 = a1;
  v50 = v5;
  v51 = v20;
  v21 = *(_QWORD *)(a1 + 8);
  v53 = 3;
  LODWORD(v21) = *(_DWORD *)(v21 + 2296);
  v54 = v16;
  v52 = v21;
  if ( *(_DWORD *)(a1 + 2544) )
  {
    v22 = *(_DWORD *)(a1 + 2544);
    *(_DWORD *)(a1 + 2544) = 0;
    v50 = v22;
  }
  v27 = sub_153D810(a1, a2, 0, v19, a4);
  if ( v27 > 1 )
    sub_15358C0(&v49, (__int64)a2, v23, v24, v25, v26);
  if ( v45 )
  {
    sub_1564F70(v45);
    v45 = 0;
  }
  if ( v44 )
  {
    sub_1564F70(v44);
    v44 = 0;
  }
  if ( v47 || v27 == 1 )
    v12 = 1;
  else
    v12 = sub_1C3AC70(
            *(_QWORD *)(a1 + 96),
            v5,
            v42,
            v43,
            (unsigned int)v27 & 0xFFFFFFFE,
            v26,
            v46.m128i_i64[0],
            v46.m128i_i64[1],
            v47);
  if ( v45 )
    sub_1564F70(v45);
  v28 = (unsigned __int8 *)v55;
  if ( v64 )
  {
    v29 = v55[4].m128i_u8[8];
    v30 = v55[5].m128i_u8[12];
    v31 = (v55[2].m128i_i8[0] & 2) != 0;
  }
  else
  {
    v29 = v62;
    v30 = v63.m128i_u8[12];
    v31 = (v56 & 2) != 0;
  }
  v16 = v55[4].m128i_i8[0] == 0;
  v32 = (unsigned __int8 *)&v55[3];
  v55[2].m128i_i32[0] = v56;
  *((_QWORD *)v28 + 5) = v57;
  if ( v16 )
  {
    if ( v61 )
    {
      v38 = v59;
      *((_DWORD *)v28 + 14) = v59;
      if ( v38 > 0x40 )
      {
        sub_2205510(v32);
        v35 = (unsigned __int8 *)v55;
      }
      else
      {
        *((_QWORD *)v28 + 6) = v58;
        v35 = v28;
      }
      v39 = v60;
      v28[64] = 1;
      v28[60] = v39;
      goto LABEL_37;
    }
  }
  else
  {
    v33 = *((_DWORD *)v28 + 14);
    if ( v61 )
    {
      if ( v33 <= 0x40 && v59 <= 0x40 )
      {
        v40 = v58;
        *((_DWORD *)v28 + 14) = v59;
        v35 = v28;
        *((_QWORD *)v28 + 6) = v40;
      }
      else
      {
        sub_22056A0(v32, &v58);
        v35 = (unsigned __int8 *)v55;
      }
      v28[60] = v60;
      goto LABEL_37;
    }
    v28[64] = 0;
    if ( v33 > 0x40 )
    {
      v34 = *((void **)v28 + 6);
      v35 = v28;
      if ( v34 )
      {
        operator delete[](v34);
        v35 = (unsigned __int8 *)v55;
      }
      goto LABEL_37;
    }
  }
  v35 = v28;
LABEL_37:
  *((_WORD *)v28 + 36) = v62;
  *((_QWORD *)v35 + 10) = v63.m128i_i64[0];
  *((_DWORD *)v35 + 22) = v63.m128i_i32[2];
  v36 = v63.m128i_i16[6];
  v35[72] = v29;
  *((_WORD *)v35 + 46) = v36;
  LOBYTE(v36) = 2 * v31;
  v37 = v35[32];
  v35[92] = v30;
  v35[32] = v36 | v37 & 0xFD;
  sub_98E4B0((__int64)&v58);
LABEL_6:
  if ( v44 )
    sub_1564F70(v44);
  return v12;
}
