__int64 __fastcall sub_205EDD0(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 **a5)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 **v16; // rax
  __int64 *v17; // rdx
  __m128 v18; // xmm0
  __int64 v19; // rbx
  double v20[2]; // [rsp+8h] [rbp-120h] BYREF
  __int64 v21; // [rsp+18h] [rbp-110h]
  __m128 v22; // [rsp+20h] [rbp-108h] BYREF
  __int16 v23; // [rsp+30h] [rbp-F8h] BYREF
  __m128 *v24; // [rsp+38h] [rbp-F0h]
  __int64 v25; // [rsp+40h] [rbp-E8h]
  _DWORD *v26; // [rsp+48h] [rbp-E0h]
  __int64 v27; // [rsp+50h] [rbp-D8h]
  __int64 v28; // [rsp+58h] [rbp-D0h]
  __int64 v29; // [rsp+60h] [rbp-C8h] BYREF
  char v30; // [rsp+80h] [rbp-A8h]
  _BYTE v31[48]; // [rsp+90h] [rbp-98h] BYREF
  _BYTE v32[104]; // [rsp+C0h] [rbp-68h] BYREF

  v10 = sub_204E390(a1, a2, a3, a4);
  if ( !v10 )
  {
    v14 = *(_QWORD *)(a1 + 8);
    LODWORD(v21) = a4;
    v15 = *(_QWORD *)(v14 + 24);
    BYTE4(v21) = *(_BYTE *)(v14 + 8) == 18;
    v16 = (__int64 **)sub_20C5270(v15, v21, v8, v9, v11, v12);
    if ( v16 != a5 )
    {
      v23 = 63;
      *(_QWORD *)&v20[0] = a2;
      v24 = &v22;
      v17 = *v16;
      v27 = a4;
      v18 = _mm_loadh_ps(v20);
      v19 = *v17;
      *(_QWORD *)&v20[0] = v16;
      v22 = v18;
      v25 = 2;
      v26 = a3;
      v28 = 0;
      v30 = 0;
      sub_2051AE0((__int64)v31, (__int64)&v23);
      v10 = sub_205DE40(v19 + 1704, *(__int64 *)&v20[0], (__int64)v31);
      if ( v32[32] )
        sub_200ED00((__int64)v32);
      if ( v30 )
        sub_200ED00((__int64)&v29);
    }
  }
  return v10;
}
