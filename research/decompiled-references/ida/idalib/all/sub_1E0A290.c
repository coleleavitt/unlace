__int64 __fastcall sub_1E0A290(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 result; // rax
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 *v16; // r14
  __int64 *v17; // rbx
  unsigned __int64 v18; // rdx
  char v19; // cl
  __int64 v20; // r8
  __int64 v21; // r9
  __m128i *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r12
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r12
  unsigned __int8 v33; // al
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36[11]; // [rsp+8h] [rbp-58h] BYREF

  result = (*(_BYTE *)(a4 + 28) & 0x7Fu) - 18;
  if ( (unsigned int)result <= 0x3F && (*(_BYTE *)(a3 + 29) & 1) != 0 )
  {
    v11 = sub_B8C3D0(a3, a2, a3, a4, a5, a6);
    v15 = *((unsigned int *)v11 + 2);
    result = *v11;
    v16 = (__int64 *)(result + 8 * v15);
    if ( (*(_BYTE *)(a3 + 29) & 1) != 0 )
    {
      result = (__int64)sub_B8C3D0(a3, a2, v15, v12, v13, v14);
      v17 = *(__int64 **)result;
    }
    else
    {
      v17 = nullptr;
    }
    for ( ; v16 != v17; ++v17 )
    {
      v32 = *v17;
      result = sub_1DFFB00(a4, *v17, v15, v12, v13, v14);
      if ( (_BYTE)result )
      {
        v33 = sub_B72F20(a4);
        v35 = *(_QWORD *)(a4 + 16);
        if ( (v35 & 4) != 0 )
          v18 = *(_QWORD *)(v35 & 0xFFFFFFFFFFFFFFF8LL);
        else
          v18 = v35 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v18 )
        {
          v19 = *(_BYTE *)(v18 + 8);
          v18 -= 64LL;
          if ( (v19 & 0x7Fu) - 59 >= 3 )
            v18 = 0;
        }
        sub_19A2CD0((__int64)v36, a1, v18, 0, v33, v34);
        v22 = sub_1E0A080(v32, *(__int64 **)(a1 + 248), a1, a2, a7, a8, v20, v21);
        v27 = (__int64)v22;
        if ( v22 )
        {
          if ( (unsigned __int8)sub_1DFFB00(a4, (__int64)v22, v23, v24, v25, v26) )
            sub_B8CC60(a4, v27, v28, v29, v30, v31);
        }
        result = sub_19A2DA0(v36);
      }
    }
  }
  return result;
}
