void __fastcall sub_1A90D50(__int64 *a1, __int64 a2, const __m128i *a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rdi
  char v10; // al
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __m128i *v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  unsigned int v22; // r13d
  unsigned __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // r13
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __m128i *v30; // rbp
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  __int64 *v36; // rax
  __int64 v37; // r13
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __m128i *v42; // rbp
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 *v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  int v52; // [rsp+4h] [rbp-34h] BYREF
  __int64 v53[6]; // [rsp+8h] [rbp-30h] BYREF

  switch ( (_DWORD)a4 )
  {
    case 1:
      v7 = a3[1].m128i_i64[1];
      v52 = 1;
      v53[0] = v7;
      v8 = *(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL;
      v9 = *(_QWORD *)v8;
      if ( (*(_BYTE *)(*(_QWORD *)v8 + 17LL) & 4) != 0
        || (v10 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL), v10 == 42)
        || v10 == 34
        || sub_F6AC10(v9, a2, (__int64)a3, a4, a5) )
      {
        v11 = sub_168B6C0((__int64)a1);
        v12 = sub_168B6C0((__int64)a1);
        v16 = (__m128i *)sub_1A88520((__int64 *)(v12 + 2352), 40, 3u, v13, v14, v15);
        sub_B0D520(v16, v11, a3);
        sub_B8CC60(a2, (__int64)v16, v17, v18, v19, v20);
      }
      else
      {
        sub_1A90BE0(a1, a2, 0x1BF5u, v53, (__int64)"cf_consumed", &v52);
      }
      break;
    case 2:
      v35 = a3[1].m128i_i64[1];
      v52 = 1;
      v53[0] = v35;
      v36 = (__int64 *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(*v36 + 17) & 4) != 0
        || (v47 = (__int64 *)(sub_F68450(*v36, a2, (__int64)a3, a4, a5) & 0xFFFFFFFFFFFFFFF0LL)) != nullptr
        && sub_F63270(*v47, a2, v48, v49, v50, v51) )
      {
        v37 = sub_168B6C0((__int64)a1);
        v38 = sub_168B6C0((__int64)a1);
        v42 = (__m128i *)sub_1A88520((__int64 *)(v38 + 2352), 40, 3u, v39, v40, v41);
        sub_B15A10(v42, v37, a3);
        sub_B8CC60(a2, (__int64)v42, v43, v44, v45, v46);
      }
      else
      {
        sub_1A90BE0(a1, a2, 0x1BF5u, v53, (__int64)"os_consumed", &v52);
      }
      break;
    case 0:
      v21 = a3[1].m128i_i64[1];
      v52 = 0;
      v53[0] = v21;
      if ( (_BYTE)a5 && (*(_BYTE *)(sub_168B6E0((__int64)a1) + 107) & 4) != 0 )
        v22 = 4331;
      else
        v22 = 7157;
      v23 = *(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL;
      v24 = *(_QWORD *)v23;
      if ( (*(_BYTE *)(*(_QWORD *)v23 + 17LL) & 4) != 0
        || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v24 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 34
        || sub_F6AC10(v24, a2, (__int64)a3, a4, a5) )
      {
        v25 = sub_168B6C0((__int64)a1);
        v26 = sub_168B6C0((__int64)a1);
        v30 = (__m128i *)sub_1A88520((__int64 *)(v26 + 2352), 40, 3u, v27, v28, v29);
        sub_B14AC0(v30, v25, a3);
        sub_B8CC60(a2, (__int64)v30, v31, v32, v33, v34);
      }
      else
      {
        sub_1A90BE0(a1, a2, v22, v53, (__int64)"ns_consumed", &v52);
      }
      break;
  }
}
