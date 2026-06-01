char __fastcall sub_1E8BFD0(_QWORD *a1, __int64 a2, __m128 a3, __m128 a4, __int64 a5, __int64 a6, __int64 a7)
{
  char result; // al
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbp
  __int64 *v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  _QWORD *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rbp
  char v33; // dl
  unsigned __int64 v34; // r12
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  int v38; // [rsp+4h] [rbp-20h]

  if ( (a2 & 1) != 0 )
    return 0;
  v8 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  if ( *(_DWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 1 | *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 4 | a2 & 4 )
    return 0;
  v9 = *(_QWORD *)v8;
  v10 = *(_QWORD *)(*(_QWORD *)v8 + 8LL);
  if ( *(_BYTE *)(*(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 6 )
    return 0;
  v11 = v10 & 7;
  v12 = v11 | (*(__int64 *)(*(_QWORD *)v8 + 8LL) >> 3) & 1;
  v13 = a1[31];
  if ( v12 )
    v9 = sub_F64F00(a2, a2, v11, v12, a7);
  v14 = (__int64 *)(sub_A71450(v13, v9 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( sub_F62670(*v14, nullptr, v15, v16, v17, v18) )
    return 0;
  result = sub_F61140(*v14, 0, v19, v20, v21, v22);
  if ( result )
    return result;
  v27 = sub_F63270(*v14, 0, v23, v24, v25, v26);
  v32 = (__int64)v27;
  if ( !v27 )
    return 0;
  v38 = sub_A85680(a1[31], (__int64)v27, v28, v29, v30, v31) >> 32;
  if ( v33 )
    return v38 != 0;
  v34 = sub_1E8B930(a1, v32, a3, a4);
  sub_AB4B90(a1[31], v32, v34, v35, v36, v37);
  return HIDWORD(v34) != 0;
}
