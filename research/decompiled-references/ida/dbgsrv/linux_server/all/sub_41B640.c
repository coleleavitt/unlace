/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41B640
// Address: 0x000000000041B640

//----- (000000000041B640) ----------------------------------------------------
__int64 __fastcall sub_41B640(
        __int64 a1,
        int *a2,
        _BYTE *a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __int64 v14; // r12
  int v15; // eax
  double v16; // xmm4_8
  double v17; // xmm5_8
  double v18; // xmm4_8
  double v19; // xmm5_8
  int v20; // ecx
  int v21; // eax
  double v22; // xmm4_8
  double v23; // xmm5_8
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // rcx
  __int64 v28; // rdx
  _DWORD *v30; // rax
  _DWORD *v31; // rdx

  if ( a3 )
    *a3 = 0;
  v14 = a1 + 1216;
  while ( 1 )
  {
    v15 = sub_4235B0(a1, a2 + 1, -1, 0);
    *a2 = v15;
    if ( v15 <= 0 )
    {
      if ( *(_DWORD *)(a1 + 1408) && (unsigned __int8)sub_410320(a1, a2, a2 + 1) )
      {
        sub_41B540(a1, a3, (unsigned int *)a2, a4, a5, a6, a7, v18, v19, a10, a11);
        return 1;
      }
      v20 = a2[2];
      if ( !v20 )
        return 0;
      v21 = sub_4235B0(a1, a2 + 1, -1, v20);
      *a2 = v21;
      if ( v21 <= 0 )
        return 0;
    }
    sub_41B540(a1, a3, (unsigned int *)a2, a4, a5, a6, a7, v16, v17, a10, a11);
    v24 = *(_QWORD *)(a1 + 1224);
    v25 = (unsigned int)*a2;
    v26 = a1 + 1216;
    if ( v24 )
    {
      do
      {
        while ( 1 )
        {
          v27 = *(_QWORD *)(v24 + 16);
          v28 = *(_QWORD *)(v24 + 24);
          if ( (int)v25 > *(_DWORD *)(v24 + 32) )
            break;
          v26 = v24;
          v24 = *(_QWORD *)(v24 + 16);
          if ( !v27 )
            goto LABEL_14;
        }
        v24 = *(_QWORD *)(v24 + 24);
      }
      while ( v28 );
LABEL_14:
      if ( v14 != v26 && (int)v25 >= *(_DWORD *)(v26 + 32) )
        return 1;
    }
    v30 = *(_DWORD **)(a1 + 1256);
    v31 = &v30[*(_QWORD *)(a1 + 1264)];
    if ( v30 == v31 )
      goto LABEL_24;
    while ( (_DWORD)v25 != *v30 )
    {
      if ( v31 == ++v30 )
        goto LABEL_24;
    }
    if ( v31 == v30 )
LABEL_24:
      sub_412DB0((_QWORD *)a1, v25, a2[1], a4, a5, a6, a7, v22, v23, a10, a11);
    else
      ptrace(PTRACE_CONT, v25, 0, 0);
    a2[2] = 0;
  }
}
// 41B6D7: variable 'v16' is possibly undefined
// 41B6D7: variable 'v17' is possibly undefined
// 41B796: variable 'v22' is possibly undefined
// 41B796: variable 'v23' is possibly undefined
// 41B7B1: variable 'v18' is possibly undefined
// 41B7B1: variable 'v19' is possibly undefined
