__int64 __fastcall sub_1472C0(_QWORD *a1, unsigned __int64 **a2)
{
  __int64 v2; // rbp
  __int64 v4; // rdx
  __int64 v5; // rcx
  __m128 v6; // xmm1
  __int64 v7; // rdx
  __m128i v8; // xmm0
  __m128i *v9; // rdi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // [rsp+0h] [rbp-88h] BYREF
  unsigned __int64 *v13; // [rsp+8h] [rbp-80h] BYREF
  __int64 v14; // [rsp+10h] [rbp-78h] BYREF
  __int128 v15; // [rsp+18h] [rbp-70h]
  _OWORD v16[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v17; // [rsp+50h] [rbp-38h]
  __int64 v18; // [rsp+58h] [rbp-30h]
  int v19; // [rsp+60h] [rbp-28h]
  char v20; // [rsp+64h] [rbp-24h]
  unsigned __int64 v21; // [rsp+68h] [rbp-20h]

  v21 = __readfsqword(0x28u);
  if ( !*a2 || *((char *)*a2 + 17) < 0 || !(unsigned __int8)sub_329DA0(a1, 0) )
    return 0;
  v12 = **a2;
  sub_2B61B0(a1, v12, 0);
  v15 = 0;
  v14 = 0;
  if ( netnode_qgetblob() <= 0 )
    goto LABEL_11;
  v2 = j__qalloc_or_throw(1512, (__int64)&v14, v4, v5);
  sub_336F00(v2, a1);
  v6 = _mm_loadh_ps((const double *)(v2 + 1504));
  v17 = -1;
  v20 = 0;
  v7 = v12;
  v16[1] = v6;
  v8 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v14, (__m128i)(unsigned __int64)(v14 + v15));
  v19 = 0;
  a1[51] = v12;
  v18 = 3;
  v16[0] = v8;
  if ( !(unsigned __int8)sub_8C080(v2, (__int64)v16, v7)
    || (unsigned __int8)sub_372DC0(v2) && (*(_BYTE *)(v2 + 5) & 4) == 0 )
  {
    if ( v2 )
    {
      sub_84290(v2);
      j__qfree(v2);
    }
    netnode_delblob();
    v9 = (__m128i *)a1[99];
    v13 = &v12;
    v10 = sub_146480(v9 + 1, &v12, &v13);
    *(_DWORD *)(v10 + 32) |= 1u;
    sub_6D0A0((__int64)"%a: deleted stale microcode from idb\n", *(double *)v8.m128i_i64);
LABEL_11:
    v2 = 0;
    goto LABEL_12;
  }
  v11 = v12;
  a1[168] = v2;
  a1[51] = v11;
  sub_6D0A0((__int64)"%a: restored microcode from idb\n", *(double *)v8.m128i_i64);
  sub_1AED00(v2);
  sub_66FA0(v2, 0, (__int64)"restored mba");
LABEL_12:
  if ( v14 )
  {
    *(_QWORD *)&v15 = 0;
    qfree(v14);
  }
  return v2;
}
