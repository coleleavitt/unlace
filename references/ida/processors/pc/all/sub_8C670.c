__int64 __fastcall sub_8C670(__int64 a1, _QWORD *a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rcx
  __int64 v9; // rax
  __m128i v10; // xmm0
  __int64 (__fastcall *v12)(__int64); // rax
  _QWORD *v13; // rdi
  __int64 (__fastcall *v14)(__int64); // rdx
  _QWORD *v15; // rdi
  __int64 (__fastcall *v16)(__int64); // rax
  unsigned int v17; // eax
  __int64 v18; // rax
  _QWORD v19[2]; // [rsp+0h] [rbp-68h] BYREF
  char v20; // [rsp+10h] [rbp-58h]
  __int64 v21; // [rsp+20h] [rbp-48h] BYREF
  __m128i v22; // [rsp+28h] [rbp-40h] BYREF
  unsigned __int64 v23; // [rsp+38h] [rbp-30h]

  v23 = __readfsqword(0x28u);
  if ( a3 >= 0xFFFFFFFFFFFFFFFCLL )
  {
    sub_3C7B0((__int64)&v21);
    v9 = v21;
    v10 = _mm_loadu_si128(&v22);
    goto LABEL_6;
  }
  sub_8C820(v19, a2 + 2, a3, a4, a5, a6);
  if ( v20 && a3 + 3 < v19[1] && a3 + 3 >= v19[0] )
  {
    v12 = *(__int64 (__fastcall **)(__int64))(*a2 + 16LL);
    if ( v12 == sub_3BA60 )
    {
      v13 = (_QWORD *)a2[1];
      v14 = *(__int64 (__fastcall **)(__int64))(*v13 + 16LL);
      if ( v14 != v12 )
        goto LABEL_14;
      v15 = (_QWORD *)v13[1];
      v16 = *(__int64 (__fastcall **)(__int64))(*v15 + 16LL);
      if ( v16 != v14 )
      {
        v17 = ((__int64 (__fastcall *)(_QWORD *, unsigned __int64, __int64 (__fastcall *)(__int64), __int64, _QWORD))v16)(
                v15,
                a3,
                v14,
                v8,
                v19[0]);
        goto LABEL_13;
      }
      v13 = (_QWORD *)v15[1];
      v14 = *(__int64 (__fastcall **)(__int64))(*v13 + 16LL);
      if ( v14 == v16 )
        v17 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, __int64 (__fastcall *)(__int64), __int64, _QWORD))(*(_QWORD *)v13[1] + 16LL))(
                v13[1],
                a3,
                v14,
                v8,
                v19[0]);
      else
LABEL_14:
        v17 = ((__int64 (__fastcall *)(_QWORD *, unsigned __int64, __int64 (__fastcall *)(__int64), __int64, _QWORD))v14)(
                v13,
                a3,
                v14,
                v8,
                v19[0]);
    }
    else
    {
      v17 = ((__int64 (__fastcall *)(_QWORD *, unsigned __int64, __int64 (__fastcall *)(__int64), __int64, _QWORD))v12)(
              a2,
              a3,
              sub_3BA60,
              v8,
              v19[0]);
    }
LABEL_13:
    v18 = a2[8] + v17;
    *(_BYTE *)(a1 + 24) = 0;
    *(_QWORD *)a1 = v18;
    return a1;
  }
  sub_3C7B0((__int64)&v21);
  v9 = v21;
  v10 = _mm_loadu_si128(&v22);
LABEL_6:
  *(_QWORD *)a1 = v9;
  *(_BYTE *)(a1 + 24) = 1;
  *(__m128i *)(a1 + 8) = v10;
  return a1;
}
