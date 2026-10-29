__int64 __fastcall sub_31CF0(
        __int64 a1,
        unsigned __int8 *a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v11; // r13
  __int64 v13; // rsi
  unsigned int v14; // r14d
  __int64 v15; // r15
  void *(__fastcall *v16)(__int64, unsigned __int8, __int64, __m128, __m128, __m128, __m128, double, double, __m128, __m128); // rax
  __int64 v17; // rax
  void *v18; // rbp
  int v19; // eax
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // r12
  void *v23; // rdi
  double v25; // xmm4_8
  double v26; // xmm5_8
  __int64 v27; // [rsp+8h] [rbp-60h]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int64 v29; // [rsp+18h] [rbp-50h]
  unsigned __int64 v30; // [rsp+28h] [rbp-40h]

  v11 = *(_QWORD *)(a1 + 296);
  v30 = __readfsqword(0x28u);
  sub_98400(v11);
  v13 = a2[8];
  *(_BYTE *)(a1 + 312) = v13;
  sub_6E490(&ptr, v13);
  (*(void (__fastcall **)(unsigned __int8 *, void **, __int64))(*(_QWORD *)a2 + 16LL))(a2, &ptr, 8);
  v14 = a2[8];
  v15 = 1705691;
  v16 = *(void *(__fastcall **)(__int64, unsigned __int8, __int64, __m128, __m128, __m128, __m128, double, double, __m128, __m128))(*(_QWORD *)a1 + 16LL);
  if ( v16 == sub_31C20 )
  {
    do
    {
      while ( 1 )
      {
        v17 = sub_6CF10(a1, v14, &ptr);
        v18 = (void *)v17;
        if ( !v17 )
          break;
        if ( !*(_BYTE *)(a1 + 69) )
          goto LABEL_8;
        v19 = *(unsigned __int8 *)(v17 + 4);
        if ( (_BYTE)v19 != 12 )
        {
          v20 = (unsigned int)(v19 - 91);
          if ( (unsigned __int8)v20 > 0x14u || !_bittest64(&v15, v20) )
            goto LABEL_8;
        }
        v21 = sub_6D410(a1, v18);
        if ( !v21 )
          goto LABEL_8;
        v27 = v21;
        j__free(v18);
        sub_301E0(a1, v27, a3, a4, a5, a6, v25, v26, a9, a10);
        v29 = 0;
      }
    }
    while ( v29 && *(_QWORD *)(a1 + 256) && (unsigned __int8)sub_31530(a1) );
    v22 = 0;
  }
  else
  {
    v18 = (void *)((__int64 (__fastcall *)(__int64, _QWORD, void **))v16)(a1, a2[8], &ptr);
    if ( v18 )
    {
LABEL_8:
      v22 = sub_6D410(a1, v18);
      j__free(v18);
    }
    else
    {
      v22 = 0;
    }
  }
  v23 = ptr;
  *(_BYTE *)(a1 + 312) = 10;
  if ( v23 )
  {
    v29 = 0;
    j__free(v23);
  }
  sub_98450(v11);
  return v22;
}

