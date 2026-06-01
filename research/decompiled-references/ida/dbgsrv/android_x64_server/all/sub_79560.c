/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_79560
// Address: 0x0000000000079560

//----- (0000000000079560) ----------------------------------------------------
void __fastcall __noreturn sub_79560(__int64 a1, __int64 a2, __int64 a3, int a4, double a5, __m128 a6)
{
  double v9; // xmm0_8
  __int64 v10; // rdx
  char *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int128 v14; // xmm0
  __int128 v15; // xmm0
  __int128 v16; // xmm0
  __int128 v17; // xmm0
  __int64 v18; // rcx
  __int128 v19; // xmm0
  void *v20; // rdi
  void *v21; // rdi
  char *v22; // rdi
  unsigned __int64 v23; // r15
  __int64 v24; // rbx
  unsigned __int64 i; // rbp
  __int64 v26; // rax
  bool v27; // zf
  __int128 v28; // [rsp+0h] [rbp-88h]
  __int128 v29; // [rsp+0h] [rbp-88h]
  __int128 v30; // [rsp+0h] [rbp-88h]
  __int128 v31; // [rsp+0h] [rbp-88h]
  __int128 v32; // [rsp+0h] [rbp-88h]
  __int128 v33; // [rsp+10h] [rbp-78h]
  __int128 v34; // [rsp+10h] [rbp-78h]
  __int128 v35; // [rsp+10h] [rbp-78h]
  __m128 v36; // [rsp+10h] [rbp-78h]
  __m128 v37; // [rsp+10h] [rbp-78h]
  void *ptr[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v39; // [rsp+30h] [rbp-58h]
  char v40[8]; // [rsp+40h] [rbp-48h] BYREF
  void *v41; // [rsp+48h] [rbp-40h]
  __int128 v42; // [rsp+50h] [rbp-38h]

  v40[0] = 2;
  v9 = 0.0;
  v42 = 0;
  v41 = (void *)a4;
  *(_OWORD *)ptr = 0;
  v39 = 0;
  sub_773D0((__int64)ptr, a4, 0.0, a6);
  if ( a4 > 0 )
  {
    v11 = (char *)ptr[0];
    v12 = a4 & 3;
    if ( (unsigned __int64)(unsigned int)a4 - 1 < 3 )
    {
      v10 = 0;
      if ( (a4 & 3) == 0 )
        goto LABEL_10;
      goto LABEL_8;
    }
    v10 = 0;
    v13 = 96;
    do
    {
      v33 = *(_OWORD *)&v11[v13 - 80];
      v28 = *(_OWORD *)&v11[v13 - 96];
      v14 = *(_OWORD *)(a3 + v13 - 96);
      *(_OWORD *)&v11[v13 - 80] = *(_OWORD *)(a3 + v13 - 80);
      *(_OWORD *)&v11[v13 - 96] = v14;
      *(_OWORD *)(a3 + v13 - 80) = v33;
      *(_OWORD *)(a3 + v13 - 96) = v28;
      v34 = *(_OWORD *)&v11[v13 - 48];
      v29 = *(_OWORD *)&v11[v13 - 64];
      v15 = *(_OWORD *)(a3 + v13 - 64);
      *(_OWORD *)&v11[v13 - 48] = *(_OWORD *)(a3 + v13 - 48);
      *(_OWORD *)&v11[v13 - 64] = v15;
      *(_OWORD *)(a3 + v13 - 48) = v34;
      *(_OWORD *)(a3 + v13 - 64) = v29;
      v35 = *(_OWORD *)&v11[v13 - 16];
      v30 = *(_OWORD *)&v11[v13 - 32];
      v16 = *(_OWORD *)(a3 + v13 - 32);
      *(_OWORD *)&v11[v13 - 16] = *(_OWORD *)(a3 + v13 - 16);
      *(_OWORD *)&v11[v13 - 32] = v16;
      *(_OWORD *)(a3 + v13 - 16) = v35;
      *(_OWORD *)(a3 + v13 - 32) = v30;
      v36 = *(__m128 *)&v11[v13 + 16];
      v31 = *(_OWORD *)&v11[v13];
      v17 = *(_OWORD *)(a3 + v13);
      *(_OWORD *)&v11[v13 + 16] = *(_OWORD *)(a3 + v13 + 16);
      *(_OWORD *)&v11[v13] = v17;
      v9 = *(double *)&v31;
      a6 = v36;
      *(__m128 *)(a3 + v13 + 16) = v36;
      *(_OWORD *)(a3 + v13) = v31;
      v10 += 4;
      v13 += 128;
    }
    while ( (unsigned int)a4 - v12 != v10 );
    if ( (a4 & 3) != 0 )
    {
LABEL_8:
      v10 *= 32;
      v18 = -v12;
      do
      {
        v37 = *(__m128 *)&v11[v10 + 16];
        v32 = *(_OWORD *)&v11[v10];
        v19 = *(_OWORD *)(a3 + v10);
        *(_OWORD *)&v11[v10 + 16] = *(_OWORD *)(a3 + v10 + 16);
        *(_OWORD *)&v11[v10] = v19;
        v9 = *(double *)&v32;
        a6 = v37;
        *(__m128 *)(a3 + v10 + 16) = v37;
        *(_OWORD *)(a3 + v10) = v32;
        v10 += 32;
        ++v18;
      }
      while ( v18 );
    }
  }
LABEL_10:
  v20 = *(void **)(a1 + 48);
  if ( v20 )
  {
    *(_QWORD *)(a1 + 56) = 0;
    qfree(v20);
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 64) = 0;
  }
  v21 = *(void **)(a1 + 72);
  if ( v21 )
  {
    *(_QWORD *)(a1 + 80) = 0;
    qfree(v21);
    *(_QWORD *)(a1 + 72) = 0;
    *(_QWORD *)(a1 + 88) = 0;
  }
  v22 = *(char **)(a1 + 24);
  if ( v22 )
  {
    v23 = *(_QWORD *)(a1 + 32);
    if ( v23 )
    {
      v24 = 0;
      for ( i = 1; ; ++i )
      {
        free_idcv(&v22[v24], v9, a6);
        if ( i >= v23 )
          break;
        v22 = *(char **)(a1 + 24);
        v24 += 32;
      }
      v22 = *(char **)(a1 + 24);
    }
    *(_QWORD *)(a1 + 32) = 0;
    qfree(v22);
    *(_QWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 40) = 0;
  }
  v26 = *(_QWORD *)(a1 + 8);
  v27 = (*(_DWORD *)(v26 + 120))-- == 1;
  if ( v27 && off_154A38 )
    off_154A38();
  *(_DWORD *)a1 = 0;
  (*(void (__fastcall **)(void *, char *, __int64))(a2 + 8))(ptr[0], v40, v10);
  if ( !(_BYTE)under_debugger )
    interr(291);
  BUG();
}
// 7982E: variable 'v10' is possibly undefined
// 5F3B0: using guessed type __int64 __fastcall sub_5F3B0();
// 154A38: using guessed type __int64 (__fastcall *off_154A38)();
// 158B40: using guessed type __int64 under_debugger;
