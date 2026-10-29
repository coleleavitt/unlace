__int64 __fastcall sub_1F5F890(__int64 a1, __m128i *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rsi
  unsigned int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // edi
  __int64 v10; // rax
  int v11; // r12d
  __int64 v12; // rsi
  int v13; // edx
  int v14; // edi
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  int v19; // ecx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 result; // rax
  _QWORD *v23; // r12
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rdx
  _QWORD *v31; // rdi
  int v32; // ecx
  __m128i v33; // [rsp+0h] [rbp-38h] BYREF
  __int64 v34; // [rsp+10h] [rbp-28h]

  sub_1F58FC0((__int64 *)a1, (__int64)a2);
  v6 = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
  v7 = *(_DWORD *)(*(_QWORD *)a1 + 24LL);
  v8 = *(_QWORD *)(v6 + 8LL * v7);
  v9 = v7 + 2;
  v10 = *(_QWORD *)(v6 + 8LL * (v7 + 1));
  *(_DWORD *)(*(_QWORD *)a1 + 24LL) = v9;
  *(_BYTE *)(a1 + 24) = 1;
  *(_DWORD *)(a1 + 16) = v10;
  *(_DWORD *)(a1 + 20) = 2;
  v11 = v10 & 2;
  if ( (v10 & 1) != 0 )
  {
    sub_1F57350(
      (__int64 *)a1,
      &a2[4].m128i_i32[2],
      (__int64)&a2[4].m128i_i64[1] + (((unsigned __int64)a2->m128i_i64[0] >> 16) & 0x10),
      v8);
    v32 = *(_DWORD *)(a1 + 20);
    v12 = *(unsigned int *)(a1 + 16);
    v14 = v32 + 1;
    v13 = 1 << v32;
  }
  else
  {
    v12 = (unsigned int)v10;
    v13 = 4;
    v14 = 3;
  }
  *(_DWORD *)(a1 + 20) = v14;
  a2->m128i_i8[2] = (8 * (((unsigned int)v12 & v13) != 0)) | a2->m128i_i8[2] & 0xF7;
  v15 = *(_QWORD *)a1;
  v16 = 0;
  v17 = *(unsigned int *)(*(_QWORD *)a1 + 24LL);
  if ( (unsigned int)v17 < *(_DWORD *)(*(_QWORD *)a1 + 40LL) )
  {
    v31 = *(_QWORD **)(v15 + 8);
    v12 = *(_QWORD *)(v15 + 16);
    *(_DWORD *)(v15 + 24) = v17 + 1;
    v16 = sub_1F15160(v31, v12, *(_QWORD *)(*(_QWORD *)(v15 + 32) + 8 * v17));
  }
  a2[1].m128i_i64[1] = v16;
  a2[2].m128i_i64[0] = sub_1F194E0(*(_QWORD *)a1, v12, v15, v17, v4, v5);
  a2[2].m128i_i64[1] = v18;
  v19 = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(a1 + 20) = v19 + 1;
  if ( ((1 << v19) & *(_DWORD *)(a1 + 16)) != 0 )
  {
    v20 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
    v21 = *(_QWORD *)(*(_QWORD *)(v20 + 13064) + 8LL * (unsigned int)(*(_DWORD *)(v20 + 13072))-- - 8);
    a2[1].m128i_i64[0] = v21;
    a2->m128i_i32[1] = sub_1EE7490(*(_QWORD *)a1);
    if ( !v11 )
      goto LABEL_7;
  }
  else
  {
    a2[1].m128i_i64[0] = 0;
    a2->m128i_i32[1] = sub_1EE7490(*(_QWORD *)a1);
    if ( !v11 )
      goto LABEL_7;
  }
  v23 = *(_QWORD **)(*(_QWORD *)a1 + 8LL);
  v24 = sub_1EE13A0(
          (__int64)v23,
          *(_QWORD *)(*(_QWORD *)a1 + 16LL),
          (__int64 *)(*(_QWORD *)a1 + 32LL),
          (_DWORD *)(*(_QWORD *)a1 + 24LL));
  v29 = sub_1EDB980(v23, v24, v25, v26, v27, v28);
  v30 = 16LL * ((a2->m128i_i64[0] & 0x100000) != 0) + 72;
  if ( (((unsigned __int64)a2->m128i_i64[0] >> 16) & 0x10) != 0 && a2[4].m128i_i32[2] )
    v30 += 32LL * a2[5].m128i_u32[1];
  *(__int64 *)((char *)a2->m128i_i64 + v30) = v29;
LABEL_7:
  sub_1F194A0((__int64)&v33, *(_QWORD *)a1);
  result = v34;
  a2[3] = _mm_loadu_si128(&v33);
  a2[4].m128i_i64[0] = result;
  return result;
}
