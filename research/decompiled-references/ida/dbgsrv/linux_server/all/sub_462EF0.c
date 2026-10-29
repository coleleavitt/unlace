/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_462EF0
// Address: 0x0000000000462EF0

//----- (0000000000462EF0) ----------------------------------------------------
__int64 __fastcall sub_462EF0(
        __int64 a1,
        char **a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        _QWORD *a12,
        __int64 a13,
        _QWORD *a14)
{
  _DWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v17; // rsi
  __int64 v18; // rdx
  char *v20; // r14
  char *v21; // r15
  __int64 v22; // rax
  const void **v23; // r13
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __m128 v29; // xmm4
  __m128 v30; // xmm5
  void *v31; // r13
  __int64 v32; // rbp
  __int64 v33; // rcx
  __int64 v34; // r8
  double v35; // xmm4_8
  double v36; // xmm5_8
  unsigned __int64 v37; // r12
  unsigned __int64 v38; // rdx
  char *v39; // rsi
  size_t v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __m128 v44; // xmm4
  __m128 v45; // xmm5
  __int64 v46; // rsi
  unsigned int v47; // ebx
  char *v49; // rsi
  char *v50; // rax
  char v51; // [rsp+0h] [rbp-58h]
  size_t n; // [rsp+8h] [rbp-50h]
  int v53; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v54; // [rsp+18h] [rbp-40h]

  v14 = (_DWORD *)*a14;
  v15 = a14[1];
  v54 = __readfsqword(0x28u);
  v17 = *(unsigned __int16 *)(a1 + 8);
  v18 = (__int64)&v14[v15];
  if ( v14 == (_DWORD *)v18 )
    goto LABEL_27;
  while ( (_DWORD)v17 != *v14 )
  {
    if ( (_DWORD *)v18 == ++v14 )
      goto LABEL_27;
  }
  if ( (_DWORD *)v18 == v14 )
  {
LABEL_27:
    v47 = -1;
    sub_410EA0(
      (int)"Bad DWARF section index: %uh.\n",
      v17,
      v18,
      (__int64)a12,
      a13,
      (__int64)a14,
      a3,
      a4,
      a5,
      a6,
      a7,
      a8,
      a9,
      a10,
      v51);
    return v47;
  }
  v20 = nullptr;
  v21 = (char *)s1;
  v22 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a12 + 16LL))(*a12);
  v23 = (const void **)v22;
  if ( *(_QWORD *)(v22 + 8) )
  {
    n = *(_QWORD *)(v22 + 8);
    v21 = (char *)sub_4814F0(n);
    memcpy(v21, *v23, n);
    v20 = v21;
  }
  v24 = sub_47F560(v21, 0);
  v31 = (void *)v24;
  if ( v24 )
  {
    v32 = a12[13] + 120LL * *(unsigned __int16 *)(a1 + 8);
    sub_47F740(v24, *(_QWORD *)(v32 + 48), 0);
    v37 = *(unsigned int *)(v32 + 8);
    v38 = (unsigned __int64)a2[1];
    if ( v38 < v37 )
    {
      v49 = *a2;
      if ( (unsigned __int64)a2[2] < v37 )
      {
        v50 = (char *)sub_481540((__int64)a2, v49, *(unsigned int *)(v32 + 8), 1u);
        *a2 = v50;
        v38 = (unsigned __int64)a2[1];
        v49 = v50;
      }
      memset(&v49[v38], 0, v37 - v38);
      a2[1] = (char *)v37;
      v39 = *a2;
      if ( (*(_BYTE *)(v32 + 73) & 8) == 0 )
      {
LABEL_13:
        v40 = sub_47F6E0((__int64)v31, v39, *(unsigned int *)(v32 + 8), v33, v34);
        v46 = *(unsigned int *)(v32 + 8);
        if ( v40 != v46 )
        {
LABEL_14:
          sub_410EA0(
            (int)"Cannot read %u bytes (got %zu).\n",
            v46,
            v40,
            v41,
            v42,
            v43,
            a3,
            a4,
            a5,
            a6,
            v44,
            v45,
            a9,
            a10,
            v51);
          v47 = -1;
LABEL_15:
          sub_47F680(v31);
          goto LABEL_16;
        }
LABEL_21:
        v47 = 0;
        goto LABEL_15;
      }
    }
    else
    {
      if ( v37 != v38 )
        a2[1] = (char *)v37;
      v39 = *a2;
      if ( (*(_BYTE *)(v32 + 73) & 8) == 0 )
        goto LABEL_13;
    }
    if ( (unsigned int)sub_462C30((__int64)v31, v32, v39, &v53, v34, a3, a4, a5, a6, v35, v36, a9, a10) )
    {
      v40 = 0;
      v46 = *(unsigned int *)(v32 + 8);
      if ( *(_DWORD *)(v32 + 8) )
        goto LABEL_14;
    }
    goto LABEL_21;
  }
  sub_410EA0((int)"Invalid file path: %s.\n", (__int64)v21, v25, v26, v27, v28, a3, a4, a5, a6, v29, v30, a9, a10, v51);
  v47 = -1;
LABEL_16:
  if ( v20 )
    j__free(v20);
  return v47;
}
// 462FF2: variable 'v33' is possibly undefined
// 462FF2: variable 'v34' is possibly undefined
// 46300E: variable 'v41' is possibly undefined
// 46300E: variable 'v42' is possibly undefined
// 46300E: variable 'v43' is possibly undefined
// 46300E: variable 'v44' is possibly undefined
// 46300E: variable 'v45' is possibly undefined
// 46300E: variable 'v51' is possibly undefined
// 463066: variable 'v35' is possibly undefined
// 463066: variable 'v36' is possibly undefined
// 4630E4: variable 'v25' is possibly undefined
// 4630E4: variable 'v26' is possibly undefined
// 4630E4: variable 'v27' is possibly undefined
// 4630E4: variable 'v28' is possibly undefined
// 4630E4: variable 'v29' is possibly undefined
// 4630E4: variable 'v30' is possibly undefined
