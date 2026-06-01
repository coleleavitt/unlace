__int64 __fastcall sub_209A570(__int64 a1, __int64 a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned int v7; // ecx
  __int64 *v8; // rsi
  __int64 v9; // rdi
  unsigned __int64 v10; // r13
  _QWORD *v11; // rdx
  __int64 v12; // r13
  int v14; // esi
  int v15; // r10d
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // r9
  bool v20; // zf
  __int64 v21; // r9
  __int64 *v22; // rax
  __int64 v23; // rcx
  int v24; // edx
  __int64 v25; // rdx
  int v26; // esi
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // [rsp+0h] [rbp-1A8h]
  __int64 v33; // [rsp+0h] [rbp-1A8h]
  __int64 v34; // [rsp+0h] [rbp-1A8h]
  __int64 v35; // [rsp+0h] [rbp-1A8h]
  __int64 v36[2]; // [rsp+8h] [rbp-1A0h] BYREF
  __int64 v37; // [rsp+18h] [rbp-190h] BYREF
  __int64 *v38; // [rsp+20h] [rbp-188h] BYREF
  __int64 *v39; // [rsp+28h] [rbp-180h] BYREF
  void *ptr[2]; // [rsp+30h] [rbp-178h] BYREF
  _BYTE v41[128]; // [rsp+40h] [rbp-168h] BYREF
  __m128 v42; // [rsp+C0h] [rbp-E8h] BYREF
  __int64 v43; // [rsp+D0h] [rbp-D8h] BYREF
  char *v44; // [rsp+110h] [rbp-98h] BYREF
  __int64 v45; // [rsp+118h] [rbp-90h]
  __int64 v46; // [rsp+120h] [rbp-88h] BYREF
  char *v47; // [rsp+130h] [rbp-78h] BYREF
  __int64 v48; // [rsp+138h] [rbp-70h]
  __int64 v49; // [rsp+140h] [rbp-68h] BYREF
  char *v50; // [rsp+150h] [rbp-58h] BYREF
  __int64 v51; // [rsp+158h] [rbp-50h]
  char v52; // [rsp+160h] [rbp-48h] BYREF

  v3 = (__int64 *)(a1 + 632);
  v4 = *(unsigned int *)(a1 + 648);
  v5 = *(_QWORD *)(a1 + 632);
  v36[0] = a2;
  if ( (_DWORD)v4 )
  {
    v7 = (v4 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    v8 = (__int64 *)(v5 + 16LL * v7);
    v9 = *v8;
    if ( a2 == *v8 )
    {
LABEL_3:
      sub_2097C10(&v42, v8, (_QWORD *)(16 * v4 + v5), (__int64)v3, 1);
      v10 = v42.m128_u64[0];
      goto LABEL_4;
    }
    v14 = 1;
    if ( v9 != -4096 )
    {
      do
      {
        v15 = v14 + 1;
        v7 = (v4 - 1) & (v14 + v7);
        v8 = (__int64 *)(v5 + 16LL * v7);
        v16 = *v8;
        if ( a2 == *v8 )
          goto LABEL_3;
        v14 = v15;
      }
      while ( v16 != -4096 );
    }
  }
  sub_2097C10(&v42, (_QWORD *)(v5 + 16LL * (unsigned int)v4), (_QWORD *)(v5 + 16LL * (unsigned int)v4), (__int64)v3, 1);
  v10 = v42.m128_u64[0];
LABEL_4:
  v11 = (_QWORD *)(*(_QWORD *)(a1 + 632) + 16LL * *(unsigned int *)(a1 + 648));
  sub_2097C10(&v42, v11, v11, (__int64)v3, 1);
  if ( v42.m128_u64[0] != v10 )
    return *(_QWORD *)(v10 + 8);
  v52 = 0;
  v42.m128_u64[0] = (unsigned __int64)&v43;
  v42.m128_u64[1] = 0x800000000LL;
  v44 = (char *)&v46;
  v45 = 0x200000000LL;
  v48 = 0x200000000LL;
  v50 = &v52;
  v17 = *(_QWORD *)v36[0];
  v47 = (char *)&v49;
  v51 = 0;
  (*(void (__fastcall **)(__int64, __m128 *))(v17 + 80))(v36[0], &v42);
  ptr[0] = v41;
  ptr[1] = (void *)0x2000000000LL;
  sub_2095500((__int64)ptr, (__int64)&v42);
  v37 = 0;
  v18 = sub_2223360(a1 + 520, ptr, &v37, off_2BE61F0);
  if ( v18 )
  {
    v12 = v18 + 8;
  }
  else
  {
    v29 = *(_QWORD *)(a1 + 536);
    *(_QWORD *)(a1 + 616) += 176LL;
    v30 = (v29 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( *(_QWORD *)(a1 + 544) >= (unsigned __int64)(v30 + 176) && v29 )
      *(_QWORD *)(a1 + 536) = v30 + 176;
    else
      v30 = sub_986170(a1 + 536, 176, 176, 3, v30, v19);
    *(_QWORD *)v30 = 0;
    v12 = v30 + 8;
    *(_QWORD *)(v30 + 8) = v30 + 24;
    *(_QWORD *)(v30 + 16) = 0x800000000LL;
    if ( v42.m128_i32[2] )
    {
      v35 = v30;
      sub_20964D0((void **)(v30 + 8), (char **)&v42);
      v30 = v35;
    }
    *(_QWORD *)(v30 + 88) = v30 + 104;
    *(_QWORD *)(v30 + 96) = 0x200000000LL;
    if ( (_DWORD)v45 )
    {
      v34 = v30;
      sub_20964D0((void **)(v30 + 88), &v44);
      v30 = v34;
    }
    *(_QWORD *)(v30 + 120) = v30 + 136;
    *(_QWORD *)(v30 + 128) = 0x200000000LL;
    if ( (_DWORD)v48 )
    {
      v33 = v30;
      sub_20964D0((void **)(v30 + 120), &v47);
      v30 = v33;
    }
    *(_QWORD *)(v30 + 160) = 0;
    *(_QWORD *)(v30 + 152) = v30 + 168;
    if ( (_DWORD)v51 )
    {
      v32 = v30;
      sub_20964D0((void **)(v30 + 152), &v50);
      v30 = v32;
    }
    v31 = v37;
    *(_BYTE *)(v30 + 168) = v52;
    sub_2223210(a1 + 520, v30, v31, off_2BE61F0);
  }
  v20 = (unsigned __int8)sub_20967B0(v3, v36, &v38) == 0;
  v22 = v38;
  if ( v20 )
  {
    v23 = *(unsigned int *)(a1 + 648);
    v24 = *(_DWORD *)(a1 + 640);
    v39 = v38;
    v25 = (unsigned int)(v24 + 1);
    v26 = 2 * v23;
    v27 = (unsigned int)(4 * v25);
    if ( (unsigned int)v27 < 3 * (int)v23 )
    {
      if ( (int)v23 - *(_DWORD *)(a1 + 644) - (int)v25 > (unsigned int)v23 >> 3 )
      {
LABEL_19:
        v20 = *v22 == -4096;
        *(_DWORD *)(a1 + 640) = v25;
        if ( !v20 )
          --*(_DWORD *)(a1 + 644);
        v28 = v36[0];
        v22[1] = 0;
        *v22 = v28;
        goto LABEL_14;
      }
      v26 = v23;
    }
    sub_2099540((__int64)v3, v26, v25, v23, v27, v21);
    sub_20967B0(v3, v36, &v39);
    LODWORD(v25) = *(_DWORD *)(a1 + 640) + 1;
    v22 = v39;
    goto LABEL_19;
  }
LABEL_14:
  v22[1] = v12;
  if ( ptr[0] != v41 )
    free(ptr[0]);
  sub_20954A0((__int64)&v42);
  return v12;
}
