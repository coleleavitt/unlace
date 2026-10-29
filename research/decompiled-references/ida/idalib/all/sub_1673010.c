void __fastcall sub_1673010(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        unsigned __int8 a9)
{
  __int64 v11; // r8
  __m128i *v12; // r13
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // r8d
  __int64 *v27; // r14
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r12
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  _QWORD *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __m128i *v41; // r12
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __m128i v46; // [rsp+0h] [rbp-58h] BYREF
  __int128 v47; // [rsp+10h] [rbp-48h]
  unsigned int v48; // [rsp+20h] [rbp-38h]

  v11 = a9;
  if ( (a9 & 1) != 0 )
  {
    v23 = (_QWORD *)sub_9C8850(a2);
    v27 = sub_1670F00(v23, v24, v24, v25, v26);
    if ( (__int64 *)sub_9C88C0(a2) != v27 )
    {
      v31 = sub_B35EA0(*(_QWORD *)(a1 + 248), a7, a8, *v27, 1, 0);
      v36 = sub_B8C3D0(a2, a7, v32, v33, v34, v35);
      sub_1672BE0((__int64)v36, (__int64)v27);
      sub_B8CC60(a2, v31, v37, v38, v39, v40);
    }
    if ( a3 )
    {
      v46 = 0;
      v47 = 0;
      v48 = v48 & 0xFF000000 | 0x101A4;
      HIBYTE(v48) &= 0xFCu;
      v41 = (__m128i *)sub_1672F50((__int64 *)(*(_QWORD *)(*(_QWORD *)a5 + 248LL) + 2352LL), 40, 3u, v28, v29, v30);
      sub_B0D9D0(v41, *(_QWORD *)(*(_QWORD *)a5 + 248LL), &v46);
      sub_B8CC60(a2, (__int64)v41, v42, v43, v44, v45);
    }
  }
  else if ( a3 )
  {
    v46 = 0;
    v47 = 0;
    v48 = v48 & 0xFF000000 | 0x101A4;
    HIBYTE(v48) &= 0xFCu;
    LOBYTE(v11) = a9 >> 1;
    v12 = (__m128i *)sub_1672F50((__int64 *)(*(_QWORD *)(*(_QWORD *)a5 + 248LL) + 2352LL), 40, 3u, a4, v11, a6);
    sub_B0D9D0(v12, *(_QWORD *)(*(_QWORD *)a5 + 248LL), &v46);
    v13 = sub_B35EA0(*(_QWORD *)(a1 + 248), a7, a8, (__int64)v12, (a9 & 2) != 0, 0);
    sub_B8CC60(a2, v13, v14, v15, v16, v17);
  }
  else
  {
    v18 = sub_B35E00(*(_QWORD *)(a1 + 248), a7, a8, 155, (a9 & 2) != 0, 0);
    sub_B8CC60(a2, v18, v19, v20, v21, v22);
  }
}
