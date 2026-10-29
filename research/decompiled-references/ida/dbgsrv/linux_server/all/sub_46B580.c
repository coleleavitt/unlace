/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46B580
// Address: 0x000000000046B580

//----- (000000000046B580) ----------------------------------------------------
__int64 __fastcall sub_46B580(
        __int64 *a1,
        __int64 *a2,
        int a3,
        __int64 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int8 *(__fastcall *v16)(__int64, unsigned __int8, __int64 *, __m128, __m128, __m128, __m128, double, double, __m128, __m128); // rax
  char *v17; // rbx
  __int64 v18; // rax
  char *v19; // r13
  char *v20; // rax
  size_t v22; // rax
  size_t v23; // r14
  void *v24; // rdi
  size_t v25; // r15
  void *v26; // rax
  char *s; // [rsp+0h] [rbp-58h] BYREF
  char *v28; // [rsp+8h] [rbp-50h]
  unsigned __int64 v29; // [rsp+18h] [rbp-40h]

  v13 = *a1;
  v14 = *a2;
  v29 = __readfsqword(0x28u);
  v16 = *(unsigned __int8 *(__fastcall **)(__int64, unsigned __int8, __int64 *, __m128, __m128, __m128, __m128, double, double, __m128, __m128))(v13 + 16);
  if ( v16 == sub_45B5D0 )
    v17 = (char *)sub_46B350((__int64)a1, *(_BYTE *)(v14 + 4), a2, 0, a5, a6, a7, a8, a9, a10, a11, a12);
  else
    v17 = (char *)((__int64 (__fastcall *)(__int64 *, _QWORD, __int64 *))v16)(a1, *(unsigned __int8 *)(v14 + 4), a2);
  if ( v17 )
  {
    v18 = *(unsigned int *)v17;
    s = v17 + 5;
    v28 = &v17[v18 + 5];
    a3 = sub_47FD50((unsigned __int64 *)&s, (unsigned __int64)v28);
    if ( a3 < 0 && a4 )
    {
      v19 = s;
      v20 = s;
      do
      {
        if ( v20 >= v28 )
          goto LABEL_9;
        ++v20;
      }
      while ( *(v20 - 1) );
      s = v20;
      if ( !v19 || (v22 = strlen(v19), (v23 = v22) == 0) )
      {
LABEL_9:
        *(_QWORD *)(a4 + 8) = 0;
        goto LABEL_10;
      }
      v24 = *(void **)a4;
      v25 = v22 + 1;
      if ( *(_QWORD *)(a4 + 16) < v22 + 1 )
      {
        v26 = sub_481540(a4, *(void **)a4, v22 + 1, 1u);
        *(_QWORD *)a4 = v26;
        v24 = v26;
      }
      *(_QWORD *)(a4 + 8) = v25;
      memmove(v24, v19, v23);
      *(_BYTE *)(*(_QWORD *)a4 + v23) = 0;
    }
LABEL_10:
    j__free(v17);
  }
  return (unsigned int)a3;
}
