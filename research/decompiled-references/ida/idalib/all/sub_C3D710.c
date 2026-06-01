__int64 __fastcall sub_C3D710(__int64 a1, __int64 *a2, __int64 a3, int a4, char a5)
{
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // r15d
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r13
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // eax
  __int64 v18; // [rsp+8h] [rbp-90h] BYREF
  __m128 v19; // [rsp+10h] [rbp-88h] BYREF
  unsigned int v20; // [rsp+20h] [rbp-78h] BYREF
  char v21; // [rsp+24h] [rbp-74h]
  __int64 v22[14]; // [rsp+28h] [rbp-70h] BYREF

  v10 = sub_F58100(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL));
  if ( !(_BYTE)v10 )
    return v10;
  v18 = a3;
  v19 = _mm_loadh_ps((const double *)&v18);
  v12 = sub_224AF30("EvaluateAsFloat", 15, sub_C0F850, &v19, v8, v9);
  v13 = a3;
  v14 = v12;
  v19.m128_u64[1] = 0;
  v19.m128_i16[0] = 0;
  v20 = 0;
  v21 &= ~1u;
  v10 = sub_C3D370(a1, (__int64)&v19, v13, a5, v15, v16);
  v17 = v20;
  if ( !(_BYTE)v10 )
  {
LABEL_7:
    if ( v17 <= 1 )
      goto LABEL_8;
    goto LABEL_14;
  }
  if ( v20 != 3 )
  {
    v10 = 0;
    goto LABEL_7;
  }
  if ( a4 > 1 || !v19.m128_i8[0] && (a4 == 1 || !v19.m128_i8[1]) )
  {
    sub_C17220(a2, v22);
    v17 = v20;
    goto LABEL_7;
  }
  v10 = 0;
LABEL_14:
  sub_A4F8E0((int *)&v20);
LABEL_8:
  if ( v14 )
    sub_224D6D0(v14);
  return v10;
}
