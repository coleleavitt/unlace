__int64 __fastcall sub_A390(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v7; // rax
  _BYTE *v8; // r13
  unsigned __int64 v10; // r14
  __int64 v11; // rax
  const char *v12; // rax
  const char *v13; // rbx
  size_t v14; // rax
  _BYTE *v15; // [rsp+8h] [rbp-70h] BYREF
  _BYTE v16[56]; // [rsp+10h] [rbp-68h] BYREF
  unsigned __int64 v17; // [rsp+48h] [rbp-30h]

  v4 = *(_QWORD *)(a1 + 104);
  v17 = __readfsqword(0x28u);
  v6 = netnode_lower_bound(v4, a3, 114);
  if ( v6 == -1 )
    return 0;
  v7 = netnode_supval(*(_QWORD *)(a1 + 104), v6, v16, 56, 114);
  if ( v7 <= 0 )
    return 0;
  v15 = v16;
  v8 = &v16[v7];
  if ( (unsigned int)unpack_dd(&v15, &v16[v7]) != 1 )
    return 0;
  v10 = unpack_dq(&v15, v8);
  v11 = unpack_dq(&v15, v8);
  if ( a3 < v10 || a3 >= v10 + v11 )
    return 0;
  *(_QWORD *)a2 = v10;
  *(_QWORD *)(a2 + 8) = v11;
  *(_DWORD *)(a2 + 16) = unpack_dd(&v15, v8);
  *(_DWORD *)(a2 + 20) = unpack_dd(&v15, v8);
  *(_DWORD *)(a2 + 24) = unpack_dd(&v15, v8);
  v12 = (const char *)unpack_ds(&v15, v8, 1);
  v13 = v12;
  if ( v12 )
  {
    v14 = strlen(v12);
    *(_QWORD *)(a2 + 32) = v13;
    *(__m128i *)(a2 + 40) = _mm_unpacklo_epi64((__m128i)(v14 + 1), (__m128i)(v14 + 1));
  }
  return 1;
}
