unsigned __int64 __fastcall sub_1B27D0(unsigned __int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 v5; // r12
  unsigned __int64 v6; // r15
  __int64 v7; // r8
  __int64 v8; // rsi
  __int64 v10; // rax
  __int64 v11; // [rsp+8h] [rbp-60h]
  __m128 v12; // [rsp+10h] [rbp-58h] BYREF
  __int64 v13; // [rsp+20h] [rbp-48h]
  unsigned __int64 v14; // [rsp+28h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  v13 = 0;
  v12 = _mm_loadh_ps((const double *)(get_module_data() + 1344));
  sub_1AE7F0(a2, (__int64)&v12, a1 + 24, (__int64 *)(a1 + 32));
  v5 = a2[1];
  if ( !v5 )
  {
    v8 = *a2;
    v7 = 1;
    v6 = 2;
    if ( (unsigned __int64)a2[2] >= 2 )
      goto LABEL_3;
LABEL_5:
    v11 = v7;
    v10 = qvector_reserve();
    v7 = v11;
    *a2 = v10;
    v8 = v10;
    goto LABEL_3;
  }
  v6 = v5 + 1;
  v7 = a2[1];
  v8 = *a2;
  --v5;
  if ( a2[2] < v6 )
    goto LABEL_5;
LABEL_3:
  a2[1] = v6;
  *(_BYTE *)(v8 + v5) = 32;
  *(_BYTE *)(*a2 + v7) = 0;
  sub_1B0D60(a1, (char *)a2, (__int64)&v12, a3);
  return v14 - __readfsqword(0x28u);
}
