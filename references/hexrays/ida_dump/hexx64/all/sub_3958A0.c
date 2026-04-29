__int64 __fastcall sub_3958A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  unsigned __int64 v9; // r12
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 *v13; // rdx
  __int64 *v14; // r13
  __int64 *v15; // r15
  __int64 v16; // r14
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // [rsp+0h] [rbp-78h]
  __int64 v23; // [rsp+8h] [rbp-70h]
  __int64 v24; // [rsp+10h] [rbp-68h] BYREF
  __int64 v25; // [rsp+18h] [rbp-60h]
  __m128i v26; // [rsp+20h] [rbp-58h]
  __int64 v27; // [rsp+30h] [rbp-48h]
  unsigned __int64 v28; // [rsp+38h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  v6 = a1;
  if ( a1 )
  {
    sub_38C200(a1, 7);
    return 1;
  }
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(11, &v24, a3, &callui, a5, a6);
  v9 = v24;
  if ( get_func(v24) )
  {
    v12 = *(_QWORD *)(a3 + 1008);
    v13 = *(__int64 **)(v12 + 40);
    v14 = &v13[*(_QWORD *)(v12 + 48)];
    if ( v13 == v14 )
      goto LABEL_10;
    v15 = *(__int64 **)(v12 + 40);
    while ( 1 )
    {
      v16 = *v15;
      if ( *v15 )
      {
        if ( (unsigned __int8)sub_389B80(*v15, v9) )
          break;
      }
      if ( v14 == ++v15 )
        goto LABEL_10;
    }
    callui(59, *(_QWORD *)(v16 + 16), 1, &callui, v17, v18, v22, v23, v24, v25);
    sub_38B490(v16, 0);
    if ( v9 != sub_38C1A0(v16, v16 + 56, v16 + 80, v16 + 104) )
    {
LABEL_10:
      if ( a2 )
      {
        if ( *(_DWORD *)(a2 + 8) == 27 )
          v6 = *(_QWORD *)a2;
      }
      else
      {
        v6 = 0;
      }
      LODWORD(v25) = 0;
      v27 = -1;
      v24 = 0xFFFFFFFFLL;
      v26 = _mm_unpacklo_epi64((__m128i)v9, (__m128i)v9);
      sub_3948E0(v23, 0x40u, 0, v6);
    }
    return 1;
  }
  v19 = *(_QWORD *)(a3 + 1008);
  v20 = *(_QWORD *)(v19 + 48);
  if ( v20 )
  {
    v21 = *(_QWORD *)(*(_QWORD *)(v19 + 40) + 8 * v20 - 8);
    if ( v21 )
    {
      callui(59, *(_QWORD *)(v21 + 16), 1, &callui, v10, v11, v22, v23, v24, v25);
      return 1;
    }
  }
  sub_3BE840(v9);
  return 0;
}
