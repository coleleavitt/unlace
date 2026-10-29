void __fastcall sub_1806F90(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v7; // rdx
  unsigned int v8; // ecx
  __int64 v9; // r14
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // r13
  __int64 v25; // r14
  __int64 v26; // rdx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rsi
  __int64 v30; // rdi
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // r8
  __int64 v37; // r9
  unsigned __int64 v38; // rdi
  __int64 v39; // r15
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  unsigned __int64 v47; // [rsp+8h] [rbp-40h]

  v7 = *(void **)a4;
  v8 = *(_DWORD *)(a4 + 8);
  if ( v7 )
  {
    v9 = *(_QWORD *)(a3 + 40);
    if ( (v9 & 7) != 0 )
    {
      sub_1806880(a1, a3, v7, v8);
      BUG();
    }
    v11 = sub_1806880(a1, a3, v7, v8);
    v12 = sub_B36B60(
            *(_QWORD *)(a1 + 248),
            (const void *)(*(_QWORD *)((v9 & 0xFFFFFFFFFFFFFFF8LL) + 16) + 16LL),
            **(unsigned int **)((v9 & 0xFFFFFFFFFFFFFFF8LL) + 16),
            ((unsigned __int64)*(unsigned int *)(a4 + 8) << 32) | *(unsigned int *)(a4 + 8),
            0);
    sub_B8CC60(v11, v12, v13, v14, v15, v16);
    v17 = sub_B32AD0(
            *(_QWORD *)(a1 + 248),
            ((unsigned __int64)*(unsigned int *)(a4 + 8) << 32) | *(unsigned int *)(a4 + 8),
            0);
    sub_B8CC60(v11, v17, v18, v19, v20, v21);
    v22 = *(unsigned int *)(a1 + 3200);
    if ( v22 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 3204) )
    {
      sub_2237220(a1 + 3192, a1 + 3208, v22 + 1, 8);
      v22 = *(unsigned int *)(a1 + 3200);
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 3192) + 8 * v22) = v11;
    v23 = *(_QWORD *)(a1 + 248);
    ++*(_DWORD *)(a1 + 3200);
    v24 = *(_QWORD *)(a1 + 544);
    v25 = *(_QWORD *)(*(_QWORD *)(v23 + 2264) + 80LL);
    v26 = *(_QWORD *)(v25 + 72);
    if ( (v26 & 1) != 0 )
    {
      v27 = v26 & 0xFFFFFFFFFFFFFFFELL;
    }
    else
    {
      v38 = v26 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (v26 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
      {
        v29 = 0;
        goto LABEL_15;
      }
      v29 = v26 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (v26 & 2) == 0 )
      {
LABEL_13:
        if ( v29 )
          v29 += 40LL;
        goto LABEL_15;
      }
      v39 = *(_QWORD *)(v38 + 18360);
      v40 = v25 & 0xFFFFFFFFFFFFFFFBLL;
      if ( v39 )
      {
        v41 = sub_1806F50((__int64 *)(v38 + 2352), 24, 3u);
        *(_QWORD *)v41 = v39;
        *(_DWORD *)(v41 + 8) = 0;
        *(_QWORD *)(v41 + 16) = v25;
        v40 = v41 | 4;
      }
      v27 = v40 & 0xFFFFFFFFFFFFFFFELL;
      v26 = v27 | 1;
      *(_QWORD *)(v25 + 72) = v27 | 1;
    }
    v28 = v26 & 0xFFFFFFFFFFFFFFF8LL;
    v29 = v28;
    if ( v27 && (v27 & 4) != 0 )
    {
      v29 = 0;
      if ( v28 )
      {
        v30 = *(_QWORD *)v28;
        v31 = *(_DWORD *)(*(_QWORD *)v28 + 12LL);
        if ( *(_DWORD *)(v28 + 8) != v31 )
        {
          *(_DWORD *)(v28 + 8) = v31;
          v47 = v28;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v30 + 152LL))(v30, v25);
          v28 = v47;
        }
        v29 = *(_QWORD *)(v28 + 16);
        goto LABEL_13;
      }
LABEL_15:
      *(_QWORD *)(a1 + 544) = v29;
      sub_B8C080(v11, v29);
      sub_B90130(v11, *(_QWORD *)(a1 + 544), v32, v33, v34, v35);
      sub_17B7670(a1, v11, a2, 1, v36, v37);
      *(_QWORD *)(a1 + 544) = v24;
      return;
    }
    goto LABEL_13;
  }
  v42 = sub_B32AD0(*(_QWORD *)(a1 + 248), ((unsigned __int64)v8 << 32) | v8, 0);
  sub_B8CC60(a3, v42, v43, v44, v45, v46);
}
