/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4448B0
// Address: 0x00000000004448B0

//----- (00000000004448B0) ----------------------------------------------------
__int64 __fastcall sub_4448B0(
        _QWORD *a1,
        __int64 a2,
        const char **a3,
        __m128i **a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  int v12; // ebp
  __m128i *v13; // r15
  unsigned __int64 v17; // rsi
  __int64 v18; // rax
  double v19; // xmm4_8
  double v20; // xmm5_8
  bool v22; // zf
  const char *v23; // r12
  __int64 v24; // rax
  const char *v25; // rdx
  const char *v26; // rsi
  double v27; // xmm4_8
  double v28; // xmm5_8
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  __int128 v30; // [rsp+8h] [rbp-50h]
  unsigned __int64 v31; // [rsp+18h] [rbp-40h]

  v12 = *(_DWORD *)(a2 + 52);
  v13 = *a4;
  v31 = __readfsqword(0x28u);
  if ( v12 )
  {
    v17 = v12;
    while ( 1 )
    {
      v18 = sub_439C70(a1[1], v17);
      if ( *(_DWORD *)(v18 + 80) != -1 )
        break;
      v17 = *(int *)(v18 + 48);
      if ( !(_DWORD)v17 )
        goto LABEL_6;
    }
    *a4 = nullptr;
    return sub_443A40(a1, a2, *(_DWORD *)(v18 + 80), (__int64)a3, v13, 1, a5, a6, a7, a8, v19, v20, a11, a12);
  }
  else
  {
LABEL_6:
    v22 = a3[1] == nullptr;
    ptr = nullptr;
    v23 = s1;
    v30 = 0;
    if ( !v22 )
      v23 = *a3;
    v24 = sub_439C70(a1[1], v12);
    v25 = s1;
    if ( *(_QWORD *)(v24 + 64) )
      v25 = *(const char **)(v24 + 56);
    sub_4172B0((__int64)&ptr, "%s.%s", v25, v23);
    v26 = s1;
    if ( (_QWORD)v30 )
      v26 = (const char *)ptr;
    sub_479F30(0, v26);
    sub_479EB0(0x602u);
    sub_4446F0(a1, 0.0, a6, a7, a8, v27, v28, a11, a12);
    if ( ptr )
    {
      *(_QWORD *)&v30 = 0;
      j__free(ptr);
    }
    return 0;
  }
}
// 444946: variable 'v19' is possibly undefined
// 444946: variable 'v20' is possibly undefined
// 4449C8: variable 'v27' is possibly undefined
// 4449C8: variable 'v28' is possibly undefined
