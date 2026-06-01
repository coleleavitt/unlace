__int64 __fastcall sub_269D30(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  __int64 v12; // rax
  const char *v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // ebx
  __int64 v17; // r8
  __int64 v18; // r9
  __m128 v19; // xmm4
  __m128 v20; // xmm5
  _QWORD v22[2]; // [rsp+0h] [rbp-38h] BYREF
  char v23; // [rsp+10h] [rbp-28h]
  unsigned __int64 v24; // [rsp+18h] [rbp-20h]

  v24 = __readfsqword(0x28u);
  v22[0] = 0;
  v12 = sub_4AED50(a1, v22, a11, a12);
  if ( v12 >= 0
    && (unsigned __int64)v12 < *(_QWORD *)(a1 + 192)
    && (v13 = (const char *)(*(_QWORD *)(a1 + 184) + 56 * v12)) != nullptr )
  {
    v22[0] = 0;
    v22[1] = 0;
    v23 = 0;
    v16 = sub_267A80((__int64)v22, v13, 0);
    if ( (_BYTE)v16 )
      v16 = sub_268DF0((__int64)v13, (__int64)v22, 0);
    else
      sub_169700(
        (int)"Bad desktop structure\n",
        (__int64)v13,
        v14,
        v15,
        v17,
        v18,
        a2,
        a3,
        a4,
        a5,
        v19,
        v20,
        a8,
        a9,
        v22[0]);
    jvalue_t_clear(v22);
  }
  else
  {
    return 0;
  }
  return v16;
}
