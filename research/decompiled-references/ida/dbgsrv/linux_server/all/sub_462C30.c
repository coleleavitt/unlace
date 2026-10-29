/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_462C30
// Address: 0x0000000000462C30

//----- (0000000000462C30) ----------------------------------------------------
__int64 __fastcall sub_462C30(
        __int64 a1,
        __int64 a2,
        void *a3,
        _DWORD *a4,
        __int64 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        double a10,
        double a11,
        __m128 a12,
        __m128 a13)
{
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __m128 v22; // xmm4
  __m128 v23; // xmm5
  __int64 v24; // r15
  bool v25; // zf
  __int64 v26; // rcx
  __int64 v27; // r8
  signed __int64 v28; // r15
  void *v29; // rsi
  unsigned int v30; // r14d
  unsigned int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __m128 v35; // xmm4
  __m128 v36; // xmm5
  __int64 v37; // rax
  void *v38; // r13
  __int64 v39; // rcx
  __int64 v40; // r8
  unsigned int v41; // r12d
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __m128 v45; // xmm4
  __m128 v46; // xmm5
  __int64 v47; // rsi
  int v48; // eax
  char v49; // [rsp+0h] [rbp-78h]
  const char *v50; // [rsp+8h] [rbp-70h]
  unsigned int v51; // [rsp+1Ch] [rbp-5Ch] BYREF
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v53; // [rsp+28h] [rbp-50h]
  unsigned __int64 v54; // [rsp+38h] [rbp-40h]

  v54 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a2 + 73) & 8) == 0 )
    return sub_45C290(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
  if ( *(_BYTE *)(a2 + 112) )
  {
LABEL_3:
    *a4 = 10;
    return 1;
  }
  v17 = *(_QWORD *)(a2 + 104);
  if ( v17 != sub_47F740(a1, v17, 0) )
  {
    if ( qword_4C8250 && *(_BYTE *)(qword_4C8250 + 184) )
      sub_410EA0((int)"File truncated.\n", v17, v18, v19, v20, v21, a6, a7, a8, a9, v22, v23, a12, a13, v49);
    goto LABEL_19;
  }
  v24 = *(_QWORD *)(a2 + 88);
  v25 = *(_QWORD *)(a2 + 24) == 0;
  v50 = s1;
  v51 = v24;
  if ( !v25 )
    v50 = *(const char **)(a2 + 16);
  if ( !(unsigned __int8)sub_462B80(a1, &v51, 1u, v17, -1) )
  {
    sub_424180(
      1,
      (int)"AUTOHIDE SESSION\nHIDECANCEL\n%s %llu is incorrect, maximum possible value is %llu%s",
      v50,
      (unsigned int)v24,
      v51,
      ". Do you want to continue with the new value?");
    if ( v48 != 1 )
      sub_424670(0);
  }
  v28 = v51;
  v29 = nullptr;
  ptr = nullptr;
  v53 = 0;
  v30 = v51;
  if ( v51 )
  {
    ptr = sub_481540((__int64)&ptr, nullptr, v51, 1u);
    memset((char *)ptr + v53, 0, v28 - v53);
    *(_QWORD *)&v53 = v28;
    v29 = ptr;
  }
  v31 = sub_47F6E0(a1, v29, v28, v26, v27);
  if ( v30 != v31 )
  {
    sub_410EA0(
      (int)"Couldn't read %d bytes of compressed data (read %d).\n",
      v30,
      v31,
      v32,
      v33,
      v34,
      (__m128)0LL,
      a7,
      a8,
      a9,
      v35,
      v36,
      a12,
      a13,
      v49);
    goto LABEL_21;
  }
  v37 = sub_47F800((__int64)ptr, v53);
  v38 = (void *)sub_47F190(v37, v53, 0);
  v41 = sub_47F6E0((__int64)v38, a3, *(unsigned int *)(a2 + 8), v39, v40);
  sub_47F680(v38);
  v47 = *(unsigned int *)(a2 + 8);
  if ( (_DWORD)v47 != v41 )
  {
    sub_410EA0(
      (int)"Couldn't read %d bytes of uncompressed data (read %d).\n",
      v47,
      v41,
      v42,
      v43,
      v44,
      (__m128)0LL,
      a7,
      a8,
      a9,
      v45,
      v46,
      a12,
      a13,
      v49);
LABEL_21:
    if ( ptr )
    {
      *(_QWORD *)&v53 = 0;
      j__free(ptr);
    }
LABEL_19:
    *(_BYTE *)(a2 + 112) = 1;
    goto LABEL_3;
  }
  if ( ptr )
  {
    *(_QWORD *)&v53 = 0;
    j__free(ptr);
  }
  return 0;
}
// 462D2B: variable 'v26' is possibly undefined
// 462D2B: variable 'v27' is possibly undefined
// 462D65: variable 'v39' is possibly undefined
// 462D65: variable 'v40' is possibly undefined
// 462E79: variable 'v18' is possibly undefined
// 462E79: variable 'v19' is possibly undefined
// 462E79: variable 'v20' is possibly undefined
// 462E79: variable 'v21' is possibly undefined
// 462E79: variable 'v22' is possibly undefined
// 462E79: variable 'v23' is possibly undefined
// 462E79: variable 'v49' is possibly undefined
// 462E04: variable 'v32' is possibly undefined
// 462E04: variable 'v33' is possibly undefined
// 462E04: variable 'v34' is possibly undefined
// 462E04: variable 'v35' is possibly undefined
// 462E04: variable 'v36' is possibly undefined
// 462E50: variable 'v48' is possibly undefined
// 462E94: variable 'v42' is possibly undefined
// 462E94: variable 'v43' is possibly undefined
// 462E94: variable 'v44' is possibly undefined
// 462E94: variable 'v45' is possibly undefined
// 462E94: variable 'v46' is possibly undefined
// 4C8250: using guessed type __int64 qword_4C8250;
