__int64 __fastcall sub_213A6A0(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // r13
  _DWORD *v4; // rax
  _BOOL8 v5; // rsi
  unsigned int v6; // ebp
  _DWORD *v8; // rax
  _BOOL8 v9; // rsi
  size_t v10; // rax
  __int64 v11; // r14
  size_t v12; // rbp
  __int64 v13; // rax
  const void *v14; // rdi
  __int64 v15; // rdx
  size_t v16; // rbp
  __int64 v17; // rax
  const void *v18; // rdi
  size_t v19; // rdx
  __int64 v20; // rax
  __int64 v21; // [rsp+0h] [rbp-78h] BYREF
  __int64 v22; // [rsp+8h] [rbp-70h] BYREF
  __int64 v23; // [rsp+10h] [rbp-68h] BYREF
  __m128 v24[2]; // [rsp+18h] [rbp-60h] BYREF
  __int16 v25; // [rsp+40h] [rbp-38h]

  v2 = sub_2153C00(a1);
  v3 = sub_2124B50(v2);
  if ( (unsigned __int8)sub_2129090(a1, &v21) )
    return 1;
  v24[0].m128_u64[1] = (unsigned __int64)"expected 'within' identifier in '.cv_inline_site_id' directive";
  v4 = *(_DWORD **)(a1 + 48);
  v25 = 259;
  if ( *v4 == 2
    && ((v12 = j__strlen("within"), v13 = sub_2153C00(a1), *(_DWORD *)v13 != 2)
      ? (v14 = (const void *)sub_212C8F0(v13))
      : (const void *)(v14 = *(const void **)(v13 + 8), v15 = *(_QWORD *)(v13 + 16)),
        v12 == v15) )
  {
    v5 = 0;
    if ( v12 )
      v5 = memcmp(v14, "within", v12) != 0;
  }
  else
  {
    v5 = 1;
  }
  if ( (unsigned __int8)sub_2154470(a1, v5, &v24[0].m128_u16[4]) )
    return 1;
  sub_2132C70(a1, (__m128 *)v5);
  if ( (unsigned __int8)sub_2129090(a1, &v22) )
    return 1;
  v24[0].m128_u64[1] = (unsigned __int64)"expected 'inlined_at' identifier in '.cv_inline_site_id' directive";
  v8 = *(_DWORD **)(a1 + 48);
  v25 = 259;
  if ( *v8 == 2
    && ((v16 = j__strlen("inlined_at"), v17 = sub_2153C00(a1), *(_DWORD *)v17 != 2)
      ? (v18 = (const void *)sub_212C8F0(v17))
      : (const void *)(v18 = *(const void **)(v17 + 8), v19 = *(_QWORD *)(v17 + 16)),
        v19 == v16) )
  {
    v9 = 0;
    if ( v19 )
      v9 = memcmp(v18, "inlined_at", v19) != 0;
  }
  else
  {
    v9 = 1;
  }
  if ( (unsigned __int8)sub_2154470(a1, v9, &v24[0].m128_u16[4]) )
    return 1;
  sub_2132C70(a1, (__m128 *)v9);
  v10 = j__strlen(".cv_inline_site_id");
  if ( (unsigned __int8)sub_212C760(a1, &v23, (__int64)".cv_inline_site_id", v10) )
    return 1;
  v25 = 259;
  v24[0].m128_u64[1] = (unsigned __int64)"expected line number after 'inlined_at'";
  if ( (unsigned __int8)sub_2154400(a1, v24, &v24[0].m128_u16[4]) )
    return 1;
  if ( **(_DWORD **)(a1 + 48) == 4 )
  {
    v20 = sub_2153C00(a1);
    v11 = *(_DWORD *)(v20 + 32) <= 0x40u ? *(_QWORD *)(v20 + 24) : **(_QWORD **)(v20 + 24);
    sub_2132C70(a1, v24);
  }
  else
  {
    LODWORD(v11) = 0;
  }
  v6 = sub_21544B0(a1);
  if ( (_BYTE)v6 )
  {
    return 1;
  }
  else if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 24) + 720LL))(
               *(_QWORD *)(a1 + 24),
               (unsigned int)v21,
               (unsigned int)v22,
               (unsigned int)v23,
               v24[0].m128_u32[0],
               (unsigned int)v11,
               v3) )
  {
    v24[0].m128_u64[1] = (unsigned __int64)"function id already allocated";
    v25 = 259;
    return (unsigned int)sub_2153E90(a1, v3, &v24[0].m128_u16[4], 0, 0);
  }
  return v6;
}
