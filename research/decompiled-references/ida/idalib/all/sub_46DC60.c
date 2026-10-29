void __fastcall sub_46DC60(__int64 a1, unsigned __int64 *a2, int a3, int a4)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  int v6[2]; // [rsp+0h] [rbp-48h] BYREF
  int v7[2]; // [rsp+8h] [rbp-40h]
  void (__fastcall *v8[3])(int *, int *, __int64); // [rsp+10h] [rbp-38h]
  void *v9; // [rsp+28h] [rbp-20h]

  v4 = a3;
  v9 = (void *)__readfsqword(0x28u);
  *(_QWORD *)v6 = a1;
  *(_QWORD *)v7 = 0;
  *(__m128i *)v8 = _mm_unpacklo_epi64(
                     _mm_loadl_epi64((const __m128i *)&off_2B29418),
                     (__m128i)(unsigned __int64)sub_47B8C0);
  sub_46D960(a1, a2, a3, a4, (__int64)v6);
  if ( v8[0] )
    v8[0](v6, v6, 3);
  v5 = switch_dbctx(*(int *)(a1 + 4 * v4 + 16));
  sub_3C7CE0(*(_QWORD *)(v5 + 1672));
}
