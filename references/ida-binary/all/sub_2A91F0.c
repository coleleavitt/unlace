__int64 __fastcall sub_2A91F0(
        __int64 a1,
        __int64 a2,
        int a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v15; // rcx
  __int64 v17; // rdx
  __m128 v18; // xmm0
  const char *v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned int node_info; // ebp
  __int64 v23; // r8
  __int64 v24; // r9
  __m128 v25; // xmm4
  __m128 v26; // xmm5
  __int64 v28; // [rsp+0h] [rbp-58h] BYREF
  __int64 v29; // [rsp+8h] [rbp-50h]
  __int64 v30; // [rsp+10h] [rbp-48h]
  __int64 v31; // [rsp+18h] [rbp-40h]
  __int64 v32; // [rsp+20h] [rbp-38h] BYREF
  __int128 v33; // [rsp+28h] [rbp-30h]
  unsigned __int64 v34; // [rsp+38h] [rbp-20h]

  v15 = *(_QWORD *)(a1 + 440);
  v34 = __readfsqword(0x28u);
  if ( v15 )
  {
    v17 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) + 80LL) + 4LL * a3) & 0x7FFFFFFF;
    if ( a3 != (_DWORD)v17 )
    {
      v18 = 0;
      v28 = 56;
      v29 = -1;
      LODWORD(v30) = 0;
      v31 = -1;
      v32 = 0;
      v33 = 0;
      v15 = *(_QWORD *)(v15 + 8);
      goto LABEL_4;
    }
    return 0;
  }
  v17 = dword_40[a3] & 0x7FFFFFFF;
  if ( a3 == (_DWORD)v17 )
    return 0;
  v18 = 0;
  v28 = 56;
  v29 = -1;
  LODWORD(v30) = 0;
  v31 = -1;
  v32 = 0;
  v33 = 0;
LABEL_4:
  v19 = *(const char **)(v15 + 72);
  node_info = get_node_info(&v28, v19, v17, v15, a13, a14);
  if ( !(_BYTE)node_info )
  {
    if ( v32 )
    {
      *(_QWORD *)&v33 = 0;
      qfree(v32, v19, v20, v21, v23, v24, v28, v29, v30, v31);
    }
    return 0;
  }
  if ( *(_QWORD *)(a2 + 8) )
    sub_169700(
      (int)"Coherency check failed: out_hi->get_text().empty()\n",
      (__int64)v19,
      v20,
      v21,
      v23,
      v24,
      v18,
      a5,
      a6,
      a7,
      v25,
      v26,
      a10,
      a11,
      v28);
  sub_2D4060(a2, &v32);
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree(v32, (const char *)&v32);
  }
  return node_info;
}
