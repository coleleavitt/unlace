__int64 __fastcall sub_73900(__int64 a1, __int64 a2, unsigned __int64 a3, double a4, double a5, double a6, double a7)
{
  __int64 v9; // rcx
  __int64 v10; // rax
  __m128i v11; // xmm0
  __int64 (__fastcall *v13)(__int64); // rax
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64); // rdx
  __int64 v16; // rdi
  __int64 (__fastcall *v17)(__int64); // rax
  char v18; // al
  _QWORD v19[2]; // [rsp+0h] [rbp-68h] BYREF
  char v20; // [rsp+10h] [rbp-58h]
  __int64 v21; // [rsp+20h] [rbp-48h] BYREF
  __m128i v22; // [rsp+28h] [rbp-40h] BYREF
  unsigned __int64 v23; // [rsp+38h] [rbp-30h]

  v23 = __readfsqword(0x28u);
  if ( a3 == -1 )
  {
    sub_19A90((__int64)&v21, (__int64)"[%a,%a): bad range", a4, a5);
    v10 = v21;
    v11 = _mm_loadu_si128(&v22);
    goto LABEL_6;
  }
  sub_74B30(v19, a2 + 16, a3);
  if ( !v20 )
  {
    sub_19A90((__int64)&v21, (__int64)"[%a,%a): no associated segment", a4, a5);
    v10 = v21;
    v11 = _mm_loadu_si128(&v22);
    goto LABEL_6;
  }
  if ( a3 < v19[1] && a3 >= v19[0] )
  {
    v13 = **(__int64 (__fastcall ***)(__int64))a2;
    if ( v13 == sub_15B80 )
    {
      v14 = *(_QWORD *)(a2 + 8);
      v15 = **(__int64 (__fastcall ***)(__int64))v14;
      if ( v15 != v13 )
        goto LABEL_14;
      v16 = *(_QWORD *)(v14 + 8);
      v17 = **(__int64 (__fastcall ***)(__int64))v16;
      if ( v17 != v15 )
      {
        v18 = ((__int64 (__fastcall *)(__int64, unsigned __int64, __int64 (__fastcall *)(__int64), __int64, _QWORD))v17)(
                v16,
                a3,
                v15,
                v9,
                v19[0]);
        goto LABEL_13;
      }
      v14 = *(_QWORD *)(v16 + 8);
      v15 = **(__int64 (__fastcall ***)(__int64))v14;
      if ( v15 == v17 )
        v18 = (***(__int64 (__fastcall ****)(_QWORD, unsigned __int64, __int64 (__fastcall *)(__int64), __int64, _QWORD))(v14 + 8))(
                *(_QWORD *)(v14 + 8),
                a3,
                v15,
                v9,
                v19[0]);
      else
LABEL_14:
        v18 = ((__int64 (__fastcall *)(__int64, unsigned __int64, __int64 (__fastcall *)(__int64), __int64, _QWORD))v15)(
                v14,
                a3,
                v15,
                v9,
                v19[0]);
    }
    else
    {
      v18 = ((__int64 (__fastcall *)(__int64, unsigned __int64, __int64 (__fastcall *)(__int64), __int64, _QWORD))v13)(
              a2,
              a3,
              sub_15B80,
              v9,
              v19[0]);
    }
LABEL_13:
    *(_BYTE *)a1 = v18;
    *(_BYTE *)(a1 + 24) = 0;
    return a1;
  }
  sub_19A90((__int64)&v21, (__int64)"[%a,%a): does not fit in segment [%a,%a)", a4, a5, a6, a7);
  v10 = v21;
  v11 = _mm_loadu_si128(&v22);
LABEL_6:
  *(_QWORD *)a1 = v10;
  *(_BYTE *)(a1 + 24) = 1;
  *(__m128i *)(a1 + 8) = v11;
  return a1;
}
