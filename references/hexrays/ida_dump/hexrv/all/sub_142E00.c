__int64 __fastcall sub_142E00(_QWORD *a1, unsigned __int64 **a2)
{
  __int64 v2; // rbp
  __int64 v4; // r12
  __m128 v5; // xmm1
  __int64 v6; // rdx
  __m128i v7; // xmm0
  __m128i *v8; // rdi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // [rsp+0h] [rbp-88h] BYREF
  unsigned __int64 *v12; // [rsp+8h] [rbp-80h] BYREF
  unsigned __int64 v13; // [rsp+10h] [rbp-78h] BYREF
  __int128 v14; // [rsp+18h] [rbp-70h]
  _OWORD v15[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v16; // [rsp+50h] [rbp-38h]
  __int64 v17; // [rsp+58h] [rbp-30h]
  int v18; // [rsp+60h] [rbp-28h]
  char v19; // [rsp+64h] [rbp-24h]
  unsigned __int64 v20; // [rsp+68h] [rbp-20h]

  v20 = __readfsqword(0x28u);
  if ( !*a2 || *((char *)*a2 + 17) < 0 || !(unsigned __int8)sub_324C10(a1, 0) )
    return 0;
  v11 = **a2;
  v4 = sub_2B15B0(a1, v11, 0);
  v14 = 0;
  v13 = 0;
  if ( netnode_qgetblob(v4, &v13, 1, 0, 97) <= 0 )
    goto LABEL_11;
  v2 = j__qalloc_or_throw(1512);
  sub_331960(v2, a1);
  v5 = _mm_loadh_ps((const double *)(v2 + 1504));
  v16 = -1;
  v19 = 0;
  v6 = v11;
  v15[1] = v5;
  v7 = _mm_unpacklo_epi64((__m128i)v13, (__m128i)(v13 + (unsigned __int64)v14));
  v18 = 0;
  a1[51] = v11;
  v17 = 3;
  v15[0] = v7;
  if ( !(unsigned __int8)sub_87BC0(v2, (__int64)v15, v6)
    || (unsigned __int8)sub_36DB40(v2) && (*(_BYTE *)(v2 + 5) & 4) == 0 )
  {
    if ( v2 )
    {
      sub_7FDD0(v2);
      j__qfree(v2);
    }
    netnode_delblob(v4, 0, 97);
    v8 = (__m128i *)a1[99];
    v12 = &v11;
    v9 = sub_141FC0(v8 + 1, &v11, &v12);
    *(_DWORD *)(v9 + 32) |= 1u;
    sub_68D20((__int64)"%a: deleted stale microcode from idb\n", *(double *)v7.m128i_i64);
LABEL_11:
    v2 = 0;
    goto LABEL_12;
  }
  v10 = v11;
  a1[168] = v2;
  a1[51] = v10;
  sub_68D20((__int64)"%a: restored microcode from idb\n", *(double *)v7.m128i_i64);
  sub_1AA700(v2);
  sub_62C20(v2, 0, (__int64)"restored mba");
LABEL_12:
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree(v13);
  }
  return v2;
}
