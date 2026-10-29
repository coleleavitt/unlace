__int64 __fastcall sub_2170A30(
        __int64 a1,
        unsigned __int32 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned __int64 a8,
        char a9,
        unsigned __int64 a10)
{
  unsigned int v11; // eax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r13
  __int64 v30; // r12
  __int64 *v31; // rdi
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r12
  __int64 v38; // rbx
  __int64 v39; // [rsp+28h] [rbp-1C0h] BYREF
  __int64 v40; // [rsp+30h] [rbp-1B8h] BYREF
  char v41; // [rsp+38h] [rbp-1B0h]
  void *v42[2]; // [rsp+40h] [rbp-1A8h] BYREF
  __int64 v43; // [rsp+50h] [rbp-198h] BYREF
  __m128i v44[2]; // [rsp+60h] [rbp-188h] BYREF
  __int16 v45; // [rsp+80h] [rbp-168h]
  __m128i v46[2]; // [rsp+90h] [rbp-158h] BYREF
  __int16 v47; // [rsp+B0h] [rbp-138h]
  __m128i v48[2]; // [rsp+C0h] [rbp-128h] BYREF
  __int16 v49; // [rsp+E0h] [rbp-108h]
  __m128i v50[2]; // [rsp+F0h] [rbp-F8h] BYREF
  __int16 v51; // [rsp+110h] [rbp-D8h]
  __m128i v52[3]; // [rsp+120h] [rbp-C8h] BYREF
  __m128i v53[2]; // [rsp+150h] [rbp-98h] BYREF
  __int16 v54; // [rsp+170h] [rbp-78h]
  __m128i v55[2]; // [rsp+180h] [rbp-68h] BYREF
  __int16 v56; // [rsp+1A0h] [rbp-48h]

  if ( !a7 )
  {
    v51 = 265;
    v53[0].m128i_i64[0] = (__int64)"), but unable to locate the extended symbol index table";
    v50[0].m128i_i32[0] = a2;
    v49 = 259;
    v54 = 259;
    v48[0].m128i_i64[0] = (__int64)"found an extended symbol index (";
    sub_A41580(v52, v48, v50, a4, a5, a6);
    sub_A41580(v55, v52, v53, v32, v33, v34);
    v37 = sub_2195B10(v55, v52, v35, v36);
    v38 = operator new(0x40u);
    sub_2220590(v38, v55, 3, v37);
    *(_BYTE *)(a1 + 8) |= 1u;
    *(_QWORD *)a1 = v38;
    return a1;
  }
  if ( a9 )
  {
    if ( a2 < a8 )
      goto LABEL_4;
    v53[0].m128i_i64[0] = (__int64)")";
    v50[0].m128i_i64[0] = (__int64)&a8;
    v48[0].m128i_i64[0] = (__int64)"the index is greater than or equal to the number of entries (";
    v54 = 259;
    v51 = 267;
    v49 = 259;
    sub_A41580(v52, v48, v50, a4, 259, 267);
    sub_A41580(v55, v52, v53, v13, v14, v15);
    sub_2162BF0(v46, (__int64)v55, v16, v17);
    v41 |= 1u;
    v18 = v46[0].m128i_i64[0];
LABEL_9:
    v39 = v18;
    v40 = 0;
    sub_2221210(v42, &v39);
    v54 = 260;
    v51 = 259;
    v50[0].m128i_i64[0] = (__int64)": ";
    v45 = 259;
    v47 = 265;
    v44[0].m128i_i64[0] = (__int64)"unable to read an extended symbol table at index ";
    v53[0].m128i_i64[0] = (__int64)v42;
    v46[0].m128i_i32[0] = a2;
    sub_A41580(v48, v44, v46, 265, v19, v20);
    sub_A41580(v52, v48, v50, v21, v22, v23);
    sub_A41580(v55, v52, v53, v24, v25, v26);
    v29 = sub_2195B10(v55, v52, v27, v28);
    v30 = operator new(0x40u);
    sub_2220590(v30, v55, 3, v29);
    v31 = (__int64 *)v42[0];
    *(_BYTE *)(a1 + 8) |= 1u;
    *(_QWORD *)a1 = v30;
    if ( v31 != &v43 )
      operator delete(v31);
    if ( v39 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 8LL))(v39);
    goto LABEL_5;
  }
  if ( a10 < a7 + 4 * (unsigned __int64)a2 + 4 )
  {
    v55[0].m128i_i64[0] = (__int64)"can't read past the end of the file";
    v56 = 259;
    sub_2162BF0(v53, (__int64)v55, a2, a4);
    v41 |= 1u;
    v18 = v53[0].m128i_i64[0];
    goto LABEL_9;
  }
LABEL_4:
  v41 &= ~1u;
  v11 = *(_DWORD *)(a7 + 4LL * a2);
  *(_BYTE *)(a1 + 8) &= ~1u;
  LODWORD(v40) = v11;
  *(_DWORD *)a1 = _byteswap_ulong(v11);
LABEL_5:
  sub_2170500(&v40);
  return a1;
}
