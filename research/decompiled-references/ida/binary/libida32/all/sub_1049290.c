void *__fastcall sub_1049290(__int64 a1, const __m128i *a2, __int64 a3)
{
  bool v6; // zf
  void *v7; // rdi
  size_t v8; // rsi
  unsigned int v9; // eax
  __int64 v10; // rdi
  int v11; // eax
  char *v12; // rsi
  __m128i si128; // xmm0
  _DWORD *v14; // r12
  unsigned int v15; // eax
  int v16; // ecx
  int v17; // edx
  const char **v18; // r12
  const char *v19; // rbp
  size_t v20; // r13
  unsigned int v21; // eax
  unsigned int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned int v26; // r15d
  __int64 *v27; // r14
  void *result; // rax
  __int64 v29; // rax
  _QWORD *v30; // rcx
  unsigned int v31; // eax
  unsigned int v32; // eax
  __int64 v33; // [rsp+8h] [rbp-60h]
  _QWORD *v34; // [rsp+18h] [rbp-50h]
  __int64 *v35[8]; // [rsp+28h] [rbp-40h] BYREF

  sub_10094E0(a1, a2, a3);
  v6 = a2[2].m128i_i32[0] == 26;
  *(_QWORD *)a1 = &off_2BFFB40;
  v7 = *(void **)(a3 + 64);
  v8 = *(_QWORD *)(a3 + 72);
  if ( v6 )
  {
    v32 = sub_228CEA0(v7, v8);
    v6 = a2[2].m128i_i32[0] == 26;
    *(_DWORD *)(a1 + 512) = v32;
    v10 = v32;
    if ( !v6 )
      goto LABEL_3;
  }
  else
  {
    v9 = sub_228CF30(v7, v8);
    v6 = a2[2].m128i_i32[0] == 26;
    *(_DWORD *)(a1 + 512) = v9;
    v10 = v9;
    if ( !v6 )
    {
LABEL_3:
      v11 = sub_228D020(v10);
      goto LABEL_4;
    }
  }
  v11 = sub_228CFC0(v10);
LABEL_4:
  *(_DWORD *)(a1 + 516) = v11;
  v6 = *(_DWORD *)(a1 + 248) == 26;
  v12 = "e-p:64:64-p1:64:64-p2:32:32-p3:32:32-p4:64:64-p5:32:32-p6:32:32-p7:160:256:256:32-p8:128:128:128:48-p9:192:256:2"
        "56:32-i64:64-v16:16-v24:32-v32:32-v48:64-v96:128-v192:256-v256:256-v512:512-v1024:1024-v2048:2048-n32:64-S32-A5-G1-ni:7:8:9";
  *(_QWORD *)(a1 + 552) = a1 + 568;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384D20);
  if ( !v6 )
    v12 = "e-p:32:32-i64:64-v16:16-v24:32-v32:32-v48:64-v96:128-v192:256-v256:256-v512:512-v1024:1024-v2048:2048-n32:64-S32-A5-G1";
  *(_BYTE *)(a1 + 525) = 0;
  *(_QWORD *)(a1 + 528) = 0;
  *(_QWORD *)(a1 + 560) = 0;
  *(_BYTE *)(a1 + 568) = 0;
  *(__m128i *)(a1 + 536) = si128;
  sub_1009A40((_QWORD *)a1, v12, strlen(v12), (__int64)&byte_22CD811);
  if ( a2[2].m128i_i32[3] == 32 )
  {
    v14 = &unk_2507DC0;
    v6 = a2[2].m128i_i32[0] == 26;
    *(_BYTE *)(a1 + 508) = 1;
    *(_QWORD *)(a1 + 352) = &unk_2507DC0;
    if ( !v6 )
      goto LABEL_9;
    goto LABEL_21;
  }
  if ( a2[2].m128i_i32[0] == 26 )
  {
    v14 = &unk_2507E40;
    *(_BYTE *)(a1 + 508) = 1;
    *(_QWORD *)(a1 + 352) = &unk_2507E40;
LABEL_21:
    *(_WORD *)(a1 + 18) = 4112;
    *(_QWORD *)(a1 + 88) = sub_21D5350();
    goto LABEL_9;
  }
  v14 = &unk_2507DC0;
  *(_BYTE *)(a1 + 508) = 1;
  *(_QWORD *)(a1 + 352) = &unk_2507DC0;
LABEL_9:
  v15 = *(_DWORD *)(a1 + 516);
  v16 = *(_DWORD *)(a1 + 248);
  *(_BYTE *)(a1 + 276) = 1;
  *(_BYTE *)(a1 + 279) = 1;
  *(_DWORD *)(a1 + 520) = (v15 & 0x40) == 0 ? 64 : 32;
  if ( v16 == 25 )
  {
    *(_WORD *)(a1 + 8) = 8224;
  }
  else
  {
    v17 = ((*v14 - 3) & 0xFFFFFFFD) == 0 ? 32 : 64;
    *(_BYTE *)(a1 + 9) = ((*v14 - 3) & 0xFFFFFFFD) == 0 ? 32 : 64;
    *(_BYTE *)(a1 + 8) = v17;
    if ( v16 == 26 )
    {
      *(_DWORD *)(a1 + 136) = 8;
      *(_WORD *)(a1 + 30) = 16448;
      *(_QWORD *)(a1 + 144) = 0x700000007LL;
    }
  }
  v18 = (const char **)&off_2B2E570;
  *(_WORD *)(a1 + 286) = 16448;
  *(_BYTE *)(a1 + 524) = ((v15 >> 9) ^ 1) & 1;
  v33 = a1 + 480;
  do
  {
    v19 = *v18;
    v20 = 0;
    if ( *v18 )
      v20 = strlen(*v18);
    v21 = sub_2220DF0(v19, v20);
    v22 = sub_2220F70(v33, v19, v20, v21);
    v26 = v22;
    v27 = (__int64 *)(*(_QWORD *)(a1 + 480) + 8LL * v22);
    if ( *v27 )
    {
      if ( *v27 != -8 )
      {
        sub_A21ED0(v35, v27, 0);
        goto LABEL_18;
      }
      --*(_DWORD *)(a1 + 496);
    }
    v29 = sub_220C370(v20 + 9, 8, v22, v23, v24, v25);
    v30 = (_QWORD *)v29;
    if ( v20 )
    {
      v34 = (_QWORD *)v29;
      memcpy((void *)(v29 + 8), v19, v20);
      v30 = v34;
    }
    *((_BYTE *)v30 + v20 + 8) = 0;
    *v30 = v20;
    *v27 = (__int64)v30;
    ++*(_DWORD *)(a1 + 492);
    v31 = sub_2221390(v33, v26);
    sub_A21ED0(v35, (__int64 *)(*(_QWORD *)(a1 + 480) + 8LL * v31), 0);
LABEL_18:
    ++v18;
    result = &unk_2B2E588;
  }
  while ( v18 != (const char **)&unk_2B2E588 );
  *(_BYTE *)(a1 + 277) = 1;
  return result;
}

