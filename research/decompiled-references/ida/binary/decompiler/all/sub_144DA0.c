__int64 __fastcall sub_144DA0(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rbx
  __m128 v3; // xmm1
  __int64 v4; // rdx
  __m128i v5; // xmm0
  __m128i *v6; // rdi
  unsigned __int64 v7; // rax
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // [rsp+0h] [rbp-88h] BYREF
  unsigned __int64 *v11; // [rsp+8h] [rbp-80h] BYREF
  unsigned __int64 v12; // [rsp+10h] [rbp-78h]
  __int128 v13; // [rsp+18h] [rbp-70h]
  _OWORD v14[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v15; // [rsp+50h] [rbp-38h]
  __int64 v16; // [rsp+58h] [rbp-30h]
  int v17; // [rsp+60h] [rbp-28h]
  char v18; // [rsp+64h] [rbp-24h]
  unsigned __int64 v19; // [rsp+68h] [rbp-20h]

  v19 = __readfsqword(0x28u);
  v2 = *a2;
  if ( !*a2 )
    return v2;
  if ( *(char *)(v2 + 17) < 0 )
    return 0;
  v10 = *(_QWORD *)v2;
  sub_2B30D0(a1, v10, 0);
  v13 = 0;
  v12 = 0;
  if ( netnode_qgetblob() <= 0 )
    goto LABEL_8;
  v2 = j__qalloc_or_throw();
  sub_333A80(v2, a1);
  v3 = _mm_loadh_ps((const double *)(v2 + 1504));
  v15 = -1;
  v18 = 0;
  v4 = v10;
  v14[1] = v3;
  v5 = _mm_unpacklo_epi64((__m128i)v12, (__m128i)(v12 + (unsigned __int64)v13));
  v17 = 0;
  a1[51] = v10;
  v16 = 3;
  v14[0] = v5;
  if ( !(unsigned __int8)sub_8B2E0(v2, (__int64)v14, v4)
    || (unsigned __int8)sub_36F480(v2) && (*(_BYTE *)(v2 + 5) & 4) == 0 )
  {
    if ( v2 )
    {
      sub_83510(v2);
      j__qfree();
    }
    netnode_delblob();
    v6 = (__m128i *)a1[98];
    v11 = &v10;
    v7 = sub_143F60(v6 + 1, &v10, &v11);
    *(_DWORD *)(v7 + 32) |= 1u;
    sub_6C720((__int64)"%a: deleted stale microcode from idb\n", *(double *)v5.m128i_i64);
LABEL_8:
    v2 = 0;
    goto LABEL_9;
  }
  v9 = v10;
  a1[166] = v2;
  a1[51] = v9;
  sub_6C720((__int64)"%a: restored microcode from idb\n", *(double *)v5.m128i_i64);
  sub_1AC480(v2);
  sub_666A0(v2, 0, (__int64)"restored mba");
LABEL_9:
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree();
  }
  return v2;
}
