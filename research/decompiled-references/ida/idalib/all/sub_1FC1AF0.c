__int64 __fastcall sub_1FC1AF0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v4; // r13
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __m128i si128; // xmm0
  unsigned int v11; // esi
  __int64 v12; // rdi
  unsigned int v13; // edx
  __int64 *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r13
  __int64 *v17; // rdx
  char v18; // al
  __int64 v19; // rax
  int v20; // r10d
  int v21; // eax
  unsigned __int64 v22; // rax
  char *v23; // r11
  __int32 v24; // r10d
  __int64 v25; // rdx
  unsigned int v26; // esi
  __int64 v27; // r8
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rsi
  unsigned __int64 *v30; // rdx
  __int64 v31; // rdx
  unsigned __int8 v32; // al
  unsigned int v33; // ecx
  char *v35; // rsi
  int v36; // r10d
  __int64 *v37; // r11
  int v38; // ecx
  __int64 v39; // rcx
  bool v40; // zf
  __int64 v41; // rdx
  __int64 v42; // rcx
  char *v43; // r11
  __int64 v44; // rax
  char v45; // al
  _QWORD *v46; // rdx
  _DWORD *v47; // rsi
  __int64 v48; // rcx
  _DWORD *v49; // rdi
  __m128 v50; // [rsp+0h] [rbp-418h] BYREF
  __int64 v51; // [rsp+10h] [rbp-408h]
  __int64 v52; // [rsp+18h] [rbp-400h]
  _QWORD v53[4]; // [rsp+20h] [rbp-3F8h] BYREF
  __int16 v54; // [rsp+40h] [rbp-3D8h]
  _QWORD v55[4]; // [rsp+50h] [rbp-3C8h] BYREF
  __int16 v56; // [rsp+70h] [rbp-3A8h]
  _QWORD v57[4]; // [rsp+80h] [rbp-398h] BYREF
  __int16 v58; // [rsp+A0h] [rbp-378h]
  _QWORD v59[2]; // [rsp+B0h] [rbp-368h] BYREF
  __m128i v60; // [rsp+C0h] [rbp-358h]
  int v61; // [rsp+D0h] [rbp-348h]
  const char *v62; // [rsp+D8h] [rbp-340h]
  __int64 v63; // [rsp+E0h] [rbp-338h] BYREF
  _QWORD v64[3]; // [rsp+E8h] [rbp-330h] BYREF
  void *v65; // [rsp+100h] [rbp-318h]
  __int64 v66; // [rsp+108h] [rbp-310h]
  _BYTE v67[128]; // [rsp+110h] [rbp-308h] BYREF
  void *ptr; // [rsp+190h] [rbp-288h]
  __int64 v69; // [rsp+198h] [rbp-280h]
  _BYTE v70[32]; // [rsp+1A0h] [rbp-278h] BYREF
  __int64 v71; // [rsp+1C0h] [rbp-258h]
  char v72; // [rsp+1C8h] [rbp-250h]
  void *v73[2]; // [rsp+1D0h] [rbp-248h] BYREF
  _BYTE v74[568]; // [rsp+1E0h] [rbp-238h] BYREF

  v4 = (__int64 *)(a1 + 424);
  v50.m128_u64[0] = a3;
  v51 = a2;
  v50 = _mm_loadh_ps((const double *)v50.m128_u64);
  sub_2233820(v59);
  si128 = _mm_load_si128((const __m128i *)&v50);
  v61 = 0;
  v11 = *(_DWORD *)(a1 + 440);
  v63 = a3;
  v60 = si128;
  v59[0] = &off_2B4A628;
  v62 = "serializing";
  if ( !v11 )
  {
    v73[0] = nullptr;
LABEL_47:
    v11 *= 2;
    goto LABEL_48;
  }
  v8 = v11 - 1;
  v12 = *(_QWORD *)(a1 + 424);
  v13 = v8 & (((unsigned int)a3 >> 9) ^ ((unsigned int)a3 >> 4));
  v14 = (__int64 *)(v12 + 16LL * v13);
  v15 = *v14;
  if ( a3 == *v14 )
    goto LABEL_3;
  v36 = 1;
  v37 = nullptr;
  if ( v15 != -4096 )
  {
    while ( 1 )
    {
      if ( v15 == -8192 && !v37 )
        v37 = v14;
      v13 = v8 & (v36 + v13);
      v14 = (__int64 *)(v12 + 16LL * v13);
      v15 = *v14;
      if ( a3 == *v14 )
        break;
      if ( v15 == -4096 )
      {
        if ( v37 )
          v14 = v37;
        goto LABEL_36;
      }
      ++v36;
    }
LABEL_3:
    v16 = v14[1];
    v17 = v14 + 1;
    if ( v16 )
      goto LABEL_4;
    goto LABEL_42;
  }
LABEL_36:
  v38 = *(_DWORD *)(a1 + 432);
  v73[0] = v14;
  v6 = (unsigned int)(v38 + 1);
  v7 = 3 * v11;
  if ( 4 * (int)v6 >= (unsigned int)v7 )
    goto LABEL_47;
  v7 = v11 - *(_DWORD *)(a1 + 436) - (unsigned int)v6;
  if ( (unsigned int)v7 <= v11 >> 3 )
  {
LABEL_48:
    sub_1F85BC0((__int64)v4, v11, v6, v7, v8, v9);
    sub_1F747D0(v4, &v63, v73);
    v39 = v63;
    LODWORD(v6) = *(_DWORD *)(a1 + 432) + 1;
    v14 = (__int64 *)v73[0];
    goto LABEL_39;
  }
  v39 = a3;
