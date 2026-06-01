_DWORD *__fastcall sub_7E1790(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // r12
  _DWORD *result; // rax
  _DWORD *v5; // rax
  __int64 v6; // r13
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // r13
  __int64 v11; // rbp
  void *v12; // r12
  __int64 v13; // rax
  void *v14; // r15
  __int64 v15; // rbp
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  unsigned int v19; // eax
  bool v20; // zf
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // r9d
  __int64 v26; // r14
  const __m128i *v27; // r13
  _DWORD *v28; // rax
  __int64 v29; // rax
  __int64 v30; // r15
  __int64 v31; // rax
  int v32; // ecx
  int v33; // r8d
  int v34; // r9d
  __int64 v35; // r12
  unsigned int v36; // eax
  int v37; // ecx
  int v38; // r8d
  int v39; // r9d
  unsigned int v40; // eax
  __int64 v41; // rax
  int v42; // ecx
  int v43; // r8d
  int v44; // r9d
  unsigned int v45; // eax
  __int64 v46; // rsi
  __int64 v47; // rdi
  __m128i v48; // xmm0
  unsigned int v49; // [rsp+4h] [rbp-A4h] BYREF
  __int64 v50; // [rsp+8h] [rbp-A0h] BYREF
  _QWORD v51[2]; // [rsp+10h] [rbp-98h] BYREF
  __m128i v52; // [rsp+20h] [rbp-88h] BYREF
  _QWORD v53[2]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v54; // [rsp+40h] [rbp-68h]
  _BYTE v55[8]; // [rsp+48h] [rbp-60h] BYREF
  _BYTE v56[88]; // [rsp+50h] [rbp-58h] BYREF

  v2 = a1[172];
  v3 = *(_QWORD *)(v2 + 8) + 24LL;
  if ( *(_WORD *)(a2 + 4)
    || (result = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) == nullptr
    || *result
    || result[1] != 4 )
  {
    if ( (v5 = *(_DWORD **)(sub_15D1F10(a2) + 24)) != nullptr && *(_DWORD *)(v2 + 16) == *v5 && !v5[1]
      || (v6 = a1[172], (result = *(_DWORD **)(sub_15D1F10(a2) + 24)) != nullptr)
      && *(_DWORD *)(v6 + 16) == *result
      && result[1] == 1 )
    {
      if ( *(_WORD *)(a2 + 4)
        || (result = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) == nullptr
        || *(_DWORD *)(a1[172] + 16LL) != *result
        || result[1] != 37 )
      {
        sub_D56BF0(v51, a1 + 16, a2);
        v54 = v3;
        sub_181A6B0(v55);
        if ( (unsigned __int8)sub_15C5390(*(_QWORD *)(a1[172] + 8LL), a2, &v49) )
        {
          v52 = 0u;
          v10 = a1[9];
          v53[0] = 1;
          v11 = a1[173];
          v53[1] = 0;
          v12 = qword_1C7F2C0;
          if ( v49 > 0x7FFFFFFE )
            sub_182C550(qword_1C7F2C0, &v52);
          else
            v52.m128i_i32[0] = v49;
          sub_182CBA0(v12, v53);
          BYTE4(v53[0]) &= ~1u;
          LODWORD(v53[0]) = 1;
          v13 = sub_1674520(v11, &v52, 3);
          v14 = qword_1C7F2C0;
          v15 = v13;
          sub_182CBA0(qword_1C7F2C0, &v52);
          sub_182CBA0(v14, v53);
          if ( v15 )
            ++*(_DWORD *)(v15 + 8);
          v19 = sub_7E58D0((_DWORD)a1, v51[0], v15, v16, v17, v18);
          sub_7E5160(a1, v19, 0);
          if ( v15 )
          {
            v20 = (*(_DWORD *)(v15 + 8))-- == 1;
            if ( v20 )
              sub_15D7BC0(v10, v15);
          }
        }
        else if ( (unsigned __int8)sub_15C4FC0(*(_QWORD *)(a1[172] + 8LL), a2, (unsigned int)v55, v7, v8, v9) )
        {
          v26 = a1[9];
          sub_7E1020(v52.m128i_i64, (__int64)a1, a2, v23, v24, v25);
          v27 = (const __m128i *)v52.m128i_i64[0];
          if ( v52.m128i_i64[0] && !*(_DWORD *)(v52.m128i_i64[0] + 8) )
            sub_15D7BC0(v52.m128i_i64[1], v52.m128i_i64[0]);
          if ( v27->m128i_i16[2]
            || (v28 = *(_DWORD **)(v27[1].m128i_i64[0] + 24)) == nullptr
            || *(_DWORD *)(a1[172] + 16LL) != *v28
            || v28[1] != 37
            || v27[1].m128i_i32[2] != 3 )
          {
            sub_1872CE0("");
            sub_1873130(114, 233);
          }
          v48 = _mm_loadu_si128(v27 + 2);
          v53[0] = v27[3].m128i_i64[0];
          v29 = a1[173];
          v30 = a1[9];
          v52 = v48;
          v31 = sub_15E1AF0(*(_QWORD *)(v29 + 8));
          v35 = v31;
          if ( v31 )
            ++*(_DWORD *)(v31 + 8);
          v36 = sub_7E58D0((_DWORD)a1, v51[0], v31, v32, v33, v34);
          sub_7E5160(a1, v36, 0);
          v40 = sub_7E58D0((_DWORD)a1, (_DWORD)v27, a2, v37, v38, v39);
          sub_7E5160(a1, v40, 0);
          sub_7E1590(&v50, a1);
          sub_7E5290(a1, &v50);
          if ( v50 )
            sub_186B220((void *)(v50 - 8));
          if ( v35 )
          {
            v20 = (*(_DWORD *)(v35 + 8))-- == 1;
            if ( v20 )
              sub_15D7BC0(v30, v35);
          }
          v20 = v27->m128i_i32[2]-- == 1;
          if ( v20 )
            sub_15D7BC0(v26, v27);
        }
        else
        {
          v41 = sub_15D1F10(a2);
          sub_D56E90(&v52, a1 + 16, v51[0], v41);
          v45 = sub_7E58D0((_DWORD)a1, v52.m128i_i32[0], a2, v42, v43, v44);
          sub_7E5160(a1, v45, 0);
          v46 = v52.m128i_i64[0];
          if ( v52.m128i_i64[0] )
          {
            v47 = v52.m128i_i64[1];
            v20 = (*(_DWORD *)(v52.m128i_i64[0] + 8))-- == 1;
            if ( v20 )
              sub_15D7BC0(v47, v46);
          }
        }
        result = (_DWORD *)sub_182EF00(*(_QWORD *)(v54 + 728), v56);
        v21 = v51[0];
        if ( v51[0] )
        {
          v22 = v51[1];
          v20 = (*(_DWORD *)(v51[0] + 8LL))-- == 1;
          if ( v20 )
            return (_DWORD *)sub_15D7BC0(v22, v21);
        }
      }
    }
  }
  return result;
}

