void __fastcall sub_17E0120(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, unsigned int a5, int a6)
{
  __int64 v10; // rbp
  __int16 v11; // ax
  unsigned int *v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __m128i *v18; // r13
  int v19; // eax
  __int64 *v20; // rcx
  unsigned int v21; // eax
  __m128 v22; // xmm0
  unsigned int v23; // edi
  _QWORD *v24; // rsi
  __int64 v25; // rdx
  char v26; // al
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // r13
  __int64 v38; // rax
  _QWORD *v39; // rax
  int v40; // r10d
  _QWORD *v41; // r11
  int v42; // edi
  int v43; // edi
  __int64 v44; // rdx
  __int64 v45; // r9
  bool v46; // zf
  __m128i *v47; // [rsp+8h] [rbp-110h] BYREF
  _BOOL4 v48; // [rsp+1Ch] [rbp-FCh] BYREF
  __m128 v49; // [rsp+20h] [rbp-F8h] BYREF
  __m128i v50; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v51; // [rsp+40h] [rbp-D8h]
  int v52; // [rsp+48h] [rbp-D0h]
  int v53; // [rsp+4Ch] [rbp-CCh]
  __int16 v54; // [rsp+50h] [rbp-C8h]
  char v55; // [rsp+52h] [rbp-C6h]
  char v56; // [rsp+53h] [rbp-C5h]
  __m128 v57[11]; // [rsp+60h] [rbp-B8h] BYREF

  v10 = sub_1A5B7C0(a1, *(_QWORD *)(a1 + 192), a2, a5, 0, 0);
  v11 = sub_F963B0(a3, 0, 7);
  v56 &= 0xFCu;
  v12 = *(unsigned int **)(a3 + 16);
  v13 = *(_QWORD *)(a1 + 248);
  v50 = (__m128i)a3;
  v14 = *v12;
  v51 = 0;
  v52 = a6;
  v53 = a6;
  v54 = v11;
  v55 = -9;
  v18 = sub_B334E0(v13, v12 + 4, v14, 1, &v50);
  if ( !v10 )
  {
LABEL_4:
    v20 = (__int64 *)(a1 + 2760);
    v47 = v18;
    v21 = *(_DWORD *)(a1 + 2776);
    v22 = _mm_loadh_ps((const double *)&v47);
    v49 = v22;
    if ( v21 )
    {
      v16 = *(_QWORD *)(a1 + 2760);
      v23 = (v21 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
      v24 = (_QWORD *)(v16 + 16LL * v23);
      v25 = *v24;
      if ( *v24 == a2 )
      {
LABEL_6:
        sub_17A9480(v57, v24, (_QWORD *)(v16 + 16LL * v21), (__int64)v20, 1);
        return;
      }
      v40 = 1;
      v41 = nullptr;
      if ( v25 != -4096 )
      {
        while ( 1 )
        {
          if ( !v41 && v25 == -8192 )
            v41 = v24;
          v23 = (v21 - 1) & (v40 + v23);
          v24 = (_QWORD *)(v16 + 16LL * v23);
          v25 = *v24;
          if ( a2 == *v24 )
            goto LABEL_6;
          if ( v25 == -4096 )
          {
            if ( v41 )
              v24 = v41;
            break;
          }
          ++v40;
        }
      }
      v42 = *(_DWORD *)(a1 + 2768);
      v15 = 3 * v21;
      v57[0].m128_u64[0] = (unsigned __int64)v24;
      v43 = v42 + 1;
      v17 = (unsigned int)(4 * v43);
      if ( (unsigned int)v17 < (unsigned int)v15 )
      {
        v44 = v21 - *(_DWORD *)(a1 + 2772) - v43;
        v45 = v21 >> 3;
        if ( (unsigned int)v44 > (unsigned int)v45 )
        {
LABEL_21:
          v46 = *v24 == -4096;
          *(_DWORD *)(a1 + 2768) = v43;
          if ( !v46 )
            --*(_DWORD *)(a1 + 2772);
          *(__m128 *)v24 = v22;
          sub_17A9480(v57, v24, (_QWORD *)(v16 + 16LL * v21), (__int64)v20, 1);
          return;
        }
        v47 = (__m128i *)(a1 + 2760);
        sub_17DFF10(a1 + 2760, v21, v44, (__int64)v20, v16, v45);
LABEL_26:
        sub_17A9760(v47->m128i_i64, (__int64 *)&v49, v57);
        v24 = (_QWORD *)v57[0].m128_u64[0];
        v16 = *(_QWORD *)(a1 + 2760);
        v43 = *(_DWORD *)(a1 + 2768) + 1;
        v21 = *(_DWORD *)(a1 + 2776);
        v20 = (__int64 *)v47;
        v22 = _mm_loadh_ps((const double *)&v49.m128_u64[1]);
        goto LABEL_21;
      }
    }
    else
    {
      v57[0].m128_u64[0] = 0;
    }
    v47 = (__m128i *)(a1 + 2760);
    sub_17DFF10(a1 + 2760, 2 * v21, v15, (__int64)v20, v16, v17);
    goto LABEL_26;
  }
  v19 = *(_BYTE *)(v10 + 28) & 0x7F;
  v15 = (unsigned int)(v19 - 34);
  if ( (unsigned int)v15 <= 5 )
  {
    v26 = sub_B82220(v10);
  }
  else
  {
    if ( (unsigned int)(v19 - 40) > 6 )
      goto LABEL_4;
    v26 = sub_B82160(v10);
  }
  if ( v26 )
  {
    sub_B8CC60(v10, (__int64)v18, v27, v28, v29, v30);
  }
  else
  {
    sub_168B9F0((__int64)v57, (__int64 *)(a1 + 8), *(_DWORD *)(v10 + 24), 0x1C98u, 0);
    v48 = (*(_BYTE *)(v10 + 28) & 0x7Fu) - 34 > 5;
    v31 = sub_1587D10((__int64)v57, (int *)&v48);
    v32 = v31;
    if ( *(_BYTE *)(v31 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v31 + 32), v10, 0xAu);
    }
    else if ( *(_BYTE *)(v31 + 132) )
    {
      v37 = sub_168B9E0((_QWORD *)v31);
      v38 = *(_QWORD *)(v32 + 16);
      if ( v38 )
        v38 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v38 + 32LL))(*(_QWORD *)(v32 + 16));
      v49.m128_u64[0] = v38;
      v39 = sub_1587BC0(v37, (__int64 *)&v49, v33, v34, v35, v36);
      sub_AE9DF0((unsigned __int8 **)(*v39 + 32LL * *(unsigned int *)(v32 + 128) + 8), v10, 0xAu);
    }
    sub_15F7200(v57);
  }
}