LABEL_39:
  v40 = *v14 == -4096;
  *(_DWORD *)(a1 + 432) = v6;
  if ( !v40 )
    --*(_DWORD *)(a1 + 436);
  *v14 = v39;
  v17 = v14 + 1;
  v14[1] = 0;
LABEL_42:
  v16 = *(_QWORD *)(a1 + 416);
  *(_QWORD *)(a1 + 416) = v16 + 1;
  *v17 = v16;
LABEL_4:
  v73[0] = v74;
  v73[1] = (void *)0x4000000000LL;
  v18 = *(_BYTE *)(a1 + 157);
  v64[0] = v51;
  v65 = v67;
  v66 = 0x1000000000LL;
  v63 = a1;
  v64[1] = a1;
  v64[2] = v73;
  ptr = v70;
  v69 = 0x800000000LL;
  v71 = 0;
  v72 = v18;
  sub_1FC18D0((__int64)&v63, a3);
  if ( !(_DWORD)v71 )
  {
    v56 = 259;
    v55[0] = "'";
    v44 = sub_B88090(a3);
    v57[0] = "unexpected declaration kind '";
    v57[2] = v44;
    v45 = v56;
    v58 = 773;
    v57[1] = 29;
    if ( (_BYTE)v56 )
    {
      if ( (_BYTE)v56 == 1 )
      {
        v47 = v57;
        v48 = 10;
        v49 = v53;
        while ( v48 )
        {
          *v49++ = *v47++;
          --v48;
        }
      }
      else
      {
        if ( HIBYTE(v56) == 1 )
        {
          v46 = (_QWORD *)v55[0];
          v52 = v55[1];
        }
        else
        {
          v46 = v55;
          v45 = 2;
        }
        v53[2] = v46;
        v53[0] = v57;
        v53[3] = v52;
        LOBYTE(v54) = 2;
        HIBYTE(v54) = v45;
      }
    }
    else
    {
      v54 = 256;
    }
    sub_2221AD0(v53, 1);
  }
  v19 = sub_1FB16E0((__int64)v64, v71, HIDWORD(v71));
  v20 = *(_DWORD *)(a3 + 24);
  v55[0] = v19;
  v50.m128_i32[0] = v20;
  v21 = sub_1F6E4D0((_QWORD *)a1, v20);
  v22 = sub_1F6E500(a1, v21);
  v23 = *(char **)(a1 + 760);
  v24 = v50.m128_i32[0];
  v25 = *(_QWORD *)(a1 + 752);
  v26 = v16 - *(_DWORD *)(a1 + 408);
  v57[0] = v22;
  v27 = v26;
  v28 = (__int64)&v23[-v25] >> 4;
  if ( v26 == v28 )
  {
    if ( v23 == *(char **)(a1 + 768) )
    {
      sub_1FB2790((char **)(a1 + 752), v23, v57, v55, (_QWORD *)(a1 + 776));
      v24 = v50.m128_i32[0];
    }
    else
    {
      v41 = v55[0];
      v42 = *(_QWORD *)(a1 + 776);
      v43 = v23 + 16;
      *((_QWORD *)v43 - 2) = v22;
      *((_QWORD *)v43 - 1) = v41 - v42;
      *(_QWORD *)(a1 + 760) = v43;
    }
  }
  else
  {
    v29 = v26 + 1;
    if ( v29 > v28 )
    {
      LODWORD(v52) = v50.m128_i32[0];
      v50.m128_u64[0] = v27;
      sub_1FB2990((char **)(a1 + 752), v29 - v28);
      v25 = *(_QWORD *)(a1 + 752);
      v27 = v50.m128_u64[0];
      v22 = v57[0];
      v24 = v52;
    }
    else if ( v29 < v28 )
    {
      v35 = (char *)(v25 + 16 * v29);
      if ( v23 != v35 )
        *(_QWORD *)(a1 + 760) = v35;
    }
    v30 = (unsigned __int64 *)(16 * v27 + v25);
    *v30 = v22;
    v30[1] = v55[0] - *(_QWORD *)(a1 + 776);
  }
  if ( v24 && (v24 & 0x7FFFFFFFu) < *(_DWORD *)(*(_QWORD *)(v51 + 2312) + 316LL) )
    sub_1F8AA80(a1, a3, v16);
  v31 = *(_QWORD *)(a1 + 56);
  v32 = *(_BYTE *)(a3 + 28) & 0x7F;
  if ( v31 )
  {
    v33 = *(_DWORD *)(v31 + 36);
    if ( v33 <= 7 && ((1LL << v33) & 0xBC) != 0 )
    {
      if ( ((v32 + 118) & 0x7Fu) > 1 )
        goto LABEL_21;
LABEL_20:
      sub_1F92A90(a1, a3, a1 + 1472);
      goto LABEL_21;
    }
  }
  if ( v32 == 1
    || v32 == 87
    || (unsigned int)v32 - 21 <= 1
    || (!v31 || v32 != 83 && ((unsigned int)v32 - 40 > 6 || (sub_B740B0(a3) & 0xFFFFFFFD) != 0))
    && (unsigned __int8)sub_A7C0A0(v51, a3) )
  {
    goto LABEL_20;
  }
LABEL_21:
  if ( ptr != v70 )
    free(ptr);
  if ( v65 != v67 )
    free(v65);
  if ( v73[0] != v74 )
    free(v73[0]);
  v59[0] = &off_2B4A628;
  return sub_22338A0(v59);
}
