__int64 __fastcall sub_16BE80(const __m128i *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 v14; // rcx
  __int64 v15; // r13
  int v16; // r8d
  unsigned __int8 v17; // r9
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // r13
  __int32 v22; // eax
  unsigned __int8 v23; // r9
  __int64 v24; // [rsp-8h] [rbp-80h]
  unsigned __int8 v25; // [rsp+8h] [rbp-70h]
  unsigned __int8 v26; // [rsp+8h] [rbp-70h]
  int v27; // [rsp+10h] [rbp-68h]
  __int64 v28; // [rsp+18h] [rbp-60h]
  unsigned __int8 v29; // [rsp+27h] [rbp-51h]
  _QWORD v30[9]; // [rsp+30h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a3 + 48);
  v30[1] = __readfsqword(0x28u);
  v6 = sub_1229A0(v4);
  if ( !v6 )
    return 0;
  v7 = v6;
  if ( *(_DWORD *)v6 != 12 )
    return 0;
  v8 = *(_QWORD *)(v6 + 8);
  if ( v8 )
  {
    v9 = v6 + 64;
    while ( *(_DWORD *)v8 != 55 )
    {
      if ( (unsigned int)(*(_DWORD *)v8 - 29) > 0xC
        || !sub_125B60((unsigned __int8 *)(v8 + 32), v9, 0)
        || !(unsigned __int8)sub_11FD80((char *)(v8 + 48), v30, 0)
        || v30[0] )
      {
        return 0;
      }
      v8 = *(_QWORD *)(v8 + 8);
      if ( !v8 )
        break;
    }
  }
  v12 = sub_11C8A0(v7, v30);
  if ( v12
    && (v13 = *(_QWORD *)(a1[30].m128i_i64[0] + 112),
        (unsigned __int8)sub_12EA80(v13, a1, a1[3].m128i_i64[1], v7 + 32, a1[3].m128i_i64[1], a2 + 32, 0))
    && (v29 = sub_12EA80(v13, a1, a1[3].m128i_i64[1], v7 + 64, a1[3].m128i_i64[1], a2 + 32, 1)) != 0 )
  {
    v28 = *(_QWORD *)(a2 + 24);
    v15 = j__qalloc_or_throw(80, (__int64)a1, v24, v14);
    *(_QWORD *)(v15 + 32) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v15 + 40) = 0;
    *(_QWORD *)(v15 + 48) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v15 + 56) = 0;
    *(_QWORD *)(v15 + 64) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v15 + 72) = 0;
    sub_330970(v15, v28);
    *(_DWORD *)v15 = 20;
    sub_11CA10((char *)(v15 + 48), (char *)v12);
    sub_125180(v15 + 32, (unsigned __int8 *)(v7 + 32));
    sub_1207E0((char *)(v15 + 32), v13, 29, v28, 1);
    sub_1207E0((char *)(v15 + 32), v13, 5, v28, 1);
    v16 = *(_DWORD *)(v7 + 68);
    v17 = v29;
    if ( v16 > 1 )
    {
      v27 = *(_DWORD *)(v7 + 68);
      sub_1207E0((char *)(v15 + 32), v13, 8, v28, v16);
      v17 = v29;
      v16 = v27;
    }
    *(_DWORD *)(v15 + 68) = v16;
    *(_BYTE *)v12 = 4;
    *(_QWORD *)(v12 + 8) = v15;
    *(_DWORD *)(v12 + 4) = v16;
    v18 = a1[3].m128i_i64[1];
    v19 = a1[4].m128i_i64[0];
    v20 = *(unsigned int *)(v18 + 72);
    if ( (unsigned int)v20 >= *(_DWORD *)(v19 + 64) )
      sub_167AF0(v18);
    v25 = v17;
    v21 = *(_QWORD *)(*(_QWORD *)(v19 + 528) + 8 * v20);
    sub_11D5A0(v18);
    v22 = a1[1].m128i_i32[2];
    v23 = v25;
    BYTE1(v22) &= ~2u;
    LOBYTE(v22) = v22 | 0x80;
    a1[1].m128i_i32[2] = v22;
    if ( *(_DWORD *)(a3 + 72) != a1[4].m128i_i32[2] + 1 )
    {
      sub_11D890(a1[3].m128i_i64[1], v7);
      v23 = v25;
    }
    v26 = v23;
    sub_112550((__int64)a1, a3, v21);
    sub_A2520((__int64)a1, (__int64)"FLATTEN_JNS");
    return v26;
  }
  else
  {
    return 0;
  }
}
