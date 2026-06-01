unsigned __int64 __fastcall sub_BAA520(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  double v14[3]; // [rsp+0h] [rbp-18h] BYREF

  v6 = *(_QWORD *)(a1 + 104);
  if ( !v6 )
  {
    sub_A79820((__int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96), a3, a4, a5, a6);
    v13 = *(_QWORD *)(a1 + 104);
    v7 = v13 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v13 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      goto LABEL_3;
    if ( !v13 )
    {
      sub_A79820((__int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96), 0, v10, v11, v12);
      if ( (*(_QWORD *)(a1 + 104) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
        v8 = 0;
        goto LABEL_4;
      }
    }
LABEL_8:
    v8 = 0;
    goto LABEL_4;
  }
  v7 = v6 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v7 )
    goto LABEL_8;
LABEL_3:
  v8 = *(_QWORD *)(v7 + 8) + 8LL * *(unsigned int *)(v7 + 16);
LABEL_4:
  *(_QWORD *)&v14[0] = v8;
  return _mm_loadh_ps(v14).m128_u64[0];
}
